# \MDappTransactionQueryApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_ovl_transaction_by_tx_id**](MDappTransactionQueryApi.md#get_ovl_transaction_by_tx_id) | **GET** /v2/mdapptransaction/{overledgertransactionid} | Retrieve information about a specific transaction created by your application in Overledger
[**get_ovl_transactions_by_client_id**](MDappTransactionQueryApi.md#get_ovl_transactions_by_client_id) | **GET** /v2/mdapptransactions | Retrieve a list of transactions created by your application in Overledger



## get_ovl_transaction_by_tx_id

> crate::models::OverledgerTransactionResponseSchema get_ovl_transaction_by_tx_id(authorization, overledgertransactionid)
Retrieve information about a specific transaction created by your application in Overledger

Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**overledgertransactionid** | **String** |  | [required] |

### Return type

[**crate::models::OverledgerTransactionResponseSchema**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_ovl_transactions_by_client_id

> Vec<crate::models::OverledgerTransactionResponseSchema> get_ovl_transactions_by_client_id(authorization, offset, length)
Retrieve a list of transactions created by your application in Overledger

Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**offset** | Option<**i32**> |  |  |[default to 0]
**length** | Option<**i32**> |  |  |[default to 25]

### Return type

[**Vec<crate::models::OverledgerTransactionResponseSchema>**](OverledgerTransactionResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

