# OpenapiClient::UTXOStatusSearchApi

All URIs are relative to *https://OVL 2.0*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**execute_utxo_prepared_search_request**](UTXOStatusSearchApi.md#execute_utxo_prepared_search_request) | **POST** /v2/execution/search/utxo | Execute a search for UTXO state on a DLT |
| [**prepare_search_utxo_state**](UTXOStatusSearchApi.md#prepare_search_utxo_state) | **POST** /v2/preparation/search/utxo/{utxoId} | Prepare Search for a UTXO State. |


## execute_utxo_prepared_search_request

> <ExecuteSearchUTXOResponseSchema> execute_utxo_prepared_search_request(authorization, request_id)

Execute a search for UTXO state on a DLT

Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::UTXOStatusSearchApi.new
authorization = 'authorization_example' # String | 
request_id = 'request_id_example' # String | 

begin
  # Execute a search for UTXO state on a DLT
  result = api_instance.execute_utxo_prepared_search_request(authorization, request_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UTXOStatusSearchApi->execute_utxo_prepared_search_request: #{e}"
end
```

#### Using the execute_utxo_prepared_search_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteSearchUTXOResponseSchema>, Integer, Hash)> execute_utxo_prepared_search_request_with_http_info(authorization, request_id)

```ruby
begin
  # Execute a search for UTXO state on a DLT
  data, status_code, headers = api_instance.execute_utxo_prepared_search_request_with_http_info(authorization, request_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteSearchUTXOResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UTXOStatusSearchApi->execute_utxo_prepared_search_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **request_id** | **String** |  |  |

### Return type

[**ExecuteSearchUTXOResponseSchema**](ExecuteSearchUTXOResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepare_search_utxo_state

> <PrepareSearchResponseSchema> prepare_search_utxo_state(authorization, utxo_id, prepare_search_schema)

Prepare Search for a UTXO State.

Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::UTXOStatusSearchApi.new
authorization = 'authorization_example' # String | 
utxo_id = 'utxo_id_example' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare Search for a UTXO State.
  result = api_instance.prepare_search_utxo_state(authorization, utxo_id, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling UTXOStatusSearchApi->prepare_search_utxo_state: #{e}"
end
```

#### Using the prepare_search_utxo_state_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareSearchResponseSchema>, Integer, Hash)> prepare_search_utxo_state_with_http_info(authorization, utxo_id, prepare_search_schema)

```ruby
begin
  # Prepare Search for a UTXO State.
  data, status_code, headers = api_instance.prepare_search_utxo_state_with_http_info(authorization, utxo_id, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareSearchResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling UTXOStatusSearchApi->prepare_search_utxo_state_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **utxo_id** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

