# OpenapiClient::ManageQRC20TokenSupplyApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**execute_prepared_request_transaction**](ManageQRC20TokenSupplyApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT |
| [**prepare_supply_request1**](ManageQRC20TokenSupplyApi.md#prepare_supply_request1) | **POST** /v2/preparation/supply | Prepare a request to manage QRC20 token supply |


## execute_prepared_request_transaction

> <ExecuteTransactionResponse> execute_prepared_request_transaction(authorization, execute_transaction_request)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageQRC20TokenSupplyApi.new
authorization = 'authorization_example' # String | 
execute_transaction_request = OpenapiClient::ExecuteTransactionRequest.new({request_id: 'request_id_example'}) # ExecuteTransactionRequest | 

begin
  # Execute a transaction on a DLT
  result = api_instance.execute_prepared_request_transaction(authorization, execute_transaction_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageQRC20TokenSupplyApi->execute_prepared_request_transaction: #{e}"
end
```

#### Using the execute_prepared_request_transaction_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteTransactionResponse>, Integer, Hash)> execute_prepared_request_transaction_with_http_info(authorization, execute_transaction_request)

```ruby
begin
  # Execute a transaction on a DLT
  data, status_code, headers = api_instance.execute_prepared_request_transaction_with_http_info(authorization, execute_transaction_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageQRC20TokenSupplyApi->execute_prepared_request_transaction_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **execute_transaction_request** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md) |  |  |

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepare_supply_request1

> <PrepareTransactionResponse> prepare_supply_request1(authorization, prepare_mint_transaction_request_schema_qrc20)

Prepare a request to manage QRC20 token supply

Transforms a transaction request to manage QRC20 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue more tokens for your QRC20 token, and \"Burn Tokens\" which will allow you to destroy your QRC20 tokens. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageQRC20TokenSupplyApi.new
authorization = 'authorization_example' # String | 
prepare_mint_transaction_request_schema_qrc20 = OpenapiClient::PrepareMintTransactionRequestSchemaQrc20.new({location: OpenapiClient::Location.new({technology: 'technology_example', network: 'network_example'}), type: 'Payment', urgency: 'Normal'}) # PrepareMintTransactionRequestSchemaQrc20 | 

begin
  # Prepare a request to manage QRC20 token supply
  result = api_instance.prepare_supply_request1(authorization, prepare_mint_transaction_request_schema_qrc20)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageQRC20TokenSupplyApi->prepare_supply_request1: #{e}"
end
```

#### Using the prepare_supply_request1_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareTransactionResponse>, Integer, Hash)> prepare_supply_request1_with_http_info(authorization, prepare_mint_transaction_request_schema_qrc20)

```ruby
begin
  # Prepare a request to manage QRC20 token supply
  data, status_code, headers = api_instance.prepare_supply_request1_with_http_info(authorization, prepare_mint_transaction_request_schema_qrc20)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageQRC20TokenSupplyApi->prepare_supply_request1_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_mint_transaction_request_schema_qrc20** | [**PrepareMintTransactionRequestSchemaQrc20**](PrepareMintTransactionRequestSchemaQrc20.md) |  |  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

