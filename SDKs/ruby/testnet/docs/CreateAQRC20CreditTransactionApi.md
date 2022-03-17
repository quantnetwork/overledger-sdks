# OpenapiClient::CreateAQRC20CreditTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**prepare_credit_request**](CreateAQRC20CreditTransactionApi.md#prepare_credit_request) | **POST** /v2/preparation/credit | Prepare a QRC20 token credit transaction for signing |


## prepare_credit_request

> <PrepareTransactionResponse> prepare_credit_request(authorization, prepare_credit_transaction_request_schema)

Prepare a QRC20 token credit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is \"Create Credit\" which will allow you to make a payment to another specified account.

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
prepare_credit_transaction_request_schema = OpenapiClient::PrepareCreditTransactionRequestSchema.new # PrepareCreditTransactionRequestSchema | 

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

