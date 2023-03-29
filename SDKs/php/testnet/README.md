# OpenAPIClient-php

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation


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

All URIs are relative to *https://api.sandbox.overledger.io*

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
*CreateAQRC20CreditTransactionApi* | [**executePreparedRequestTransaction**](docs/Api/CreateAQRC20CreditTransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAQRC20CreditTransactionApi* | [**prepareCreditRequest**](docs/Api/CreateAQRC20CreditTransactionApi.md#preparecreditrequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing
*CreateAQRC20DebitTransactionApi* | [**executePreparedRequestTransaction**](docs/Api/CreateAQRC20DebitTransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAQRC20DebitTransactionApi* | [**prepareDebitRequest**](docs/Api/CreateAQRC20DebitTransactionApi.md#preparedebitrequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing
*CreateAQRC721TokenCollectionTransactionApi* | [**prepareCollectRequest**](docs/Api/CreateAQRC721TokenCollectionTransactionApi.md#preparecollectrequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing
*CreateAQRC721TransferTransactionApi* | [**prepareTransactionRequest**](docs/Api/CreateAQRC721TransferTransactionApi.md#preparetransactionrequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing
*CreateASubscriptionApi* | [**subscription**](docs/Api/CreateASubscriptionApi.md#subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource
*CreateATransactionApi* | [**executePreparedRequestNativeTransaction**](docs/Api/CreateATransactionApi.md#executepreparedrequestnativetransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
*CreateATransactionApi* | [**executePreparedRequestTransaction**](docs/Api/CreateATransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateATransactionApi* | [**prepareNativeTransaction**](docs/Api/CreateATransactionApi.md#preparenativetransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
*CreateATransactionApi* | [**prepareTransactionRequest1**](docs/Api/CreateATransactionApi.md#preparetransactionrequest1) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing
*CreateAndPayFromAQRC20SharedAccountApi* | [**executePreparedRequestTransaction**](docs/Api/CreateAndPayFromAQRC20SharedAccountApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAndPayFromAQRC20SharedAccountApi* | [**prepareSecondaryOwnerRequest**](docs/Api/CreateAndPayFromAQRC20SharedAccountApi.md#preparesecondaryownerrequest) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account
*FungibleTokenControllerApi* | [**getToken**](docs/Api/FungibleTokenControllerApi.md#gettoken) | **GET** /v2/token/fungible | 
*MDAppTransactionQueryApi* | [**getOvlTransactionByTxId**](docs/Api/MDAppTransactionQueryApi.md#getovltransactionbytxid) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
*MDAppTransactionQueryApi* | [**getOvlTransactionsByClientId**](docs/Api/MDAppTransactionQueryApi.md#getovltransactionsbyclientid) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger
*ManageMonitoredResourcesApi* | [**deleteEventMonitoring**](docs/Api/ManageMonitoredResourcesApi.md#deleteeventmonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
*ManageMonitoredResourcesApi* | [**deleteResourceMonitoringAddress**](docs/Api/ManageMonitoredResourcesApi.md#deleteresourcemonitoringaddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
*ManageMonitoredResourcesApi* | [**getListOfAddresses**](docs/Api/ManageMonitoredResourcesApi.md#getlistofaddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
*ManageMonitoredResourcesApi* | [**getListOfResources**](docs/Api/ManageMonitoredResourcesApi.md#getlistofresources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
*ManageMonitoredResourcesApi* | [**getListOfSmartContractEvents**](docs/Api/ManageMonitoredResourcesApi.md#getlistofsmartcontractevents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
*ManageMonitoredResourcesApi* | [**getMonitoredAddress**](docs/Api/ManageMonitoredResourcesApi.md#getmonitoredaddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
*ManageMonitoredResourcesApi* | [**getMonitoredSmartContractEventDetails**](docs/Api/ManageMonitoredResourcesApi.md#getmonitoredsmartcontracteventdetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
*ManageMonitoredResourcesApi* | [**updateEventMonitoring**](docs/Api/ManageMonitoredResourcesApi.md#updateeventmonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
*ManageMonitoredResourcesApi* | [**updateResourceMonitoringAddress**](docs/Api/ManageMonitoredResourcesApi.md#updateresourcemonitoringaddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address
*ManageQRC20TokenSupplyApi* | [**executePreparedRequestTransaction**](docs/Api/ManageQRC20TokenSupplyApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*ManageQRC20TokenSupplyApi* | [**prepareSupplyRequest1**](docs/Api/ManageQRC20TokenSupplyApi.md#preparesupplyrequest1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply
*ManageQRC721TokenSupplyApi* | [**prepareSupplyRequest**](docs/Api/ManageQRC721TokenSupplyApi.md#preparesupplyrequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply
*ManageSubscriptionsApi* | [**deleteSubscription**](docs/Api/ManageSubscriptionsApi.md#deletesubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
*ManageSubscriptionsApi* | [**listSubscriptions**](docs/Api/ManageSubscriptionsApi.md#listsubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
*ManageSubscriptionsApi* | [**updateSubscription**](docs/Api/ManageSubscriptionsApi.md#updatesubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application
*MonitorAResourceApi* | [**resourceMonitoringAddress**](docs/Api/MonitorAResourceApi.md#resourcemonitoringaddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
*MonitorAResourceApi* | [**trackAndSubscribeEvent**](docs/Api/MonitorAResourceApi.md#trackandsubscribeevent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event
*RetrieveAccountBalanceForAQRC20TokenApi* | [**readQRC20SmartContractBalance**](docs/Api/RetrieveAccountBalanceForAQRC20TokenApi.md#readqrc20smartcontractbalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account
*RetrieveApprovedAccountAllowanceForAQRC20TokenApi* | [**readApprovedDebitAmount**](docs/Api/RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#readapproveddebitamount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit
*RetrieveApprovedAccountInformationForAQRC20TokenApi* | [**readQRC20SecondaryAccountOwner**](docs/Api/RetrieveApprovedAccountInformationForAQRC20TokenApi.md#readqrc20secondaryaccountowner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
*RetrieveApprovedAccountInformationOfAQRC721TokenApi* | [**readQRC721SmartContractApprovedAccount**](docs/Api/RetrieveApprovedAccountInformationOfAQRC721TokenApi.md#readqrc721smartcontractapprovedaccount) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token
*RetrieveContractOwnerInformationOfAQRCTokenApi* | [**readQRCSmartContractOwner**](docs/Api/RetrieveContractOwnerInformationOfAQRCTokenApi.md#readqrcsmartcontractowner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token
*RetrieveOwnerInformationForAQRC721TokenApi* | [**readQRC721SmartContractTokenOwner**](docs/Api/RetrieveOwnerInformationForAQRC721TokenApi.md#readqrc721smartcontracttokenowner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token
*RetrieveSupplyInformationForAQRCTokenApi* | [**readQRC721SmartContractCurrentSupply**](docs/Api/RetrieveSupplyInformationForAQRCTokenApi.md#readqrc721smartcontractcurrentsupply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply
*RetrieveTheCountOfQRC721TokensApi* | [**getTokenCount**](docs/Api/RetrieveTheCountOfQRC721TokensApi.md#gettokencount) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account
*RetrieveURIInformationForAQRC721TokenApi* | [**readQRC721SmartContractUri**](docs/Api/RetrieveURIInformationForAQRC721TokenApi.md#readqrc721smartcontracturi) | **POST** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token
*SmartContractSearchApi* | [**autoExecuteSearchSmartContractQueryRequest**](docs/Api/SmartContractSearchApi.md#autoexecutesearchsmartcontractqueryrequest) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT.
*SmartContractSearchApi* | [**executePreparedSearchRequest**](docs/Api/SmartContractSearchApi.md#executepreparedsearchrequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
*SmartContractSearchApi* | [**prepareSmartContractQueryRequest**](docs/Api/SmartContractSearchApi.md#preparesmartcontractqueryrequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT
*SubscribeToQRC20AccountCreditPaymentsApi* | [**subscribeCreditEvent**](docs/Api/SubscribeToQRC20AccountCreditPaymentsApi.md#subscribecreditevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account
*SubscribeToQRC20AccountDebitPaymentsApi* | [**subscribeQRC20DebitEvent**](docs/Api/SubscribeToQRC20AccountDebitPaymentsApi.md#subscribeqrc20debitevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved
*SubscribeToQRC20SharedAccountUpdatesApi* | [**subscribeSecondaryOwnerEvent**](docs/Api/SubscribeToQRC20SharedAccountUpdatesApi.md#subscribesecondaryownerevent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account
*SubscribeToQRC20TokenSupplyChangesApi* | [**subscribeSupplyEvent**](docs/Api/SubscribeToQRC20TokenSupplyChangesApi.md#subscribesupplyevent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token
*SubscribeToQRC721AssetCollectionUpdatesApi* | [**subscribeCollectEvent**](docs/Api/SubscribeToQRC721AssetCollectionUpdatesApi.md#subscribecollectevent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected
*SubscribeToQRC721AssetTransfersApi* | [**subscribeTransferEvent**](docs/Api/SubscribeToQRC721AssetTransfersApi.md#subscribetransferevent) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred
*SubscribeToQRC721SupplyChangeUpdatesApi* | [**subscribeSupplyEvent**](docs/Api/SubscribeToQRC721SupplyChangeUpdatesApi.md#subscribesupplyevent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token
*SupportedFungibleTokensApi* | [**getTokens**](docs/Api/SupportedFungibleTokensApi.md#gettokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens
*SupportedNonFungibleTokensApi* | [**getAllNonFungibleTokens**](docs/Api/SupportedNonFungibleTokensApi.md#getallnonfungibletokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens
*TokenControllerApi* | [**getNonFungibleToken**](docs/Api/TokenControllerApi.md#getnonfungibletoken) | **GET** /v2/nonfungibletoken | 
*TransactionSearchApi* | [**autoExecuteSearchTransactionRequest**](docs/Api/TransactionSearchApi.md#autoexecutesearchtransactionrequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
*TransactionSearchApi* | [**executePreparedSearchRequestTransaction**](docs/Api/TransactionSearchApi.md#executepreparedsearchrequesttransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
*TransactionSearchApi* | [**prepareSearchRequest**](docs/Api/TransactionSearchApi.md#preparesearchrequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT
*UTXOStatusSearchApi* | [**autoExecuteSearchUtxoRequest**](docs/Api/UTXOStatusSearchApi.md#autoexecutesearchutxorequest) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
*UTXOStatusSearchApi* | [**executeUTXOPreparedSearchRequest**](docs/Api/UTXOStatusSearchApi.md#executeutxopreparedsearchrequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
*UTXOStatusSearchApi* | [**prepareSearchUTXOState**](docs/Api/UTXOStatusSearchApi.md#preparesearchutxostate) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.

## Models

- [AccountDetails](docs/Model/AccountDetails.md)
- [AddSecondaryAccountRequestDetailsSchema](docs/Model/AddSecondaryAccountRequestDetailsSchema.md)
- [AdditionalOwner](docs/Model/AdditionalOwner.md)
- [AdditionalOwnerRemoveSecondarySchema](docs/Model/AdditionalOwnerRemoveSecondarySchema.md)
- [AddressBalanceResponse](docs/Model/AddressBalanceResponse.md)
- [AddressMonitoringDetailsSchema](docs/Model/AddressMonitoringDetailsSchema.md)
- [AddressMonitoringRequestSchema](docs/Model/AddressMonitoringRequestSchema.md)
- [AddressMonitoringResponseSchema](docs/Model/AddressMonitoringResponseSchema.md)
- [AliasDetails](docs/Model/AliasDetails.md)
- [ApproveRequestDetailsSchema](docs/Model/ApproveRequestDetailsSchema.md)
- [AutoExecSearchAddressSequenceResponseSchema](docs/Model/AutoExecSearchAddressSequenceResponseSchema.md)
- [AutoExecuteSearchAddressBalanceResponseSchema](docs/Model/AutoExecuteSearchAddressBalanceResponseSchema.md)
- [AutoExecuteSearchBlockResponseSchema](docs/Model/AutoExecuteSearchBlockResponseSchema.md)
- [AutoExecuteSearchUTXOResponseSchema](docs/Model/AutoExecuteSearchUTXOResponseSchema.md)
- [Beneficiary](docs/Model/Beneficiary.md)
- [BeneficiaryMintSchemaQrc20](docs/Model/BeneficiaryMintSchemaQrc20.md)
- [BeneficiaryMintSchemaQrc721](docs/Model/BeneficiaryMintSchemaQrc721.md)
- [Block](docs/Model/Block.md)
- [BlockHash](docs/Model/BlockHash.md)
- [BlockSize](docs/Model/BlockSize.md)
- [Burn](docs/Model/Burn.md)
- [BurnRequestDetailsSchema](docs/Model/BurnRequestDetailsSchema.md)
- [BurnRequestDetailsSchemaQrc721](docs/Model/BurnRequestDetailsSchemaQrc721.md)
- [BurnSchema](docs/Model/BurnSchema.md)
- [Collector](docs/Model/Collector.md)
- [CreateSmartContractMonitoringSchema](docs/Model/CreateSmartContractMonitoringSchema.md)
- [CreateWebhookSubscriptionRequestSchema](docs/Model/CreateWebhookSubscriptionRequestSchema.md)
- [CreateWebhookSubscriptionResponseSchema](docs/Model/CreateWebhookSubscriptionResponseSchema.md)
- [Creator](docs/Model/Creator.md)
- [CreatorMintSchema](docs/Model/CreatorMintSchema.md)
- [CreditRequestDetailsSchema](docs/Model/CreditRequestDetailsSchema.md)
- [DeleteResourceMonitoringAddressSchema](docs/Model/DeleteResourceMonitoringAddressSchema.md)
- [Destination](docs/Model/Destination.md)
- [DestinationPaymentSchema](docs/Model/DestinationPaymentSchema.md)
- [DestinationTransferSchema](docs/Model/DestinationTransferSchema.md)
- [Erc20DTO](docs/Model/Erc20DTO.md)
- [Error](docs/Model/Error.md)
- [ErrorDetails](docs/Model/ErrorDetails.md)
- [ErrorList](docs/Model/ErrorList.md)
- [ErrorResponseMessage](docs/Model/ErrorResponseMessage.md)
- [EventSubscriptionResponse](docs/Model/EventSubscriptionResponse.md)
- [EventSubscriptionResponseDetails](docs/Model/EventSubscriptionResponseDetails.md)
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
- [FunctionDTO](docs/Model/FunctionDTO.md)
- [FungibleTokenResponseDTO](docs/Model/FungibleTokenResponseDTO.md)
- [InternalServerErrorSchema](docs/Model/InternalServerErrorSchema.md)
- [LinkedBlocks](docs/Model/LinkedBlocks.md)
- [ListWebhookSubscriptionResponseSchema](docs/Model/ListWebhookSubscriptionResponseSchema.md)
- [Location](docs/Model/Location.md)
- [LocationDTO](docs/Model/LocationDTO.md)
- [LockDetails](docs/Model/LockDetails.md)
- [Mandate](docs/Model/Mandate.md)
- [Mint](docs/Model/Mint.md)
- [MintRequestDetailsSchemaQrc20](docs/Model/MintRequestDetailsSchemaQrc20.md)
- [MintRequestDetailsSchemaQrc721](docs/Model/MintRequestDetailsSchemaQrc721.md)
- [MintSchemaQrc20](docs/Model/MintSchemaQrc20.md)
- [MintSchemaQrc721](docs/Model/MintSchemaQrc721.md)
- [ModelFunction](docs/Model/ModelFunction.md)
- [MonitorSmartContractEventParam](docs/Model/MonitorSmartContractEventParam.md)
- [MonitorSmartContractRequestSchema](docs/Model/MonitorSmartContractRequestSchema.md)
- [NonFungibleTokenDTO](docs/Model/NonFungibleTokenDTO.md)
- [NonFungibleTokenResponse](docs/Model/NonFungibleTokenResponse.md)
- [Origin](docs/Model/Origin.md)
- [OriginPaymentSchema](docs/Model/OriginPaymentSchema.md)
- [OriginTransferSchema](docs/Model/OriginTransferSchema.md)
- [OverledgerTransactionResponseSchema](docs/Model/OverledgerTransactionResponseSchema.md)
- [Owner](docs/Model/Owner.md)
- [OwnerBurnSchema](docs/Model/OwnerBurnSchema.md)
- [OwnerRemoveSecondarySchema](docs/Model/OwnerRemoveSecondarySchema.md)
- [Pagination](docs/Model/Pagination.md)
- [Parameter](docs/Model/Parameter.md)
- [Payee](docs/Model/Payee.md)
- [PayeeCreditSchema](docs/Model/PayeeCreditSchema.md)
- [Payer](docs/Model/Payer.md)
- [PayerCreditSchema](docs/Model/PayerCreditSchema.md)
- [Payment](docs/Model/Payment.md)
- [PaymentRequestDetailsSchema](docs/Model/PaymentRequestDetailsSchema.md)
- [PaymentSchema](docs/Model/PaymentSchema.md)
- [PrepareAddSecondaryAccountRequestSchema](docs/Model/PrepareAddSecondaryAccountRequestSchema.md)
- [PrepareAndExecuteBalanceDetails](docs/Model/PrepareAndExecuteBalanceDetails.md)
- [PrepareAndExecuteOverledgerErrorResponse](docs/Model/PrepareAndExecuteOverledgerErrorResponse.md)
- [PrepareAndExecuteSearchAddressBalanceResponse](docs/Model/PrepareAndExecuteSearchAddressBalanceResponse.md)
- [PrepareAndExecuteTransactionResponse](docs/Model/PrepareAndExecuteTransactionResponse.md)
- [PrepareApproveDebitTransactionRequestSchema](docs/Model/PrepareApproveDebitTransactionRequestSchema.md)
- [PrepareBurnTransactionRequestSchema](docs/Model/PrepareBurnTransactionRequestSchema.md)
- [PrepareBurnTransactionRequestSchemaQrc721](docs/Model/PrepareBurnTransactionRequestSchemaQrc721.md)
- [PrepareCreditTransactionRequestSchema](docs/Model/PrepareCreditTransactionRequestSchema.md)
- [PrepareMintTransactionRequestSchemaQrc20](docs/Model/PrepareMintTransactionRequestSchemaQrc20.md)
- [PrepareMintTransactionRequestSchemaQrc721](docs/Model/PrepareMintTransactionRequestSchemaQrc721.md)
- [PrepareNativeTransactionRequestSchema](docs/Model/PrepareNativeTransactionRequestSchema.md)
- [PreparePaymentTransactionRequestSchema](docs/Model/PreparePaymentTransactionRequestSchema.md)
- [PrepareRemoveSecondaryAccountTransactionRequestSchema](docs/Model/PrepareRemoveSecondaryAccountTransactionRequestSchema.md)
- [PrepareRequest](docs/Model/PrepareRequest.md)
- [PrepareRequestDetails](docs/Model/PrepareRequestDetails.md)
- [PrepareSearchResponseSchema](docs/Model/PrepareSearchResponseSchema.md)
- [PrepareSearchSchema](docs/Model/PrepareSearchSchema.md)
- [PrepareSearchSmartContractRequestSchema](docs/Model/PrepareSearchSmartContractRequestSchema.md)
- [PrepareTransactionResponse](docs/Model/PrepareTransactionResponse.md)
- [PrepareTransactionSmartContractInvokeRequestSchema](docs/Model/PrepareTransactionSmartContractInvokeRequestSchema.md)
- [PrepareTransferTransactionRequestSchema](docs/Model/PrepareTransferTransactionRequestSchema.md)
- [ReadAccountBalanceRequestSchema](docs/Model/ReadAccountBalanceRequestSchema.md)
- [ReadApprovedAccountAllowanceRequestSchema](docs/Model/ReadApprovedAccountAllowanceRequestSchema.md)
- [ReadApprovedAccountRequestDetailsSchema](docs/Model/ReadApprovedAccountRequestDetailsSchema.md)
- [ReadApprovedAccountRequestSchema](docs/Model/ReadApprovedAccountRequestSchema.md)
- [ReadBalanceRequestDetailsSchema](docs/Model/ReadBalanceRequestDetailsSchema.md)
- [ReadBalanceRequestSchema](docs/Model/ReadBalanceRequestSchema.md)
- [ReadContractOwnerRequestDetailsSchema](docs/Model/ReadContractOwnerRequestDetailsSchema.md)
- [ReadContractOwnerRequestSchema](docs/Model/ReadContractOwnerRequestSchema.md)
- [ReadTokenOwnerRequestDetailsSchema](docs/Model/ReadTokenOwnerRequestDetailsSchema.md)
- [ReadTokenOwnerRequestSchema](docs/Model/ReadTokenOwnerRequestSchema.md)
- [Receiver](docs/Model/Receiver.md)
- [RemoveSecondaryAccountDetailsSchema](docs/Model/RemoveSecondaryAccountDetailsSchema.md)
- [ResourceMonitoredAddressDetails](docs/Model/ResourceMonitoredAddressDetails.md)
- [ResourceMonitoringAddressDetails](docs/Model/ResourceMonitoringAddressDetails.md)
- [ResourceMonitoringAddressSchema](docs/Model/ResourceMonitoringAddressSchema.md)
- [ResourceMonitoringDetails](docs/Model/ResourceMonitoringDetails.md)
- [ResourceMonitoringSmartContractEventDetails](docs/Model/ResourceMonitoringSmartContractEventDetails.md)
- [ResourceMonitoringSubscription](docs/Model/ResourceMonitoringSubscription.md)
- [ResourceMonitoringSubscriptionDetails](docs/Model/ResourceMonitoringSubscriptionDetails.md)
- [ScriptPubKey](docs/Model/ScriptPubKey.md)
- [SecondaryAccountAdditionalOwnerSchema](docs/Model/SecondaryAccountAdditionalOwnerSchema.md)
- [SecondaryAccountOwnerSchema](docs/Model/SecondaryAccountOwnerSchema.md)
- [Sender](docs/Model/Sender.md)
- [SignerAccount](docs/Model/SignerAccount.md)
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
- [SmartContractTag](docs/Model/SmartContractTag.md)
- [Status](docs/Model/Status.md)
- [StatusUpdateMonitoringRequestSchema](docs/Model/StatusUpdateMonitoringRequestSchema.md)
- [StatusUpdateSchema](docs/Model/StatusUpdateSchema.md)
- [TierFunctionDTO](docs/Model/TierFunctionDTO.md)
- [TokenReadQRC20Response](docs/Model/TokenReadQRC20Response.md)
- [TokenReadQRC721Response](docs/Model/TokenReadQRC721Response.md)
- [TokenReadResponseDetails](docs/Model/TokenReadResponseDetails.md)
- [Transaction](docs/Model/Transaction.md)
- [Transfer](docs/Model/Transfer.md)
- [TransferRequestDetailsSchema](docs/Model/TransferRequestDetailsSchema.md)
- [TransferSchema](docs/Model/TransferSchema.md)
- [UTXODestination](docs/Model/UTXODestination.md)
- [UTXONativeData](docs/Model/UTXONativeData.md)
- [UTXOSmartContract](docs/Model/UTXOSmartContract.md)
- [UpdateAddressMonitoringSchema](docs/Model/UpdateAddressMonitoringSchema.md)
- [UpdateWebhookSubscriptionRequestSchema](docs/Model/UpdateWebhookSubscriptionRequestSchema.md)
- [Vout](docs/Model/Vout.md)
- [WebhookStatusUpdateSchema](docs/Model/WebhookStatusUpdateSchema.md)
- [WebhookSubscriptionDetails](docs/Model/WebhookSubscriptionDetails.md)
- [WebhookSubscriptionDetailsSchema](docs/Model/WebhookSubscriptionDetailsSchema.md)
- [WebhookSubscriptionStatusUpdateResponse](docs/Model/WebhookSubscriptionStatusUpdateResponse.md)

## Authorization

### OAuth2_Security_Scheme

- **Type**: `OAuth`
- **Flow**: `application`
- **Authorization URL**: ``
- **Scopes**: 
    - **aws.cognito.signin.user.admin**: Grants access to all the User Pool APIs that can be accessed using access tokens alone.
    - **phone**: Grants returning the phone claim, which contains the user's phone number, and phone_number_verified.
    - **overledger/read.scope**: Grants read access to Overledger.
    - **openid**: Grants an application to use OIDC to verify the user's identity.
    - **email**: Grants returning the email claim, which contains the user's email address, and email_verified.
    - **profile**: Grants returning basic profile information.

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
