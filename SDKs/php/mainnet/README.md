# OpenAPIClient-php

Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

# Authentication

<!-- ReDoc-Inject: <security-definitions> -->


## Installation & Usage

### Requirements

PHP 7.3 and later.
Should also work with PHP 8.0 but has not been tested.

### Composer

To install the bindings via [Composer](https://getcomposer.org/), add the following to `composer.json`:

```json
{
  "repositories": [
    {
      "type": "vcs",
      "url": "https://github.com/GIT_USER_ID/GIT_REPO_ID.git"
    }
  ],
  "require": {
    "GIT_USER_ID/GIT_REPO_ID": "*@dev"
  }
}
```

Then run `composer install`

### Manual Installation

Download the files and include `autoload.php`:

```php
<?php
require_once('/path/to/OpenAPIClient-php/vendor/autoload.php');
```

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



// Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');


$apiInstance = new OpenAPI\Client\Api\AddressSearchApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$authorization = 'authorization_example'; // string
$address_id = 'address_id_example'; // string
$prepare_search_schema = {"location":{"technology":"Ethereum","network":"Ropsten Testnet"}}; // \OpenAPI\Client\Model\PrepareSearchSchema

try {
    $result = $apiInstance->autoExecuteSearchAddressBalanceRequest($authorization, $address_id, $prepare_search_schema);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling AddressSearchApi->autoExecuteSearchAddressBalanceRequest: ', $e->getMessage(), PHP_EOL;
}

```

## API Endpoints

All URIs are relative to *https://api.overledger.io*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AddressSearchApi* | [**autoExecuteSearchAddressBalanceRequest**](docs/Api/AddressSearchApi.md#autoexecutesearchaddressbalancerequest) | **POST** /v2/autoexecution/search/address/balance/{addressId} | Prepare and automatically execute a search for an address balance on a DLT.
*AddressSearchApi* | [**executePreparedSearchRequestAddressBalance**](docs/Api/AddressSearchApi.md#executepreparedsearchrequestaddressbalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
*AddressSearchApi* | [**executePreparedSearchRequestAddressSequence**](docs/Api/AddressSearchApi.md#executepreparedsearchrequestaddresssequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
*AddressSearchApi* | [**prepareAddressBalanceSearchRequest**](docs/Api/AddressSearchApi.md#prepareaddressbalancesearchrequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
*AddressSearchApi* | [**prepareAddressSequenceSearchRequest**](docs/Api/AddressSearchApi.md#prepareaddresssequencesearchrequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.
*AddressSearchApi* | [**prepareAddressSequenceSearchRequest1**](docs/Api/AddressSearchApi.md#prepareaddresssequencesearchrequest1) | **POST** /v2/autoexecution/search/address/sequence/{addressId} | Prepare and automatically execute a search for an Address Sequence.
*BlockSearchApi* | [**autoExecuteSearchBlockRequest**](docs/Api/BlockSearchApi.md#autoexecutesearchblockrequest) | **POST** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT.
*BlockSearchApi* | [**executePreparedSearchRequestBlock**](docs/Api/BlockSearchApi.md#executepreparedsearchrequestblock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
*BlockSearchApi* | [**prepareSearchBlockByBlockId**](docs/Api/BlockSearchApi.md#preparesearchblockbyblockid) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.
*CreateAQRC20CreditTransactionApi* | [**prepareCreditRequest**](docs/Api/CreateAQRC20CreditTransactionApi.md#preparecreditrequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing
*CreateAQRC20DebitTransactionApi* | [**prepareDebitRequest**](docs/Api/CreateAQRC20DebitTransactionApi.md#preparedebitrequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing
*CreateSubscriptionApi* | [**subscription**](docs/Api/CreateSubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource
*CreateTransactionApi* | [**executePreparedRequestNativeTransaction**](docs/Api/CreateTransactionApi.md#executepreparedrequestnativetransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
*CreateTransactionApi* | [**executePreparedRequestTransaction**](docs/Api/CreateTransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on the DLT
*CreateTransactionApi* | [**prepareNativeTransaction**](docs/Api/CreateTransactionApi.md#preparenativetransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
*CreateTransactionApi* | [**prepareTransactionRequest**](docs/Api/CreateTransactionApi.md#preparetransactionrequest) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing
*MDappTransactionQueryApi* | [**getOvlTransactionByTxId**](docs/Api/MDappTransactionQueryApi.md#getovltransactionbytxid) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
*MDappTransactionQueryApi* | [**getOvlTransactionsByClientId**](docs/Api/MDappTransactionQueryApi.md#getovltransactionsbyclientid) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger
*ManageMonitoredResourcesApi* | [**deleteEventMonitoring**](docs/Api/ManageMonitoredResourcesApi.md#deleteeventmonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
*ManageMonitoredResourcesApi* | [**deleteResourceMonitoringAddress**](docs/Api/ManageMonitoredResourcesApi.md#deleteresourcemonitoringaddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
*ManageMonitoredResourcesApi* | [**getListOfAddresses**](docs/Api/ManageMonitoredResourcesApi.md#getlistofaddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
*ManageMonitoredResourcesApi* | [**getListOfResources**](docs/Api/ManageMonitoredResourcesApi.md#getlistofresources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
*ManageMonitoredResourcesApi* | [**getListOfSmartContractEvents**](docs/Api/ManageMonitoredResourcesApi.md#getlistofsmartcontractevents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
*ManageMonitoredResourcesApi* | [**getMonitoredAddress**](docs/Api/ManageMonitoredResourcesApi.md#getmonitoredaddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
*ManageMonitoredResourcesApi* | [**getMonitoredSmartContractEventDetails**](docs/Api/ManageMonitoredResourcesApi.md#getmonitoredsmartcontracteventdetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
*ManageMonitoredResourcesApi* | [**updateEventMonitoring**](docs/Api/ManageMonitoredResourcesApi.md#updateeventmonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
*ManageMonitoredResourcesApi* | [**updateResourceMonitoringAddress**](docs/Api/ManageMonitoredResourcesApi.md#updateresourcemonitoringaddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address
*ManageSubscriptionApi* | [**deleteSubscription**](docs/Api/ManageSubscriptionApi.md#deletesubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
*ManageSubscriptionApi* | [**listSubscriptions**](docs/Api/ManageSubscriptionApi.md#listsubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
*ManageSubscriptionApi* | [**updateSubscription**](docs/Api/ManageSubscriptionApi.md#updatesubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application
*MonitorAResourceApi* | [**resourceMonitoringAddress**](docs/Api/MonitorAResourceApi.md#resourcemonitoringaddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
*MonitorAResourceApi* | [**trackAndSubscribeEvent**](docs/Api/MonitorAResourceApi.md#trackandsubscribeevent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event
*SmartContractSearchApi* | [**autoExecuteSearchSmartContractQueryRequest**](docs/Api/SmartContractSearchApi.md#autoexecutesearchsmartcontractqueryrequest) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT.
*SmartContractSearchApi* | [**executePreparedSearchRequest**](docs/Api/SmartContractSearchApi.md#executepreparedsearchrequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
*SmartContractSearchApi* | [**prepareSmartContractQueryRequest**](docs/Api/SmartContractSearchApi.md#preparesmartcontractqueryrequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT
*TransactionSearchApi* | [**autoExecuteSearchTransactionRequest**](docs/Api/TransactionSearchApi.md#autoexecutesearchtransactionrequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
*TransactionSearchApi* | [**executePreparedSearchRequestTransaction**](docs/Api/TransactionSearchApi.md#executepreparedsearchrequesttransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
*TransactionSearchApi* | [**prepareSearchRequest**](docs/Api/TransactionSearchApi.md#preparesearchrequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT
*UTXOStatusSearchApi* | [**autoExecuteSearchUtxoRequest**](docs/Api/UTXOStatusSearchApi.md#autoexecutesearchutxorequest) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
*UTXOStatusSearchApi* | [**executeUTXOPreparedSearchRequest**](docs/Api/UTXOStatusSearchApi.md#executeutxopreparedsearchrequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
*UTXOStatusSearchApi* | [**prepareSearchUTXOState**](docs/Api/UTXOStatusSearchApi.md#preparesearchutxostate) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.

## Models

- [AddressBalanceResponse](docs/Model/AddressBalanceResponse.md)
- [AddressMonitoringDetailsSchema](docs/Model/AddressMonitoringDetailsSchema.md)
- [AddressMonitoringRequestSchema](docs/Model/AddressMonitoringRequestSchema.md)
- [AddressMonitoringResponseSchema](docs/Model/AddressMonitoringResponseSchema.md)
- [ApproveRequestDetailsSchema](docs/Model/ApproveRequestDetailsSchema.md)
- [AutoExecSearchAddressSequenceResponseSchema](docs/Model/AutoExecSearchAddressSequenceResponseSchema.md)
- [AutoExecuteSearchAddressBalanceResponseSchema](docs/Model/AutoExecuteSearchAddressBalanceResponseSchema.md)
- [AutoExecuteSearchBlockResponseSchema](docs/Model/AutoExecuteSearchBlockResponseSchema.md)
- [AutoExecuteSearchUTXOResponseSchema](docs/Model/AutoExecuteSearchUTXOResponseSchema.md)
- [Block](docs/Model/Block.md)
- [BlockHash](docs/Model/BlockHash.md)
- [BlockSize](docs/Model/BlockSize.md)
- [CreateSmartContractMonitoringSchema](docs/Model/CreateSmartContractMonitoringSchema.md)
- [CreateSubscriptionRequestSchema](docs/Model/CreateSubscriptionRequestSchema.md)
- [CreateSubscriptionResponseSchema](docs/Model/CreateSubscriptionResponseSchema.md)
- [CreditRequestDetailsSchema](docs/Model/CreditRequestDetailsSchema.md)
- [DeleteResourceMonitoringAddressSchema](docs/Model/DeleteResourceMonitoringAddressSchema.md)
- [Destination](docs/Model/Destination.md)
- [DestinationPaymentSchema](docs/Model/DestinationPaymentSchema.md)
- [DestinationTransferSchema](docs/Model/DestinationTransferSchema.md)
- [Error](docs/Model/Error.md)
- [ErrorDetails](docs/Model/ErrorDetails.md)
- [ErrorList](docs/Model/ErrorList.md)
- [ExecuteSearchBalanceResponse](docs/Model/ExecuteSearchBalanceResponse.md)
- [ExecuteSearchBlockResponse](docs/Model/ExecuteSearchBlockResponse.md)
- [ExecuteSearchSequenceResponse](docs/Model/ExecuteSearchSequenceResponse.md)
- [ExecuteSearchTransactionResponse](docs/Model/ExecuteSearchTransactionResponse.md)
- [ExecuteSearchUTXOResponse](docs/Model/ExecuteSearchUTXOResponse.md)
- [ExecuteSearchUTXOResponseSchema](docs/Model/ExecuteSearchUTXOResponseSchema.md)
- [ExecuteSmartContractReadResponseSchema](docs/Model/ExecuteSmartContractReadResponseSchema.md)
- [ExecuteTransactionRequest](docs/Model/ExecuteTransactionRequest.md)
- [ExecuteTransactionResponse](docs/Model/ExecuteTransactionResponse.md)
- [ExtraFields](docs/Model/ExtraFields.md)
- [Fee](docs/Model/Fee.md)
- [InternalServerErrorSchema](docs/Model/InternalServerErrorSchema.md)
- [LinkedBlocks](docs/Model/LinkedBlocks.md)
- [ListSubscriptionResponseSchema](docs/Model/ListSubscriptionResponseSchema.md)
- [Location](docs/Model/Location.md)
- [ModelFunction](docs/Model/ModelFunction.md)
- [MonitorSmartContractEventParam](docs/Model/MonitorSmartContractEventParam.md)
- [MonitorSmartContractRequestSchema](docs/Model/MonitorSmartContractRequestSchema.md)
- [Origin](docs/Model/Origin.md)
- [OriginPaymentSchema](docs/Model/OriginPaymentSchema.md)
- [OriginTransferSchema](docs/Model/OriginTransferSchema.md)
- [OverledgerTransactionResponseSchema](docs/Model/OverledgerTransactionResponseSchema.md)
- [Parameter](docs/Model/Parameter.md)
- [PayeeCreditSchema](docs/Model/PayeeCreditSchema.md)
- [PayerCreditSchema](docs/Model/PayerCreditSchema.md)
- [Payment](docs/Model/Payment.md)
- [PaymentRequestDetailsSchema](docs/Model/PaymentRequestDetailsSchema.md)
- [PaymentSchema](docs/Model/PaymentSchema.md)
- [PrepareAndExecuteBalanceDetails](docs/Model/PrepareAndExecuteBalanceDetails.md)
- [PrepareAndExecuteOverledgerErrorResponse](docs/Model/PrepareAndExecuteOverledgerErrorResponse.md)
- [PrepareAndExecuteSearchAddressBalanceResponse](docs/Model/PrepareAndExecuteSearchAddressBalanceResponse.md)
- [PrepareAndExecuteTransactionResponse](docs/Model/PrepareAndExecuteTransactionResponse.md)
- [PrepareApproveDebitTransactionRequestSchema](docs/Model/PrepareApproveDebitTransactionRequestSchema.md)
- [PrepareCreditTransactionRequestSchema](docs/Model/PrepareCreditTransactionRequestSchema.md)
- [PrepareNativeTransactionRequestSchema](docs/Model/PrepareNativeTransactionRequestSchema.md)
- [PreparePaymentTransactionRequestSchema](docs/Model/PreparePaymentTransactionRequestSchema.md)
- [PrepareSearchResponseSchema](docs/Model/PrepareSearchResponseSchema.md)
- [PrepareSearchSchema](docs/Model/PrepareSearchSchema.md)
- [PrepareSearchSmartContractRequestSchema](docs/Model/PrepareSearchSmartContractRequestSchema.md)
- [PrepareTransactionResponse](docs/Model/PrepareTransactionResponse.md)
- [PrepareTransactionSmartContractInvokeRequestSchema](docs/Model/PrepareTransactionSmartContractInvokeRequestSchema.md)
- [PrepareTransferTransactionRequestSchema](docs/Model/PrepareTransferTransactionRequestSchema.md)
- [ResourceMonitoredAddressDetails](docs/Model/ResourceMonitoredAddressDetails.md)
- [ResourceMonitoringAddressDetails](docs/Model/ResourceMonitoringAddressDetails.md)
- [ResourceMonitoringAddressSchema](docs/Model/ResourceMonitoringAddressSchema.md)
- [ResourceMonitoringDetails](docs/Model/ResourceMonitoringDetails.md)
- [ResourceMonitoringSmartContractEventDetails](docs/Model/ResourceMonitoringSmartContractEventDetails.md)
- [ResourceMonitoringSubscription](docs/Model/ResourceMonitoringSubscription.md)
- [ResourceMonitoringSubscriptionDetails](docs/Model/ResourceMonitoringSubscriptionDetails.md)
- [ScriptPubKey](docs/Model/ScriptPubKey.md)
- [SmartContract](docs/Model/SmartContract.md)
- [SmartContractDestinationSchema](docs/Model/SmartContractDestinationSchema.md)
- [SmartContractEventHistory](docs/Model/SmartContractEventHistory.md)
- [SmartContractFunctionSchema](docs/Model/SmartContractFunctionSchema.md)
- [SmartContractInputParameterSchema](docs/Model/SmartContractInputParameterSchema.md)
- [SmartContractInvokeRequestDetailsSchema](docs/Model/SmartContractInvokeRequestDetailsSchema.md)
- [SmartContractMonitoringDetailsSchema](docs/Model/SmartContractMonitoringDetailsSchema.md)
- [SmartContractMonitoringSchema](docs/Model/SmartContractMonitoringSchema.md)
- [SmartContractOutputParameterSchema](docs/Model/SmartContractOutputParameterSchema.md)
- [SmartContractPaymentSchema](docs/Model/SmartContractPaymentSchema.md)
- [SmartContractReadFunctionSchema](docs/Model/SmartContractReadFunctionSchema.md)
- [SmartContractReadSchema](docs/Model/SmartContractReadSchema.md)
- [SmartContractRequestDetailsOrigin](docs/Model/SmartContractRequestDetailsOrigin.md)
- [SmartContractSchema](docs/Model/SmartContractSchema.md)
- [SmartContractSearchDestinationSchema](docs/Model/SmartContractSearchDestinationSchema.md)
- [SmartContractSearchFunctionSchema](docs/Model/SmartContractSearchFunctionSchema.md)
- [SmartContractSearchRequestDetails](docs/Model/SmartContractSearchRequestDetails.md)
- [SmartContractSearchSchema](docs/Model/SmartContractSearchSchema.md)
- [Status](docs/Model/Status.md)
- [StatusUpdateMonitoringRequestSchema](docs/Model/StatusUpdateMonitoringRequestSchema.md)
- [StatusUpdateSchema](docs/Model/StatusUpdateSchema.md)
- [SubscriptionDeletionResponse](docs/Model/SubscriptionDeletionResponse.md)
- [SubscriptionDetails](docs/Model/SubscriptionDetails.md)
- [SubscriptionDetailsSchema](docs/Model/SubscriptionDetailsSchema.md)
- [SubscriptionUpdateResponse](docs/Model/SubscriptionUpdateResponse.md)
- [Transaction](docs/Model/Transaction.md)
- [Transfer](docs/Model/Transfer.md)
- [TransferRequestDetailsSchema](docs/Model/TransferRequestDetailsSchema.md)
- [TransferSchema](docs/Model/TransferSchema.md)
- [UTXODestination](docs/Model/UTXODestination.md)
- [UTXONativeData](docs/Model/UTXONativeData.md)
- [UTXOSmartContract](docs/Model/UTXOSmartContract.md)
- [UTXOTimestampSchema](docs/Model/UTXOTimestampSchema.md)
- [UpdateAddressMonitoringSchema](docs/Model/UpdateAddressMonitoringSchema.md)
- [UpdateSubscriptionRequestSchema](docs/Model/UpdateSubscriptionRequestSchema.md)
- [Vout](docs/Model/Vout.md)

## Authorization

### OAuth2_Security_Scheme

- **Type**: `OAuth`
- **Flow**: `application`
- **Authorization URL**: ``
- **Scopes**: 
    - **aws.cognito.signin.user.admin**: Grants access to all the User Pool APIs that can be accessed using access tokens alone.
    - **phone**: Grants returning the phone claim, which contains the user's phone number, and phone_number_verified.
    - **openid**: Grants an application to use OIDC to verify the user's identity.
    - **profile**: Grants returning basic profile information.
    - **overledger/read.scope**: Grants read access to Overledger.
    - **email**: Grants returning the email claim, which contains the user's email address, and email_verified.

## Tests

To run the tests, use:

```bash
composer install
vendor/bin/phpunit
```

## Author



## About this package

This PHP package is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: `2.0`
- Build package: `org.openapitools.codegen.languages.PhpClientCodegen`
