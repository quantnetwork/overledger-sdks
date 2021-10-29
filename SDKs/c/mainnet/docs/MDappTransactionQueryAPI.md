# MDappTransactionQueryAPI

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MDappTransactionQueryAPI_getOvlTransactionByTxId**](MDappTransactionQueryAPI.md#MDappTransactionQueryAPI_getOvlTransactionByTxId) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**MDappTransactionQueryAPI_getOvlTransactionsByClientId**](MDappTransactionQueryAPI.md#MDappTransactionQueryAPI_getOvlTransactionsByClientId) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger


# **MDappTransactionQueryAPI_getOvlTransactionByTxId**
```c
// Retrieve information about a specific transaction created by your application in Overledger
//
// Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
//
overledger_transaction_response_schema_t* MDappTransactionQueryAPI_getOvlTransactionByTxId(apiClient_t *apiClient, char * Authorization, char * overledgertransactionid);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**overledgertransactionid** | **char \*** |  | 

### Return type

[overledger_transaction_response_schema_t](overledger_transaction_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MDappTransactionQueryAPI_getOvlTransactionsByClientId**
```c
// Retrieve a list of transactions created by your application in Overledger
//
// Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
//
list_t* MDappTransactionQueryAPI_getOvlTransactionsByClientId(apiClient_t *apiClient, char * Authorization, int offset, int length);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**offset** | **int** |  | [optional] [default to 0]
**length** | **int** |  | [optional] [default to 25]

### Return type

[list_t](overledger_transaction_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

