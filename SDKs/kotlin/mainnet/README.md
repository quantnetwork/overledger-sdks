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
*AddressSearchApi* | [**executePreparedSearchRequestAddressBalance**](docs/AddressSearchApi.md#executepreparedsearchrequestaddressbalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
*AddressSearchApi* | [**executePreparedSearchRequestAddressSequence**](docs/AddressSearchApi.md#executepreparedsearchrequestaddresssequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
*AddressSearchApi* | [**prepareAddressBalanceSearchRequest**](docs/AddressSearchApi.md#prepareaddressbalancesearchrequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
*AddressSearchApi* | [**prepareAddressSequenceSearchRequest**](docs/AddressSearchApi.md#prepareaddresssequencesearchrequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.
*BlockSearchApi* | [**executePreparedSearchRequestBlock**](docs/BlockSearchApi.md#executepreparedsearchrequestblock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
*BlockSearchApi* | [**prepareSearchBlockByBlockId**](docs/BlockSearchApi.md#preparesearchblockbyblockid) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.
*CreateSubscriptionApi* | [**subscription**](docs/CreateSubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 
*CreateTransactionApi* | [**executePreparedRequestNativeTransaction**](docs/CreateTransactionApi.md#executepreparedrequestnativetransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
*CreateTransactionApi* | [**executePreparedRequestTransaction**](docs/CreateTransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on the DLT
*CreateTransactionApi* | [**prepareNativeTransaction**](docs/CreateTransactionApi.md#preparenativetransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
*CreateTransactionApi* | [**prepareTransactionRequest**](docs/CreateTransactionApi.md#preparetransactionrequest) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing
*MDappTransactionQueryApi* | [**getOvlTransactionByTxId**](docs/MDappTransactionQueryApi.md#getovltransactionbytxid) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
*MDappTransactionQueryApi* | [**getOvlTransactionsByClientId**](docs/MDappTransactionQueryApi.md#getovltransactionsbyclientid) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger
*ManageMonitoredResourcesApi* | [**deleteEventMonitoring**](docs/ManageMonitoredResourcesApi.md#deleteeventmonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
*ManageMonitoredResourcesApi* | [**deleteResourceMonitoringAddress**](docs/ManageMonitoredResourcesApi.md#deleteresourcemonitoringaddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
*ManageMonitoredResourcesApi* | [**getListOfAddresses**](docs/ManageMonitoredResourcesApi.md#getlistofaddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
*ManageMonitoredResourcesApi* | [**getListOfResources**](docs/ManageMonitoredResourcesApi.md#getlistofresources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
*ManageMonitoredResourcesApi* | [**getListOfSmartContractEvents**](docs/ManageMonitoredResourcesApi.md#getlistofsmartcontractevents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
*ManageMonitoredResourcesApi* | [**getMonitoredAddress**](docs/ManageMonitoredResourcesApi.md#getmonitoredaddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
*ManageMonitoredResourcesApi* | [**getMonitoredSmartContractEventDetails**](docs/ManageMonitoredResourcesApi.md#getmonitoredsmartcontracteventdetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
*ManageMonitoredResourcesApi* | [**updateEventMonitoring**](docs/ManageMonitoredResourcesApi.md#updateeventmonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
*ManageMonitoredResourcesApi* | [**updateResourceMonitoringAddress**](docs/ManageMonitoredResourcesApi.md#updateresourcemonitoringaddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address
*ManageSubscriptionApi* | [**deleteSubscription**](docs/ManageSubscriptionApi.md#deletesubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
*ManageSubscriptionApi* | [**listSubscriptions**](docs/ManageSubscriptionApi.md#listsubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
*ManageSubscriptionApi* | [**updateSubscription**](docs/ManageSubscriptionApi.md#updatesubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application
*MonitorAResourceApi* | [**resourceMonitoringAddress**](docs/MonitorAResourceApi.md#resourcemonitoringaddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
*MonitorAResourceApi* | [**trackAndSubscribeEvent**](docs/MonitorAResourceApi.md#trackandsubscribeevent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event
*SmartContractSearchApi* | [**executePreparedSearchRequest**](docs/SmartContractSearchApi.md#executepreparedsearchrequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
*SmartContractSearchApi* | [**prepareSmartContractQueryRequest**](docs/SmartContractSearchApi.md#preparesmartcontractqueryrequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT
*TransactionSearchApi* | [**executePreparedSearchRequestTransaction**](docs/TransactionSearchApi.md#executepreparedsearchrequesttransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
*TransactionSearchApi* | [**prepareSearchRequest**](docs/TransactionSearchApi.md#preparesearchrequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT
*UTXOStatusSearchApi* | [**executeUTXOPreparedSearchRequest**](docs/UTXOStatusSearchApi.md#executeutxopreparedsearchrequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
*UTXOStatusSearchApi* | [**prepareSearchUTXOState**](docs/UTXOStatusSearchApi.md#preparesearchutxostate) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.


<a name="documentation-for-models"></a>
## Documentation for Models

 - [org.openapitools.client.models.AddressBalanceResponse](docs/AddressBalanceResponse.md)
 - [org.openapitools.client.models.AddressMonitoringDetailsSchema](docs/AddressMonitoringDetailsSchema.md)
 - [org.openapitools.client.models.AddressMonitoringRequestSchema](docs/AddressMonitoringRequestSchema.md)
 - [org.openapitools.client.models.AddressMonitoringResponseSchema](docs/AddressMonitoringResponseSchema.md)
 - [org.openapitools.client.models.Block](docs/Block.md)
 - [org.openapitools.client.models.BlockHash](docs/BlockHash.md)
 - [org.openapitools.client.models.BlockSize](docs/BlockSize.md)
 - [org.openapitools.client.models.CreateSmartContractMonitoringSchema](docs/CreateSmartContractMonitoringSchema.md)
 - [org.openapitools.client.models.CreateSubscriptionRequestSchema](docs/CreateSubscriptionRequestSchema.md)
 - [org.openapitools.client.models.CreateSubscriptionResponseSchema](docs/CreateSubscriptionResponseSchema.md)
 - [org.openapitools.client.models.DeleteResourceMonitoringAddressSchema](docs/DeleteResourceMonitoringAddressSchema.md)
 - [org.openapitools.client.models.Destination](docs/Destination.md)
 - [org.openapitools.client.models.DestinationPaymentSchema](docs/DestinationPaymentSchema.md)
 - [org.openapitools.client.models.DestinationTransferSchema](docs/DestinationTransferSchema.md)
 - [org.openapitools.client.models.Error](docs/Error.md)
 - [org.openapitools.client.models.ErrorDetails](docs/ErrorDetails.md)
 - [org.openapitools.client.models.ErrorList](docs/ErrorList.md)
 - [org.openapitools.client.models.ExecuteSearchBalanceResponse](docs/ExecuteSearchBalanceResponse.md)
 - [org.openapitools.client.models.ExecuteSearchBlockResponse](docs/ExecuteSearchBlockResponse.md)
 - [org.openapitools.client.models.ExecuteSearchSequenceResponse](docs/ExecuteSearchSequenceResponse.md)
 - [org.openapitools.client.models.ExecuteSearchTransactionResponse](docs/ExecuteSearchTransactionResponse.md)
 - [org.openapitools.client.models.ExecuteSearchUTXOResponseSchema](docs/ExecuteSearchUTXOResponseSchema.md)
 - [org.openapitools.client.models.ExecuteSmartContractReadResponseSchema](docs/ExecuteSmartContractReadResponseSchema.md)
 - [org.openapitools.client.models.ExecuteTransactionRequest](docs/ExecuteTransactionRequest.md)
 - [org.openapitools.client.models.ExecuteTransactionResponse](docs/ExecuteTransactionResponse.md)
 - [org.openapitools.client.models.ExtraFields](docs/ExtraFields.md)
 - [org.openapitools.client.models.Fee](docs/Fee.md)
 - [org.openapitools.client.models.Function](docs/Function.md)
 - [org.openapitools.client.models.InternalServerErrorSchema](docs/InternalServerErrorSchema.md)
 - [org.openapitools.client.models.LinkedBlocks](docs/LinkedBlocks.md)
 - [org.openapitools.client.models.ListSubscriptionResponseSchema](docs/ListSubscriptionResponseSchema.md)
 - [org.openapitools.client.models.Location](docs/Location.md)
 - [org.openapitools.client.models.MonitorSmartContractEventParam](docs/MonitorSmartContractEventParam.md)
 - [org.openapitools.client.models.MonitorSmartContractRequestSchema](docs/MonitorSmartContractRequestSchema.md)
 - [org.openapitools.client.models.Origin](docs/Origin.md)
 - [org.openapitools.client.models.OriginPaymentSchema](docs/OriginPaymentSchema.md)
 - [org.openapitools.client.models.OriginTransferSchema](docs/OriginTransferSchema.md)
 - [org.openapitools.client.models.OverledgerTransactionResponseSchema](docs/OverledgerTransactionResponseSchema.md)
 - [org.openapitools.client.models.Parameter](docs/Parameter.md)
 - [org.openapitools.client.models.Payment](docs/Payment.md)
 - [org.openapitools.client.models.PaymentRequestDetailsSchema](docs/PaymentRequestDetailsSchema.md)
 - [org.openapitools.client.models.PaymentSchema](docs/PaymentSchema.md)
 - [org.openapitools.client.models.PrepareNativeTransactionRequestSchema](docs/PrepareNativeTransactionRequestSchema.md)
 - [org.openapitools.client.models.PreparePaymentTransactionRequestSchema](docs/PreparePaymentTransactionRequestSchema.md)
 - [org.openapitools.client.models.PrepareSearchResponseSchema](docs/PrepareSearchResponseSchema.md)
 - [org.openapitools.client.models.PrepareSearchSchema](docs/PrepareSearchSchema.md)
 - [org.openapitools.client.models.PrepareSearchSmartContractRequestSchema](docs/PrepareSearchSmartContractRequestSchema.md)
 - [org.openapitools.client.models.PrepareTransactionResponse](docs/PrepareTransactionResponse.md)
 - [org.openapitools.client.models.PrepareTransactionSmartContractInvokeRequestSchema](docs/PrepareTransactionSmartContractInvokeRequestSchema.md)
 - [org.openapitools.client.models.PrepareTransferTransactionRequestSchema](docs/PrepareTransferTransactionRequestSchema.md)
 - [org.openapitools.client.models.ResourceMonitoredAddressDetails](docs/ResourceMonitoredAddressDetails.md)
 - [org.openapitools.client.models.ResourceMonitoringAddressDetails](docs/ResourceMonitoringAddressDetails.md)
 - [org.openapitools.client.models.ResourceMonitoringAddressSchema](docs/ResourceMonitoringAddressSchema.md)
 - [org.openapitools.client.models.ResourceMonitoringDetails](docs/ResourceMonitoringDetails.md)
 - [org.openapitools.client.models.ResourceMonitoringSmartContractEventDetails](docs/ResourceMonitoringSmartContractEventDetails.md)
 - [org.openapitools.client.models.ResourceMonitoringSubscription](docs/ResourceMonitoringSubscription.md)
 - [org.openapitools.client.models.ResourceMonitoringSubscriptionDetails](docs/ResourceMonitoringSubscriptionDetails.md)
 - [org.openapitools.client.models.ScriptPubKey](docs/ScriptPubKey.md)
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
 - [org.openapitools.client.models.Status](docs/Status.md)
 - [org.openapitools.client.models.StatusUpdateMonitoringRequestSchema](docs/StatusUpdateMonitoringRequestSchema.md)
 - [org.openapitools.client.models.StatusUpdateSchema](docs/StatusUpdateSchema.md)
 - [org.openapitools.client.models.SubscriptionDeletionResponse](docs/SubscriptionDeletionResponse.md)
 - [org.openapitools.client.models.SubscriptionDetails](docs/SubscriptionDetails.md)
 - [org.openapitools.client.models.SubscriptionDetailsSchema](docs/SubscriptionDetailsSchema.md)
 - [org.openapitools.client.models.SubscriptionUpdateResponse](docs/SubscriptionUpdateResponse.md)
 - [org.openapitools.client.models.Transaction](docs/Transaction.md)
 - [org.openapitools.client.models.Transfer](docs/Transfer.md)
 - [org.openapitools.client.models.TransferRequestDetailsSchema](docs/TransferRequestDetailsSchema.md)
 - [org.openapitools.client.models.TransferSchema](docs/TransferSchema.md)
 - [org.openapitools.client.models.UTXODestination](docs/UTXODestination.md)
 - [org.openapitools.client.models.UTXONativeData](docs/UTXONativeData.md)
 - [org.openapitools.client.models.UTXOSmartContract](docs/UTXOSmartContract.md)
 - [org.openapitools.client.models.UTXOTimestampSchema](docs/UTXOTimestampSchema.md)
 - [org.openapitools.client.models.UpdateAddressMonitoringSchema](docs/UpdateAddressMonitoringSchema.md)
 - [org.openapitools.client.models.UpdateSubscriptionRequestSchema](docs/UpdateSubscriptionRequestSchema.md)
 - [org.openapitools.client.models.Vout](docs/Vout.md)


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
  - openid: Grants an application to use OIDC to verify the user&#39;s identity.
  - profile: Grants returning basic profile information.
  - overledger/read.scope: Grants read access to Overledger.
  - email: Grants returning the email claim, which contains the user&#39;s email address, and email_verified.

