# OpenapiClient::CreateTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**execute_prepared_request_native_transaction**](CreateTransactionApi.md#execute_prepared_request_native_transaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT |
| [**execute_prepared_request_transaction**](CreateTransactionApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on the DLT |
| [**prepare_native_transaction**](CreateTransactionApi.md#prepare_native_transaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction |
| [**prepare_transaction_request**](CreateTransactionApi.md#prepare_transaction_request) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing |


## execute_prepared_request_native_transaction

> <ExecuteTransactionResponse> execute_prepared_request_native_transaction(authorization, execute_transaction_request)

Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateTransactionApi.new
authorization = 'authorization_example' # String | 
execute_transaction_request = OpenapiClient::ExecuteTransactionRequest.new({request_id: 'request_id_example', signed: 'signed_example'}) # ExecuteTransactionRequest | 

begin
  # Execute a native transaction on the DLT
  result = api_instance.execute_prepared_request_native_transaction(authorization, execute_transaction_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateTransactionApi->execute_prepared_request_native_transaction: #{e}"
end
```

#### Using the execute_prepared_request_native_transaction_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteTransactionResponse>, Integer, Hash)> execute_prepared_request_native_transaction_with_http_info(authorization, execute_transaction_request)

```ruby
begin
  # Execute a native transaction on the DLT
  data, status_code, headers = api_instance.execute_prepared_request_native_transaction_with_http_info(authorization, execute_transaction_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateTransactionApi->execute_prepared_request_native_transaction_with_http_info: #{e}"
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


## execute_prepared_request_transaction

> <ExecuteTransactionResponse> execute_prepared_request_transaction(authorization, execute_transaction_request)

Execute a transaction on the DLT

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

api_instance = OpenapiClient::CreateTransactionApi.new
authorization = 'authorization_example' # String | 
execute_transaction_request = OpenapiClient::ExecuteTransactionRequest.new({request_id: 'request_id_example', signed: 'signed_example'}) # ExecuteTransactionRequest | 

begin
  # Execute a transaction on the DLT
  result = api_instance.execute_prepared_request_transaction(authorization, execute_transaction_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateTransactionApi->execute_prepared_request_transaction: #{e}"
end
```

#### Using the execute_prepared_request_transaction_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<ExecuteTransactionResponse>, Integer, Hash)> execute_prepared_request_transaction_with_http_info(authorization, execute_transaction_request)

```ruby
begin
  # Execute a transaction on the DLT
  data, status_code, headers = api_instance.execute_prepared_request_transaction_with_http_info(authorization, execute_transaction_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <ExecuteTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateTransactionApi->execute_prepared_request_transaction_with_http_info: #{e}"
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


## prepare_native_transaction

> <PrepareSearchResponseSchema> prepare_native_transaction(authorization, prepare_native_transaction_request_schema)

Prepare a DLT native transaction

Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateTransactionApi.new
authorization = 'authorization_example' # String | 
prepare_native_transaction_request_schema = OpenapiClient::PrepareNativeTransactionRequestSchema.new # PrepareNativeTransactionRequestSchema | 

begin
  # Prepare a DLT native transaction
  result = api_instance.prepare_native_transaction(authorization, prepare_native_transaction_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateTransactionApi->prepare_native_transaction: #{e}"
end
```

#### Using the prepare_native_transaction_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareSearchResponseSchema>, Integer, Hash)> prepare_native_transaction_with_http_info(authorization, prepare_native_transaction_request_schema)

```ruby
begin
  # Prepare a DLT native transaction
  data, status_code, headers = api_instance.prepare_native_transaction_with_http_info(authorization, prepare_native_transaction_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareSearchResponseSchema>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateTransactionApi->prepare_native_transaction_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_native_transaction_request_schema** | [**PrepareNativeTransactionRequestSchema**](PrepareNativeTransactionRequestSchema.md) |  |  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## prepare_transaction_request

> <PrepareTransactionResponse> prepare_transaction_request(authorization, prepare_payment_transaction_request_schema)

Prepare a DLT transaction for signing

Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are \"Payment\" (to send payments) and \"Smart Contract Invoke\" (to invoke arbitrary smart contract functions).   Warning: Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateTransactionApi.new
authorization = 'authorization_example' # String | 
prepare_payment_transaction_request_schema = OpenapiClient::PreparePaymentTransactionRequestSchema.new # PreparePaymentTransactionRequestSchema | 

begin
  # Prepare a DLT transaction for signing
  result = api_instance.prepare_transaction_request(authorization, prepare_payment_transaction_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateTransactionApi->prepare_transaction_request: #{e}"
end
```

#### Using the prepare_transaction_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareTransactionResponse>, Integer, Hash)> prepare_transaction_request_with_http_info(authorization, prepare_payment_transaction_request_schema)

```ruby
begin
  # Prepare a DLT transaction for signing
  data, status_code, headers = api_instance.prepare_transaction_request_with_http_info(authorization, prepare_payment_transaction_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateTransactionApi->prepare_transaction_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_payment_transaction_request_schema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md) |  |  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

