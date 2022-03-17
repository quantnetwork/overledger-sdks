# OpenapiClient::AddressSearchApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**auto_execute_search_address_balance_request**](AddressSearchApi.md#auto_execute_search_address_balance_request) | **POST** /v2/autoexecution/search/address/balance/{addressId} | Prepare and automatically execute a search for an address balance on a DLT. |
| [**execute_prepared_search_request_address_balance**](AddressSearchApi.md#execute_prepared_search_request_address_balance) | **POST** /v2/execution/search/address/balance | Execute a search for an address balance on a DLT |
| [**execute_prepared_search_request_address_sequence**](AddressSearchApi.md#execute_prepared_search_request_address_sequence) | **POST** /v2/execution/search/address/sequence | Execute a search for an address sequence on a DLT |
| [**prepare_address_balance_search_request**](AddressSearchApi.md#prepare_address_balance_search_request) | **POST** /v2/preparation/search/address/balance/{addressId} | Prepare Search for an Address Balance. |
| [**prepare_address_sequence_search_request**](AddressSearchApi.md#prepare_address_sequence_search_request) | **POST** /v2/preparation/search/address/sequence/{addressId} | Prepare Search for an Address Sequence. |
| [**prepare_address_sequence_search_request1**](AddressSearchApi.md#prepare_address_sequence_search_request1) | **POST** /v2/autoexecution/search/address/sequence/{addressId} | Prepare and automatically execute a search for an Address Sequence. |


## auto_execute_search_address_balance_request

> <AutoExecuteSearchAddressBalanceResponseSchema> auto_execute_search_address_balance_request(authorization, address_id, prepare_search_schema)

Prepare and automatically execute a search for an address balance on a DLT.

Generates a request ID and automatically executes the address balance search on the requested DLT.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::AddressSearchApi.new
authorization = 'authorization_example' # String | 
address_id = 'address_id_example' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare and automatically execute a search for an address balance on a DLT.
  result = api_instance.auto_execute_search_address_balance_request(authorization, address_id, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->auto_execute_search_address_balance_request: #{e}"
end
```

#### Using the auto_execute_search_address_balance_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AutoExecuteSearchAddressBalanceResponseSchema>, Integer, Hash)> auto_execute_search_address_balance_request_with_http_info(authorization, address_id, prepare_search_schema)

```ruby
begin
  # Prepare and automatically execute a search for an address balance on a DLT.
  data, status_code, headers = api_instance.auto_execute_search_address_balance_request_with_http_info(authorization, address_id, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AutoExecuteSearchAddressBalanceResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->auto_execute_search_address_balance_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **address_id** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**AutoExecuteSearchAddressBalanceResponseSchema**](AutoExecuteSearchAddressBalanceResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## execute_prepared_search_request_address_balance

> <ExecuteSearchBalanceResponse> execute_prepared_search_request_address_balance(authorization, request_id)

Execute a search for an address balance on a DLT

Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::AddressSearchApi.new
authorization = 'authorization_example' # String | 
request_id = 'request_id_example' # String | 

begin
  # Execute a search for an address balance on a DLT
  result = api_instance.execute_prepared_search_request_address_balance(authorization, request_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->execute_prepared_search_request_address_balance: #{e}"
end
```

#### Using the execute_prepared_search_request_address_balance_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteSearchBalanceResponse>, Integer, Hash)> execute_prepared_search_request_address_balance_with_http_info(authorization, request_id)

```ruby
begin
  # Execute a search for an address balance on a DLT
  data, status_code, headers = api_instance.execute_prepared_search_request_address_balance_with_http_info(authorization, request_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteSearchBalanceResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->execute_prepared_search_request_address_balance_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **request_id** | **String** |  |  |

### Return type

[**ExecuteSearchBalanceResponse**](ExecuteSearchBalanceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## execute_prepared_search_request_address_sequence

> <ExecuteSearchSequenceResponse> execute_prepared_search_request_address_sequence(authorization, request_id)

Execute a search for an address sequence on a DLT

Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT's

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::AddressSearchApi.new
authorization = 'authorization_example' # String | 
request_id = 'request_id_example' # String | 

begin
  # Execute a search for an address sequence on a DLT
  result = api_instance.execute_prepared_search_request_address_sequence(authorization, request_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->execute_prepared_search_request_address_sequence: #{e}"
end
```

#### Using the execute_prepared_search_request_address_sequence_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteSearchSequenceResponse>, Integer, Hash)> execute_prepared_search_request_address_sequence_with_http_info(authorization, request_id)

```ruby
begin
  # Execute a search for an address sequence on a DLT
  data, status_code, headers = api_instance.execute_prepared_search_request_address_sequence_with_http_info(authorization, request_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteSearchSequenceResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->execute_prepared_search_request_address_sequence_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **request_id** | **String** |  |  |

### Return type

[**ExecuteSearchSequenceResponse**](ExecuteSearchSequenceResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepare_address_balance_search_request

> <PrepareSearchResponseSchema> prepare_address_balance_search_request(authorization, address_id, prepare_search_schema)

Prepare Search for an Address Balance.

Perform an address balance search on the requested DLT. Returns a request ID to execute

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::AddressSearchApi.new
authorization = 'authorization_example' # String | 
address_id = 'address_id_example' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare Search for an Address Balance.
  result = api_instance.prepare_address_balance_search_request(authorization, address_id, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->prepare_address_balance_search_request: #{e}"
end
```

#### Using the prepare_address_balance_search_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareSearchResponseSchema>, Integer, Hash)> prepare_address_balance_search_request_with_http_info(authorization, address_id, prepare_search_schema)

```ruby
begin
  # Prepare Search for an Address Balance.
  data, status_code, headers = api_instance.prepare_address_balance_search_request_with_http_info(authorization, address_id, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareSearchResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->prepare_address_balance_search_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **address_id** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepare_address_sequence_search_request

> <PrepareSearchResponseSchema> prepare_address_sequence_search_request(authorization, address_id, prepare_search_schema)

Prepare Search for an Address Sequence.

Perform an address sequence search on the requested DLT.Returns a request ID to execute

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::AddressSearchApi.new
authorization = 'authorization_example' # String | 
address_id = 'address_id_example' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare Search for an Address Sequence.
  result = api_instance.prepare_address_sequence_search_request(authorization, address_id, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->prepare_address_sequence_search_request: #{e}"
end
```

#### Using the prepare_address_sequence_search_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareSearchResponseSchema>, Integer, Hash)> prepare_address_sequence_search_request_with_http_info(authorization, address_id, prepare_search_schema)

```ruby
begin
  # Prepare Search for an Address Sequence.
  data, status_code, headers = api_instance.prepare_address_sequence_search_request_with_http_info(authorization, address_id, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareSearchResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->prepare_address_sequence_search_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **address_id** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepare_address_sequence_search_request1

> <AutoExecSearchAddressSequenceResponseSchema> prepare_address_sequence_search_request1(authorization, address_id, prepare_search_schema)

Prepare and automatically execute a search for an Address Sequence.

Generates a request ID and automatically executes the address sequence search on the requested DLT.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::AddressSearchApi.new
authorization = 'authorization_example' # String | 
address_id = 'address_id_example' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare and automatically execute a search for an Address Sequence.
  result = api_instance.prepare_address_sequence_search_request1(authorization, address_id, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->prepare_address_sequence_search_request1: #{e}"
end
```

#### Using the prepare_address_sequence_search_request1_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AutoExecSearchAddressSequenceResponseSchema>, Integer, Hash)> prepare_address_sequence_search_request1_with_http_info(authorization, address_id, prepare_search_schema)

```ruby
begin
  # Prepare and automatically execute a search for an Address Sequence.
  data, status_code, headers = api_instance.prepare_address_sequence_search_request1_with_http_info(authorization, address_id, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AutoExecSearchAddressSequenceResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling AddressSearchApi->prepare_address_sequence_search_request1_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **address_id** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**AutoExecSearchAddressSequenceResponseSchema**](AutoExecSearchAddressSequenceResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

