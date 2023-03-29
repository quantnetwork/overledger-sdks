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

instance Arbitrary AccountDetails where
  arbitrary = sized genAccountDetails

genAccountDetails :: Int -> Gen AccountDetails
genAccountDetails n =
  AccountDetails
    <$> arbitraryReducedMaybe n -- accountDetailsParentAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- accountDetailsAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- accountDetailsUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- accountDetailsOwningInstitutionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- accountDetailsAccountType :: Maybe Text
  
instance Arbitrary AddSecondaryAccountRequestDetailsSchema where
  arbitrary = sized genAddSecondaryAccountRequestDetailsSchema

genAddSecondaryAccountRequestDetailsSchema :: Int -> Gen AddSecondaryAccountRequestDetailsSchema
genAddSecondaryAccountRequestDetailsSchema n =
  AddSecondaryAccountRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- addSecondaryAccountRequestDetailsSchemaOwner :: Maybe SecondaryAccountOwnerSchema
    <*> arbitraryReducedMaybe n -- addSecondaryAccountRequestDetailsSchemaAdditionalOwner :: Maybe SecondaryAccountAdditionalOwnerSchema
  
instance Arbitrary AdditionalOwner where
  arbitrary = sized genAdditionalOwner

genAdditionalOwner :: Int -> Gen AdditionalOwner
genAdditionalOwner n =
  AdditionalOwner
    <$> arbitraryReducedMaybe n -- additionalOwnerAccountId :: Maybe Text
  
instance Arbitrary AdditionalOwnerRemoveSecondarySchema where
  arbitrary = sized genAdditionalOwnerRemoveSecondarySchema

genAdditionalOwnerRemoveSecondarySchema :: Int -> Gen AdditionalOwnerRemoveSecondarySchema
genAdditionalOwnerRemoveSecondarySchema n =
  AdditionalOwnerRemoveSecondarySchema
    <$> arbitraryReducedMaybe n -- additionalOwnerRemoveSecondarySchemaAccountId :: Maybe Text
  
instance Arbitrary AddressBalanceResponse where
  arbitrary = sized genAddressBalanceResponse

genAddressBalanceResponse :: Int -> Gen AddressBalanceResponse
genAddressBalanceResponse n =
  AddressBalanceResponse
    <$> arbitraryReducedMaybe n -- addressBalanceResponseUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- addressBalanceResponseAmount :: Maybe Text
  
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
    <$> arbitraryReducedMaybe n -- addressMonitoringRequestSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- addressMonitoringRequestSchemaCallBackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- addressMonitoringRequestSchemaAddressId :: Maybe Text
  
instance Arbitrary AddressMonitoringResponseSchema where
  arbitrary = sized genAddressMonitoringResponseSchema

genAddressMonitoringResponseSchema :: Int -> Gen AddressMonitoringResponseSchema
genAddressMonitoringResponseSchema n =
  AddressMonitoringResponseSchema
    <$> arbitraryReducedMaybe n -- addressMonitoringResponseSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
    <*> arbitraryReducedMaybe n -- addressMonitoringResponseSchemaSubscriptionDetails :: Maybe ResourceMonitoringSubscriptionDetails
    <*> arbitraryReducedMaybe n -- addressMonitoringResponseSchemaSubscription :: Maybe ResourceMonitoringSubscription
  
instance Arbitrary AliasDetails where
  arbitrary = sized genAliasDetails

genAliasDetails :: Int -> Gen AliasDetails
genAliasDetails n =
  AliasDetails
    <$> arbitraryReducedMaybe n -- aliasDetailsAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- aliasDetailsUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- aliasDetailsDisposableAlias :: Maybe Bool
    <*> arbitraryReducedMaybe n -- aliasDetailsAliasHash :: Maybe Text
    <*> arbitraryReducedMaybe n -- aliasDetailsAliasType :: Maybe Text
    <*> arbitraryReducedMaybe n -- aliasDetailsEsipId :: Maybe Text
  
instance Arbitrary ApproveRequestDetailsSchema where
  arbitrary = sized genApproveRequestDetailsSchema

genApproveRequestDetailsSchema :: Int -> Gen ApproveRequestDetailsSchema
genApproveRequestDetailsSchema n =
  ApproveRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- approveRequestDetailsSchemaPayer :: Maybe [PayerCreditSchema]
    <*> arbitraryReducedMaybe n -- approveRequestDetailsSchemaMandate :: Maybe [PayeeCreditSchema]
    <*> arbitraryReducedMaybe n -- approveRequestDetailsSchemaOverledgerSigningType :: Maybe Text
  
instance Arbitrary AutoExecSearchAddressSequenceResponseSchema where
  arbitrary = sized genAutoExecSearchAddressSequenceResponseSchema

genAutoExecSearchAddressSequenceResponseSchema :: Int -> Gen AutoExecSearchAddressSequenceResponseSchema
genAutoExecSearchAddressSequenceResponseSchema n =
  AutoExecSearchAddressSequenceResponseSchema
    <$> arbitraryReducedMaybe n -- autoExecSearchAddressSequenceResponseSchemaPrepareAndExecuteOverledgerErrorResponse :: Maybe PrepareAndExecuteOverledgerErrorResponse
    <*> arbitraryReducedMaybe n -- autoExecSearchAddressSequenceResponseSchemaExecutionAddressSequenceSearchResponse :: Maybe ExecuteSearchSequenceResponse
    <*> arbitraryReducedMaybe n -- autoExecSearchAddressSequenceResponseSchemaPreparationAddressSequenceSearchResponse :: Maybe PrepareSearchResponseSchema
  
instance Arbitrary AutoExecuteSearchAddressBalanceResponseSchema where
  arbitrary = sized genAutoExecuteSearchAddressBalanceResponseSchema

genAutoExecuteSearchAddressBalanceResponseSchema :: Int -> Gen AutoExecuteSearchAddressBalanceResponseSchema
genAutoExecuteSearchAddressBalanceResponseSchema n =
  AutoExecuteSearchAddressBalanceResponseSchema
    <$> arbitraryReducedMaybe n -- autoExecuteSearchAddressBalanceResponseSchemaPrepareAndExecuteOverledgerErrorResponse :: Maybe PrepareAndExecuteOverledgerErrorResponse
    <*> arbitraryReducedMaybe n -- autoExecuteSearchAddressBalanceResponseSchemaExecutionAddressBalanceSearchResponse :: Maybe PrepareAndExecuteSearchAddressBalanceResponse
    <*> arbitraryReducedMaybe n -- autoExecuteSearchAddressBalanceResponseSchemaPreparationAddressBalanceSearchResponse :: Maybe PrepareSearchResponseSchema
  
instance Arbitrary AutoExecuteSearchBlockResponseSchema where
  arbitrary = sized genAutoExecuteSearchBlockResponseSchema

genAutoExecuteSearchBlockResponseSchema :: Int -> Gen AutoExecuteSearchBlockResponseSchema
genAutoExecuteSearchBlockResponseSchema n =
  AutoExecuteSearchBlockResponseSchema
    <$> arbitraryReducedMaybe n -- autoExecuteSearchBlockResponseSchemaPrepareAndExecuteOverledgerErrorResponse :: Maybe PrepareAndExecuteOverledgerErrorResponse
    <*> arbitraryReducedMaybe n -- autoExecuteSearchBlockResponseSchemaExecutionBlockSearchResponse :: Maybe ExecuteSearchBlockResponse
    <*> arbitraryReducedMaybe n -- autoExecuteSearchBlockResponseSchemaPreparationBlockSearchResponse :: Maybe PrepareSearchResponseSchema
  
instance Arbitrary AutoExecuteSearchUTXOResponseSchema where
  arbitrary = sized genAutoExecuteSearchUTXOResponseSchema

genAutoExecuteSearchUTXOResponseSchema :: Int -> Gen AutoExecuteSearchUTXOResponseSchema
genAutoExecuteSearchUTXOResponseSchema n =
  AutoExecuteSearchUTXOResponseSchema
    <$> arbitraryReducedMaybe n -- autoExecuteSearchUTXOResponseSchemaExecutionUtxoSearchResponse :: Maybe ExecuteSearchUTXOResponse
    <*> arbitraryReducedMaybe n -- autoExecuteSearchUTXOResponseSchemaPrepareAndExecuteOverledgerErrorResponse :: Maybe PrepareAndExecuteOverledgerErrorResponse
    <*> arbitraryReducedMaybe n -- autoExecuteSearchUTXOResponseSchemaPreparationUtxoSearchResponse :: Maybe PrepareTransactionResponse
  
instance Arbitrary Beneficiary where
  arbitrary = sized genBeneficiary

genBeneficiary :: Int -> Gen Beneficiary
genBeneficiary n =
  Beneficiary
    <$> arbitraryReducedMaybe n -- beneficiaryAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- beneficiaryMint :: Maybe Mint
  
instance Arbitrary BeneficiaryMintSchemaQrc20 where
  arbitrary = sized genBeneficiaryMintSchemaQrc20

