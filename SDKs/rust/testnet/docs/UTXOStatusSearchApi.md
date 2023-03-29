# \UTXOStatusSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**auto_execute_search_utxo_request**](UTXOStatusSearchApi.md#auto_execute_search_utxo_request) | **POST** /v2/autoexecution/search/utxo/{utxoId} | Prepare and automatically execute a search for a UTXO on a DLT.
[**execute_utxo_prepared_search_request**](UTXOStatusSearchApi.md#execute_utxo_prepared_search_request) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT
[**prepare_search_utxo_state**](UTXOStatusSearchApi.md#prepare_search_utxo_state) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State.



## auto_execute_search_utxo_request

> crate::models::AutoExecuteSearchUtxoResponseSchema auto_execute_search_utxo_request(authorization, utxo_id, prepare_search_schema)
Prepare and automatically execute a search for a UTXO on a DLT.

Generates a request ID and automatically executes the utxo search on the requested DLT.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**utxo_id** | **String** |  | [required] |
**prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | [required] |

### Return type

[**crate::models::AutoExecuteSearchUtxoResponseSchema**](AutoExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## execute_utxo_prepared_search_request

> crate::models::ExecuteSearchUtxoResponseSchema execute_utxo_prepared_search_request(authorization, request_id)
Execute a search for UTXO state on a DLT

Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**request_id** | **String** |  | [required] |

### Return type

[**crate::models::ExecuteSearchUtxoResponseSchema**](ExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## prepare_search_utxo_state

> crate::models::PrepareSearchResponseSchema prepare_search_utxo_state(authorization, utxo_id, prepare_search_schema)
Prepare Search for a UTXO State.

Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**utxo_id** | **String** |  | [required] |
**prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

