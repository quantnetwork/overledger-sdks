# CreateATransactionAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateATransactionAPI_executePreparedRequestNativeTransaction**](CreateATransactionAPI.md#CreateATransactionAPI_executePreparedRequestNativeTransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**CreateATransactionAPI_executePreparedRequestTransaction**](CreateATransactionAPI.md#CreateATransactionAPI_executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**CreateATransactionAPI_prepareNativeTransaction**](CreateATransactionAPI.md#CreateATransactionAPI_prepareNativeTransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**CreateATransactionAPI_prepareTransactionRequest1**](CreateATransactionAPI.md#CreateATransactionAPI_prepareTransactionRequest1) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing


# **CreateATransactionAPI_executePreparedRequestNativeTransaction**
```c
// Execute a native transaction on the DLT
//
// Takes a request ID and submits a signed native transaction to the requested DLT
//
execute_transaction_response_t* CreateATransactionAPI_executePreparedRequestNativeTransaction(apiClient_t *apiClient, char * Authorization, execute_transaction_request_t * execute_transaction_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**execute_transaction_request** | **[execute_transaction_request_t](execute_transaction_request.md) \*** |  | 

### Return type

[execute_transaction_response_t](execute_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateATransactionAPI_executePreparedRequestTransaction**
```c
// Execute a transaction on a DLT
//
// Takes a request ID and submits a signed transaction to the requested DLT.
//
execute_transaction_response_t* CreateATransactionAPI_executePreparedRequestTransaction(apiClient_t *apiClient, char * Authorization, execute_transaction_request_t * execute_transaction_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**execute_transaction_request** | **[execute_transaction_request_t](execute_transaction_request.md) \*** |  | 

### Return type

[execute_transaction_response_t](execute_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateATransactionAPI_prepareNativeTransaction**
```c
// Prepare a DLT native transaction
//
// Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
//
prepare_search_response_schema_t* CreateATransactionAPI_prepareNativeTransaction(apiClient_t *apiClient, char * Authorization, prepare_native_transaction_request_schema_t * prepare_native_transaction_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_native_transaction_request_schema** | **[prepare_native_transaction_request_schema_t](prepare_native_transaction_request_schema.md) \*** |  | 

### Return type

[prepare_search_response_schema_t](prepare_search_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CreateATransactionAPI_prepareTransactionRequest1**
```c
// Prepare a DLT transaction for signing
//
// The first step of submitting a transaction to Overledger requires preparing the transaction for signing. This API transforms a transaction request into a payload that can be signed. It returns a request ID that is used to execute the transaction after it is signed.  There are three types of transactions supported: * Payment     * Send payments in the native token of the network     * Send payments with ERC20 fungible tokens supported by Overledger on Ethereum-compatible networks. To help you test ERC20 functionality we have deployed the QNT token on the Ethereum-based test networks we support. You can check the request samples to view an example of a Smart Contract Invoke which requests test QNT from our faucet contracts. Please note that the faucet Smart Contract ID is different for all the test networks. Here is a list of faucet ids per network:         * Ethereum Goerli Testnet: 0x8cFCC46A00d6E9e86aacFa74AC5f74e90Fb6994c  * Transfer     * Transfer ownership of ERC721 non-fungible tokens supported by Overledger on Ethereum * Contract Invoke     * Call any function on any contract deployed on Ethereum, Polygon, XDC Network or our Hyperledger Fabric Sandbox
//
prepare_transaction_response_t* CreateATransactionAPI_prepareTransactionRequest1(apiClient_t *apiClient, char * Authorization, prepare_payment_transaction_request_schema_t * prepare_payment_transaction_request_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**prepare_payment_transaction_request_schema** | **[prepare_payment_transaction_request_schema_t](prepare_payment_transaction_request_schema.md) \*** |  | 

### Return type

[prepare_transaction_response_t](prepare_transaction_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