genBeneficiaryMintSchemaQrc20 :: Int -> Gen BeneficiaryMintSchemaQrc20
genBeneficiaryMintSchemaQrc20 n =
  BeneficiaryMintSchemaQrc20
    <$> arbitraryReducedMaybe n -- beneficiaryMintSchemaQrc20AccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- beneficiaryMintSchemaQrc20Mint :: Maybe MintSchemaQrc20
  
instance Arbitrary BeneficiaryMintSchemaQrc721 where
  arbitrary = sized genBeneficiaryMintSchemaQrc721

genBeneficiaryMintSchemaQrc721 :: Int -> Gen BeneficiaryMintSchemaQrc721
genBeneficiaryMintSchemaQrc721 n =
  BeneficiaryMintSchemaQrc721
    <$> arbitraryReducedMaybe n -- beneficiaryMintSchemaQrc721AccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- beneficiaryMintSchemaQrc721Mint :: Maybe MintSchemaQrc721
  
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
    <*> arbitraryReducedMaybe n -- blockTimestamp :: Maybe Text
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
  
instance Arbitrary Burn where
  arbitrary = sized genBurn

genBurn :: Int -> Gen Burn
genBurn n =
  Burn
    <$> arbitraryReducedMaybe n -- burnTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- burnAmount :: Maybe Text
    <*> arbitraryReducedMaybe n -- burnUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- burnMetadata :: Maybe Text
    <*> arbitraryReducedMaybe n -- burnTokenId :: Maybe Text
  
instance Arbitrary BurnRequestDetailsSchema where
  arbitrary = sized genBurnRequestDetailsSchema

genBurnRequestDetailsSchema :: Int -> Gen BurnRequestDetailsSchema
genBurnRequestDetailsSchema n =
  BurnRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- burnRequestDetailsSchemaOwner :: Maybe [OwnerBurnSchema]
    <*> arbitraryReducedMaybe n -- burnRequestDetailsSchemaMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- burnRequestDetailsSchemaOverledgerSigningType :: Maybe Text
  
instance Arbitrary BurnRequestDetailsSchemaQrc721 where
  arbitrary = sized genBurnRequestDetailsSchemaQrc721

genBurnRequestDetailsSchemaQrc721 :: Int -> Gen BurnRequestDetailsSchemaQrc721
genBurnRequestDetailsSchemaQrc721 n =
  BurnRequestDetailsSchemaQrc721
    <$> arbitraryReducedMaybe n -- burnRequestDetailsSchemaQrc721Owner :: Maybe OwnerBurnSchema
    <*> arbitraryReducedMaybe n -- burnRequestDetailsSchemaQrc721OverledgerSigningType :: Maybe Text
  
instance Arbitrary BurnSchema where
  arbitrary = sized genBurnSchema

genBurnSchema :: Int -> Gen BurnSchema
genBurnSchema n =
  BurnSchema
    <$> arbitrary -- burnSchemaAmount :: Text
    <*> arbitraryReducedMaybe n -- burnSchemaUnit :: Maybe Text
  
instance Arbitrary Collector where
  arbitrary = sized genCollector

genCollector :: Int -> Gen Collector
genCollector n =
  Collector
    <$> arbitraryReducedMaybe n -- collectorAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- collectorTransfer :: Maybe Transfer
  
instance Arbitrary CreateSmartContractMonitoringSchema where
  arbitrary = sized genCreateSmartContractMonitoringSchema

genCreateSmartContractMonitoringSchema :: Int -> Gen CreateSmartContractMonitoringSchema
genCreateSmartContractMonitoringSchema n =
  CreateSmartContractMonitoringSchema
    <$> arbitraryReducedMaybe n -- createSmartContractMonitoringSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
    <*> arbitraryReducedMaybe n -- createSmartContractMonitoringSchemaSubscriptionDetails :: Maybe ResourceMonitoringSubscriptionDetails
    <*> arbitraryReducedMaybe n -- createSmartContractMonitoringSchemaSubscription :: Maybe ResourceMonitoringSubscription
  
instance Arbitrary CreateWebhookSubscriptionRequestSchema where
  arbitrary = sized genCreateWebhookSubscriptionRequestSchema

genCreateWebhookSubscriptionRequestSchema :: Int -> Gen CreateWebhookSubscriptionRequestSchema
genCreateWebhookSubscriptionRequestSchema n =
  CreateWebhookSubscriptionRequestSchema
    <$> arbitraryReducedMaybe n -- createWebhookSubscriptionRequestSchemaType :: Maybe Text
    <*> arbitraryReducedMaybe n -- createWebhookSubscriptionRequestSchemaIds :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- createWebhookSubscriptionRequestSchemaCallbackUrl :: Maybe Text
  
instance Arbitrary CreateWebhookSubscriptionResponseSchema where
  arbitrary = sized genCreateWebhookSubscriptionResponseSchema

genCreateWebhookSubscriptionResponseSchema :: Int -> Gen CreateWebhookSubscriptionResponseSchema
genCreateWebhookSubscriptionResponseSchema n =
  CreateWebhookSubscriptionResponseSchema
    <$> arbitraryReducedMaybe n -- createWebhookSubscriptionResponseSchemaSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- createWebhookSubscriptionResponseSchemaScubscriptionDetails :: Maybe WebhookSubscriptionDetailsSchema
  
instance Arbitrary Creator where
  arbitrary = sized genCreator

genCreator :: Int -> Gen Creator
genCreator n =
  Creator
    <$> arbitraryReducedMaybe n -- creatorAccountId :: Maybe Text
  
instance Arbitrary CreatorMintSchema where
  arbitrary = sized genCreatorMintSchema

genCreatorMintSchema :: Int -> Gen CreatorMintSchema
genCreatorMintSchema n =
  CreatorMintSchema
    <$> arbitraryReducedMaybe n -- creatorMintSchemaAccountId :: Maybe Text
  
instance Arbitrary CreditRequestDetailsSchema where
  arbitrary = sized genCreditRequestDetailsSchema

genCreditRequestDetailsSchema :: Int -> Gen CreditRequestDetailsSchema
genCreditRequestDetailsSchema n =
  CreditRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- creditRequestDetailsSchemaPayee :: Maybe [PayeeCreditSchema]
    <*> arbitraryReducedMaybe n -- creditRequestDetailsSchemaMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- creditRequestDetailsSchemaPayer :: Maybe [PayerCreditSchema]
    <*> arbitraryReducedMaybe n -- creditRequestDetailsSchemaOverledgerSigningType :: Maybe Text
  
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
    <$> arbitraryReducedMaybe n -- destinationPayment :: Maybe Payment
    <*> arbitraryReducedMaybe n -- destinationTransfer :: Maybe Transfer
    <*> arbitraryReducedMaybe n -- destinationDestinationId :: Maybe Text
    <*> arbitraryReducedMaybe n -- destinationSmartContract :: Maybe SmartContract
  
instance Arbitrary DestinationPaymentSchema where
  arbitrary = sized genDestinationPaymentSchema

genDestinationPaymentSchema :: Int -> Gen DestinationPaymentSchema
genDestinationPaymentSchema n =
  DestinationPaymentSchema
    <$> arbitrary -- destinationPaymentSchemaDestinationId :: Text
    <*> arbitraryReduced n -- destinationPaymentSchemaPayment :: PaymentSchema
  
instance Arbitrary DestinationTransferSchema where
  arbitrary = sized genDestinationTransferSchema

genDestinationTransferSchema :: Int -> Gen DestinationTransferSchema
genDestinationTransferSchema n =
  DestinationTransferSchema
    <$> arbitraryReducedMaybe n -- destinationTransferSchemaDestinationId :: Maybe Text
    <*> arbitraryReducedMaybe n -- destinationTransferSchemaTransfer :: Maybe TransferSchema
  
instance Arbitrary Erc20DTO where
  arbitrary = sized genErc20DTO

genErc20DTO :: Int -> Gen Erc20DTO
genErc20DTO n =
  Erc20DTO
    <$> arbitraryReducedMaybe n -- erc20DTOIsQrc20 :: Maybe Bool
    <*> arbitraryReducedMaybe n -- erc20DTOTokenUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- erc20DTODecimalPlaces :: Maybe Int
    <*> arbitraryReducedMaybe n -- erc20DTOFunctions :: Maybe [TierFunctionDTO]
    <*> arbitraryReducedMaybe n -- erc20DTOTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- erc20DTOSmartContractAddress :: Maybe Text
    <*> arbitraryReducedMaybe n -- erc20DTOLocation :: Maybe LocationDTO
    <*> arbitraryReducedMaybe n -- erc20DTOVersion :: Maybe Text
    <*> arbitraryReducedMaybe n -- erc20DTOUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- erc20DTOAuditDate :: Maybe Date
  
instance Arbitrary Error where
  arbitrary = sized genError

