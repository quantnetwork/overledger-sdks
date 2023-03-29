# OpenapiClient::BlockSearchApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**auto_execute_search_block_request**](BlockSearchApi.md#auto_execute_search_block_request) | **POST** /v2/autoexecution/search/block/{blockId} | Prepare and automatically execute a search for a block on a DLT. |
| [**execute_prepared_search_request_block**](BlockSearchApi.md#execute_prepared_search_request_block) | **POST** /v2/execution/search/block | Execute a search for a block on a DLT |
| [**prepare_search_block_by_block_id**](BlockSearchApi.md#prepare_search_block_by_block_id) | **POST** /v2/preparation/search/block/{blockId} | Prepare Search Block by Block Id. |


## auto_execute_search_block_request

> <AutoExecuteSearchBlockResponseSchema> auto_execute_search_block_request(authorization, block_id, prepare_search_schema)

Prepare and automatically execute a search for a block on a DLT.

Generates a request ID and automatically executes the block search on the requested DLT.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::BlockSearchApi.new
authorization = 'authorization_example' # String | 
block_id = '54678' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare and automatically execute a search for a block on a DLT.
  result = api_instance.auto_execute_search_block_request(authorization, block_id, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BlockSearchApi->auto_execute_search_block_request: #{e}"
end
```

#### Using the auto_execute_search_block_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AutoExecuteSearchBlockResponseSchema>, Integer, Hash)> auto_execute_search_block_request_with_http_info(authorization, block_id, prepare_search_schema)

```ruby
begin
  # Prepare and automatically execute a search for a block on a DLT.
  data, status_code, headers = api_instance.auto_execute_search_block_request_with_http_info(authorization, block_id, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AutoExecuteSearchBlockResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BlockSearchApi->auto_execute_search_block_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **block_id** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**AutoExecuteSearchBlockResponseSchema**](AutoExecuteSearchBlockResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## execute_prepared_search_request_block

> <ExecuteSearchBlockResponse> execute_prepared_search_request_block(authorization, request_id)

Execute a search for a block on a DLT

Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::BlockSearchApi.new
authorization = 'authorization_example' # String | 
request_id = 'request_id_example' # String | 

begin
  # Execute a search for a block on a DLT
  result = api_instance.execute_prepared_search_request_block(authorization, request_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BlockSearchApi->execute_prepared_search_request_block: #{e}"
end
```

#### Using the execute_prepared_search_request_block_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteSearchBlockResponse>, Integer, Hash)> execute_prepared_search_request_block_with_http_info(authorization, request_id)

```ruby
begin
  # Execute a search for a block on a DLT
  data, status_code, headers = api_instance.execute_prepared_search_request_block_with_http_info(authorization, request_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteSearchBlockResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BlockSearchApi->execute_prepared_search_request_block_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **request_id** | **String** |  |  |

### Return type

[**ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepare_search_block_by_block_id

> <PrepareSearchResponseSchema> prepare_search_block_by_block_id(authorization, block_id, prepare_search_schema)

Prepare Search Block by Block Id.

Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::BlockSearchApi.new
authorization = 'authorization_example' # String | 
block_id = '54678' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare Search Block by Block Id.
  result = api_instance.prepare_search_block_by_block_id(authorization, block_id, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling BlockSearchApi->prepare_search_block_by_block_id: #{e}"
end
```

#### Using the prepare_search_block_by_block_id_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareSearchResponseSchema>, Integer, Hash)> prepare_search_block_by_block_id_with_http_info(authorization, block_id, prepare_search_schema)

```ruby
begin
  # Prepare Search Block by Block Id.
  data, status_code, headers = api_instance.prepare_search_block_by_block_id_with_http_info(authorization, block_id, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareSearchResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling BlockSearchApi->prepare_search_block_by_block_id_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **block_id** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

