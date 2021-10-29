# OpenapiClient::TransactionSearchApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**execute_prepared_search_request_transaction**](TransactionSearchApi.md#execute_prepared_search_request_transaction) | **POST** /v2/execution/search/transaction | Execute a search for a transaction on a DLT |
| [**prepare_search_request**](TransactionSearchApi.md#prepare_search_request) | **POST** /v2/preparation/search/transaction | Prepare a search for a transaction on a DLT |


## execute_prepared_search_request_transaction

> <ExecuteSearchTransactionResponse> execute_prepared_search_request_transaction(authorization, request_id)

Execute a search for a transaction on a DLT

Takes a request ID and searches for the transaction on the requested DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::TransactionSearchApi.new
authorization = 'authorization_example' # String | 
request_id = 'request_id_example' # String | 

begin
  # Execute a search for a transaction on a DLT
  result = api_instance.execute_prepared_search_request_transaction(authorization, request_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TransactionSearchApi->execute_prepared_search_request_transaction: #{e}"
end
```

#### Using the execute_prepared_search_request_transaction_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteSearchTransactionResponse>, Integer, Hash)> execute_prepared_search_request_transaction_with_http_info(authorization, request_id)

```ruby
begin
  # Execute a search for a transaction on a DLT
  data, status_code, headers = api_instance.execute_prepared_search_request_transaction_with_http_info(authorization, request_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteSearchTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TransactionSearchApi->execute_prepared_search_request_transaction_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **request_id** | **String** |  |  |

### Return type

[**ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepare_search_request

> <PrepareSearchResponseSchema> prepare_search_request(authorization, transaction_id, prepare_search_schema)

Prepare a search for a transaction on a DLT

Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::TransactionSearchApi.new
authorization = 'authorization_example' # String | 
transaction_id = 'transaction_id_example' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare a search for a transaction on a DLT
  result = api_instance.prepare_search_request(authorization, transaction_id, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling TransactionSearchApi->prepare_search_request: #{e}"
end
```

#### Using the prepare_search_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareSearchResponseSchema>, Integer, Hash)> prepare_search_request_with_http_info(authorization, transaction_id, prepare_search_schema)

```ruby
begin
  # Prepare a search for a transaction on a DLT
  data, status_code, headers = api_instance.prepare_search_request_with_http_info(authorization, transaction_id, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareSearchResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling TransactionSearchApi->prepare_search_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **transaction_id** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