genError :: Int -> Gen Error
genError n =
  Error
    <$> arbitraryReducedMaybe n -- errorCode :: Maybe Int
    <*> arbitraryReducedMaybe n -- errorMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorService :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorTimestamp :: Maybe Integer
  
instance Arbitrary ErrorDetails where
  arbitrary = sized genErrorDetails

genErrorDetails :: Int -> Gen ErrorDetails
genErrorDetails n =
  ErrorDetails
    <$> arbitraryReducedMaybe n -- errorDetailsCategory :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorDetailsDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorDetailsCode :: Maybe Text
  
instance Arbitrary ErrorList where
  arbitrary = sized genErrorList

genErrorList :: Int -> Gen ErrorList
genErrorList n =
  ErrorList
    <$> arbitraryReducedMaybe n -- errorListErrors :: Maybe [Error]
    <*> arbitraryReducedMaybe n -- errorListErrorCount :: Maybe Int
  
instance Arbitrary ErrorResponseMessage where
  arbitrary = sized genErrorResponseMessage

genErrorResponseMessage :: Int -> Gen ErrorResponseMessage
genErrorResponseMessage n =
  ErrorResponseMessage
    <$> arbitraryReducedMaybe n -- errorResponseMessageCode :: Maybe Int
    <*> arbitraryReducedMaybeValue n -- errorResponseMessageErrorMessageExtraDetails :: Maybe A.Value
    <*> arbitraryReducedMaybe n -- errorResponseMessageSubCode :: Maybe Int
    <*> arbitraryReducedMaybe n -- errorResponseMessageLogTraceId :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorResponseMessageType :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorResponseMessageTitle :: Maybe Text
    <*> arbitraryReducedMaybe n -- errorResponseMessageMessage :: Maybe Text
  
instance Arbitrary EventSubscriptionResponse where
  arbitrary = sized genEventSubscriptionResponse

genEventSubscriptionResponse :: Int -> Gen EventSubscriptionResponse
genEventSubscriptionResponse n =
  EventSubscriptionResponse
    <$> arbitraryReducedMaybe n -- eventSubscriptionResponseTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- eventSubscriptionResponseSubscriptionDetails :: Maybe EventSubscriptionResponseDetails
    <*> arbitraryReducedMaybe n -- eventSubscriptionResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- eventSubscriptionResponseType :: Maybe Text
  
instance Arbitrary EventSubscriptionResponseDetails where
  arbitrary = sized genEventSubscriptionResponseDetails

genEventSubscriptionResponseDetails :: Int -> Gen EventSubscriptionResponseDetails
genEventSubscriptionResponseDetails n =
  EventSubscriptionResponseDetails
    <$> arbitraryReducedMaybe n -- eventSubscriptionResponseDetailsSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- eventSubscriptionResponseDetailsCallbackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- eventSubscriptionResponseDetailsCreatedDate :: Maybe Text
  
instance Arbitrary ExecuteSearchBalanceResponse where
  arbitrary = sized genExecuteSearchBalanceResponse

genExecuteSearchBalanceResponse :: Int -> Gen ExecuteSearchBalanceResponse
genExecuteSearchBalanceResponse n =
  ExecuteSearchBalanceResponse
    <$> arbitraryReducedMaybe n -- executeSearchBalanceResponseBalances :: Maybe [AddressBalanceResponse]
    <*> arbitraryReducedMaybe n -- executeSearchBalanceResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeSearchBalanceResponseTimestamp :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchBalanceResponseAddressId :: Maybe Text
  
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
    <*> arbitraryReducedMaybe n -- executeSearchSequenceResponseTimestamp :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchSequenceResponseAddressId :: Maybe Text
  
instance Arbitrary ExecuteSearchTransactionResponse where
  arbitrary = sized genExecuteSearchTransactionResponse

genExecuteSearchTransactionResponse :: Int -> Gen ExecuteSearchTransactionResponse
genExecuteSearchTransactionResponse n =
  ExecuteSearchTransactionResponse
    <$> arbitraryReducedMaybe n -- executeSearchTransactionResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeSearchTransactionResponseType :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchTransactionResponseTransaction :: Maybe Transaction
    <*> arbitraryReducedMaybe n -- executeSearchTransactionResponseTimestamp :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchTransactionResponseStatus :: Maybe Status
    <*> arbitraryReducedMaybeValue n -- executeSearchTransactionResponseExtraFields :: Maybe A.Value
  
instance Arbitrary ExecuteSearchUTXOResponse where
  arbitrary = sized genExecuteSearchUTXOResponse

genExecuteSearchUTXOResponse :: Int -> Gen ExecuteSearchUTXOResponse
genExecuteSearchUTXOResponse n =
  ExecuteSearchUTXOResponse
    <$> arbitraryReducedMaybe n -- executeSearchUTXOResponseUtxoId :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseDestination :: Maybe [Destination]
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseTimestamp :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseStatus :: Maybe Status
    <*> arbitraryReducedMaybeValue n -- executeSearchUTXOResponseNativeData :: Maybe A.Value
  
instance Arbitrary ExecuteSearchUTXOResponseSchema where
  arbitrary = sized genExecuteSearchUTXOResponseSchema

genExecuteSearchUTXOResponseSchema :: Int -> Gen ExecuteSearchUTXOResponseSchema
genExecuteSearchUTXOResponseSchema n =
  ExecuteSearchUTXOResponseSchema
    <$> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaUtxoId :: Maybe Text
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaDestination :: Maybe [UTXODestination]
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- executeSearchUTXOResponseSchemaTimestamp :: Maybe Text
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
    <$> arbitraryReducedMaybe n -- executeTransactionRequestSigned :: Maybe Text
    <*> arbitrary -- executeTransactionRequestRequestId :: Text
  
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
    <$> arbitraryReducedMaybe n -- functionType :: Maybe Text
    <*> arbitraryReducedMaybe n -- functionApi :: Maybe Text
  
instance Arbitrary FunctionDTO where
  arbitrary = sized genFunctionDTO

genFunctionDTO :: Int -> Gen FunctionDTO
genFunctionDTO n =
  FunctionDTO
    <$> arbitraryReducedMaybe n -- functionDTOType :: Maybe Text
    <*> arbitraryReducedMaybe n -- functionDTOApi :: Maybe Text
  
instance Arbitrary FungibleTokenResponseDTO where
  arbitrary = sized genFungibleTokenResponseDTO

genFungibleTokenResponseDTO :: Int -> Gen FungibleTokenResponseDTO
genFungibleTokenResponseDTO n =
  FungibleTokenResponseDTO
    <$> arbitraryReducedMaybe n -- fungibleTokenResponseDTODocumentationUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- fungibleTokenResponseDTOUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- fungibleTokenResponseDTODecimalPlaces :: Maybe Int
    <*> arbitraryReducedMaybe n -- fungibleTokenResponseDTOFunctions :: Maybe [FunctionDTO]
    <*> arbitraryReducedMaybe n -- fungibleTokenResponseDTOContractType :: Maybe E'ContractType
    <*> arbitraryReducedMaybe n -- fungibleTokenResponseDTOLocation :: Maybe LocationDTO
    <*> arbitraryReducedMaybe n -- fungibleTokenResponseDTOSmartContractId :: Maybe Text
  
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
  
instance Arbitrary ListWebhookSubscriptionResponseSchema where
  arbitrary = sized genListWebhookSubscriptionResponseSchema

genListWebhookSubscriptionResponseSchema :: Int -> Gen ListWebhookSubscriptionResponseSchema
genListWebhookSubscriptionResponseSchema n =
  ListWebhookSubscriptionResponseSchema
    <$> arbitraryReducedMaybe n -- listWebhookSubscriptionResponseSchemaSubscriptionDetails :: Maybe WebhookSubscriptionDetailsSchema
    <*> arbitraryReducedMaybe n -- listWebhookSubscriptionResponseSchemaLastUpdatedTime :: Maybe DateTime
    <*> arbitraryReducedMaybe n -- listWebhookSubscriptionResponseSchemaCallbackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- listWebhookSubscriptionResponseSchemaSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- listWebhookSubscriptionResponseSchemaType :: Maybe Text
    <*> arbitraryReducedMaybe n -- listWebhookSubscriptionResponseSchemaSubscribedTime :: Maybe DateTime
  
instance Arbitrary Location where
  arbitrary = sized genLocation

genLocation :: Int -> Gen Location
genLocation n =
  Location
    <$> arbitrary -- locationTechnology :: Text
    <*> arbitrary -- locationNetwork :: Text
  
instance Arbitrary LocationDTO where
  arbitrary = sized genLocationDTO

genLocationDTO :: Int -> Gen LocationDTO
genLocationDTO n =
  LocationDTO
    <$> arbitraryReducedMaybe n -- locationDTOTechnology :: Maybe Text
    <*> arbitraryReducedMaybe n -- locationDTONetwork :: Maybe Text
  
instance Arbitrary LockDetails where
  arbitrary = sized genLockDetails

