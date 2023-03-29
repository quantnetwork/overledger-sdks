# org.openapitools.client - Kotlin client library for Quant Overledger API

## Requires

* Kotlin 1.4.30
* Gradle 6.8.3

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

This runs all tests and packages the library.

## Features/Implementation Notes

* Supports JSON inputs/outputs, File inputs, and Form inputs.
* Supports collection formats for query parameters: csv, tsv, ssv, pipes.
* Some Kotlin and Java types are fully qualified to avoid conflicts with types defined in OpenAPI definitions.
* Implementation of ApiClient is intended to reduce method counts, specifically to benefit Android targets.

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://api.overledger.io*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AddressSearchApi* | [**autoExecuteSearchAddressBalanceRequest**](docs/AddressSearchApi.md#autoexecutesearchaddressbalancerequest) | **POST** /v2/autoexecution/search/address/balance/{addressId} | Prepare and automatically execute a search for an address balance on a DLT.
*AddressSearchApi* | [**executePreparedSearchRequestAddressBalance**](docs/AddressSearchApi.md#executepreparedsearchrequestaddressbalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
*AddressSearchApi* | [**executePreparedSearchRequestAddressSequence**](docs/AddressSearchApi.md#executepreparedsearchrequestaddresssequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
*AddressSearchApi* | [**prepareAddressBalanceSearchRequest**](docs/AddressSearchApi.md#prepareaddressbalancesearchrequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
*AddressSearchApi* | [**prepareAddressSequenceSearchRequest**](docs/AddressSearchApi.md#prepareaddresssequencesearchrequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.
*AddressSearchApi* | [**prepareAddressSequenceSearchRequest1**](docs/AddressSearchApi.md#prepareaddresssequencesearchrequest1) | **POST** /v2/autoexecution/search/address/sequence/{addressId} | Prepare and automatically execute a search for an Address Sequence.
*BlockSearchApi* | [**autoExecuteSearchBlockRequest**](docs/BlockSearchApi.md#autoexecutesearchblockrequest) | **POST** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT.
*BlockSearchApi* | [**executePreparedSearchRequestBlock**](docs/BlockSearchApi.md#executepreparedsearchrequestblock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
*BlockSearchApi* | [**prepareSearchBlockByBlockId**](docs/BlockSearchApi.md#preparesearchblockbyblockid) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.
*CreateAQRC20CreditTransactionApi* | [**executePreparedRequestTransaction**](docs/CreateAQRC20CreditTransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAQRC20CreditTransactionApi* | [**prepareCreditRequest**](docs/CreateAQRC20CreditTransactionApi.md#preparecreditrequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing
*CreateAQRC20DebitTransactionApi* | [**executePreparedRequestTransaction**](docs/CreateAQRC20DebitTransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAQRC20DebitTransactionApi* | [**prepareDebitRequest**](docs/CreateAQRC20DebitTransactionApi.md#preparedebitrequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing
*CreateAQRC721TokenCollectionTransactionApi* | [**prepareCollectRequest**](docs/CreateAQRC721TokenCollectionTransactionApi.md#preparecollectrequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing
*CreateAQRC721TransferTransactionApi* | [**prepareTransactionRequest**](docs/CreateAQRC721TransferTransactionApi.md#preparetransactionrequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing
*CreateASubscriptionApi* | [**subscription**](docs/CreateASubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 
*CreateATransactionApi* | [**executePreparedRequestNativeTransaction**](docs/CreateATransactionApi.md#executepreparedrequestnativetransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
*CreateATransactionApi* | [**executePreparedRequestTransaction**](docs/CreateATransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateATransactionApi* | [**prepareNativeTransaction**](docs/CreateATransactionApi.md#preparenativetransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
*CreateATransactionApi* | [**prepareTransactionRequest1**](docs/CreateATransactionApi.md#preparetransactionrequest1) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing
*CreateAndPayFromAQRC20SharedAccountApi* | [**executePreparedRequestTransaction**](docs/CreateAndPayFromAQRC20SharedAccountApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAndPayFromAQRC20SharedAccountApi* | [**prepareSecondaryOwnerRequest**](docs/CreateAndPayFromAQRC20SharedAccountApi.md#preparesecondaryownerrequest) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account
*FungibleTokenControllerApi* | [**getToken**](docs/FungibleTokenControllerApi.md#gettoken) | **GET** /v2/token/fungible | 
*MDAppTransactionQueryApi* | [**getOvlTransactionByTxId**](docs/MDAppTransactionQueryApi.md#getovltransactionbytxid) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
*MDAppTransactionQueryApi* | [**getOvlTransactionsByClientId**](docs/MDAppTransactionQueryApi.md#getovltransactionsbyclientid) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger
*ManageMonitoredResourcesApi* | [**deleteEventMonitoring**](docs/ManageMonitoredResourcesApi.md#deleteeventmonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
*ManageMonitoredResourcesApi* | [**deleteResourceMonitoringAddress**](docs/ManageMonitoredResourcesApi.md#deleteresourcemonitoringaddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
*ManageMonitoredResourcesApi* | [**getListOfAddresses**](docs/ManageMonitoredResourcesApi.md#getlistofaddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
*ManageMonitoredResourcesApi* | [**getListOfResources**](docs/ManageMonitoredResourcesApi.md#getlistofresources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
*ManageMonitoredResourcesApi* | [**getListOfSmartContractEvents**](docs/ManageMonitoredResourcesApi.md#getlistofsmartcontractevents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
*ManageMonitoredResourcesApi* | [**getMonitoredAddress**](docs/ManageMonitoredResourcesApi.md#getmonitoredaddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
*ManageMonitoredResourcesApi* | [**getMonitoredSmartContractEventDetails**](docs/ManageMonitoredResourcesApi.md#getmonitoredsmartcontracteventdetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
*ManageMonitoredResourcesApi* | [**updateEventMonitoring**](docs/ManageMonitoredResourcesApi.md#updateeventmonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
*ManageMonitoredResourcesApi* | [**updateResourceMonitoringAddress**](docs/ManageMonitoredResourcesApi.md#updateresourcemonitoringaddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address
*ManageQRC20TokenSupplyApi* | [**executePreparedRequestTransaction**](docs/ManageQRC20TokenSupplyApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*ManageQRC20TokenSupplyApi* | [**prepareSupplyRequest1**](docs/ManageQRC20TokenSupplyApi.md#preparesupplyrequest1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply
*ManageQRC721TokenSupplyApi* | [**prepareSupplyRequest**](docs/ManageQRC721TokenSupplyApi.md#preparesupplyrequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply
*ManageSubscriptionsApi* | [**deleteSubscription**](docs/ManageSubscriptionsApi.md#deletesubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
*ManageSubscriptionsApi* | [**listSubscriptions**](docs/ManageSubscriptionsApi.md#listsubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
*ManageSubscriptionsApi* | [**updateSubscription**](docs/ManageSubscriptionsApi.md#updatesubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application
*MonitorAResourceApi* | [**resourceMonitoringAddress**](docs/MonitorAResourceApi.md#resourcemonitoringaddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
*MonitorAResourceApi* | [**trackAndSubscribeEvent**](docs/MonitorAResourceApi.md#trackandsubscribeevent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event
*RetrieveAccountBalanceForAQRC20TokenApi* | [**readQRC20SmartContractBalance**](docs/RetrieveAccountBalanceForAQRC20TokenApi.md#readqrc20smartcontractbalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account
*RetrieveApprovedAccountAllowanceForAQRC20TokenApi* | [**readApprovedDebitAmount**](docs/RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#readapproveddebitamount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit
*RetrieveApprovedAccountInformationForAQRC20TokenApi* | [**readQRC20SecondaryAccountOwner**](docs/RetrieveApprovedAccountInformationForAQRC20TokenApi.md#readqrc20secondaryaccountowner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
*RetrieveApprovedAccountInformationOfAQRC721TokenApi* | [**readQRC721SmartContractApprovedAccount**](docs/RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#readqrc721smartcontractapprovedaccount) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token
*RetrieveContractOwnerInformationOfAQRCTokenApi* | [**readQRCSmartContractOwner**](docs/RetrieveContractOwnerInformationOfAQRCTokenApi.md#readqrcsmartcontractowner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token
*RetrieveOwnerInformationForAQRC721TokenApi* | [**readQRC721SmartContractTokenOwner**](docs/RetrieveOwnerInformationForAQRC721TokenApi.md#readqrc721smartcontracttokenowner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token
*RetrieveSupplyInformationForAQRCTokenApi* | [**readQRC721SmartContractCurrentSupply**](docs/RetrieveSupplyInformationForAQRCTokenApi.md#readqrc721smartcontractcurrentsupply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply
*RetrieveTheCountOfQRC721TokensApi* | [**getTokenCount**](docs/RetrieveTheCountOfQRC721TokensApi.md#gettokencount) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account
*RetrieveURIInformationForAQRC721TokenApi* | [**readQRC721SmartContractUri**](docs/RetrieveURIInformationForAQRC721TokenApi.md#readqrc721smartcontracturi) | **POST** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token
*SmartContractSearchApi* | [**autoExecuteSearchSmartContractQueryRequest**](docs/SmartContractSearchApi.md#autoexecutesearchsmartcontractqueryrequest) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT.
*SmartContractSearchApi* | [**executePreparedSearchRequest**](docs/SmartContractSearchApi.md#executepreparedsearchrequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
*SmartContractSearchApi* | [**prepareSmartContractQueryRequest**](docs/SmartContractSearchApi.md#preparesmartcontractqueryrequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT
*SubscribeToQRC20AccountCreditPaymentsApi* | [**subscribeCreditEvent**](docs/SubscribeToQRC20AccountCreditPaymentsApi.md#subscribecreditevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account
*SubscribeToQRC20AccountDebitPaymentsApi* | [**subscribeQRC20DebitEvent**](docs/SubscribeToQRC20AccountDebitPaymentsApi.md#subscribeqrc20debitevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved
*SubscribeToQRC20SharedAccountUpdatesApi* | [**subscribeSecondaryOwnerEvent**](docs/SubscribeToQRC20SharedAccountUpdatesApi.md#subscribesecondaryownerevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account
*SubscribeToQRC20TokenSupplyChangesApi* | [**subscribeSupplyEvent**](docs/SubscribeToQRC20TokenSupplyChangesApi.md#subscribesupplyevent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token
*SubscribeToQRC721AssetCollectionUpdatesApi* | [**subscribeCollectEvent**](docs/SubscribeToQRC721AssetCollectionUpdatesApi.md#subscribecollectevent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected
*SubscribeToQRC721AssetTransfersApi* | [**subscribeTransferEvent**](docs/SubscribeToQRC721AssetTransfersApi.md#subscribetransferevent) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred
*SubscribeToQRC721SupplyChangeUpdatesApi* | [**subscribeSupplyEvent**](docs/SubscribeToQRC721SupplyChangeUpdatesApi.md#subscribesupplyevent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token
*SupportedFungibleTokensApi* | [**getTokens**](docs/SupportedFungibleTokensApi.md#gettokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens
*SupportedNonFungibleTokensApi* | [**getAllNonFungibleTokens**](docs/SupportedNonFungibleTokensApi.md#getallnonfungibletokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens
*TokenControllerApi* | [**getNonFungibleToken**](docs/TokenControllerApi.md#getnonfungibletoken) | **GET** /v2/nonfungibletoken | 
*TransactionSearchApi* | [**autoExecuteSearchTransactionRequest**](docs/TransactionSearchApi.md#autoexecutesearchtransactionrequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
*TransactionSearchApi* | [**executePreparedSearchRequestTransaction**](docs/TransactionSearchApi.md#executepreparedsearchrequesttransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
*TransactionSearchApi* | [**prepareSearchRequest**](docs/TransactionSearchApi.md#preparesearchrequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT
*UTXOStatusSearchApi* | [**autoExecuteSearchUtxoRequest**](docs/UTXOStatusSearchApi.md#autoexecutesearchutxorequest) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
*UTXOStatusSearchApi* | [**executeUTXOPreparedSearchRequest**](docs/UTXOStatusSearchApi.md#executeutxopreparedsearchrequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
*UTXOStatusSearchApi* | [**prepareSearchUTXOState**](docs/UTXOStatusSearchApi.md#preparesearchutxostate) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.


<a name="documentation-for-models"></a>
## Documentation for Models

 - [org.openapitools.client.models.AccountDetails](docs/AccountDetails.md)
 - [org.openapitools.client.models.AddSecondaryAccountRequestDetailsSchema](docs/AddSecondaryAccountRequestDetailsSchema.md)
 - [org.openapitools.client.models.AdditionalOwner](docs/AdditionalOwner.md)
 - [org.openapitools.client.models.AdditionalOwnerRemoveSecondarySchema](docs/AdditionalOwnerRemoveSecondarySchema.md)
 - [org.openapitools.client.models.AddressBalanceResponse](docs/AddressBalanceResponse.md)
 - [org.openapitools.client.models.AddressMonitoringDetailsSchema](docs/AddressMonitoringDetailsSchema.md)
 - [org.openapitools.client.models.AddressMonitoringRequestSchema](docs/AddressMonitoringRequestSchema.md)
 - [org.openapitools.client.models.AddressMonitoringResponseSchema](docs/AddressMonitoringResponseSchema.md)
 - [org.openapitools.client.models.AliasDetails](docs/AliasDetails.md)
 - [org.openapitools.client.models.ApproveRequestDetailsSchema](docs/ApproveRequestDetailsSchema.md)
 - [org.openapitools.client.models.AutoExecSearchAddressSequenceResponseSchema](docs/AutoExecSearchAddressSequenceResponseSchema.md)
 - [org.openapitools.client.models.AutoExecuteSearchAddressBalanceResponseSchema](docs/AutoExecuteSearchAddressBalanceResponseSchema.md)
 - [org.openapitools.client.models.AutoExecuteSearchBlockResponseSchema](docs/AutoExecuteSearchBlockResponseSchema.md)
 - [org.openapitools.client.models.AutoExecuteSearchUTXOResponseSchema](docs/AutoExecuteSearchUTXOResponseSchema.md)
 - [org.openapitools.client.models.Beneficiary](docs/Beneficiary.md)
 - [org.openapitools.client.models.BeneficiaryMintSchemaQrc20](docs/BeneficiaryMintSchemaQrc20.md)
 - [org.openapitools.client.models.BeneficiaryMintSchemaQrc721](docs/BeneficiaryMintSchemaQrc721.md)
 - [org.openapitools.client.models.Block](docs/Block.md)
 - [org.openapitools.client.models.BlockHash](docs/BlockHash.md)
 - [org.openapitools.client.models.BlockSize](docs/BlockSize.md)
 - [org.openapitools.client.models.Burn](docs/Burn.md)
 - [org.openapitools.client.models.BurnRequestDetailsSchema](docs/BurnRequestDetailsSchema.md)
 - [org.openapitools.client.models.BurnRequestDetailsSchemaQrc721](docs/BurnRequestDetailsSchemaQrc721.md)
 - [org.openapitools.client.models.BurnSchema](docs/BurnSchema.md)
 - [org.openapitools.client.models.Collector](docs/Collector.md)
 - [org.openapitools.client.models.CreateSmartContractMonitoringSchema](docs/CreateSmartContractMonitoringSchema.md)
 - [org.openapitools.client.models.CreateWebhookSubscriptionRequestSchema](docs/CreateWebhookSubscriptionRequestSchema.md)
 - [org.openapitools.client.models.CreateWebhookSubscriptionResponseSchema](docs/CreateWebhookSubscriptionResponseSchema.md)
 - [org.openapitools.client.models.Creator](docs/Creator.md)
 - [org.openapitools.client.models.CreatorMintSchema](docs/CreatorMintSchema.md)
 - [org.openapitools.client.models.CreditRequestDetailsSchema](docs/CreditRequestDetailsSchema.md)
 - [org.openapitools.client.models.DeleteResourceMonitoringAddressSchema](docs/DeleteResourceMonitoringAddressSchema.md)
 - [org.openapitools.client.models.Destination](docs/Destination.md)
 - [org.openapitools.client.models.DestinationPaymentSchema](docs/DestinationPaymentSchema.md)
 - [org.openapitools.client.models.DestinationTransferSchema](docs/DestinationTransferSchema.md)
 - [org.openapitools.client.models.Erc20DTO](docs/Erc20DTO.md)
 - [org.openapitools.client.models.Error](docs/Error.md)
 - [org.openapitools.client.models.ErrorDetails](docs/ErrorDetails.md)
 - [org.openapitools.client.models.ErrorList](docs/ErrorList.md)
 - [org.openapitools.client.models.ErrorResponseMessage](docs/ErrorResponseMessage.md)
 - [org.openapitools.client.models.EventSubscriptionResponse](docs/EventSubscriptionResponse.md)
 - [org.openapitools.client.models.EventSubscriptionResponseDetails](docs/EventSubscriptionResponseDetails.md)
 - [org.openapitools.client.models.ExecuteSearchBalanceResponse](docs/ExecuteSearchBalanceResponse.md)
 - [org.openapitools.client.models.ExecuteSearchBlockResponse](docs/ExecuteSearchBlockResponse.md)
 - [org.openapitools.client.models.ExecuteSearchSequenceResponse](docs/ExecuteSearchSequenceResponse.md)
 - [org.openapitools.client.models.ExecuteSearchTransactionResponse](docs/ExecuteSearchTransactionResponse.md)
 - [org.openapitools.client.models.ExecuteSearchUTXOResponse](docs/ExecuteSearchUTXOResponse.md)
 - [org.openapitools.client.models.ExecuteSearchUTXOResponseSchema](docs/ExecuteSearchUTXOResponseSchema.md)
 - [org.openapitools.client.models.ExecuteSmartContractReadResponseSchema](docs/ExecuteSmartContractReadResponseSchema.md)
 - [org.openapitools.client.models.ExecuteTransactionRequest](docs/ExecuteTransactionRequest.md)
 - [org.openapitools.client.models.ExecuteTransactionResponse](docs/ExecuteTransactionResponse.md)
 - [org.openapitools.client.models.ExtraFields](docs/ExtraFields.md)
 - [org.openapitools.client.models.Fee](docs/Fee.md)
 - [org.openapitools.client.models.Function](docs/Function.md)
 - [org.openapitools.client.models.FunctionDTO](docs/FunctionDTO.md)
 - [org.openapitools.client.models.FungibleTokenResponseDTO](docs/FungibleTokenResponseDTO.md)
 - [org.openapitools.client.models.InternalServerErrorSchema](docs/InternalServerErrorSchema.md)
 - [org.openapitools.client.models.LinkedBlocks](docs/LinkedBlocks.md)
 - [org.openapitools.client.models.ListWebhookSubscriptionResponseSchema](docs/ListWebhookSubscriptionResponseSchema.md)
 - [org.openapitools.client.models.Location](docs/Location.md)
 - [org.openapitools.client.models.LocationDTO](docs/LocationDTO.md)
 - [org.openapitools.client.models.LockDetails](docs/LockDetails.md)
 - [org.openapitools.client.models.Mandate](docs/Mandate.md)
 - [org.openapitools.client.models.Mint](docs/Mint.md)
 - [org.openapitools.client.models.MintRequestDetailsSchemaQrc20](docs/MintRequestDetailsSchemaQrc20.md)
 - [org.openapitools.client.models.MintRequestDetailsSchemaQrc721](docs/MintRequestDetailsSchemaQrc721.md)
 - [org.openapitools.client.models.MintSchemaQrc20](docs/MintSchemaQrc20.md)
 - [org.openapitools.client.models.MintSchemaQrc721](docs/MintSchemaQrc721.md)
 - [org.openapitools.client.models.MonitorSmartContractEventParam](docs/MonitorSmartContractEventParam.md)
 - [org.openapitools.client.models.MonitorSmartContractRequestSchema](docs/MonitorSmartContractRequestSchema.md)
 - [org.openapitools.client.models.NonFungibleTokenDTO](docs/NonFungibleTokenDTO.md)
 - [org.openapitools.client.models.NonFungibleTokenResponse](docs/NonFungibleTokenResponse.md)
 - [org.openapitools.client.models.Origin](docs/Origin.md)
 - [org.openapitools.client.models.OriginPaymentSchema](docs/OriginPaymentSchema.md)
 - [org.openapitools.client.models.OriginTransferSchema](docs/OriginTransferSchema.md)
 - [org.openapitools.client.models.OverledgerTransactionResponseSchema](docs/OverledgerTransactionResponseSchema.md)
 - [org.openapitools.client.models.Owner](docs/Owner.md)
 - [org.openapitools.client.models.OwnerBurnSchema](docs/OwnerBurnSchema.md)
 - [org.openapitools.client.models.OwnerRemoveSecondarySchema](docs/OwnerRemoveSecondarySchema.md)
 - [org.openapitools.client.models.Pagination](docs/Pagination.md)
 - [org.openapitools.client.models.Parameter](docs/Parameter.md)
 - [org.openapitools.client.models.Payee](docs/Payee.md)
 - [org.openapitools.client.models.PayeeCreditSchema](docs/PayeeCreditSchema.md)
 - [org.openapitools.client.models.Payer](docs/Payer.md)
 - [org.openapitools.client.models.PayerCreditSchema](docs/PayerCreditSchema.md)
 - [org.openapitools.client.models.Payment](docs/Payment.md)
 - [org.openapitools.client.models.PaymentRequestDetailsSchema](docs/PaymentRequestDetailsSchema.md)
 - [org.openapitools.client.models.PaymentSchema](docs/PaymentSchema.md)
 - [org.openapitools.client.models.PrepareAddSecondaryAccountRequestSchema](docs/PrepareAddSecondaryAccountRequestSchema.md)
 - [org.openapitools.client.models.PrepareAndExecuteBalanceDetails](docs/PrepareAndExecuteBalanceDetails.md)
 - [org.openapitools.client.models.PrepareAndExecuteOverledgerErrorResponse](docs/PrepareAndExecuteOverledgerErrorResponse.md)
 - [org.openapitools.client.models.PrepareAndExecuteSearchAddressBalanceResponse](docs/PrepareAndExecuteSearchAddressBalanceResponse.md)
 - [org.openapitools.client.models.PrepareAndExecuteTransactionResponse](docs/PrepareAndExecuteTransactionResponse.md)
 - [org.openapitools.client.models.PrepareApproveDebitTransactionRequestSchema](docs/PrepareApproveDebitTransactionRequestSchema.md)
 - [org.openapitools.client.models.PrepareBurnTransactionRequestSchema](docs/PrepareBurnTransactionRequestSchema.md)
 - [org.openapitools.client.models.PrepareBurnTransactionRequestSchemaQrc721](docs/PrepareBurnTransactionRequestSchemaQrc721.md)
 - [org.openapitools.client.models.PrepareCreditTransactionRequestSchema](docs/PrepareCreditTransactionRequestSchema.md)
 - [org.openapitools.client.models.PrepareMintTransactionRequestSchemaQrc20](docs/PrepareMintTransactionRequestSchemaQrc20.md)
 - [org.openapitools.client.models.PrepareMintTransactionRequestSchemaQrc721](docs/PrepareMintTransactionRequestSchemaQrc721.md)
 - [org.openapitools.client.models.PrepareNativeTransactionRequestSchema](docs/PrepareNativeTransactionRequestSchema.md)
 - [org.openapitools.client.models.PreparePaymentTransactionRequestSchema](docs/PreparePaymentTransactionRequestSchema.md)
 - [org.openapitools.client.models.PrepareRemoveSecondaryAccountTransactionRequestSchema](docs/PrepareRemoveSecondaryAccountTransactionRequestSchema.md)
 - [org.openapitools.client.models.PrepareRequest](docs/PrepareRequest.md)
 - [org.openapitools.client.models.PrepareRequestDetails](docs/PrepareRequestDetails.md)
 - [org.openapitools.client.models.PrepareSearchResponseSchema](docs/PrepareSearchResponseSchema.md)
 - [org.openapitools.client.models.PrepareSearchSchema](docs/PrepareSearchSchema.md)
 - [org.openapitools.client.models.PrepareSearchSmartContractRequestSchema](docs/PrepareSearchSmartContractRequestSchema.md)
 - [org.openapitools.client.models.PrepareTransactionResponse](docs/PrepareTransactionResponse.md)
 - [org.openapitools.client.models.PrepareTransactionSmartContractInvokeRequestSchema](docs/PrepareTransactionSmartContractInvokeRequestSchema.md)
 - [org.openapitools.client.models.PrepareTransferTransactionRequestSchema](docs/PrepareTransferTransactionRequestSchema.md)
 - [org.openapitools.client.models.ReadAccountBalanceRequestSchema](docs/ReadAccountBalanceRequestSchema.md)
 - [org.openapitools.client.models.ReadApprovedAccountAllowanceRequestSchema](docs/ReadApprovedAccountAllowanceRequestSchema.md)
 - [org.openapitools.client.models.ReadApprovedAccountRequestDetailsSchema](docs/ReadApprovedAccountRequestDetailsSchema.md)
 - [org.openapitools.client.models.ReadApprovedAccountRequestSchema](docs/ReadApprovedAccountRequestSchema.md)
 - [org.openapitools.client.models.ReadBalanceRequestDetailsSchema](docs/ReadBalanceRequestDetailsSchema.md)
 - [org.openapitools.client.models.ReadBalanceRequestSchema](docs/ReadBalanceRequestSchema.md)
 - [org.openapitools.client.models.ReadContractOwnerRequestDetailsSchema](docs/ReadContractOwnerRequestDetailsSchema.md)
 - [org.openapitools.client.models.ReadContractOwnerRequestSchema](docs/ReadContractOwnerRequestSchema.md)
 - [org.openapitools.client.models.ReadTokenOwnerRequestDetailsSchema](docs/ReadTokenOwnerRequestDetailsSchema.md)
 - [org.openapitools.client.models.ReadTokenOwnerRequestSchema](docs/ReadTokenOwnerRequestSchema.md)
 - [org.openapitools.client.models.Receiver](docs/Receiver.md)
 - [org.openapitools.client.models.RemoveSecondaryAccountDetailsSchema](docs/RemoveSecondaryAccountDetailsSchema.md)
 - [org.openapitools.client.models.ResourceMonitoredAddressDetails](docs/ResourceMonitoredAddressDetails.md)
 - [org.openapitools.client.models.ResourceMonitoringAddressDetails](docs/ResourceMonitoringAddressDetails.md)
 - [org.openapitools.client.models.ResourceMonitoringAddressSchema](docs/ResourceMonitoringAddressSchema.md)
 - [org.openapitools.client.models.ResourceMonitoringDetails](docs/ResourceMonitoringDetails.md)
 - [org.openapitools.client.models.ResourceMonitoringSmartContractEventDetails](docs/ResourceMonitoringSmartContractEventDetails.md)
 - [org.openapitools.client.models.ResourceMonitoringSubscription](docs/ResourceMonitoringSubscription.md)
 - [org.openapitools.client.models.ResourceMonitoringSubscriptionDetails](docs/ResourceMonitoringSubscriptionDetails.md)
 - [org.openapitools.client.models.ScriptPubKey](docs/ScriptPubKey.md)
 - [org.openapitools.client.models.SecondaryAccountAdditionalOwnerSchema](docs/SecondaryAccountAdditionalOwnerSchema.md)
 - [org.openapitools.client.models.SecondaryAccountOwnerSchema](docs/SecondaryAccountOwnerSchema.md)
 - [org.openapitools.client.models.Sender](docs/Sender.md)
 - [org.openapitools.client.models.SignerAccount](docs/SignerAccount.md)
 - [org.openapitools.client.models.SmartContract](docs/SmartContract.md)
 - [org.openapitools.client.models.SmartContractDestinationSchema](docs/SmartContractDestinationSchema.md)
 - [org.openapitools.client.models.SmartContractEventHistory](docs/SmartContractEventHistory.md)
 - [org.openapitools.client.models.SmartContractFunctionSchema](docs/SmartContractFunctionSchema.md)
 - [org.openapitools.client.models.SmartContractInputParameterSchema](docs/SmartContractInputParameterSchema.md)
 - [org.openapitools.client.models.SmartContractInvokeRequestDetailsSchema](docs/SmartContractInvokeRequestDetailsSchema.md)
 - [org.openapitools.client.models.SmartContractMonitoringDetailsSchema](docs/SmartContractMonitoringDetailsSchema.md)
 - [org.openapitools.client.models.SmartContractMonitoringSchema](docs/SmartContractMonitoringSchema.md)
 - [org.openapitools.client.models.SmartContractOutputParameterSchema](docs/SmartContractOutputParameterSchema.md)
 - [org.openapitools.client.models.SmartContractPaymentSchema](docs/SmartContractPaymentSchema.md)
 - [org.openapitools.client.models.SmartContractReadFunctionSchema](docs/SmartContractReadFunctionSchema.md)
 - [org.openapitools.client.models.SmartContractReadSchema](docs/SmartContractReadSchema.md)
 - [org.openapitools.client.models.SmartContractRequestDetailsOrigin](docs/SmartContractRequestDetailsOrigin.md)
 - [org.openapitools.client.models.SmartContractSchema](docs/SmartContractSchema.md)
 - [org.openapitools.client.models.SmartContractSearchDestinationSchema](docs/SmartContractSearchDestinationSchema.md)
 - [org.openapitools.client.models.SmartContractSearchFunctionSchema](docs/SmartContractSearchFunctionSchema.md)
 - [org.openapitools.client.models.SmartContractSearchRequestDetails](docs/SmartContractSearchRequestDetails.md)
 - [org.openapitools.client.models.SmartContractSearchSchema](docs/SmartContractSearchSchema.md)
 - [org.openapitools.client.models.SmartContractTag](docs/SmartContractTag.md)
 - [org.openapitools.client.models.Status](docs/Status.md)
 - [org.openapitools.client.models.StatusUpdateMonitoringRequestSchema](docs/StatusUpdateMonitoringRequestSchema.md)
 - [org.openapitools.client.models.StatusUpdateSchema](docs/StatusUpdateSchema.md)
 - [org.openapitools.client.models.TierFunctionDTO](docs/TierFunctionDTO.md)
 - [org.openapitools.client.models.TokenReadQRC20Response](docs/TokenReadQRC20Response.md)
 - [org.openapitools.client.models.TokenReadQRC721Response](docs/TokenReadQRC721Response.md)
 - [org.openapitools.client.models.TokenReadResponseDetails](docs/TokenReadResponseDetails.md)
 - [org.openapitools.client.models.Transaction](docs/Transaction.md)
 - [org.openapitools.client.models.Transfer](docs/Transfer.md)
 - [org.openapitools.client.models.TransferRequestDetailsSchema](docs/TransferRequestDetailsSchema.md)
 - [org.openapitools.client.models.TransferSchema](docs/TransferSchema.md)
 - [org.openapitools.client.models.UTXODestination](docs/UTXODestination.md)
 - [org.openapitools.client.models.UTXONativeData](docs/UTXONativeData.md)
 - [org.openapitools.client.models.UTXOSmartContract](docs/UTXOSmartContract.md)
 - [org.openapitools.client.models.UpdateAddressMonitoringSchema](docs/UpdateAddressMonitoringSchema.md)
 - [org.openapitools.client.models.UpdateWebhookSubscriptionRequestSchema](docs/UpdateWebhookSubscriptionRequestSchema.md)
 - [org.openapitools.client.models.Vout](docs/Vout.md)
 - [org.openapitools.client.models.WebhookStatusUpdateSchema](docs/WebhookStatusUpdateSchema.md)
 - [org.openapitools.client.models.WebhookSubscriptionDetails](docs/WebhookSubscriptionDetails.md)
 - [org.openapitools.client.models.WebhookSubscriptionDetailsSchema](docs/WebhookSubscriptionDetailsSchema.md)
 - [org.openapitools.client.models.WebhookSubscriptionStatusUpdateResponse](docs/WebhookSubscriptionStatusUpdateResponse.md)


<a name="documentation-for-authorization"></a>
## Documentation for Authorization

<a name="OAuth2_Security_Scheme"></a>
### OAuth2_Security_Scheme

- **Type**: OAuth
- **Flow**: application
- **Authorization URL**: 
- **Scopes**: 
  - aws.cognito.signin.user.admin: Grants access to all the User Pool APIs that can be accessed using access tokens alone.
  - phone: Grants returning the phone claim, which contains the user&#39;s phone number, and phone_number_verified.
  - overledger/read.scope: Grants read access to Overledger.
  - openid: Grants an application to use OIDC to verify the user&#39;s identity.
  - email: Grants returning the email claim, which contains the user&#39;s email address, and email_verified.
  - profile: Grants returning basic profile information.

