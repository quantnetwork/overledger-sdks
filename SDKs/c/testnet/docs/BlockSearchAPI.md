# BlockSearchAPI

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BlockSearchAPI_executePreparedSearchRequestBlock**](BlockSearchAPI.md#BlockSearchAPI_executePreparedSearchRequestBlock) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT
[**BlockSearchAPI_prepareSearchBlockByBlockId**](BlockSearchAPI.md#BlockSearchAPI_prepareSearchBlockByBlockId) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id.


# **BlockSearchAPI_executePreparedSearchRequestBlock**
```c
// Execute a search for a block on a DLT
//
// Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request
//
execute_search_block_response_t* BlockSearchAPI_executePreparedSearchRequestBlock(apiClient_t *apiClient, char * Authorization, char * requestId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**requestId** | **char \*** |  | 

### Return type

[execute_search_block_response_t](execute_search_block_response.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockSearchAPI_prepareSearchBlockByBlockId**
```c
// Prepare Search Block by Block Id.
//
// Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time
//
prepare_search_response_schema_t* BlockSearchAPI_prepareSearchBlockByBlockId(apiClient_t *apiClient, char * Authorization, char * blockId, prepare_search_schema_t * prepare_search_schema);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**Authorization** | **char \*** |  | 
**blockId** | **char \*** |  | 
**prepare_search_schema** | **[prepare_search_schema_t](prepare_search_schema.md) \*** |  | 

### Return type

[prepare_search_response_schema_t](prepare_search_response_schema.md) *


### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