genLockDetails :: Int -> Gen LockDetails
genLockDetails n =
  LockDetails
    <$> arbitraryReducedMaybe n -- lockDetailsExpiryDate :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsLockId :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsAmount :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsAccountOwningInstitutionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsLockDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsPayeeId :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsSecret :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsHash :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsPayeeOwningInstitutionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- lockDetailsLockOwningInstitutionId :: Maybe Text
  
instance Arbitrary Mandate where
  arbitrary = sized genMandate

genMandate :: Int -> Gen Mandate
genMandate n =
  Mandate
    <$> arbitraryReducedMaybe n -- mandatePayment :: Maybe Payment
    <*> arbitraryReducedMaybe n -- mandatePayeeId :: Maybe Text
  
instance Arbitrary Mint where
  arbitrary = sized genMint

genMint :: Int -> Gen Mint
genMint n =
  Mint
    <$> arbitraryReducedMaybe n -- mintTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- mintAmount :: Maybe Text
    <*> arbitraryReducedMaybe n -- mintUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- mintMetadata :: Maybe Text
    <*> arbitraryReducedMaybe n -- mintTokenId :: Maybe Text
  
instance Arbitrary MintRequestDetailsSchemaQrc20 where
  arbitrary = sized genMintRequestDetailsSchemaQrc20

genMintRequestDetailsSchemaQrc20 :: Int -> Gen MintRequestDetailsSchemaQrc20
genMintRequestDetailsSchemaQrc20 n =
  MintRequestDetailsSchemaQrc20
    <$> arbitraryReducedMaybe n -- mintRequestDetailsSchemaQrc20Creator :: Maybe CreatorMintSchema
    <*> arbitraryReducedMaybe n -- mintRequestDetailsSchemaQrc20Beneficiary :: Maybe BeneficiaryMintSchemaQrc20
    <*> arbitraryReducedMaybe n -- mintRequestDetailsSchemaQrc20Message :: Maybe Text
    <*> arbitraryReducedMaybe n -- mintRequestDetailsSchemaQrc20OverledgerSigningType :: Maybe Text
  
instance Arbitrary MintRequestDetailsSchemaQrc721 where
  arbitrary = sized genMintRequestDetailsSchemaQrc721

genMintRequestDetailsSchemaQrc721 :: Int -> Gen MintRequestDetailsSchemaQrc721
genMintRequestDetailsSchemaQrc721 n =
  MintRequestDetailsSchemaQrc721
    <$> arbitraryReducedMaybe n -- mintRequestDetailsSchemaQrc721Beneficiary :: Maybe BeneficiaryMintSchemaQrc721
    <*> arbitraryReducedMaybe n -- mintRequestDetailsSchemaQrc721Creator :: Maybe CreatorMintSchema
    <*> arbitraryReducedMaybe n -- mintRequestDetailsSchemaQrc721OverledgerSigningType :: Maybe Text
  
instance Arbitrary MintSchemaQrc20 where
  arbitrary = sized genMintSchemaQrc20

genMintSchemaQrc20 :: Int -> Gen MintSchemaQrc20
genMintSchemaQrc20 n =
  MintSchemaQrc20
    <$> arbitrary -- mintSchemaQrc20Amount :: Text
    <*> arbitraryReducedMaybe n -- mintSchemaQrc20Unit :: Maybe Text
  
instance Arbitrary MintSchemaQrc721 where
  arbitrary = sized genMintSchemaQrc721

genMintSchemaQrc721 :: Int -> Gen MintSchemaQrc721
genMintSchemaQrc721 n =
  MintSchemaQrc721
    <$> arbitraryReducedMaybe n -- mintSchemaQrc721TokenId :: Maybe Text
    <*> arbitraryReducedMaybe n -- mintSchemaQrc721TokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- mintSchemaQrc721Metadata :: Maybe Text
  
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
    <$> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaEventParams :: Maybe [MonitorSmartContractEventParam]
    <*> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaEventName :: Maybe Text
    <*> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaCallBackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- monitorSmartContractRequestSchemaSmartContractId :: Maybe Text
  
instance Arbitrary NonFungibleTokenDTO where
  arbitrary = sized genNonFungibleTokenDTO

genNonFungibleTokenDTO :: Int -> Gen NonFungibleTokenDTO
genNonFungibleTokenDTO n =
  NonFungibleTokenDTO
    <$> arbitraryReducedMaybe n -- nonFungibleTokenDTOFunctions :: Maybe [TierFunctionDTO]
    <*> arbitraryReducedMaybe n -- nonFungibleTokenDTOTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- nonFungibleTokenDTOSmartContractAddress :: Maybe Text
    <*> arbitraryReducedMaybe n -- nonFungibleTokenDTOLocation :: Maybe LocationDTO
    <*> arbitraryReducedMaybe n -- nonFungibleTokenDTOId :: Maybe Text
    <*> arbitraryReducedMaybe n -- nonFungibleTokenDTOTokenType :: Maybe Text
    <*> arbitraryReducedMaybe n -- nonFungibleTokenDTOUrl :: Maybe Text
  
instance Arbitrary NonFungibleTokenResponse where
  arbitrary = sized genNonFungibleTokenResponse

genNonFungibleTokenResponse :: Int -> Gen NonFungibleTokenResponse
genNonFungibleTokenResponse n =
  NonFungibleTokenResponse
    <$> arbitraryReducedMaybe n -- nonFungibleTokenResponseTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- nonFungibleTokenResponseDocumentationUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- nonFungibleTokenResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- nonFungibleTokenResponseFunctions :: Maybe [Function]
    <*> arbitraryReducedMaybe n -- nonFungibleTokenResponseContractType :: Maybe Text
    <*> arbitraryReducedMaybe n -- nonFungibleTokenResponseSmartContractId :: Maybe Text
  
instance Arbitrary Origin where
  arbitrary = sized genOrigin

genOrigin :: Int -> Gen Origin
genOrigin n =
  Origin
    <$> arbitraryReducedMaybe n -- originSequence :: Maybe Text
    <*> arbitraryReducedMaybe n -- originSmartContract :: Maybe SmartContract
    <*> arbitraryReducedMaybe n -- originOriginId :: Maybe Text
  
instance Arbitrary OriginPaymentSchema where
  arbitrary = sized genOriginPaymentSchema

genOriginPaymentSchema :: Int -> Gen OriginPaymentSchema
genOriginPaymentSchema n =
  OriginPaymentSchema
    <$> arbitrary -- originPaymentSchemaOriginId :: Text
  
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
  
instance Arbitrary Owner where
  arbitrary = sized genOwner

genOwner :: Int -> Gen Owner
genOwner n =
  Owner
    <$> arbitraryReducedMaybe n -- ownerAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- ownerBurn :: Maybe Burn
    <*> arbitraryReducedMaybe n -- ownerUnit :: Maybe Text
  
instance Arbitrary OwnerBurnSchema where
  arbitrary = sized genOwnerBurnSchema

genOwnerBurnSchema :: Int -> Gen OwnerBurnSchema
genOwnerBurnSchema n =
  OwnerBurnSchema
    <$> arbitraryReducedMaybe n -- ownerBurnSchemaAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- ownerBurnSchemaBurn :: Maybe BurnSchema
  
instance Arbitrary OwnerRemoveSecondarySchema where
  arbitrary = sized genOwnerRemoveSecondarySchema

genOwnerRemoveSecondarySchema :: Int -> Gen OwnerRemoveSecondarySchema
genOwnerRemoveSecondarySchema n =
  OwnerRemoveSecondarySchema
    <$> arbitraryReducedMaybe n -- ownerRemoveSecondarySchemaAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- ownerRemoveSecondarySchemaUnit :: Maybe Text
  
instance Arbitrary Pagination where
  arbitrary = sized genPagination

genPagination :: Int -> Gen Pagination
genPagination n =
  Pagination
    <$> arbitraryReducedMaybe n -- paginationSize :: Maybe Int
    <*> arbitraryReducedMaybe n -- paginationTotal :: Maybe Int
    <*> arbitraryReducedMaybe n -- paginationPage :: Maybe Int
  
instance Arbitrary Parameter where
  arbitrary = sized genParameter

genParameter :: Int -> Gen Parameter
genParameter n =
  Parameter
    <$> arbitraryReducedMaybe n -- parameterType :: Maybe Text
    <*> arbitraryReducedMaybeValue n -- parameterValue :: Maybe A.Value
    <*> arbitraryReducedMaybe n -- parameterKey :: Maybe Text
  
instance Arbitrary Payee where
  arbitrary = sized genPayee

genPayee :: Int -> Gen Payee
genPayee n =
  Payee
    <$> arbitraryReducedMaybe n -- payeePayment :: Maybe Payment
    <*> arbitraryReducedMaybe n -- payeePayeeId :: Maybe Text
  
instance Arbitrary PayeeCreditSchema where
  arbitrary = sized genPayeeCreditSchema

