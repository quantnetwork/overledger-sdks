# OpenapiClient::CreateAQRC20CreditTransactionApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**execute_prepared_request_transaction**](CreateAQRC20CreditTransactionApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT |
| [**prepare_credit_request**](CreateAQRC20CreditTransactionApi.md#prepare_credit_request) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing |


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

api_instance = OpenapiClient::CreateAQRC20CreditTransactionApi.new
authorization = 'authorization_example' # String | 
execute_transaction_request = OpenapiClient::ExecuteTransactionRequest.new({request_id: 'request_id_example'}) # ExecuteTransactionRequest | 

begin
  # Execute a transaction on a DLT
  result = api_instance.execute_prepared_request_transaction(authorization, execute_transaction_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAQRC20CreditTransactionApi->execute_prepared_request_transaction: #{e}"
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
  puts "Error when calling CreateAQRC20CreditTransactionApi->execute_prepared_request_transaction_with_http_info: #{e}"
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


## prepare_credit_request

> <PrepareTransactionResponse> prepare_credit_request(authorization, prepare_credit_transaction_request_schema)

Prepare a QRC20 token credit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Credit” which will allow you to make a payment to another specified account.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateAQRC20CreditTransactionApi.new
authorization = 'authorization_example' # String | 
prepare_credit_transaction_request_schema = OpenapiClient::PrepareCreditTransactionRequestSchema.new({location: OpenapiClient::Location.new({technology: 'technology_example', network: 'network_example'}), type: 'Payment', urgency: 'Normal'}) # PrepareCreditTransactionRequestSchema | 

begin
  # Prepare a QRC20 token credit transaction for signing
  result = api_instance.prepare_credit_request(authorization, prepare_credit_transaction_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAQRC20CreditTransactionApi->prepare_credit_request: #{e}"
end
```

#### Using the prepare_credit_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareTransactionResponse>, Integer, Hash)> prepare_credit_request_with_http_info(authorization, prepare_credit_transaction_request_schema)

```ruby
begin
  # Prepare a QRC20 token credit transaction for signing
  data, status_code, headers = api_instance.prepare_credit_request_with_http_info(authorization, prepare_credit_transaction_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAQRC20CreditTransactionApi->prepare_credit_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_credit_transaction_request_schema** | [**PrepareCreditTransactionRequestSchema**](PrepareCreditTransactionRequestSchema.md) |  |  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

