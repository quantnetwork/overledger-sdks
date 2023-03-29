# OpenapiClient::SmartContractSearchApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**auto_execute_search_smart_contract_query_request**](SmartContractSearchApi.md#auto_execute_search_smart_contract_query_request) | **POST** /v2/autoexecution/search/smartcontract | Prepare and automatically execute a search for a smart contract query on a DLT. |
| [**execute_prepared_search_request**](SmartContractSearchApi.md#execute_prepared_search_request) | **POST** /v2/execution/search/smartcontract | Execute a read of a smart contract on a DLT |
| [**prepare_smart_contract_query_request**](SmartContractSearchApi.md#prepare_smart_contract_query_request) | **POST** /v2/preparation/search/smartcontract | Prepare a read of a smart contract on a DLT |


## auto_execute_search_smart_contract_query_request

> <AutoExecuteSearchAddressBalanceResponseSchema> auto_execute_search_smart_contract_query_request(authorization, prepare_search_schema)

Prepare and automatically execute a search for a smart contract query on a DLT.

Generates a request ID and automatically executes the smart contract query search on the requested DLT.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::SmartContractSearchApi.new
authorization = 'authorization_example' # String | 
prepare_search_schema = OpenapiClient::PrepareSearchSchema.new # PrepareSearchSchema | 

begin
  # Prepare and automatically execute a search for a smart contract query on a DLT.
  result = api_instance.auto_execute_search_smart_contract_query_request(authorization, prepare_search_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SmartContractSearchApi->auto_execute_search_smart_contract_query_request: #{e}"
end
```

#### Using the auto_execute_search_smart_contract_query_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<AutoExecuteSearchAddressBalanceResponseSchema>, Integer, Hash)> auto_execute_search_smart_contract_query_request_with_http_info(authorization, prepare_search_schema)

```ruby
begin
  # Prepare and automatically execute a search for a smart contract query on a DLT.
  data, status_code, headers = api_instance.auto_execute_search_smart_contract_query_request_with_http_info(authorization, prepare_search_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <AutoExecuteSearchAddressBalanceResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SmartContractSearchApi->auto_execute_search_smart_contract_query_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_search_schema** | [**PrepareSearchSchema**](PrepareSearchSchema.md) |  |  |

### Return type

[**AutoExecuteSearchAddressBalanceResponseSchema**](AutoExecuteSearchAddressBalanceResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## execute_prepared_search_request

> <ExecuteSmartContractReadResponseSchema> execute_prepared_search_request(authorization, request_id)

Execute a read of a smart contract on a DLT

Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::SmartContractSearchApi.new
authorization = 'authorization_example' # String | 
request_id = 'request_id_example' # String | 

begin
  # Execute a read of a smart contract on a DLT
  result = api_instance.execute_prepared_search_request(authorization, request_id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SmartContractSearchApi->execute_prepared_search_request: #{e}"
end
```

#### Using the execute_prepared_search_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteSmartContractReadResponseSchema>, Integer, Hash)> execute_prepared_search_request_with_http_info(authorization, request_id)

```ruby
begin
  # Execute a read of a smart contract on a DLT
  data, status_code, headers = api_instance.execute_prepared_search_request_with_http_info(authorization, request_id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteSmartContractReadResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SmartContractSearchApi->execute_prepared_search_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **request_id** | **String** |  |  |

### Return type

[**ExecuteSmartContractReadResponseSchema**](ExecuteSmartContractReadResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## prepare_smart_contract_query_request

> <PrepareSearchResponseSchema> prepare_smart_contract_query_request(authorization, prepare_search_smart_contract_request_schema)

Prepare a read of a smart contract on a DLT

Returns a request ID for executing a smart contract read on Ethereum.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::SmartContractSearchApi.new
authorization = 'authorization_example' # String | 
prepare_search_smart_contract_request_schema = OpenapiClient::PrepareSearchSmartContractRequestSchema.new # PrepareSearchSmartContractRequestSchema | 

begin
  # Prepare a read of a smart contract on a DLT
  result = api_instance.prepare_smart_contract_query_request(authorization, prepare_search_smart_contract_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling SmartContractSearchApi->prepare_smart_contract_query_request: #{e}"
end
```

#### Using the prepare_smart_contract_query_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareSearchResponseSchema>, Integer, Hash)> prepare_smart_contract_query_request_with_http_info(authorization, prepare_search_smart_contract_request_schema)

```ruby
begin
  # Prepare a read of a smart contract on a DLT
  data, status_code, headers = api_instance.prepare_smart_contract_query_request_with_http_info(authorization, prepare_search_smart_contract_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareSearchResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling SmartContractSearchApi->prepare_smart_contract_query_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_search_smart_contract_request_schema** | [**PrepareSearchSmartContractRequestSchema**](PrepareSearchSmartContractRequestSchema.md) |  |  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