genPayeeCreditSchema :: Int -> Gen PayeeCreditSchema
genPayeeCreditSchema n =
  PayeeCreditSchema
    <$> arbitraryReducedMaybe n -- payeeCreditSchemaPayment :: Maybe PaymentSchema
    <*> arbitraryReducedMaybe n -- payeeCreditSchemaPayeeId :: Maybe Text
  
instance Arbitrary Payer where
  arbitrary = sized genPayer

genPayer :: Int -> Gen Payer
genPayer n =
  Payer
    <$> arbitraryReducedMaybe n -- payerPayerId :: Maybe Text
  
instance Arbitrary PayerCreditSchema where
  arbitrary = sized genPayerCreditSchema

genPayerCreditSchema :: Int -> Gen PayerCreditSchema
genPayerCreditSchema n =
  PayerCreditSchema
    <$> arbitraryReducedMaybe n -- payerCreditSchemaPayerId :: Maybe Text
  
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
    <$> arbitraryReduced n -- paymentRequestDetailsSchemaDestination :: [DestinationPaymentSchema]
    <*> arbitraryReducedMaybe n -- paymentRequestDetailsSchemaMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- paymentRequestDetailsSchemaOverledgerSigningType :: Maybe E'OverledgerSigningType
    <*> arbitraryReduced n -- paymentRequestDetailsSchemaOrigin :: [OriginPaymentSchema]
  
instance Arbitrary PaymentSchema where
  arbitrary = sized genPaymentSchema

genPaymentSchema :: Int -> Gen PaymentSchema
genPaymentSchema n =
  PaymentSchema
    <$> arbitrary -- paymentSchemaAmount :: Text
    <*> arbitrary -- paymentSchemaUnit :: Text
  
instance Arbitrary PrepareAddSecondaryAccountRequestSchema where
  arbitrary = sized genPrepareAddSecondaryAccountRequestSchema

genPrepareAddSecondaryAccountRequestSchema :: Int -> Gen PrepareAddSecondaryAccountRequestSchema
genPrepareAddSecondaryAccountRequestSchema n =
  PrepareAddSecondaryAccountRequestSchema
    <$> arbitraryReduced n -- prepareAddSecondaryAccountRequestSchemaLocation :: Location
    <*> arbitrary -- prepareAddSecondaryAccountRequestSchemaType :: E'Type
    <*> arbitrary -- prepareAddSecondaryAccountRequestSchemaUrgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareAddSecondaryAccountRequestSchemaRequestDetails :: Maybe AddSecondaryAccountRequestDetailsSchema
  
instance Arbitrary PrepareAndExecuteBalanceDetails where
  arbitrary = sized genPrepareAndExecuteBalanceDetails

genPrepareAndExecuteBalanceDetails :: Int -> Gen PrepareAndExecuteBalanceDetails
genPrepareAndExecuteBalanceDetails n =
  PrepareAndExecuteBalanceDetails
    <$> arbitraryReducedMaybe n -- prepareAndExecuteBalanceDetailsUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareAndExecuteBalanceDetailsAmount :: Maybe Text
  
instance Arbitrary PrepareAndExecuteOverledgerErrorResponse where
  arbitrary = sized genPrepareAndExecuteOverledgerErrorResponse

genPrepareAndExecuteOverledgerErrorResponse :: Int -> Gen PrepareAndExecuteOverledgerErrorResponse
genPrepareAndExecuteOverledgerErrorResponse n =
  PrepareAndExecuteOverledgerErrorResponse
    <$> arbitraryReducedMaybe n -- prepareAndExecuteOverledgerErrorResponseCategory :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareAndExecuteOverledgerErrorResponseDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareAndExecuteOverledgerErrorResponseCode :: Maybe Text
  
instance Arbitrary PrepareAndExecuteSearchAddressBalanceResponse where
  arbitrary = sized genPrepareAndExecuteSearchAddressBalanceResponse

genPrepareAndExecuteSearchAddressBalanceResponse :: Int -> Gen PrepareAndExecuteSearchAddressBalanceResponse
genPrepareAndExecuteSearchAddressBalanceResponse n =
  PrepareAndExecuteSearchAddressBalanceResponse
    <$> arbitraryReducedMaybe n -- prepareAndExecuteSearchAddressBalanceResponseBalances :: Maybe [PrepareAndExecuteBalanceDetails]
    <*> arbitraryReducedMaybe n -- prepareAndExecuteSearchAddressBalanceResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- prepareAndExecuteSearchAddressBalanceResponseTimestamp :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareAndExecuteSearchAddressBalanceResponseAddressId :: Maybe Text
  
instance Arbitrary PrepareAndExecuteTransactionResponse where
  arbitrary = sized genPrepareAndExecuteTransactionResponse

genPrepareAndExecuteTransactionResponse :: Int -> Gen PrepareAndExecuteTransactionResponse
genPrepareAndExecuteTransactionResponse n =
  PrepareAndExecuteTransactionResponse
    <$> arbitraryReducedMaybe n -- prepareAndExecuteTransactionResponsePreparationTransactionSearchResponse :: Maybe PrepareTransactionResponse
    <*> arbitraryReducedMaybe n -- prepareAndExecuteTransactionResponseExecutionTransactionSearchResponse :: Maybe ExecuteSearchTransactionResponse
    <*> arbitraryReducedMaybe n -- prepareAndExecuteTransactionResponseExecutionTransactionSearchOverledgerErrorResponse :: Maybe PrepareAndExecuteOverledgerErrorResponse
  
instance Arbitrary PrepareApproveDebitTransactionRequestSchema where
  arbitrary = sized genPrepareApproveDebitTransactionRequestSchema

genPrepareApproveDebitTransactionRequestSchema :: Int -> Gen PrepareApproveDebitTransactionRequestSchema
genPrepareApproveDebitTransactionRequestSchema n =
  PrepareApproveDebitTransactionRequestSchema
    <$> arbitraryReduced n -- prepareApproveDebitTransactionRequestSchemaLocation :: Location
    <*> arbitrary -- prepareApproveDebitTransactionRequestSchemaType :: E'Type
    <*> arbitrary -- prepareApproveDebitTransactionRequestSchemaUrgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareApproveDebitTransactionRequestSchemaRequestDetails :: Maybe ApproveRequestDetailsSchema
  
instance Arbitrary PrepareBurnTransactionRequestSchema where
  arbitrary = sized genPrepareBurnTransactionRequestSchema

genPrepareBurnTransactionRequestSchema :: Int -> Gen PrepareBurnTransactionRequestSchema
genPrepareBurnTransactionRequestSchema n =
  PrepareBurnTransactionRequestSchema
    <$> arbitraryReduced n -- prepareBurnTransactionRequestSchemaLocation :: Location
    <*> arbitrary -- prepareBurnTransactionRequestSchemaType :: E'Type
    <*> arbitrary -- prepareBurnTransactionRequestSchemaUrgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareBurnTransactionRequestSchemaRequestDetails :: Maybe BurnRequestDetailsSchema
  
instance Arbitrary PrepareBurnTransactionRequestSchemaQrc721 where
  arbitrary = sized genPrepareBurnTransactionRequestSchemaQrc721

genPrepareBurnTransactionRequestSchemaQrc721 :: Int -> Gen PrepareBurnTransactionRequestSchemaQrc721
genPrepareBurnTransactionRequestSchemaQrc721 n =
  PrepareBurnTransactionRequestSchemaQrc721
    <$> arbitraryReduced n -- prepareBurnTransactionRequestSchemaQrc721Location :: Location
    <*> arbitrary -- prepareBurnTransactionRequestSchemaQrc721Type :: E'Type
    <*> arbitrary -- prepareBurnTransactionRequestSchemaQrc721Urgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareBurnTransactionRequestSchemaQrc721RequestDetails :: Maybe BurnRequestDetailsSchemaQrc721
  
instance Arbitrary PrepareCreditTransactionRequestSchema where
  arbitrary = sized genPrepareCreditTransactionRequestSchema

genPrepareCreditTransactionRequestSchema :: Int -> Gen PrepareCreditTransactionRequestSchema
genPrepareCreditTransactionRequestSchema n =
  PrepareCreditTransactionRequestSchema
    <$> arbitraryReduced n -- prepareCreditTransactionRequestSchemaLocation :: Location
    <*> arbitrary -- prepareCreditTransactionRequestSchemaType :: E'Type
    <*> arbitrary -- prepareCreditTransactionRequestSchemaUrgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareCreditTransactionRequestSchemaRequestDetails :: Maybe CreditRequestDetailsSchema
  
instance Arbitrary PrepareMintTransactionRequestSchemaQrc20 where
  arbitrary = sized genPrepareMintTransactionRequestSchemaQrc20

genPrepareMintTransactionRequestSchemaQrc20 :: Int -> Gen PrepareMintTransactionRequestSchemaQrc20
genPrepareMintTransactionRequestSchemaQrc20 n =
  PrepareMintTransactionRequestSchemaQrc20
    <$> arbitraryReduced n -- prepareMintTransactionRequestSchemaQrc20Location :: Location
    <*> arbitrary -- prepareMintTransactionRequestSchemaQrc20Type :: E'Type
    <*> arbitrary -- prepareMintTransactionRequestSchemaQrc20Urgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareMintTransactionRequestSchemaQrc20RequestDetails :: Maybe MintRequestDetailsSchemaQrc20
  
