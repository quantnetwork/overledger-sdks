# C API client for quant_overledger_api

## Overview
This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project. By using the [OpenAPI spec](https://openapis.org) from a remote server, you can easily generate an API client.

- API version: 2.0
- Package version: 
- Build package: org.openapitools.codegen.languages.CLibcurlClientCodegen

## Installation
You'll need the `curl 7.58.0` package in order to build the API. To have code formatted nicely, you also need to have uncrustify version 0.67 or later.

# Prerequisites

## Install the `curl 7.58.0` package with the following command on Linux.
```bash
sudo apt remove curl
wget http://curl.haxx.se/download/curl-7.58.0.tar.gz
tar -xvf curl-7.58.0.tar.gz
cd curl-7.58.0/
./configure
make
sudo make install
```
## Install the `uncrustify 0.67` package with the following command on Linux.
```bash
git clone https://github.com/uncrustify/uncrustify.git
cd uncrustify
mkdir build
cd build
cmake ..
make
sudo make install
```

## Compile the sample:
This will compile the generated code and create a library in the build folder which has to be linked to the codes where API will be used.
```bash
mkdir build
cd build
// To install library to specific location, use following commands
cmake -DCMAKE_INSTALL_PREFIX=/pathtolocation ..
// for normal install use following command
cmake ..
make
sudo make install
```
## How to use compiled library
Considering the test/source code which uses the API is written in main.c(respective api include is written and all objects necessary are defined and created)

To compile main.c(considering the file is present in build folder) use following command
-L - location of the library(not required if cmake with normal installation is performed)
-l library name
```bash
gcc main.c -L. -lquant_overledger_api -o main
```
Once compiled, you can run it with ``` ./main ```

Note: You don't need to specify includes for models and include folder separately as they are path linked. You just have to import the api.h file in your code, the include linking will work.

## Documentation for API Endpoints

All URIs are relative to *https://api.overledger.io*

Category | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AddressSearchAPI* | [**AddressSearchAPI_autoExecuteSearchAddressBalanceRequest**](docs/AddressSearchAPI.md#AddressSearchAPI_autoExecuteSearchAddressBalanceRequest) | **POST** /v2/autoexecution/search/address/balance/{addressId} | Prepare and automatically execute a search for an address balance on a DLT.
*AddressSearchAPI* | [**AddressSearchAPI_executePreparedSearchRequestAddressBalance**](docs/AddressSearchAPI.md#AddressSearchAPI_executePreparedSearchRequestAddressBalance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT
*AddressSearchAPI* | [**AddressSearchAPI_executePreparedSearchRequestAddressSequence**](docs/AddressSearchAPI.md#AddressSearchAPI_executePreparedSearchRequestAddressSequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT
*AddressSearchAPI* | [**AddressSearchAPI_prepareAddressBalanceSearchRequest**](docs/AddressSearchAPI.md#AddressSearchAPI_prepareAddressBalanceSearchRequest) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance.
*AddressSearchAPI* | [**AddressSearchAPI_prepareAddressSequenceSearchRequest**](docs/AddressSearchAPI.md#AddressSearchAPI_prepareAddressSequenceSearchRequest) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence.
*AddressSearchAPI* | [**AddressSearchAPI_prepareAddressSequenceSearchRequest1**](docs/AddressSearchAPI.md#AddressSearchAPI_prepareAddressSequenceSearchRequest1) | **POST** /v2/autoexecution/search/address/sequence/{addressId} | Prepare and automatically execute a search for an Address Sequence.
*BlockSearchAPI* | [**BlockSearchAPI_autoExecuteSearchBlockRequest**](docs/BlockSearchAPI.md#BlockSearchAPI_autoExecuteSearchBlockRequest) | **POST** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT.
*BlockSearchAPI* | [**BlockSearchAPI_executePreparedSearchRequestBlock**](docs/BlockSearchAPI.md#BlockSearchAPI_executePreparedSearchRequestBlock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
*BlockSearchAPI* | [**BlockSearchAPI_prepareSearchBlockByBlockId**](docs/BlockSearchAPI.md#BlockSearchAPI_prepareSearchBlockByBlockId) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.
*CreateAQRC20CreditTransactionAPI* | [**CreateAQRC20CreditTransactionAPI_executePreparedRequestTransaction**](docs/CreateAQRC20CreditTransactionAPI.md#CreateAQRC20CreditTransactionAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAQRC20CreditTransactionAPI* | [**CreateAQRC20CreditTransactionAPI_prepareCreditRequest**](docs/CreateAQRC20CreditTransactionAPI.md#CreateAQRC20CreditTransactionAPI_prepareCreditRequest) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing
*CreateAQRC20DebitTransactionAPI* | [**CreateAQRC20DebitTransactionAPI_executePreparedRequestTransaction**](docs/CreateAQRC20DebitTransactionAPI.md#CreateAQRC20DebitTransactionAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAQRC20DebitTransactionAPI* | [**CreateAQRC20DebitTransactionAPI_prepareDebitRequest**](docs/CreateAQRC20DebitTransactionAPI.md#CreateAQRC20DebitTransactionAPI_prepareDebitRequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing
*CreateAQRC721TokenCollectionTransactionAPI* | [**CreateAQRC721TokenCollectionTransactionAPI_prepareCollectRequest**](docs/CreateAQRC721TokenCollectionTransactionAPI.md#CreateAQRC721TokenCollectionTransactionAPI_prepareCollectRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing
*CreateAQRC721TransferTransactionAPI* | [**CreateAQRC721TransferTransactionAPI_prepareTransactionRequest**](docs/CreateAQRC721TransferTransactionAPI.md#CreateAQRC721TransferTransactionAPI_prepareTransactionRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing
*CreateASubscriptionAPI* | [**CreateASubscriptionAPI_subscription**](docs/CreateASubscriptionAPI.md#CreateASubscriptionAPI_subscription) | **POST** /v2/webhook/subscription | Create a subscription for a transaction or monitored resource 
*CreateATransactionAPI* | [**CreateATransactionAPI_executePreparedRequestNativeTransaction**](docs/CreateATransactionAPI.md#CreateATransactionAPI_executePreparedRequestNativeTransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
*CreateATransactionAPI* | [**CreateATransactionAPI_executePreparedRequestTransaction**](docs/CreateATransactionAPI.md#CreateATransactionAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateATransactionAPI* | [**CreateATransactionAPI_prepareNativeTransaction**](docs/CreateATransactionAPI.md#CreateATransactionAPI_prepareNativeTransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
*CreateATransactionAPI* | [**CreateATransactionAPI_prepareTransactionRequest1**](docs/CreateATransactionAPI.md#CreateATransactionAPI_prepareTransactionRequest1) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing
*CreateAndPayFromAQRC20SharedAccountAPI* | [**CreateAndPayFromAQRC20SharedAccountAPI_executePreparedRequestTransaction**](docs/CreateAndPayFromAQRC20SharedAccountAPI.md#CreateAndPayFromAQRC20SharedAccountAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*CreateAndPayFromAQRC20SharedAccountAPI* | [**CreateAndPayFromAQRC20SharedAccountAPI_prepareSecondaryOwnerRequest**](docs/CreateAndPayFromAQRC20SharedAccountAPI.md#CreateAndPayFromAQRC20SharedAccountAPI_prepareSecondaryOwnerRequest) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account
*FungibleTokenControllerAPI* | [**FungibleTokenControllerAPI_getToken**](docs/FungibleTokenControllerAPI.md#FungibleTokenControllerAPI_getToken) | **GET** /v2/token/fungible | 
*MDAppTransactionQueryAPI* | [**MDAppTransactionQueryAPI_getOvlTransactionByTxId**](docs/MDAppTransactionQueryAPI.md#MDAppTransactionQueryAPI_getOvlTransactionByTxId) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
*MDAppTransactionQueryAPI* | [**MDAppTransactionQueryAPI_getOvlTransactionsByClientId**](docs/MDAppTransactionQueryAPI.md#MDAppTransactionQueryAPI_getOvlTransactionsByClientId) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_deleteEventMonitoring**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_deleteEventMonitoring) | **DELETE** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Stop monitoring a smart contract
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_deleteResourceMonitoringAddress**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_deleteResourceMonitoringAddress) | **DELETE** /v2/resourcemonitoring/address/{resourceMonitoringId} | Stop monitoring an address
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_getListOfAddresses**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getListOfAddresses) | **GET** /v2/resourcemonitoring/addresses | Retrieve a list of addresses being monitored
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_getListOfResources**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getListOfResources) | **GET** /v2/resourcemonitoring | Retrieve a list of all resources being monitored
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_getListOfSmartContractEvents**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getListOfSmartContractEvents) | **GET** /v2/resourcemonitoring/smartcontractevents | Retrieve a list of smart contracts being monitored
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_getMonitoredAddress**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getMonitoredAddress) | **GET** /v2/resourcemonitoring/address/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored address
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_getMonitoredSmartContractEventDetails**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_getMonitoredSmartContractEventDetails) | **GET** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Retrieve recorded updates for a specific monitored smart contract
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_updateEventMonitoring**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_updateEventMonitoring) | **PATCH** /v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId} | Update the monitoring status of a smart contract
*ManageMonitoredResourcesAPI* | [**ManageMonitoredResourcesAPI_updateResourceMonitoringAddress**](docs/ManageMonitoredResourcesAPI.md#ManageMonitoredResourcesAPI_updateResourceMonitoringAddress) | **PATCH** /v2/resourcemonitoring/address/{resourceMonitoringId} | Update the monitoring status of an address
*ManageQRC20TokenSupplyAPI* | [**ManageQRC20TokenSupplyAPI_executePreparedRequestTransaction**](docs/ManageQRC20TokenSupplyAPI.md#ManageQRC20TokenSupplyAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
*ManageQRC20TokenSupplyAPI* | [**ManageQRC20TokenSupplyAPI_prepareSupplyRequest1**](docs/ManageQRC20TokenSupplyAPI.md#ManageQRC20TokenSupplyAPI_prepareSupplyRequest1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply
*ManageQRC721TokenSupplyAPI* | [**ManageQRC721TokenSupplyAPI_prepareSupplyRequest**](docs/ManageQRC721TokenSupplyAPI.md#ManageQRC721TokenSupplyAPI_prepareSupplyRequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply
*ManageSubscriptionsAPI* | [**ManageSubscriptionsAPI_deleteSubscription**](docs/ManageSubscriptionsAPI.md#ManageSubscriptionsAPI_deleteSubscription) | **DELETE** /v2/webhook/subscription/{subscriptionId} | Remove a subscription created by your application
*ManageSubscriptionsAPI* | [**ManageSubscriptionsAPI_listSubscriptions**](docs/ManageSubscriptionsAPI.md#ManageSubscriptionsAPI_listSubscriptions) | **GET** /v2/webhook/subscriptions | Retrieve a list of subscriptions created by your application
*ManageSubscriptionsAPI* | [**ManageSubscriptionsAPI_updateSubscription**](docs/ManageSubscriptionsAPI.md#ManageSubscriptionsAPI_updateSubscription) | **PATCH** /v2/webhook/subscription/{subscriptionId} | Update a specific subscription created by your application
*MonitorAResourceAPI* | [**MonitorAResourceAPI_resourceMonitoringAddress**](docs/MonitorAResourceAPI.md#MonitorAResourceAPI_resourceMonitoringAddress) | **POST** /v2/resourcemonitoring/address | Monitor an address for incoming and outgoing transactions
*MonitorAResourceAPI* | [**MonitorAResourceAPI_trackAndSubscribeEvent**](docs/MonitorAResourceAPI.md#MonitorAResourceAPI_trackAndSubscribeEvent) | **POST** /v2/resourcemonitoring/smartcontractevent | Monitor a smart contract for an event
*RetrieveAccountBalanceForAQRC20TokenAPI* | [**RetrieveAccountBalanceForAQRC20TokenAPI_readQRC20SmartContractBalance**](docs/RetrieveAccountBalanceForAQRC20TokenAPI.md#RetrieveAccountBalanceForAQRC20TokenAPI_readQRC20SmartContractBalance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account
*RetrieveApprovedAccountAllowanceForAQRC20TokenAPI* | [**RetrieveApprovedAccountAllowanceForAQRC20TokenAPI_readApprovedDebitAmount**](docs/RetrieveApprovedAccountAllowanceForAQRC20TokenAPI.md#RetrieveApprovedAccountAllowanceForAQRC20TokenAPI_readApprovedDebitAmount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit
*RetrieveApprovedAccountInformationForAQRC20TokenAPI* | [**RetrieveApprovedAccountInformationForAQRC20TokenAPI_readQRC20SecondaryAccountOwner**](docs/RetrieveApprovedAccountInformationForAQRC20TokenAPI.md#RetrieveApprovedAccountInformationForAQRC20TokenAPI_readQRC20SecondaryAccountOwner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
*RetrieveApprovedAccountInformationOfAQRC721TokenAPI* | [**RetrieveApprovedAccountInformationOfAQRC721TokenAPI_readQRC721SmartContractApprovedAccount**](docs/RetrieveApprovedAccountInformationOfAQRC721TokenAPI.md#RetrieveApprovedAccountInformationOfAQRC721TokenAPI_readQRC721SmartContractApprovedAccount) | **POST** /v2/tokenise/tokens/qrc721/approved-account | Retrieve which account is approved to collect a QRC721 token
*RetrieveContractOwnerInformationOfAQRCTokenAPI* | [**RetrieveContractOwnerInformationOfAQRCTokenAPI_readQRCSmartContractOwner**](docs/RetrieveContractOwnerInformationOfAQRCTokenAPI.md#RetrieveContractOwnerInformationOfAQRCTokenAPI_readQRCSmartContractOwner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token
*RetrieveOwnerInformationForAQRC721TokenAPI* | [**RetrieveOwnerInformationForAQRC721TokenAPI_readQRC721SmartContractTokenOwner**](docs/RetrieveOwnerInformationForAQRC721TokenAPI.md#RetrieveOwnerInformationForAQRC721TokenAPI_readQRC721SmartContractTokenOwner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token
*RetrieveSupplyInformationForAQRCTokenAPI* | [**RetrieveSupplyInformationForAQRCTokenAPI_readQRC721SmartContractCurrentSupply**](docs/RetrieveSupplyInformationForAQRCTokenAPI.md#RetrieveSupplyInformationForAQRCTokenAPI_readQRC721SmartContractCurrentSupply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply
*RetrieveTheCountOfQRC721TokensAPI* | [**RetrieveTheCountOfQRC721TokensAPI_getTokenCount**](docs/RetrieveTheCountOfQRC721TokensAPI.md#RetrieveTheCountOfQRC721TokensAPI_getTokenCount) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account
*RetrieveURIInformationForAQRC721TokenAPI* | [**RetrieveURIInformationForAQRC721TokenAPI_readQRC721SmartContractUri**](docs/RetrieveURIInformationForAQRC721TokenAPI.md#RetrieveURIInformationForAQRC721TokenAPI_readQRC721SmartContractUri) | **POST** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token
*SmartContractSearchAPI* | [**SmartContractSearchAPI_autoExecuteSearchSmartContractQueryRequest**](docs/SmartContractSearchAPI.md#SmartContractSearchAPI_autoExecuteSearchSmartContractQueryRequest) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT.
*SmartContractSearchAPI* | [**SmartContractSearchAPI_executePreparedSearchRequest**](docs/SmartContractSearchAPI.md#SmartContractSearchAPI_executePreparedSearchRequest) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
*SmartContractSearchAPI* | [**SmartContractSearchAPI_prepareSmartContractQueryRequest**](docs/SmartContractSearchAPI.md#SmartContractSearchAPI_prepareSmartContractQueryRequest) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT
*SubscribeToQRC20AccountCreditPaymentsAPI* | [**SubscribeToQRC20AccountCreditPaymentsAPI_subscribeCreditEvent**](docs/SubscribeToQRC20AccountCreditPaymentsAPI.md#SubscribeToQRC20AccountCreditPaymentsAPI_subscribeCreditEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/credit | Receive updates each time there is a credit payment on your account
*SubscribeToQRC20AccountDebitPaymentsAPI* | [**SubscribeToQRC20AccountDebitPaymentsAPI_subscribeQRC20DebitEvent**](docs/SubscribeToQRC20AccountDebitPaymentsAPI.md#SubscribeToQRC20AccountDebitPaymentsAPI_subscribeQRC20DebitEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/debit | Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved
*SubscribeToQRC20SharedAccountUpdatesAPI* | [**SubscribeToQRC20SharedAccountUpdatesAPI_subscribeSecondaryOwnerEvent**](docs/SubscribeToQRC20SharedAccountUpdatesAPI.md#SubscribeToQRC20SharedAccountUpdatesAPI_subscribeSecondaryOwnerEvent) | **POST** /v2/tokenise/tokens/subscription/qrc20/secondaryaccountowner | Receive updates for a shared account
*SubscribeToQRC20TokenSupplyChangesAPI* | [**SubscribeToQRC20TokenSupplyChangesAPI_subscribeSupplyEvent**](docs/SubscribeToQRC20TokenSupplyChangesAPI.md#SubscribeToQRC20TokenSupplyChangesAPI_subscribeSupplyEvent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token
*SubscribeToQRC721AssetCollectionUpdatesAPI* | [**SubscribeToQRC721AssetCollectionUpdatesAPI_subscribeCollectEvent**](docs/SubscribeToQRC721AssetCollectionUpdatesAPI.md#SubscribeToQRC721AssetCollectionUpdatesAPI_subscribeCollectEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/collect | Receive updates each time a QRC721 token is approved for collection or collected
*SubscribeToQRC721AssetTransfersAPI* | [**SubscribeToQRC721AssetTransfersAPI_subscribeTransferEvent**](docs/SubscribeToQRC721AssetTransfersAPI.md#SubscribeToQRC721AssetTransfersAPI_subscribeTransferEvent) | **POST** /v2/tokenise/tokens/subscription/qrc721/transfer | Receive updates each time a QRC721 token is transferred
*SubscribeToQRC721SupplyChangeUpdatesAPI* | [**SubscribeToQRC721SupplyChangeUpdatesAPI_subscribeSupplyEvent**](docs/SubscribeToQRC721SupplyChangeUpdatesAPI.md#SubscribeToQRC721SupplyChangeUpdatesAPI_subscribeSupplyEvent) | **POST** /v2/tokenise/tokens/subscription/{flowtype}/supply | Receive updates each time a supply changes for a QRC721 or QRC20 token
*SupportedFungibleTokensAPI* | [**SupportedFungibleTokensAPI_getTokens**](docs/SupportedFungibleTokensAPI.md#SupportedFungibleTokensAPI_getTokens) | **GET** /v2/tokens/fungible | Retrieve a list of ERC20 and QRC20 tokens
*SupportedNonFungibleTokensAPI* | [**SupportedNonFungibleTokensAPI_getAllNonFungibleTokens**](docs/SupportedNonFungibleTokensAPI.md#SupportedNonFungibleTokensAPI_getAllNonFungibleTokens) | **GET** /v2/tokenise/tokens/nonfungible | Retrieve a list of ERC721 and QRC721 tokens
*TokenControllerAPI* | [**TokenControllerAPI_getNonFungibleToken**](docs/TokenControllerAPI.md#TokenControllerAPI_getNonFungibleToken) | **GET** /v2/nonfungibletoken | 
*TransactionSearchAPI* | [**TransactionSearchAPI_autoExecuteSearchTransactionRequest**](docs/TransactionSearchAPI.md#TransactionSearchAPI_autoExecuteSearchTransactionRequest) | **POST** /v2/autoexecution/search/transaction | Prepare and automatically execute a search for a transaction on a DLT.
*TransactionSearchAPI* | [**TransactionSearchAPI_executePreparedSearchRequestTransaction**](docs/TransactionSearchAPI.md#TransactionSearchAPI_executePreparedSearchRequestTransaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT
*TransactionSearchAPI* | [**TransactionSearchAPI_prepareSearchRequest**](docs/TransactionSearchAPI.md#TransactionSearchAPI_prepareSearchRequest) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT
*UTXOStatusSearchAPI* | [**UTXOStatusSearchAPI_autoExecuteSearchUtxoRequest**](docs/UTXOStatusSearchAPI.md#UTXOStatusSearchAPI_autoExecuteSearchUtxoRequest) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
*UTXOStatusSearchAPI* | [**UTXOStatusSearchAPI_executeUTXOPreparedSearchRequest**](docs/UTXOStatusSearchAPI.md#UTXOStatusSearchAPI_executeUTXOPreparedSearchRequest) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
*UTXOStatusSearchAPI* | [**UTXOStatusSearchAPI_prepareSearchUTXOState**](docs/UTXOStatusSearchAPI.md#UTXOStatusSearchAPI_prepareSearchUTXOState) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.


## Documentation for Models

 - [account_details_t](docs/account_details.md)
 - [add_secondary_account_request_details_schema_t](docs/add_secondary_account_request_details_schema.md)
 - [additional_owner_t](docs/additional_owner.md)
 - [additional_owner_remove_secondary_schema_t](docs/additional_owner_remove_secondary_schema.md)
 - [address_balance_response_t](docs/address_balance_response.md)
 - [address_monitoring_details_schema_t](docs/address_monitoring_details_schema.md)
 - [address_monitoring_request_schema_t](docs/address_monitoring_request_schema.md)
 - [address_monitoring_response_schema_t](docs/address_monitoring_response_schema.md)
 - [alias_details_t](docs/alias_details.md)
 - [approve_request_details_schema_t](docs/approve_request_details_schema.md)
 - [auto_exec_search_address_sequence_response_schema_t](docs/auto_exec_search_address_sequence_response_schema.md)
 - [auto_execute_search_address_balance_response_schema_t](docs/auto_execute_search_address_balance_response_schema.md)
 - [auto_execute_search_block_response_schema_t](docs/auto_execute_search_block_response_schema.md)
 - [auto_execute_search_utxo_response_schema_t](docs/auto_execute_search_utxo_response_schema.md)
 - [beneficiary_t](docs/beneficiary.md)
 - [beneficiary_mint_schema_qrc20_t](docs/beneficiary_mint_schema_qrc20.md)
 - [beneficiary_mint_schema_qrc721_t](docs/beneficiary_mint_schema_qrc721.md)
 - [block_t](docs/block.md)
 - [block_hash_t](docs/block_hash.md)
 - [block_size_t](docs/block_size.md)
 - [burn_t](docs/burn.md)
 - [burn_request_details_schema_t](docs/burn_request_details_schema.md)
 - [burn_request_details_schema_qrc721_t](docs/burn_request_details_schema_qrc721.md)
 - [burn_schema_t](docs/burn_schema.md)
 - [collector_t](docs/collector.md)
 - [create_smart_contract_monitoring_schema_t](docs/create_smart_contract_monitoring_schema.md)
 - [create_webhook_subscription_request_schema_t](docs/create_webhook_subscription_request_schema.md)
 - [create_webhook_subscription_response_schema_t](docs/create_webhook_subscription_response_schema.md)
 - [creator_t](docs/creator.md)
 - [creator_mint_schema_t](docs/creator_mint_schema.md)
 - [credit_request_details_schema_t](docs/credit_request_details_schema.md)
 - [delete_resource_monitoring_address_schema_t](docs/delete_resource_monitoring_address_schema.md)
 - [destination_t](docs/destination.md)
 - [destination_payment_schema_t](docs/destination_payment_schema.md)
 - [destination_transfer_schema_t](docs/destination_transfer_schema.md)
 - [erc20_dto_t](docs/erc20_dto.md)
 - [error_t](docs/error.md)
 - [error_details_t](docs/error_details.md)
 - [error_list_t](docs/error_list.md)
 - [error_response_message_t](docs/error_response_message.md)
 - [event_subscription_response_t](docs/event_subscription_response.md)
 - [event_subscription_response_details_t](docs/event_subscription_response_details.md)
 - [execute_search_balance_response_t](docs/execute_search_balance_response.md)
 - [execute_search_block_response_t](docs/execute_search_block_response.md)
 - [execute_search_sequence_response_t](docs/execute_search_sequence_response.md)
 - [execute_search_transaction_response_t](docs/execute_search_transaction_response.md)
 - [execute_search_utxo_response_t](docs/execute_search_utxo_response.md)
 - [execute_search_utxo_response_schema_t](docs/execute_search_utxo_response_schema.md)
 - [execute_smart_contract_read_response_schema_t](docs/execute_smart_contract_read_response_schema.md)
 - [execute_transaction_request_t](docs/execute_transaction_request.md)
 - [execute_transaction_response_t](docs/execute_transaction_response.md)
 - [extra_fields_t](docs/extra_fields.md)
 - [fee_t](docs/fee.md)
 - [function_t](docs/function.md)
 - [function_dto_t](docs/function_dto.md)
 - [fungible_token_response_dto_t](docs/fungible_token_response_dto.md)
 - [internal_server_error_schema_t](docs/internal_server_error_schema.md)
 - [linked_blocks_t](docs/linked_blocks.md)
 - [list_webhook_subscription_response_schema_t](docs/list_webhook_subscription_response_schema.md)
 - [location_t](docs/location.md)
 - [location_dto_t](docs/location_dto.md)
 - [lock_details_t](docs/lock_details.md)
 - [mandate_t](docs/mandate.md)
 - [mint_t](docs/mint.md)
 - [mint_request_details_schema_qrc20_t](docs/mint_request_details_schema_qrc20.md)
 - [mint_request_details_schema_qrc721_t](docs/mint_request_details_schema_qrc721.md)
 - [mint_schema_qrc20_t](docs/mint_schema_qrc20.md)
 - [mint_schema_qrc721_t](docs/mint_schema_qrc721.md)
 - [monitor_smart_contract_event_param_t](docs/monitor_smart_contract_event_param.md)
 - [monitor_smart_contract_request_schema_t](docs/monitor_smart_contract_request_schema.md)
 - [non_fungible_token_dto_t](docs/non_fungible_token_dto.md)
 - [non_fungible_token_response_t](docs/non_fungible_token_response.md)
 - [origin_t](docs/origin.md)
 - [origin_payment_schema_t](docs/origin_payment_schema.md)
 - [origin_transfer_schema_t](docs/origin_transfer_schema.md)
 - [overledger_transaction_response_schema_t](docs/overledger_transaction_response_schema.md)
 - [owner_t](docs/owner.md)
 - [owner_burn_schema_t](docs/owner_burn_schema.md)
 - [owner_remove_secondary_schema_t](docs/owner_remove_secondary_schema.md)
 - [pagination_t](docs/pagination.md)
 - [parameter_t](docs/parameter.md)
 - [payee_t](docs/payee.md)
 - [payee_credit_schema_t](docs/payee_credit_schema.md)
 - [payer_t](docs/payer.md)
 - [payer_credit_schema_t](docs/payer_credit_schema.md)
 - [payment_t](docs/payment.md)
 - [payment_request_details_schema_t](docs/payment_request_details_schema.md)
 - [payment_schema_t](docs/payment_schema.md)
 - [prepare_add_secondary_account_request_schema_t](docs/prepare_add_secondary_account_request_schema.md)
 - [prepare_and_execute_balance_details_t](docs/prepare_and_execute_balance_details.md)
 - [prepare_and_execute_overledger_error_response_t](docs/prepare_and_execute_overledger_error_response.md)
 - [prepare_and_execute_search_address_balance_response_t](docs/prepare_and_execute_search_address_balance_response.md)
 - [prepare_and_execute_transaction_response_t](docs/prepare_and_execute_transaction_response.md)
 - [prepare_approve_debit_transaction_request_schema_t](docs/prepare_approve_debit_transaction_request_schema.md)
 - [prepare_burn_transaction_request_schema_t](docs/prepare_burn_transaction_request_schema.md)
 - [prepare_burn_transaction_request_schema_qrc721_t](docs/prepare_burn_transaction_request_schema_qrc721.md)
 - [prepare_credit_transaction_request_schema_t](docs/prepare_credit_transaction_request_schema.md)
 - [prepare_mint_transaction_request_schema_qrc20_t](docs/prepare_mint_transaction_request_schema_qrc20.md)
 - [prepare_mint_transaction_request_schema_qrc721_t](docs/prepare_mint_transaction_request_schema_qrc721.md)
 - [prepare_native_transaction_request_schema_t](docs/prepare_native_transaction_request_schema.md)
 - [prepare_payment_transaction_request_schema_t](docs/prepare_payment_transaction_request_schema.md)
 - [prepare_remove_secondary_account_transaction_request_schema_t](docs/prepare_remove_secondary_account_transaction_request_schema.md)
 - [prepare_request_t](docs/prepare_request.md)
 - [prepare_request_details_t](docs/prepare_request_details.md)
 - [prepare_search_response_schema_t](docs/prepare_search_response_schema.md)
 - [prepare_search_schema_t](docs/prepare_search_schema.md)
 - [prepare_search_smart_contract_request_schema_t](docs/prepare_search_smart_contract_request_schema.md)
 - [prepare_transaction_response_t](docs/prepare_transaction_response.md)
 - [prepare_transaction_smart_contract_invoke_request_schema_t](docs/prepare_transaction_smart_contract_invoke_request_schema.md)
 - [prepare_transfer_transaction_request_schema_t](docs/prepare_transfer_transaction_request_schema.md)
 - [read_account_balance_request_schema_t](docs/read_account_balance_request_schema.md)
 - [read_approved_account_allowance_request_schema_t](docs/read_approved_account_allowance_request_schema.md)
 - [read_approved_account_request_details_schema_t](docs/read_approved_account_request_details_schema.md)
 - [read_approved_account_request_schema_t](docs/read_approved_account_request_schema.md)
 - [read_balance_request_details_schema_t](docs/read_balance_request_details_schema.md)
 - [read_balance_request_schema_t](docs/read_balance_request_schema.md)
 - [read_contract_owner_request_details_schema_t](docs/read_contract_owner_request_details_schema.md)
 - [read_contract_owner_request_schema_t](docs/read_contract_owner_request_schema.md)
 - [read_token_owner_request_details_schema_t](docs/read_token_owner_request_details_schema.md)
 - [read_token_owner_request_schema_t](docs/read_token_owner_request_schema.md)
 - [receiver_t](docs/receiver.md)
 - [remove_secondary_account_details_schema_t](docs/remove_secondary_account_details_schema.md)
 - [resource_monitored_address_details_t](docs/resource_monitored_address_details.md)
 - [resource_monitoring_address_details_t](docs/resource_monitoring_address_details.md)
 - [resource_monitoring_address_schema_t](docs/resource_monitoring_address_schema.md)
 - [resource_monitoring_details_t](docs/resource_monitoring_details.md)
 - [resource_monitoring_smart_contract_event_details_t](docs/resource_monitoring_smart_contract_event_details.md)
 - [resource_monitoring_subscription_t](docs/resource_monitoring_subscription.md)
 - [resource_monitoring_subscription_details_t](docs/resource_monitoring_subscription_details.md)
 - [script_pub_key_t](docs/script_pub_key.md)
 - [secondary_account_additional_owner_schema_t](docs/secondary_account_additional_owner_schema.md)
 - [secondary_account_owner_schema_t](docs/secondary_account_owner_schema.md)
 - [sender_t](docs/sender.md)
 - [signer_account_t](docs/signer_account.md)
 - [smart_contract_t](docs/smart_contract.md)
 - [smart_contract_destination_schema_t](docs/smart_contract_destination_schema.md)
 - [smart_contract_event_history_t](docs/smart_contract_event_history.md)
 - [smart_contract_function_schema_t](docs/smart_contract_function_schema.md)
 - [smart_contract_input_parameter_schema_t](docs/smart_contract_input_parameter_schema.md)
 - [smart_contract_invoke_request_details_schema_t](docs/smart_contract_invoke_request_details_schema.md)
 - [smart_contract_monitoring_details_schema_t](docs/smart_contract_monitoring_details_schema.md)
 - [smart_contract_monitoring_schema_t](docs/smart_contract_monitoring_schema.md)
 - [smart_contract_output_parameter_schema_t](docs/smart_contract_output_parameter_schema.md)
 - [smart_contract_payment_schema_t](docs/smart_contract_payment_schema.md)
 - [smart_contract_read_function_schema_t](docs/smart_contract_read_function_schema.md)
 - [smart_contract_read_schema_t](docs/smart_contract_read_schema.md)
 - [smart_contract_request_details_origin_t](docs/smart_contract_request_details_origin.md)
 - [smart_contract_schema_t](docs/smart_contract_schema.md)
 - [smart_contract_search_destination_schema_t](docs/smart_contract_search_destination_schema.md)
 - [smart_contract_search_function_schema_t](docs/smart_contract_search_function_schema.md)
 - [smart_contract_search_request_details_t](docs/smart_contract_search_request_details.md)
 - [smart_contract_search_schema_t](docs/smart_contract_search_schema.md)
 - [smart_contract_tag_t](docs/smart_contract_tag.md)
 - [status_t](docs/status.md)
 - [status_update_monitoring_request_schema_t](docs/status_update_monitoring_request_schema.md)
 - [status_update_schema_t](docs/status_update_schema.md)
 - [tier_function_dto_t](docs/tier_function_dto.md)
 - [token_read_qrc20_response_t](docs/token_read_qrc20_response.md)
 - [token_read_qrc721_response_t](docs/token_read_qrc721_response.md)
 - [token_read_response_details_t](docs/token_read_response_details.md)
 - [transaction_t](docs/transaction.md)
 - [transfer_t](docs/transfer.md)
 - [transfer_request_details_schema_t](docs/transfer_request_details_schema.md)
 - [transfer_schema_t](docs/transfer_schema.md)
 - [update_address_monitoring_schema_t](docs/update_address_monitoring_schema.md)
 - [update_webhook_subscription_request_schema_t](docs/update_webhook_subscription_request_schema.md)
 - [utxo_destination_t](docs/utxo_destination.md)
 - [utxo_native_data_t](docs/utxo_native_data.md)
 - [utxo_smart_contract_t](docs/utxo_smart_contract.md)
 - [vout_t](docs/vout.md)
 - [webhook_status_update_schema_t](docs/webhook_status_update_schema.md)
 - [webhook_subscription_details_t](docs/webhook_subscription_details.md)
 - [webhook_subscription_details_schema_t](docs/webhook_subscription_details_schema.md)
 - [webhook_subscription_status_update_response_t](docs/webhook_subscription_status_update_response.md)


## Documentation for Authorization


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


## Author



