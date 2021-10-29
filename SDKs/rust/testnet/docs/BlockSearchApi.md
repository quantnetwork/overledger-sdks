# \BlockSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**execute_prepared_search_request_block**](BlockSearchApi.md#execute_prepared_search_request_block) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
[**prepare_search_block_by_block_id**](BlockSearchApi.md#prepare_search_block_by_block_id) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.



## execute_prepared_search_request_block

> crate::models::ExecuteSearchBlockResponse execute_prepared_search_request_block(authorization, request_id)
Execute a search for a block on a DLT

Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**request_id** | **String** |  | [required] |

### Return type

[**crate::models::ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## prepare_search_block_by_block_id

> crate::models::PrepareSearchResponseSchema prepare_search_block_by_block_id(authorization, block_id, prepare_search_schema)
Prepare Search Block by Block Id.

Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**authorization** | **String** |  | [required] |
**block_id** | **String** |  | [required] |
**prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  | [required] |

### Return type

[**crate::models::PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