instance Arbitrary PrepareMintTransactionRequestSchemaQrc721 where
  arbitrary = sized genPrepareMintTransactionRequestSchemaQrc721

genPrepareMintTransactionRequestSchemaQrc721 :: Int -> Gen PrepareMintTransactionRequestSchemaQrc721
genPrepareMintTransactionRequestSchemaQrc721 n =
  PrepareMintTransactionRequestSchemaQrc721
    <$> arbitraryReduced n -- prepareMintTransactionRequestSchemaQrc721Location :: Location
    <*> arbitrary -- prepareMintTransactionRequestSchemaQrc721Type :: E'Type
    <*> arbitrary -- prepareMintTransactionRequestSchemaQrc721Urgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareMintTransactionRequestSchemaQrc721RequestDetails :: Maybe MintRequestDetailsSchemaQrc721
  
instance Arbitrary PrepareNativeTransactionRequestSchema where
  arbitrary = sized genPrepareNativeTransactionRequestSchema

genPrepareNativeTransactionRequestSchema :: Int -> Gen PrepareNativeTransactionRequestSchema
genPrepareNativeTransactionRequestSchema n =
  PrepareNativeTransactionRequestSchema
    <$> arbitraryReducedMaybe n -- prepareNativeTransactionRequestSchemaType :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareNativeTransactionRequestSchemaLocation :: Maybe Location
  
instance Arbitrary PreparePaymentTransactionRequestSchema where
  arbitrary = sized genPreparePaymentTransactionRequestSchema

genPreparePaymentTransactionRequestSchema :: Int -> Gen PreparePaymentTransactionRequestSchema
genPreparePaymentTransactionRequestSchema n =
  PreparePaymentTransactionRequestSchema
    <$> arbitraryReduced n -- preparePaymentTransactionRequestSchemaLocation :: Location
    <*> arbitrary -- preparePaymentTransactionRequestSchemaType :: E'Type
    <*> arbitrary -- preparePaymentTransactionRequestSchemaUrgency :: E'Urgency
    <*> arbitraryReduced n -- preparePaymentTransactionRequestSchemaRequestDetails :: PaymentRequestDetailsSchema
  
instance Arbitrary PrepareRemoveSecondaryAccountTransactionRequestSchema where
  arbitrary = sized genPrepareRemoveSecondaryAccountTransactionRequestSchema

genPrepareRemoveSecondaryAccountTransactionRequestSchema :: Int -> Gen PrepareRemoveSecondaryAccountTransactionRequestSchema
genPrepareRemoveSecondaryAccountTransactionRequestSchema n =
  PrepareRemoveSecondaryAccountTransactionRequestSchema
    <$> arbitraryReducedMaybe n -- prepareRemoveSecondaryAccountTransactionRequestSchemaRemoveSecondaryAccountDetailsSchema :: Maybe RemoveSecondaryAccountDetailsSchema
  
instance Arbitrary PrepareRequest where
  arbitrary = sized genPrepareRequest

genPrepareRequest :: Int -> Gen PrepareRequest
genPrepareRequest n =
  PrepareRequest
    <$> arbitraryReducedMaybe n -- prepareRequestApiLookupPath :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestSmartContractTag :: Maybe [SmartContractTag]
    <*> arbitraryReducedMaybe n -- prepareRequestUrgency :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestRequestDetails :: Maybe PrepareRequestDetails
    <*> arbitraryReducedMaybe n -- prepareRequestSmartContractAddress :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- prepareRequestType :: Maybe Text
  
instance Arbitrary PrepareRequestDetails where
  arbitrary = sized genPrepareRequestDetails

genPrepareRequestDetails :: Int -> Gen PrepareRequestDetails
genPrepareRequestDetails n =
  PrepareRequestDetails
    <$> arbitraryReducedMaybe n -- prepareRequestDetailsMandate :: Maybe [Mandate]
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsAliasDetails :: Maybe AliasDetails
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsPagination :: Maybe Pagination
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsOrigin :: Maybe [Origin]
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsDestination :: Maybe [Destination]
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsBlockSearchType :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsPayer :: Maybe [Payer]
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsCollector :: Maybe Collector
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsPayee :: Maybe [Payee]
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsAdditionalOwner :: Maybe AdditionalOwner
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsOwner :: Maybe Owner
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsCreator :: Maybe Creator
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsReceiver :: Maybe [Receiver]
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsTokenId :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsLockDetails :: Maybe LockDetails
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsBlockId :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsTokenUnit :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsBeneficiary :: Maybe Beneficiary
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsSender :: Maybe [Sender]
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsAccountDetails :: Maybe AccountDetails
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsOverledgerSigningType :: Maybe Text
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsTotalPaymentAmount :: Maybe Payment
    <*> arbitraryReducedMaybe n -- prepareRequestDetailsSignerAccount :: Maybe SignerAccount
  
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
    <$> arbitraryReduced n -- prepareTransactionSmartContractInvokeRequestSchemaLocation :: Location
    <*> arbitrary -- prepareTransactionSmartContractInvokeRequestSchemaType :: E'Type
    <*> arbitrary -- prepareTransactionSmartContractInvokeRequestSchemaUrgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareTransactionSmartContractInvokeRequestSchemaRequestDetails :: Maybe SmartContractInvokeRequestDetailsSchema
  
instance Arbitrary PrepareTransferTransactionRequestSchema where
  arbitrary = sized genPrepareTransferTransactionRequestSchema

genPrepareTransferTransactionRequestSchema :: Int -> Gen PrepareTransferTransactionRequestSchema
genPrepareTransferTransactionRequestSchema n =
  PrepareTransferTransactionRequestSchema
    <$> arbitraryReduced n -- prepareTransferTransactionRequestSchemaLocation :: Location
    <*> arbitrary -- prepareTransferTransactionRequestSchemaType :: E'Type
    <*> arbitrary -- prepareTransferTransactionRequestSchemaUrgency :: E'Urgency
    <*> arbitraryReducedMaybe n -- prepareTransferTransactionRequestSchemaRequestDetails :: Maybe TransferRequestDetailsSchema
  
instance Arbitrary ReadAccountBalanceRequestSchema where
  arbitrary = sized genReadAccountBalanceRequestSchema

genReadAccountBalanceRequestSchema :: Int -> Gen ReadAccountBalanceRequestSchema
genReadAccountBalanceRequestSchema n =
  ReadAccountBalanceRequestSchema
    <$> arbitraryReducedMaybeValue n -- readAccountBalanceRequestSchemaRequestDetails :: Maybe A.Value
    <*> arbitraryReducedMaybe n -- readAccountBalanceRequestSchemaLocation :: Maybe Location
  
instance Arbitrary ReadApprovedAccountAllowanceRequestSchema where
  arbitrary = sized genReadApprovedAccountAllowanceRequestSchema

genReadApprovedAccountAllowanceRequestSchema :: Int -> Gen ReadApprovedAccountAllowanceRequestSchema
genReadApprovedAccountAllowanceRequestSchema n =
  ReadApprovedAccountAllowanceRequestSchema
    <$> arbitraryReducedMaybeValue n -- readApprovedAccountAllowanceRequestSchemaRequestDetails :: Maybe A.Value
    <*> arbitraryReducedMaybe n -- readApprovedAccountAllowanceRequestSchemaLocation :: Maybe Location
  
instance Arbitrary ReadApprovedAccountRequestDetailsSchema where
  arbitrary = sized genReadApprovedAccountRequestDetailsSchema

genReadApprovedAccountRequestDetailsSchema :: Int -> Gen ReadApprovedAccountRequestDetailsSchema
genReadApprovedAccountRequestDetailsSchema n =
  ReadApprovedAccountRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- readApprovedAccountRequestDetailsSchemaTokenId :: Maybe Text
    <*> arbitraryReducedMaybe n -- readApprovedAccountRequestDetailsSchemaTokenName :: Maybe Text
  
instance Arbitrary ReadApprovedAccountRequestSchema where
  arbitrary = sized genReadApprovedAccountRequestSchema

genReadApprovedAccountRequestSchema :: Int -> Gen ReadApprovedAccountRequestSchema
genReadApprovedAccountRequestSchema n =
  ReadApprovedAccountRequestSchema
    <$> arbitraryReducedMaybe n -- readApprovedAccountRequestSchemaRequestDetails :: Maybe ReadApprovedAccountRequestDetailsSchema
    <*> arbitraryReducedMaybe n -- readApprovedAccountRequestSchemaLocation :: Maybe Location
  
instance Arbitrary ReadBalanceRequestDetailsSchema where
  arbitrary = sized genReadBalanceRequestDetailsSchema

