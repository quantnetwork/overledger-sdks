# \SmartContractSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_search_request**](SmartContractSearchApi.md#execute_prepared_search_request) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT
[**prepare_smart_contract_query_request**](SmartContractSearchApi.md#prepare_smart_contract_query_request) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT



## execute_prepared_search_request

> crate::models::ExecuteSmartContractReadResponseSchema execute_prepared_search_request(authorization, request_id)
Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**request_id** | **String** |  | [required] |

### Return type

[**crate::models::ExecuteSmartContractReadResponseSchema**](ExecuteSmartContractReadResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## prepare_smart_contract_query_request

> crate::models::PrepareSearchResponseSchema prepare_smart_contract_query_request(authorization, prepare_search_smart_contract_request_schema)
Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**prepare_search_smart_contract_request_schema** | [**PrepareSearchSmartContractRequestSchema**](PrepareSearchSmartContractRequestSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

