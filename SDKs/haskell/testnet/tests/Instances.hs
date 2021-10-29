{-# OPTIONS_GHC -fno-warn-unused-imports -fno-warn-unused-matches #-}

module Instances where

import QuantOverledger.Model
import QuantOverledger.Core

import qualified Data.Aeson as A
import qualified Data.ByteString.Lazy as BL
import qualified Data.HashMap.Strict as HM
import qualified Data.Set as Set
import qualified Data.Text as T
import qualified Data.Time as TI
import qualified Data.Vector as V

import Control.Monad
import Data.Char (isSpace)
import Data.List (sort)
import Test.QuickCheck

import ApproxEq

instance Arbitrary T.Text where
  arbitrary = T.pack <$> arbitrary

instance Arbitrary TI.Day where
  arbitrary = TI.ModifiedJulianDay . (2000 +) <$> arbitrary
  shrink = (TI.ModifiedJulianDay <$>) . shrink . TI.toModifiedJulianDay

instance Arbitrary TI.UTCTime where
  arbitrary =
    TI.UTCTime <$> arbitrary <*> (TI.secondsToDiffTime <$> choose (0, 86401))

instance Arbitrary BL.ByteString where
    arbitrary = BL.pack <$> arbitrary
    shrink xs = BL.pack <$> shrink (BL.unpack xs)

instance Arbitrary ByteArray where
    arbitrary = ByteArray <$> arbitrary
    shrink (ByteArray xs) = ByteArray <$> shrink xs

instance Arbitrary Binary where
    arbitrary = Binary <$> arbitrary
    shrink (Binary xs) = Binary <$> shrink xs

instance Arbitrary DateTime where
    arbitrary = DateTime <$> arbitrary
    shrink (DateTime xs) = DateTime <$> shrink xs

instance Arbitrary Date where
    arbitrary = Date <$> arbitrary
    shrink (Date xs) = Date <$> shrink xs

-- | A naive Arbitrary instance for A.Value:
instance Arbitrary A.Value where
  arbitrary = frequency [(3, simpleTypes), (1, arrayTypes), (1, objectTypes)]
    where
      simpleTypes :: Gen A.Value
      simpleTypes =
        frequency
          [ (1, return A.Null)
          , (2, liftM A.Bool (arbitrary :: Gen Bool))
          , (2, liftM (A.Number . fromIntegral) (arbitrary :: Gen Int))
          , (2, liftM (A.String . T.pack) (arbitrary :: Gen String))
          ]
      mapF (k, v) = (T.pack k, v)
      simpleAndArrays = frequency [(1, sized sizedArray), (4, simpleTypes)]
      arrayTypes = sized sizedArray
      objectTypes = sized sizedObject
      sizedArray n = liftM (A.Array . V.fromList) $ replicateM n simpleTypes
      sizedObject n =
        liftM (A.object . map mapF) $
        replicateM n $ (,) <$> (arbitrary :: Gen String) <*> simpleAndArrays

-- | Checks if a given list has no duplicates in _O(n log n)_.
hasNoDups
  :: (Ord a)
  => [a] -> Bool
hasNoDups = go Set.empty
  where
    go _ [] = True
    go s (x:xs)
      | s' <- Set.insert x s
      , Set.size s' > Set.size s = go s' xs
      | otherwise = False

instance ApproxEq TI.Day where
  (=~) = (==)

arbitraryReduced :: Arbitrary a => Int -> Gen a
arbitraryReduced n = resize (n `div` 2) arbitrary

arbitraryReducedMaybe :: Arbitrary a => Int -> Gen (Maybe a)
arbitraryReducedMaybe 0 = elements [Nothing]
arbitraryReducedMaybe n = arbitraryReduced n

arbitraryReducedMaybeValue :: Int -> Gen (Maybe A.Value)
arbitraryReducedMaybeValue 0 = elements [Nothing]
arbitraryReducedMaybeValue n = do
  generated <- arbitraryReduced n
  if generated == Just A.Null
    then return Nothing
    else return generated

-- * Models

instance Arbitrary AddressBalanceResponse where
  arbitrary = sized genAddressBalanceResponse

genAddressBalanceResponse :: Int -> Gen AddressBalanceResponse
genAddressBalanceResponse n =
  AddressBalanceResponse
    <$> arbitraryReducedMaybe n -- addressBalanceResponseUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- addressBalanceResponseValue :: Maybe Double
    <*> arbitraryReducedMaybe n -- addressBalanceResponseAddressId :: Maybe Text
  
instance Arbitrary AddressMonitoringDetailsSchema where
  arbitrary = sized genAddressMonitoringDetailsSchema

genAddressMonitoringDetailsSchema :: Int -> Gen AddressMonitoringDetailsSchema
genAddressMonitoringDetailsSchema n =
  AddressMonitoringDetailsSchema
    <$> arbitraryReducedMaybe n -- addressMonitoringDetailsSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- addressMonitoringDetailsSchemaAddressDetails :: Maybe ResourceMonitoredAddressDetails
    <*> arbitraryReducedMaybe n -- addressMonitoringDetailsSchemaType :: Maybe Text
    <*> arbitraryReducedMaybe n -- addressMonitoringDetailsSchemaTimestamp :: Maybe DateTime
  
instance Arbitrary AddressMonitoringRequestSchema where
  arbitrary = sized genAddressMonitoringRequestSchema

genAddressMonitoringRequestSchema :: Int -> Gen AddressMonitoringRequestSchema
genAddressMonitoringRequestSchema n =
  AddressMonitoringRequestSchema
    <$> arbitraryReducedMaybe n -- addressMonitoringRequestSchemaCallBackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- addressMonitoringRequestSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- addressMonitoringRequestSchemaAddressId :: Maybe Text
  
instance Arbitrary AddressMonitoringResponseSchema where
  arbitrary = sized genAddressMonitoringResponseSchema

genAddressMonitoringResponseSchema :: Int -> Gen AddressMonitoringResponseSchema
genAddressMonitoringResponseSchema n =
  AddressMonitoringResponseSchema
    <$> arbitraryReducedMaybe n -- addressMonitoringResponseSchemaSubscriptionDetails :: Maybe ResourceMonitoringSubscriptionDetails
    <*> arbitraryReducedMaybe n -- addressMonitoringResponseSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
    <*> arbitraryReducedMaybe n -- addressMonitoringResponseSchemaSubscription :: Maybe ResourceMonitoringSubscription
  
instance Arbitrary Block where
  arbitrary = sized genBlock

genBlock :: Int -> Gen Block
genBlock n =
  Block
    <$> arbitraryReducedMaybe n -- blockBlockId :: Maybe Text
    <*> arbitraryReducedMaybe n -- blockNumber :: Maybe Int
    <*> arbitraryReducedMaybe n -- blockTransactionIds :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- blockSize :: Maybe [BlockSize]
    <*> arbitraryReducedMaybe n -- blockHashes :: Maybe [BlockHash]
    <*> arbitraryReducedMaybe n -- blockLinkedBlocks :: Maybe LinkedBlocks
    <*> arbitraryReducedMaybe n -- blockNumberOfTransactions :: Maybe Int
    <*> arbitraryReducedMaybe n -- blockMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- blockTimestamp :: Maybe Int
    <*> arbitraryReducedMaybeValue n -- blockNativeData :: Maybe A.Value
  
instance Arbitrary BlockHash where
  arbitrary = sized genBlockHash

genBlockHash :: Int -> Gen BlockHash
genBlockHash n =
  BlockHash
    <$> arbitraryReducedMaybe n -- blockHashType :: Maybe Text
    <*> arbitraryReducedMaybe n -- blockHashValue :: Maybe Text
  
instance Arbitrary BlockSize where
  arbitrary = sized genBlockSize

genBlockSize :: Int -> Gen BlockSize
genBlockSize n =
  BlockSize
    <$> arbitraryReducedMaybe n -- blockSizeType :: Maybe Text
    <*> arbitraryReducedMaybe n -- blockSizeValue :: Maybe Text
    <*> arbitraryReducedMaybe n -- blockSizeKey :: Maybe Text
  
instance Arbitrary CreateSmartContractMonitoringSchema where
  arbitrary = sized genCreateSmartContractMonitoringSchema

genCreateSmartContractMonitoringSchema :: Int -> Gen CreateSmartContractMonitoringSchema
genCreateSmartContractMonitoringSchema n =
  CreateSmartContractMonitoringSchema
    <$> arbitraryReducedMaybe n -- createSmartContractMonitoringSchemaSubscriptionDetails :: Maybe ResourceMonitoringSubscriptionDetails
    <*> arbitraryReducedMaybe n -- createSmartContractMonitoringSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
    <*> arbitraryReducedMaybe n -- createSmartContractMonitoringSchemaSubscription :: Maybe ResourceMonitoringSubscription
  
instance Arbitrary CreateSubscriptionRequestSchema where
  arbitrary = sized genCreateSubscriptionRequestSchema

genCreateSubscriptionRequestSchema :: Int -> Gen CreateSubscriptionRequestSchema
genCreateSubscriptionRequestSchema n =
  CreateSubscriptionRequestSchema
    <$> arbitraryReducedMaybe n -- createSubscriptionRequestSchemaIds :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- createSubscriptionRequestSchemaCallbackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- createSubscriptionRequestSchemaType :: Maybe Text
  
instance Arbitrary CreateSubscriptionResponseSchema where
  arbitrary = sized genCreateSubscriptionResponseSchema

genCreateSubscriptionResponseSchema :: Int -> Gen CreateSubscriptionResponseSchema
genCreateSubscriptionResponseSchema n =
  CreateSubscriptionResponseSchema
    <$> arbitraryReducedMaybe n -- createSubscriptionResponseSchemaScubscriptionDetails :: Maybe SubscriptionDetailsSchema
    <*> arbitraryReducedMaybe n -- createSubscriptionResponseSchemaSubscriptionId :: Maybe Text
  
instance Arbitrary DeleteResourceMonitoringAddressSchema where
  arbitrary = sized genDeleteResourceMonitoringAddressSchema

genDeleteResourceMonitoringAddressSchema :: Int -> Gen DeleteResourceMonitoringAddressSchema
genDeleteResourceMonitoringAddressSchema n =
  DeleteResourceMonitoringAddressSchema
    <$> arbitraryReducedMaybe n -- deleteResourceMonitoringAddressSchemaAddressMonitoringDetails :: Maybe ResourceMonitoringAddressDetails
    <*> arbitraryReducedMaybe n -- deleteResourceMonitoringAddressSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
  
instance Arbitrary Destination where
  arbitrary = sized genDestination

genDestination :: Int -> Gen Destination
genDestination n =
  Destination
    <$> arbitraryReducedMaybe n -- destinationTransfer :: Maybe Transfer
    <*> arbitraryReducedMaybe n -- destinationSmartContract :: Maybe SmartContract
    <*> arbitraryReducedMaybe n -- destinationPayment :: Maybe Payment
    <*> arbitraryReducedMaybe n -- destinationDestinationId :: Maybe Text
  
instance Arbitrary DestinationPaymentSchema where
  arbitrary = sized genDestinationPaymentSchema

genDestinationPaymentSchema :: Int -> Gen DestinationPaymentSchema
genDestinationPaymentSchema n =
  DestinationPaymentSchema
    <$> arbitraryReducedMaybe n -- destinationPaymentSchemaPayment :: Maybe PaymentSchema
    <*> arbitraryReducedMaybe n -- destinationPaymentSchemaDestinationId :: Maybe Text
  
instance Arbitrary DestinationTransferSchema where
  arbitrary = sized genDestinationTransferSchema

genDestinationTransferSchema :: Int -> Gen DestinationTransferSchema
genDestinationTransferSchema n =
  DestinationTransferSchema
    <$> arbitraryReducedMaybe n -- destinationTransferSchemaTransfer :: Maybe TransferSchema
    <*> arbitraryReducedMaybe n -- destinationTransferSchemaDestinationId :: Maybe Text
  
instance Arbitrary Error where
  arbitrary = sized genError

genError :: Int -> Gen Error
genError n =
  Error
    <$> arbitraryReducedMaybe n -- errorCode :: Maybe Int
    <*> arbitraryReducedMaybe n -- errorService :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorTimestamp :: Maybe Integer
  
instance Arbitrary ErrorDetails where
  arbitrary = sized genErrorDetails

genErrorDetails :: Int -> Gen ErrorDetails
genErrorDetails n =
  ErrorDetails
    <$> arbitraryReducedMaybe n -- errorDetailsCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorDetailsDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorDetailsCategory :: Maybe Text
  
instance Arbitrary ErrorList where
  arbitrary = sized genErrorList

genErrorList :: Int -> Gen ErrorList
genErrorList n =
  ErrorList
    <$> arbitraryReducedMaybe n -- errorListErrors :: Maybe [Error]
    <*> arbitraryReducedMaybe n -- errorListErrorCount :: Maybe Int
  
instance Arbitrary ExecuteSearchBalanceResponse where
  arbitrary = sized genExecuteSearchBalanceResponse

genExecuteSearchBalanceResponse :: Int -> Gen ExecuteSearchBalanceResponse
genExecuteSearchBalanceResponse n =
  ExecuteSearchBalanceResponse
    <$> arbitraryReducedMaybe n -- executeSearchBalanceResponseBalances :: Maybe [AddressBalanceResponse]
    <*> arbitraryReducedMaybe n -- executeSearchBalanceResponseLocation :: Maybe Location
  
instance Arbitrary ExecuteSearchBlockResponse where
  arbitrary = sized genExecuteSearchBlockResponse

genExecuteSearchBlockResponse :: Int -> Gen ExecuteSearchBlockResponse
genExecuteSearchBlockResponse n =
  ExecuteSearchBlockResponse
    <$> arbitraryReducedMaybe n -- executeSearchBlockResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeSearchBlockResponseBlock :: Maybe Block
    <*> arbitraryReducedMaybe n -- executeSearchBlockResponseStatus :: Maybe Status
  
instance Arbitrary ExecuteSearchSequenceResponse where
  arbitrary = sized genExecuteSearchSequenceResponse

genExecuteSearchSequenceResponse :: Int -> Gen ExecuteSearchSequenceResponse
genExecuteSearchSequenceResponse n =
  ExecuteSearchSequenceResponse
    <$> arbitraryReducedMaybe n -- executeSearchSequenceResponseSequence :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchSequenceResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeSearchSequenceResponseAddressId :: Maybe Text
  
instance Arbitrary ExecuteSearchTransactionResponse where
  arbitrary = sized genExecuteSearchTransactionResponse

genExecuteSearchTransactionResponse :: Int -> Gen ExecuteSearchTransactionResponse
genExecuteSearchTransactionResponse n =
  ExecuteSearchTransactionResponse
    <$> arbitraryReducedMaybe n -- executeSearchTransactionResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeSearchTransactionResponseType :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchTransactionResponseTransaction :: Maybe Transaction
    <*> arbitraryReducedMaybe n -- executeSearchTransactionResponseTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- executeSearchTransactionResponseStatus :: Maybe Status
    <*> arbitraryReducedMaybeValue n -- executeSearchTransactionResponseExtraFields :: Maybe A.Value
  
instance Arbitrary ExecuteSearchUTXOResponseSchema where
  arbitrary = sized genExecuteSearchUTXOResponseSchema

genExecuteSearchUTXOResponseSchema :: Int -> Gen ExecuteSearchUTXOResponseSchema
genExecuteSearchUTXOResponseSchema n =
  ExecuteSearchUTXOResponseSchema
    <$> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaDestination :: Maybe [UTXODestination]
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaTimestamp :: Maybe UTXOTimestampSchema
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaStatus :: Maybe Status
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaNativeData :: Maybe UTXONativeData
  
instance Arbitrary ExecuteSmartContractReadResponseSchema where
  arbitrary = sized genExecuteSmartContractReadResponseSchema

genExecuteSmartContractReadResponseSchema :: Int -> Gen ExecuteSmartContractReadResponseSchema
genExecuteSmartContractReadResponseSchema n =
  ExecuteSmartContractReadResponseSchema
    <$> arbitraryReducedMaybe n -- executeSmartContractReadResponseSchemaSmartContract :: Maybe SmartContractReadSchema
    <*> arbitraryReducedMaybe n -- executeSmartContractReadResponseSchemaLocation :: Maybe Location
  
instance Arbitrary ExecuteTransactionRequest where
  arbitrary = sized genExecuteTransactionRequest

genExecuteTransactionRequest :: Int -> Gen ExecuteTransactionRequest
genExecuteTransactionRequest n =
  ExecuteTransactionRequest
    <$> arbitrary -- executeTransactionRequestRequestId :: Text
    <*> arbitrary -- executeTransactionRequestSigned :: Text
  
instance Arbitrary ExecuteTransactionResponse where
  arbitrary = sized genExecuteTransactionResponse

genExecuteTransactionResponse :: Int -> Gen ExecuteTransactionResponse
genExecuteTransactionResponse n =
  ExecuteTransactionResponse
    <$> arbitraryReducedMaybe n -- executeTransactionResponseUrgency :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeTransactionResponseRequestId :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeTransactionResponseOverledgerTransactionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeTransactionResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeTransactionResponseType :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeTransactionResponseTransactionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeTransactionResponseStatus :: Maybe Status
  
instance Arbitrary ExtraFields where
  arbitrary = sized genExtraFields

genExtraFields :: Int -> Gen ExtraFields
genExtraFields n =
  ExtraFields
    <$> arbitraryReducedMaybe n -- extraFieldsRequiredSignatures :: Maybe Double
  
instance Arbitrary Fee where
  arbitrary = sized genFee

genFee :: Int -> Gen Fee
genFee n =
  Fee
    <$> arbitrary -- feeAmount :: Text
    <*> arbitraryReducedMaybe n -- feeUnit :: Maybe Text
  
instance Arbitrary Function where
  arbitrary = sized genFunction

genFunction :: Int -> Gen Function
genFunction n =
  Function
    <$> arbitraryReducedMaybe n -- functionFunctionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- functionCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- functionName :: Maybe Text
    <*> arbitraryReducedMaybe n -- functionInputParameters :: Maybe [Parameter]
    <*> arbitraryReducedMaybe n -- functionOutputParameters :: Maybe [Parameter]
  
instance Arbitrary InternalServerErrorSchema where
  arbitrary = sized genInternalServerErrorSchema

genInternalServerErrorSchema :: Int -> Gen InternalServerErrorSchema
genInternalServerErrorSchema n =
  InternalServerErrorSchema
    <$> arbitraryReducedMaybe n -- internalServerErrorSchemaPath :: Maybe Text
    <*> arbitraryReducedMaybe n -- internalServerErrorSchemaError :: Maybe Text
    <*> arbitraryReducedMaybe n -- internalServerErrorSchemaMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- internalServerErrorSchemaTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- internalServerErrorSchemaStatus :: Maybe Int
  
instance Arbitrary LinkedBlocks where
  arbitrary = sized genLinkedBlocks

genLinkedBlocks :: Int -> Gen LinkedBlocks
genLinkedBlocks n =
  LinkedBlocks
    <$> arbitraryReducedMaybe n -- linkedBlocksParent :: Maybe Text
    <*> arbitraryReducedMaybe n -- linkedBlocksChild :: Maybe Text
  
instance Arbitrary ListSubscriptionResponseSchema where
  arbitrary = sized genListSubscriptionResponseSchema

genListSubscriptionResponseSchema :: Int -> Gen ListSubscriptionResponseSchema
genListSubscriptionResponseSchema n =
  ListSubscriptionResponseSchema
    <$> arbitraryReducedMaybe n -- listSubscriptionResponseSchemaSubscriptionDetails :: Maybe SubscriptionDetailsSchema
    <*> arbitraryReducedMaybe n -- listSubscriptionResponseSchemaSubscribedTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- listSubscriptionResponseSchemaLastUpdatedTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- listSubscriptionResponseSchemaCallbackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- listSubscriptionResponseSchemaSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- listSubscriptionResponseSchemaType :: Maybe Text
  
instance Arbitrary Location where
  arbitrary = sized genLocation

genLocation :: Int -> Gen Location
genLocation n =
  Location
    <$> arbitrary -- locationTechnology :: Text
    <*> arbitrary -- locationNetwork :: Text
  
instance Arbitrary MonitorSmartContractEventParam where
  arbitrary = sized genMonitorSmartContractEventParam

genMonitorSmartContractEventParam :: Int -> Gen MonitorSmartContractEventParam
genMonitorSmartContractEventParam n =
  MonitorSmartContractEventParam
    <$> arbitraryReducedMaybe n -- monitorSmartContractEventParamSelectedIntegerLength :: Maybe Text
    <*> arbitraryReducedMaybe n -- monitorSmartContractEventParamType :: Maybe Text
    <*> arbitraryReducedMaybe n -- monitorSmartContractEventParamValue :: Maybe Text
  
instance Arbitrary MonitorSmartContractRequestSchema where
  arbitrary = sized genMonitorSmartContractRequestSchema

genMonitorSmartContractRequestSchema :: Int -> Gen MonitorSmartContractRequestSchema
genMonitorSmartContractRequestSchema n =
  MonitorSmartContractRequestSchema
    <$> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaCallBackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaEventParams :: Maybe [MonitorSmartContractEventParam]
    <*> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaEventName :: Maybe Text
    <*> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaSmartContractId :: Maybe Text
  
instance Arbitrary Origin where
  arbitrary = sized genOrigin

genOrigin :: Int -> Gen Origin
genOrigin n =
  Origin
    <$> arbitraryReducedMaybe n -- originSequence :: Maybe Text
    <*> arbitraryReducedMaybe n -- originOriginId :: Maybe Text
    <*> arbitraryReducedMaybe n -- originSmartContract :: Maybe SmartContract
  
instance Arbitrary OriginPaymentSchema where
  arbitrary = sized genOriginPaymentSchema

genOriginPaymentSchema :: Int -> Gen OriginPaymentSchema
genOriginPaymentSchema n =
  OriginPaymentSchema
    <$> arbitraryReducedMaybe n -- originPaymentSchemaOriginId :: Maybe Text
  
instance Arbitrary OriginTransferSchema where
  arbitrary = sized genOriginTransferSchema

genOriginTransferSchema :: Int -> Gen OriginTransferSchema
genOriginTransferSchema n =
  OriginTransferSchema
    <$> arbitraryReducedMaybe n -- originTransferSchemaOriginId :: Maybe Text
  
instance Arbitrary OverledgerTransactionResponseSchema where
  arbitrary = sized genOverledgerTransactionResponseSchema

genOverledgerTransactionResponseSchema :: Int -> Gen OverledgerTransactionResponseSchema
genOverledgerTransactionResponseSchema n =
  OverledgerTransactionResponseSchema
    <$> arbitraryReducedMaybe n -- overledgerTransactionResponseSchemaClientId :: Maybe Text
    <*> arbitraryReducedMaybe n -- overledgerTransactionResponseSchemaRequestId :: Maybe Text
    <*> arbitraryReducedMaybe n -- overledgerTransactionResponseSchemaOverledgerTransactionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- overledgerTransactionResponseSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- overledgerTransactionResponseSchemaTransactionHistory :: Maybe [Status]
    <*> arbitraryReducedMaybe n -- overledgerTransactionResponseSchemaType :: Maybe Text
    <*> arbitraryReducedMaybe n -- overledgerTransactionResponseSchemaTransactionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- overledgerTransactionResponseSchemaStatus :: Maybe Status
  
instance Arbitrary Parameter where
  arbitrary = sized genParameter

genParameter :: Int -> Gen Parameter
genParameter n =
  Parameter
    <$> arbitraryReducedMaybe n -- parameterType :: Maybe Text
    <*> arbitraryReducedMaybeValue n -- parameterValue :: Maybe A.Value
    <*> arbitraryReducedMaybe n -- parameterKey :: Maybe Text
  
instance Arbitrary Payment where
  arbitrary = sized genPayment

genPayment :: Int -> Gen Payment
genPayment n =
  Payment
    <$> arbitraryReducedMaybe n -- paymentAmount :: Maybe Text
    <*> arbitraryReducedMaybe n -- paymentUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- paymentIssuer :: Maybe Text
  
instance Arbitrary PaymentRequestDetailsSchema where
  arbitrary = sized genPaymentRequestDetailsSchema

genPaymentRequestDetailsSchema :: Int -> Gen PaymentRequestDetailsSchema
genPaymentRequestDetailsSchema n =
  PaymentRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- paymentRequestDetailsSchemaOverledgerSigningType :: Maybe Text
    <*> arbitraryReducedMaybe n -- paymentRequestDetailsSchemaOrigin :: Maybe [OriginPaymentSchema]
    <*> arbitraryReducedMaybe n -- paymentRequestDetailsSchemaDestination :: Maybe [DestinationPaymentSchema]
    <*> arbitraryReducedMaybe n -- paymentRequestDetailsSchemaMessage :: Maybe Text
  
instance Arbitrary PaymentSchema where
  arbitrary = sized genPaymentSchema

genPaymentSchema :: Int -> Gen PaymentSchema
genPaymentSchema n =
  PaymentSchema
    <$> arbitrary -- paymentSchemaAmount :: Text
    <*> arbitraryReducedMaybe n -- paymentSchemaUnit :: Maybe Text
  
instance Arbitrary PrepareNativeTransactionRequestSchema where
  arbitrary = sized genPrepareNativeTransactionRequestSchema

genPrepareNativeTransactionRequestSchema :: Int -> Gen PrepareNativeTransactionRequestSchema
genPrepareNativeTransactionRequestSchema n =
  PrepareNativeTransactionRequestSchema
    <$> arbitraryReducedMaybe n -- prepareNativeTransactionRequestSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- prepareNativeTransactionRequestSchemaType :: Maybe Text
  
instance Arbitrary PreparePaymentTransactionRequestSchema where
  arbitrary = sized genPreparePaymentTransactionRequestSchema

genPreparePaymentTransactionRequestSchema :: Int -> Gen PreparePaymentTransactionRequestSchema
genPreparePaymentTransactionRequestSchema n =
  PreparePaymentTransactionRequestSchema
    <$> arbitraryReducedMaybe n -- preparePaymentTransactionRequestSchemaUrgency :: Maybe Text
    <*> arbitraryReducedMaybe n -- preparePaymentTransactionRequestSchemaRequestDetails :: Maybe PaymentRequestDetailsSchema
    <*> arbitraryReducedMaybe n -- preparePaymentTransactionRequestSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- preparePaymentTransactionRequestSchemaType :: Maybe Text
  
instance Arbitrary PrepareSearchResponseSchema where
  arbitrary = sized genPrepareSearchResponseSchema

genPrepareSearchResponseSchema :: Int -> Gen PrepareSearchResponseSchema
genPrepareSearchResponseSchema n =
  PrepareSearchResponseSchema
    <$> arbitraryReducedMaybe n -- prepareSearchResponseSchemaGatewayFee :: Maybe Fee
    <*> arbitraryReducedMaybe n -- prepareSearchResponseSchemaRequestId :: Maybe Text
  
instance Arbitrary PrepareSearchSchema where
  arbitrary = sized genPrepareSearchSchema

genPrepareSearchSchema :: Int -> Gen PrepareSearchSchema
genPrepareSearchSchema n =
  PrepareSearchSchema
    <$> arbitraryReducedMaybe n -- prepareSearchSchemaLocation :: Maybe Location
  
instance Arbitrary PrepareSearchSmartContractRequestSchema where
  arbitrary = sized genPrepareSearchSmartContractRequestSchema

genPrepareSearchSmartContractRequestSchema :: Int -> Gen PrepareSearchSmartContractRequestSchema
genPrepareSearchSmartContractRequestSchema n =
  PrepareSearchSmartContractRequestSchema
    <$> arbitraryReducedMaybe n -- prepareSearchSmartContractRequestSchemaRequestDetails :: Maybe SmartContractSearchRequestDetails
    <*> arbitraryReducedMaybe n -- prepareSearchSmartContractRequestSchemaLocation :: Maybe Location
  
instance Arbitrary PrepareTransactionResponse where
  arbitrary = sized genPrepareTransactionResponse

genPrepareTransactionResponse :: Int -> Gen PrepareTransactionResponse
genPrepareTransactionResponse n =
  PrepareTransactionResponse
    <$> arbitraryReducedMaybe n -- prepareTransactionResponseGatewayFee :: Maybe Fee
    <*> arbitraryReducedMaybe n -- prepareTransactionResponseRequestId :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareTransactionResponseDltFee :: Maybe Fee
    <*> arbitraryReducedMaybeValue n -- prepareTransactionResponseNativeData :: Maybe A.Value
  
instance Arbitrary PrepareTransactionSmartContractInvokeRequestSchema where
  arbitrary = sized genPrepareTransactionSmartContractInvokeRequestSchema

genPrepareTransactionSmartContractInvokeRequestSchema :: Int -> Gen PrepareTransactionSmartContractInvokeRequestSchema
genPrepareTransactionSmartContractInvokeRequestSchema n =
  PrepareTransactionSmartContractInvokeRequestSchema
    <$> arbitraryReducedMaybe n -- prepareTransactionSmartContractInvokeRequestSchemaUrgency :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareTransactionSmartContractInvokeRequestSchemaRequestDetails :: Maybe SmartContractInvokeRequestDetailsSchema
    <*> arbitraryReducedMaybe n -- prepareTransactionSmartContractInvokeRequestSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- prepareTransactionSmartContractInvokeRequestSchemaType :: Maybe Text
  
instance Arbitrary PrepareTransferTransactionRequestSchema where
  arbitrary = sized genPrepareTransferTransactionRequestSchema

genPrepareTransferTransactionRequestSchema :: Int -> Gen PrepareTransferTransactionRequestSchema
genPrepareTransferTransactionRequestSchema n =
  PrepareTransferTransactionRequestSchema
    <$> arbitraryReducedMaybe n -- prepareTransferTransactionRequestSchemaUrgency :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareTransferTransactionRequestSchemaRequestDetails :: Maybe TransferRequestDetailsSchema
    <*> arbitraryReducedMaybe n -- prepareTransferTransactionRequestSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- prepareTransferTransactionRequestSchemaType :: Maybe Text
  
instance Arbitrary ResourceMonitoredAddressDetails where
  arbitrary = sized genResourceMonitoredAddressDetails

genResourceMonitoredAddressDetails :: Int -> Gen ResourceMonitoredAddressDetails
genResourceMonitoredAddressDetails n =
  ResourceMonitoredAddressDetails
    <$> arbitraryReducedMaybe n -- resourceMonitoredAddressDetailsAddressId :: Maybe Text
  
instance Arbitrary ResourceMonitoringAddressDetails where
  arbitrary = sized genResourceMonitoringAddressDetails

genResourceMonitoringAddressDetails :: Int -> Gen ResourceMonitoringAddressDetails
genResourceMonitoringAddressDetails n =
  ResourceMonitoringAddressDetails
    <$> arbitraryReducedMaybe n -- resourceMonitoringAddressDetailsAddressId :: Maybe Text
  
instance Arbitrary ResourceMonitoringAddressSchema where
  arbitrary = sized genResourceMonitoringAddressSchema

genResourceMonitoringAddressSchema :: Int -> Gen ResourceMonitoringAddressSchema
genResourceMonitoringAddressSchema n =
  ResourceMonitoringAddressSchema
    <$> arbitraryReducedMaybe n -- resourceMonitoringAddressSchemaAddressMonitoringDetails :: Maybe ResourceMonitoringAddressDetails
    <*> arbitraryReducedMaybe n -- resourceMonitoringAddressSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
  
instance Arbitrary ResourceMonitoringDetails where
  arbitrary = sized genResourceMonitoringDetails

genResourceMonitoringDetails :: Int -> Gen ResourceMonitoringDetails
genResourceMonitoringDetails n =
  ResourceMonitoringDetails
    <$> arbitraryReducedMaybe n -- resourceMonitoringDetailsResourceMonitoringId :: Maybe Text
    <*> arbitraryReducedMaybe n -- resourceMonitoringDetailsLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- resourceMonitoringDetailsType :: Maybe Text
    <*> arbitraryReducedMaybe n -- resourceMonitoringDetailsTimestamp :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- resourceMonitoringDetailsStatus :: Maybe Status
  
instance Arbitrary ResourceMonitoringSmartContractEventDetails where
  arbitrary = sized genResourceMonitoringSmartContractEventDetails

genResourceMonitoringSmartContractEventDetails :: Int -> Gen ResourceMonitoringSmartContractEventDetails
genResourceMonitoringSmartContractEventDetails n =
  ResourceMonitoringSmartContractEventDetails
    <$> arbitraryReducedMaybe n -- resourceMonitoringSmartContractEventDetailsEventName :: Maybe Text
    <*> arbitraryReducedMaybe n -- resourceMonitoringSmartContractEventDetailsEventParameters :: Maybe Text
    <*> arbitraryReducedMaybe n -- resourceMonitoringSmartContractEventDetailsSmartContractId :: Maybe Text
  
instance Arbitrary ResourceMonitoringSubscription where
  arbitrary = sized genResourceMonitoringSubscription

genResourceMonitoringSubscription :: Int -> Gen ResourceMonitoringSubscription
genResourceMonitoringSubscription n =
  ResourceMonitoringSubscription
    <$> arbitraryReducedMaybe n -- resourceMonitoringSubscriptionCallbackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- resourceMonitoringSubscriptionSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- resourceMonitoringSubscriptionType :: Maybe Text
  
instance Arbitrary ResourceMonitoringSubscriptionDetails where
  arbitrary = sized genResourceMonitoringSubscriptionDetails

genResourceMonitoringSubscriptionDetails :: Int -> Gen ResourceMonitoringSubscriptionDetails
genResourceMonitoringSubscriptionDetails n =
  ResourceMonitoringSubscriptionDetails
    <$> arbitraryReducedMaybe n -- resourceMonitoringSubscriptionDetailsIds :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- resourceMonitoringSubscriptionDetailsStatus :: Maybe Status
  
instance Arbitrary ScriptPubKey where
  arbitrary = sized genScriptPubKey

genScriptPubKey :: Int -> Gen ScriptPubKey
genScriptPubKey n =
  ScriptPubKey
    <$> arbitraryReducedMaybe n -- scriptPubKeyAddresses :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- scriptPubKeyAsm :: Maybe Text
    <*> arbitraryReducedMaybe n -- scriptPubKeyHex :: Maybe Text
    <*> arbitraryReducedMaybe n -- scriptPubKeyType :: Maybe Text
    <*> arbitraryReducedMaybe n -- scriptPubKeyReqSigs :: Maybe Text
  
instance Arbitrary SmartContract where
  arbitrary = sized genSmartContract

genSmartContract :: Int -> Gen SmartContract
genSmartContract n =
  SmartContract
    <$> arbitraryReducedMaybe n -- smartContractFunction :: Maybe Function
    <*> arbitraryReducedMaybe n -- smartContractDetail :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractType :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractSmartContractId :: Maybe Text
    <*> arbitraryReducedMaybeValue n -- smartContractExtraFields :: Maybe A.Value
  
instance Arbitrary SmartContractDestinationSchema where
  arbitrary = sized genSmartContractDestinationSchema

genSmartContractDestinationSchema :: Int -> Gen SmartContractDestinationSchema
genSmartContractDestinationSchema n =
  SmartContractDestinationSchema
    <$> arbitraryReducedMaybe n -- smartContractDestinationSchemaSmartContract :: Maybe SmartContractSchema
    <*> arbitraryReducedMaybe n -- smartContractDestinationSchemaPayment :: Maybe SmartContractPaymentSchema
    <*> arbitraryReducedMaybe n -- smartContractDestinationSchemaDestinationId :: Maybe Text
  
instance Arbitrary SmartContractEventHistory where
  arbitrary = sized genSmartContractEventHistory

genSmartContractEventHistory :: Int -> Gen SmartContractEventHistory
genSmartContractEventHistory n =
  SmartContractEventHistory
    <$> arbitraryReducedMaybe n -- smartContractEventHistoryEventId :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractEventHistoryEventName :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractEventHistoryEventParameters :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractEventHistoryTransactionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractEventHistoryTimestamp :: Maybe DateTime
  
instance Arbitrary SmartContractFunctionSchema where
  arbitrary = sized genSmartContractFunctionSchema

genSmartContractFunctionSchema :: Int -> Gen SmartContractFunctionSchema
genSmartContractFunctionSchema n =
  SmartContractFunctionSchema
    <$> arbitraryReducedMaybe n -- smartContractFunctionSchemaName :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractFunctionSchemaInputParameters :: Maybe [SmartContractInputParameterSchema]
  
instance Arbitrary SmartContractInputParameterSchema where
  arbitrary = sized genSmartContractInputParameterSchema

genSmartContractInputParameterSchema :: Int -> Gen SmartContractInputParameterSchema
genSmartContractInputParameterSchema n =
  SmartContractInputParameterSchema
    <$> arbitraryReducedMaybe n -- smartContractInputParameterSchemaType :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractInputParameterSchemaValue :: Maybe Text
  
instance Arbitrary SmartContractInvokeRequestDetailsSchema where
  arbitrary = sized genSmartContractInvokeRequestDetailsSchema

genSmartContractInvokeRequestDetailsSchema :: Int -> Gen SmartContractInvokeRequestDetailsSchema
genSmartContractInvokeRequestDetailsSchema n =
  SmartContractInvokeRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- smartContractInvokeRequestDetailsSchemaOrigin :: Maybe [SmartContractRequestDetailsOrigin]
    <*> arbitraryReducedMaybe n -- smartContractInvokeRequestDetailsSchemaDestination :: Maybe [SmartContractDestinationSchema]
  
instance Arbitrary SmartContractMonitoringDetailsSchema where
  arbitrary = sized genSmartContractMonitoringDetailsSchema

genSmartContractMonitoringDetailsSchema :: Int -> Gen SmartContractMonitoringDetailsSchema
genSmartContractMonitoringDetailsSchema n =
  SmartContractMonitoringDetailsSchema
    <$> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaSmartContractEventHistory :: Maybe [SmartContractEventHistory]
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaSmartContractEventDetails :: Maybe ResourceMonitoringSmartContractEventDetails
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaType :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaStatus :: Maybe Status
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaTimestamp :: Maybe DateTime
  
instance Arbitrary SmartContractMonitoringSchema where
  arbitrary = sized genSmartContractMonitoringSchema

genSmartContractMonitoringSchema :: Int -> Gen SmartContractMonitoringSchema
genSmartContractMonitoringSchema n =
  SmartContractMonitoringSchema
    <$> arbitraryReducedMaybe n -- smartContractMonitoringSchemaSmartContractEventMonitoringDetails :: Maybe ResourceMonitoringSmartContractEventDetails
    <*> arbitraryReducedMaybe n -- smartContractMonitoringSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
  
instance Arbitrary SmartContractOutputParameterSchema where
  arbitrary = sized genSmartContractOutputParameterSchema

genSmartContractOutputParameterSchema :: Int -> Gen SmartContractOutputParameterSchema
genSmartContractOutputParameterSchema n =
  SmartContractOutputParameterSchema
    <$> arbitraryReducedMaybe n -- smartContractOutputParameterSchemaType :: Maybe Text
  
instance Arbitrary SmartContractPaymentSchema where
  arbitrary = sized genSmartContractPaymentSchema

genSmartContractPaymentSchema :: Int -> Gen SmartContractPaymentSchema
genSmartContractPaymentSchema n =
  SmartContractPaymentSchema
    <$> arbitraryReducedMaybe n -- smartContractPaymentSchemaAmount :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractPaymentSchemaUnit :: Maybe Text
  
instance Arbitrary SmartContractReadFunctionSchema where
  arbitrary = sized genSmartContractReadFunctionSchema

genSmartContractReadFunctionSchema :: Int -> Gen SmartContractReadFunctionSchema
genSmartContractReadFunctionSchema n =
  SmartContractReadFunctionSchema
    <$> arbitraryReducedMaybe n -- smartContractReadFunctionSchemaFunctionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractReadFunctionSchemaName :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractReadFunctionSchemaInputParameters :: Maybe [SmartContractInputParameterSchema]
    <*> arbitraryReducedMaybe n -- smartContractReadFunctionSchemaOutputParameters :: Maybe [SmartContractInputParameterSchema]
  
instance Arbitrary SmartContractReadSchema where
  arbitrary = sized genSmartContractReadSchema

genSmartContractReadSchema :: Int -> Gen SmartContractReadSchema
genSmartContractReadSchema n =
  SmartContractReadSchema
    <$> arbitraryReducedMaybe n -- smartContractReadSchemaFunction :: Maybe SmartContractReadFunctionSchema
    <*> arbitraryReducedMaybe n -- smartContractReadSchemaSmartContractId :: Maybe Text
  
instance Arbitrary SmartContractRequestDetailsOrigin where
  arbitrary = sized genSmartContractRequestDetailsOrigin

genSmartContractRequestDetailsOrigin :: Int -> Gen SmartContractRequestDetailsOrigin
genSmartContractRequestDetailsOrigin n =
  SmartContractRequestDetailsOrigin
    <$> arbitraryReducedMaybe n -- smartContractRequestDetailsOriginOriginId :: Maybe Text
  
instance Arbitrary SmartContractSchema where
  arbitrary = sized genSmartContractSchema

genSmartContractSchema :: Int -> Gen SmartContractSchema
genSmartContractSchema n =
  SmartContractSchema
    <$> arbitraryReducedMaybe n -- smartContractSchemaFunction :: Maybe SmartContractFunctionSchema
  
instance Arbitrary SmartContractSearchDestinationSchema where
  arbitrary = sized genSmartContractSearchDestinationSchema

genSmartContractSearchDestinationSchema :: Int -> Gen SmartContractSearchDestinationSchema
genSmartContractSearchDestinationSchema n =
  SmartContractSearchDestinationSchema
    <$> arbitraryReducedMaybe n -- smartContractSearchDestinationSchemaSmartContract :: Maybe SmartContractSearchSchema
  
instance Arbitrary SmartContractSearchFunctionSchema where
  arbitrary = sized genSmartContractSearchFunctionSchema

genSmartContractSearchFunctionSchema :: Int -> Gen SmartContractSearchFunctionSchema
genSmartContractSearchFunctionSchema n =
  SmartContractSearchFunctionSchema
    <$> arbitraryReducedMaybe n -- smartContractSearchFunctionSchemaName :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractSearchFunctionSchemaInputParameters :: Maybe [SmartContractInputParameterSchema]
    <*> arbitraryReducedMaybe n -- smartContractSearchFunctionSchemaOutputParameters :: Maybe [SmartContractOutputParameterSchema]
  
instance Arbitrary SmartContractSearchRequestDetails where
  arbitrary = sized genSmartContractSearchRequestDetails

genSmartContractSearchRequestDetails :: Int -> Gen SmartContractSearchRequestDetails
genSmartContractSearchRequestDetails n =
  SmartContractSearchRequestDetails
    <$> arbitraryReducedMaybe n -- smartContractSearchRequestDetailsDestination :: Maybe [SmartContractSearchDestinationSchema]
  
instance Arbitrary SmartContractSearchSchema where
  arbitrary = sized genSmartContractSearchSchema

genSmartContractSearchSchema :: Int -> Gen SmartContractSearchSchema
genSmartContractSearchSchema n =
  SmartContractSearchSchema
    <$> arbitraryReducedMaybe n -- smartContractSearchSchemaFunction :: Maybe SmartContractSearchFunctionSchema
    <*> arbitraryReducedMaybe n -- smartContractSearchSchemaSmartContractId :: Maybe Text
  
instance Arbitrary Status where
  arbitrary = sized genStatus

genStatus :: Int -> Gen Status
genStatus n =
  Status
    <$> arbitraryReducedMaybe n -- statusCode :: Maybe Text
    <*> arbitraryReducedMaybe n -- statusDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- statusMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- statusValue :: Maybe Text
    <*> arbitraryReducedMaybe n -- statusTimestamp :: Maybe Text
  
instance Arbitrary StatusUpdateMonitoringRequestSchema where
  arbitrary = sized genStatusUpdateMonitoringRequestSchema

genStatusUpdateMonitoringRequestSchema :: Int -> Gen StatusUpdateMonitoringRequestSchema
genStatusUpdateMonitoringRequestSchema n =
  StatusUpdateMonitoringRequestSchema
    <$> arbitraryReducedMaybe n -- statusUpdateMonitoringRequestSchemaStatusUpdate :: Maybe StatusUpdateSchema
  
instance Arbitrary StatusUpdateSchema where
  arbitrary = sized genStatusUpdateSchema

genStatusUpdateSchema :: Int -> Gen StatusUpdateSchema
genStatusUpdateSchema n =
  StatusUpdateSchema
    <$> arbitraryReducedMaybe n -- statusUpdateSchemaValue :: Maybe Text
  
instance Arbitrary SubscriptionDeletionResponse where
  arbitrary = sized genSubscriptionDeletionResponse

genSubscriptionDeletionResponse :: Int -> Gen SubscriptionDeletionResponse
genSubscriptionDeletionResponse n =
  SubscriptionDeletionResponse
    <$> arbitraryReducedMaybe n -- subscriptionDeletionResponseSubscriptionDetails :: Maybe SubscriptionDetails
    <*> arbitraryReducedMaybe n -- subscriptionDeletionResponseCallbackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- subscriptionDeletionResponseSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- subscriptionDeletionResponseType :: Maybe Text
  
instance Arbitrary SubscriptionDetails where
  arbitrary = sized genSubscriptionDetails

genSubscriptionDetails :: Int -> Gen SubscriptionDetails
genSubscriptionDetails n =
  SubscriptionDetails
    <$> arbitraryReducedMaybe n -- subscriptionDetailsIds :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- subscriptionDetailsStatus :: Maybe Status
  
instance Arbitrary SubscriptionDetailsSchema where
  arbitrary = sized genSubscriptionDetailsSchema

genSubscriptionDetailsSchema :: Int -> Gen SubscriptionDetailsSchema
genSubscriptionDetailsSchema n =
  SubscriptionDetailsSchema
    <$> arbitraryReducedMaybe n -- subscriptionDetailsSchemaIds :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- subscriptionDetailsSchemaStatus :: Maybe Status
  
instance Arbitrary SubscriptionUpdateResponse where
  arbitrary = sized genSubscriptionUpdateResponse

genSubscriptionUpdateResponse :: Int -> Gen SubscriptionUpdateResponse
genSubscriptionUpdateResponse n =
  SubscriptionUpdateResponse
    <$> arbitraryReducedMaybe n -- subscriptionUpdateResponseSubscriptionDetails :: Maybe SubscriptionDetails
    <*> arbitraryReducedMaybe n -- subscriptionUpdateResponseCallbackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- subscriptionUpdateResponseSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- subscriptionUpdateResponseType :: Maybe Text
  
instance Arbitrary Transaction where
  arbitrary = sized genTransaction

genTransaction :: Int -> Gen Transaction
genTransaction n =
  Transaction
    <$> arbitraryReducedMaybe n -- transactionSignature :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- transactionOrigin :: Maybe [Origin]
    <*> arbitraryReducedMaybe n -- transactionFee :: Maybe Fee
    <*> arbitraryReducedMaybe n -- transactionDestination :: Maybe [Destination]
    <*> arbitraryReducedMaybe n -- transactionSigned :: Maybe Text
    <*> arbitraryReducedMaybe n -- transactionTotalPaymentAmount :: Maybe [Payment]
    <*> arbitraryReducedMaybe n -- transactionMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- transactionTransactionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- transactionEncoded :: Maybe [Text]
    <*> arbitraryReducedMaybeValue n -- transactionNativeData :: Maybe A.Value
    <*> arbitraryReducedMaybeValue n -- transactionExtraFields :: Maybe A.Value
  
instance Arbitrary Transfer where
  arbitrary = sized genTransfer

genTransfer :: Int -> Gen Transfer
genTransfer n =
  Transfer
    <$> arbitraryReducedMaybe n -- transferTokenId :: Maybe Text
    <*> arbitraryReducedMaybe n -- transferTokenName :: Maybe Text
  
instance Arbitrary TransferRequestDetailsSchema where
  arbitrary = sized genTransferRequestDetailsSchema

genTransferRequestDetailsSchema :: Int -> Gen TransferRequestDetailsSchema
genTransferRequestDetailsSchema n =
  TransferRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- transferRequestDetailsSchemaOverledgerSigningType :: Maybe Text
    <*> arbitraryReducedMaybe n -- transferRequestDetailsSchemaOrigin :: Maybe [OriginTransferSchema]
    <*> arbitraryReducedMaybe n -- transferRequestDetailsSchemaDestination :: Maybe [DestinationTransferSchema]
    <*> arbitraryReducedMaybe n -- transferRequestDetailsSchemaMessage :: Maybe Text
  
instance Arbitrary TransferSchema where
  arbitrary = sized genTransferSchema

genTransferSchema :: Int -> Gen TransferSchema
genTransferSchema n =
  TransferSchema
    <$> arbitraryReducedMaybe n -- transferSchemaTokenId :: Maybe Text
    <*> arbitraryReducedMaybe n -- transferSchemaTokenName :: Maybe Text
  
instance Arbitrary UTXODestination where
  arbitrary = sized genUTXODestination

genUTXODestination :: Int -> Gen UTXODestination
genUTXODestination n =
  UTXODestination
    <$> arbitraryReducedMaybe n -- uTXODestinationSmartContract :: Maybe UTXOSmartContract
    <*> arbitraryReducedMaybe n -- uTXODestinationPayment :: Maybe Payment
    <*> arbitraryReducedMaybe n -- uTXODestinationDestinationId :: Maybe Text
  
instance Arbitrary UTXONativeData where
  arbitrary = sized genUTXONativeData

genUTXONativeData :: Int -> Gen UTXONativeData
genUTXONativeData n =
  UTXONativeData
    <$> arbitraryReducedMaybe n -- uTXONativeDataVout :: Maybe [Vout]
  
instance Arbitrary UTXOSmartContract where
  arbitrary = sized genUTXOSmartContract

genUTXOSmartContract :: Int -> Gen UTXOSmartContract
genUTXOSmartContract n =
  UTXOSmartContract
    <$> arbitraryReducedMaybe n -- uTXOSmartContractDetail :: Maybe Text
    <*> arbitraryReducedMaybe n -- uTXOSmartContractType :: Maybe Text
    <*> arbitraryReducedMaybe n -- uTXOSmartContractExtraFields :: Maybe ExtraFields
  
instance Arbitrary UTXOTimestampSchema where
  arbitrary = sized genUTXOTimestampSchema

genUTXOTimestampSchema :: Int -> Gen UTXOTimestampSchema
genUTXOTimestampSchema n =
  UTXOTimestampSchema
    <$> arbitraryReducedMaybe n -- uTXOTimestampSchemaNano :: Maybe Text
    <*> arbitraryReducedMaybe n -- uTXOTimestampSchemaEpochSecond :: Maybe Text
  
instance Arbitrary UpdateAddressMonitoringSchema where
  arbitrary = sized genUpdateAddressMonitoringSchema

genUpdateAddressMonitoringSchema :: Int -> Gen UpdateAddressMonitoringSchema
genUpdateAddressMonitoringSchema n =
  UpdateAddressMonitoringSchema
    <$> arbitraryReducedMaybe n -- updateAddressMonitoringSchemaAddressMonitoringDetails :: Maybe ResourceMonitoringAddressDetails
    <*> arbitraryReducedMaybe n -- updateAddressMonitoringSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
  
instance Arbitrary UpdateSubscriptionRequestSchema where
  arbitrary = sized genUpdateSubscriptionRequestSchema

genUpdateSubscriptionRequestSchema :: Int -> Gen UpdateSubscriptionRequestSchema
genUpdateSubscriptionRequestSchema n =
  UpdateSubscriptionRequestSchema
    <$> arbitraryReducedMaybe n -- updateSubscriptionRequestSchemaStatusUpdate :: Maybe StatusUpdateSchema
    <*> arbitraryReducedMaybe n -- updateSubscriptionRequestSchemaCallbackUrl :: Maybe Text
  
instance Arbitrary Vout where
  arbitrary = sized genVout

genVout :: Int -> Gen Vout
genVout n =
  Vout
    <$> arbitraryReducedMaybe n -- voutScriptPubKey :: Maybe ScriptPubKey
    <*> arbitraryReducedMaybe n -- voutValue :: Maybe Double
    <*> arbitraryReducedMaybe n -- voutN :: Maybe Double
  