genReadBalanceRequestDetailsSchema :: Int -> Gen ReadBalanceRequestDetailsSchema
genReadBalanceRequestDetailsSchema n =
  ReadBalanceRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- readBalanceRequestDetailsSchemaTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- readBalanceRequestDetailsSchemaAccountId :: Maybe Text
  
instance Arbitrary ReadBalanceRequestSchema where
  arbitrary = sized genReadBalanceRequestSchema

genReadBalanceRequestSchema :: Int -> Gen ReadBalanceRequestSchema
genReadBalanceRequestSchema n =
  ReadBalanceRequestSchema
    <$> arbitraryReducedMaybe n -- readBalanceRequestSchemaRequestDetails :: Maybe ReadBalanceRequestDetailsSchema
    <*> arbitraryReducedMaybe n -- readBalanceRequestSchemaLocation :: Maybe Location
  
instance Arbitrary ReadContractOwnerRequestDetailsSchema where
  arbitrary = sized genReadContractOwnerRequestDetailsSchema

genReadContractOwnerRequestDetailsSchema :: Int -> Gen ReadContractOwnerRequestDetailsSchema
genReadContractOwnerRequestDetailsSchema n =
  ReadContractOwnerRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- readContractOwnerRequestDetailsSchemaTokenName :: Maybe Text
  
instance Arbitrary ReadContractOwnerRequestSchema where
  arbitrary = sized genReadContractOwnerRequestSchema

genReadContractOwnerRequestSchema :: Int -> Gen ReadContractOwnerRequestSchema
genReadContractOwnerRequestSchema n =
  ReadContractOwnerRequestSchema
    <$> arbitraryReducedMaybe n -- readContractOwnerRequestSchemaRequestDetails :: Maybe ReadContractOwnerRequestDetailsSchema
    <*> arbitraryReducedMaybe n -- readContractOwnerRequestSchemaLocation :: Maybe Location
  
instance Arbitrary ReadTokenOwnerRequestDetailsSchema where
  arbitrary = sized genReadTokenOwnerRequestDetailsSchema

genReadTokenOwnerRequestDetailsSchema :: Int -> Gen ReadTokenOwnerRequestDetailsSchema
genReadTokenOwnerRequestDetailsSchema n =
  ReadTokenOwnerRequestDetailsSchema
    <$> arbitraryReducedMaybe n -- readTokenOwnerRequestDetailsSchemaTokenId :: Maybe Text
    <*> arbitraryReducedMaybe n -- readTokenOwnerRequestDetailsSchemaTokenName :: Maybe Text
  
instance Arbitrary ReadTokenOwnerRequestSchema where
  arbitrary = sized genReadTokenOwnerRequestSchema

genReadTokenOwnerRequestSchema :: Int -> Gen ReadTokenOwnerRequestSchema
genReadTokenOwnerRequestSchema n =
  ReadTokenOwnerRequestSchema
    <$> arbitraryReducedMaybe n -- readTokenOwnerRequestSchemaRequestDetails :: Maybe ReadTokenOwnerRequestDetailsSchema
    <*> arbitraryReducedMaybe n -- readTokenOwnerRequestSchemaLocation :: Maybe Location
  
instance Arbitrary Receiver where
  arbitrary = sized genReceiver

genReceiver :: Int -> Gen Receiver
genReceiver n =
  Receiver
    <$> arbitraryReducedMaybe n -- receiverAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- receiverTransfer :: Maybe Transfer
  
instance Arbitrary RemoveSecondaryAccountDetailsSchema where
  arbitrary = sized genRemoveSecondaryAccountDetailsSchema

genRemoveSecondaryAccountDetailsSchema :: Int -> Gen RemoveSecondaryAccountDetailsSchema
genRemoveSecondaryAccountDetailsSchema n =
  RemoveSecondaryAccountDetailsSchema
    <$> arbitraryReducedMaybe n -- removeSecondaryAccountDetailsSchemaOwner :: Maybe OwnerRemoveSecondarySchema
    <*> arbitraryReducedMaybe n -- removeSecondaryAccountDetailsSchemaAdditionalOwner :: Maybe AdditionalOwnerRemoveSecondarySchema
    <*> arbitraryReducedMaybe n -- removeSecondaryAccountDetailsSchemaMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- removeSecondaryAccountDetailsSchemaOverledgerSigningType :: Maybe Text
  
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
    <*> arbitraryReducedMaybe n -- resourceMonitoringDetailsTimestamp :: Maybe Text
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
    <$> arbitraryReducedMaybe n -- resourceMonitoringSubscriptionSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- resourceMonitoringSubscriptionType :: Maybe Text
    <*> arbitraryReducedMaybe n -- resourceMonitoringSubscriptionCallbackUrl :: Maybe Text
  
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
  
instance Arbitrary SecondaryAccountAdditionalOwnerSchema where
  arbitrary = sized genSecondaryAccountAdditionalOwnerSchema

genSecondaryAccountAdditionalOwnerSchema :: Int -> Gen SecondaryAccountAdditionalOwnerSchema
genSecondaryAccountAdditionalOwnerSchema n =
  SecondaryAccountAdditionalOwnerSchema
    <$> arbitraryReducedMaybe n -- secondaryAccountAdditionalOwnerSchemaAccountId :: Maybe Text
  
instance Arbitrary SecondaryAccountOwnerSchema where
  arbitrary = sized genSecondaryAccountOwnerSchema

genSecondaryAccountOwnerSchema :: Int -> Gen SecondaryAccountOwnerSchema
genSecondaryAccountOwnerSchema n =
  SecondaryAccountOwnerSchema
    <$> arbitraryReducedMaybe n -- secondaryAccountOwnerSchemaAccountId :: Maybe Text
    <*> arbitraryReducedMaybe n -- secondaryAccountOwnerSchemaUnit :: Maybe Text
  
instance Arbitrary Sender where
  arbitrary = sized genSender

genSender :: Int -> Gen Sender
genSender n =
  Sender
    <$> arbitraryReducedMaybe n -- senderAccountId :: Maybe Text
  
instance Arbitrary SignerAccount where
  arbitrary = sized genSignerAccount

genSignerAccount :: Int -> Gen SignerAccount
genSignerAccount n =
  SignerAccount
    <$> arbitraryReducedMaybe n -- signerAccountAccountId :: Maybe Text
  
instance Arbitrary SmartContract where
  arbitrary = sized genSmartContract

genSmartContract :: Int -> Gen SmartContract
genSmartContract n =
  SmartContract
    <$> arbitraryReducedMaybe n -- smartContractDetail :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractType :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractSmartContractId :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractFunction :: Maybe Function
    <*> arbitraryReducedMaybeValue n -- smartContractExtraFields :: Maybe A.Value
  
instance Arbitrary SmartContractDestinationSchema where
  arbitrary = sized genSmartContractDestinationSchema

genSmartContractDestinationSchema :: Int -> Gen SmartContractDestinationSchema
genSmartContractDestinationSchema n =
  SmartContractDestinationSchema
    <$> arbitraryReducedMaybe n -- smartContractDestinationSchemaDestinationId :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractDestinationSchemaSmartContract :: Maybe SmartContractSchema
    <*> arbitraryReducedMaybe n -- smartContractDestinationSchemaPayment :: Maybe SmartContractPaymentSchema
  
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
    <$> arbitraryReducedMaybe n -- smartContractInvokeRequestDetailsSchemaDestination :: Maybe [SmartContractDestinationSchema]
    <*> arbitraryReducedMaybe n -- smartContractInvokeRequestDetailsSchemaOrigin :: Maybe [SmartContractRequestDetailsOrigin]
  
instance Arbitrary SmartContractMonitoringDetailsSchema where
  arbitrary = sized genSmartContractMonitoringDetailsSchema

genSmartContractMonitoringDetailsSchema :: Int -> Gen SmartContractMonitoringDetailsSchema
genSmartContractMonitoringDetailsSchema n =
  SmartContractMonitoringDetailsSchema
    <$> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaSmartContractEventDetails :: Maybe ResourceMonitoringSmartContractEventDetails
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaSmartContractEventHistory :: Maybe [SmartContractEventHistory]
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaType :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaStatus :: Maybe Status
    <*> arbitraryReducedMaybe n -- smartContractMonitoringDetailsSchemaTimestamp :: Maybe Text
  
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
    <$> arbitraryReducedMaybe n -- smartContractReadFunctionSchemaName :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractReadFunctionSchemaFunctionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractReadFunctionSchemaInputParameters :: Maybe [SmartContractInputParameterSchema]
    <*> arbitraryReducedMaybe n -- smartContractReadFunctionSchemaOutputParameters :: Maybe [SmartContractInputParameterSchema]
  
instance Arbitrary SmartContractReadSchema where
  arbitrary = sized genSmartContractReadSchema

genSmartContractReadSchema :: Int -> Gen SmartContractReadSchema
genSmartContractReadSchema n =
  SmartContractReadSchema
    <$> arbitraryReducedMaybe n -- smartContractReadSchemaSmartContractId :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractReadSchemaFunction :: Maybe SmartContractReadFunctionSchema
  
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
    <$> arbitraryReducedMaybe n -- smartContractSearchSchemaSmartContractId :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractSearchSchemaFunction :: Maybe SmartContractSearchFunctionSchema
  
instance Arbitrary SmartContractTag where
  arbitrary = sized genSmartContractTag

genSmartContractTag :: Int -> Gen SmartContractTag
genSmartContractTag n =
  SmartContractTag
    <$> arbitraryReducedMaybe n -- smartContractTagName :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractTagFunctionName :: Maybe Text
    <*> arbitraryReducedMaybe n -- smartContractTagEventName :: Maybe Text
  
instance Arbitrary Status where
  arbitrary = sized genStatus

genStatus :: Int -> Gen Status
genStatus n =
  Status
    <$> arbitraryReducedMaybe n -- statusDescription :: Maybe Text
    <*> arbitraryReducedMaybe n -- statusCode :: Maybe Text
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
  
instance Arbitrary TierFunctionDTO where
  arbitrary = sized genTierFunctionDTO

genTierFunctionDTO :: Int -> Gen TierFunctionDTO
genTierFunctionDTO n =
  TierFunctionDTO
    <$> arbitraryReducedMaybe n -- tierFunctionDTOFunctionName :: Maybe Text
    <*> arbitraryReducedMaybe n -- tierFunctionDTOApi :: Maybe Text
  
instance Arbitrary TokenReadQRC20Response where
  arbitrary = sized genTokenReadQRC20Response

genTokenReadQRC20Response :: Int -> Gen TokenReadQRC20Response
genTokenReadQRC20Response n =
  TokenReadQRC20Response
    <$> arbitraryReducedMaybe n -- tokenReadQRC20ResponseResponseDetails :: Maybe [TokenReadResponseDetails]
    <*> arbitraryReducedMaybe n -- tokenReadQRC20ResponseRequestId :: Maybe Text
    <*> arbitraryReducedMaybe n -- tokenReadQRC20ResponseLocation :: Maybe Location
  
instance Arbitrary TokenReadQRC721Response where
  arbitrary = sized genTokenReadQRC721Response

genTokenReadQRC721Response :: Int -> Gen TokenReadQRC721Response
genTokenReadQRC721Response n =
  TokenReadQRC721Response
    <$> arbitraryReducedMaybe n -- tokenReadQRC721ResponseTokenName :: Maybe Text
    <*> arbitraryReducedMaybe n -- tokenReadQRC721ResponseResponseDetails :: Maybe TokenReadResponseDetails
    <*> arbitraryReducedMaybe n -- tokenReadQRC721ResponseLocation :: Maybe Location
    <*> arbitraryReducedMaybe n -- tokenReadQRC721ResponseRequestId :: Maybe Text
  
instance Arbitrary TokenReadResponseDetails where
  arbitrary = sized genTokenReadResponseDetails

genTokenReadResponseDetails :: Int -> Gen TokenReadResponseDetails
genTokenReadResponseDetails n =
  TokenReadResponseDetails
    <$> arbitraryReducedMaybe n -- tokenReadResponseDetailsName :: Maybe Text
    <*> arbitraryReducedMaybe n -- tokenReadResponseDetailsType :: Maybe Text
    <*> arbitraryReducedMaybeValue n -- tokenReadResponseDetailsValue :: Maybe A.Value
  
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
    <*> arbitraryReducedMaybeValue n -- transactionExtraFields :: Maybe A.Value
    <*> arbitraryReducedMaybeValue n -- transactionNativeData :: Maybe A.Value
  
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
    <$> arbitraryReducedMaybe n -- transferRequestDetailsSchemaDestination :: Maybe [DestinationTransferSchema]
    <*> arbitraryReducedMaybe n -- transferRequestDetailsSchemaMessage :: Maybe Text
    <*> arbitraryReducedMaybe n -- transferRequestDetailsSchemaOverledgerSigningType :: Maybe Text
    <*> arbitraryReducedMaybe n -- transferRequestDetailsSchemaOrigin :: Maybe [OriginTransferSchema]
  
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
    <$> arbitraryReducedMaybe n -- uTXODestinationDestinationId :: Maybe Text
    <*> arbitraryReducedMaybe n -- uTXODestinationSmartContract :: Maybe UTXOSmartContract
    <*> arbitraryReducedMaybe n -- uTXODestinationPayment :: Maybe Payment
  
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
    <$> arbitraryReducedMaybe n -- uTXOSmartContractType :: Maybe Text
    <*> arbitraryReducedMaybe n -- uTXOSmartContractDetail :: Maybe Text
    <*> arbitraryReducedMaybe n -- uTXOSmartContractExtraFields :: Maybe ExtraFields
  
instance Arbitrary UpdateAddressMonitoringSchema where
  arbitrary = sized genUpdateAddressMonitoringSchema

genUpdateAddressMonitoringSchema :: Int -> Gen UpdateAddressMonitoringSchema
genUpdateAddressMonitoringSchema n =
  UpdateAddressMonitoringSchema
    <$> arbitraryReducedMaybe n -- updateAddressMonitoringSchemaAddressMonitoringDetails :: Maybe ResourceMonitoringAddressDetails
    <*> arbitraryReducedMaybe n -- updateAddressMonitoringSchemaResourceMonitoring :: Maybe ResourceMonitoringDetails
  
instance Arbitrary UpdateWebhookSubscriptionRequestSchema where
  arbitrary = sized genUpdateWebhookSubscriptionRequestSchema

genUpdateWebhookSubscriptionRequestSchema :: Int -> Gen UpdateWebhookSubscriptionRequestSchema
genUpdateWebhookSubscriptionRequestSchema n =
  UpdateWebhookSubscriptionRequestSchema
    <$> arbitraryReducedMaybe n -- updateWebhookSubscriptionRequestSchemaStatusUpdate :: Maybe WebhookStatusUpdateSchema
    <*> arbitraryReducedMaybe n -- updateWebhookSubscriptionRequestSchemaCallbackUrl :: Maybe Text
  
instance Arbitrary Vout where
  arbitrary = sized genVout

genVout :: Int -> Gen Vout
genVout n =
  Vout
    <$> arbitraryReducedMaybe n -- voutScriptPubKey :: Maybe ScriptPubKey
    <*> arbitraryReducedMaybe n -- voutValue :: Maybe Double
    <*> arbitraryReducedMaybe n -- voutN :: Maybe Double
  
instance Arbitrary WebhookStatusUpdateSchema where
  arbitrary = sized genWebhookStatusUpdateSchema

genWebhookStatusUpdateSchema :: Int -> Gen WebhookStatusUpdateSchema
genWebhookStatusUpdateSchema n =
  WebhookStatusUpdateSchema
    <$> arbitraryReducedMaybe n -- webhookStatusUpdateSchemaValue :: Maybe Text
  
instance Arbitrary WebhookSubscriptionDetails where
  arbitrary = sized genWebhookSubscriptionDetails

genWebhookSubscriptionDetails :: Int -> Gen WebhookSubscriptionDetails
genWebhookSubscriptionDetails n =
  WebhookSubscriptionDetails
    <$> arbitraryReducedMaybe n -- webhookSubscriptionDetailsIds :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- webhookSubscriptionDetailsStatus :: Maybe Status
  
instance Arbitrary WebhookSubscriptionDetailsSchema where
  arbitrary = sized genWebhookSubscriptionDetailsSchema

genWebhookSubscriptionDetailsSchema :: Int -> Gen WebhookSubscriptionDetailsSchema
genWebhookSubscriptionDetailsSchema n =
  WebhookSubscriptionDetailsSchema
    <$> arbitraryReducedMaybe n -- webhookSubscriptionDetailsSchemaIds :: Maybe [Text]
    <*> arbitraryReducedMaybe n -- webhookSubscriptionDetailsSchemaStatus :: Maybe Status
  
instance Arbitrary WebhookSubscriptionStatusUpdateResponse where
  arbitrary = sized genWebhookSubscriptionStatusUpdateResponse

genWebhookSubscriptionStatusUpdateResponse :: Int -> Gen WebhookSubscriptionStatusUpdateResponse
genWebhookSubscriptionStatusUpdateResponse n =
  WebhookSubscriptionStatusUpdateResponse
    <$> arbitraryReducedMaybe n -- webhookSubscriptionStatusUpdateResponseSubscriptionDetails :: Maybe WebhookSubscriptionDetails
    <*> arbitraryReducedMaybe n -- webhookSubscriptionStatusUpdateResponseCallbackUrl :: Maybe Text
    <*> arbitraryReducedMaybe n -- webhookSubscriptionStatusUpdateResponseSubscriptionId :: Maybe Text
    <*> arbitraryReducedMaybe n -- webhookSubscriptionStatusUpdateResponseType :: Maybe Text
  



instance Arbitrary E'ContractType where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary E'OverledgerSigningType where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary E'Type where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary E'Urgency where
  arbitrary = arbitraryBoundedEnum

