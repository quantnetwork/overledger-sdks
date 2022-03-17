# OpenapiClient::CreateAQRC20DebitTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**prepare_debit_request**](CreateAQRC20DebitTransactionApi.md#prepare_debit_request) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing |


## prepare_debit_request

> <PrepareTransactionResponse> prepare_debit_request(authorization, prepare_credit_transaction_request_schema)

Prepare a QRC20 token debit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \"Approve Debit\" and \"Create Debit\". The 'Approve Debit' transaction type will allow you to approve someone to make a pull payment from your account and the \"Create Debit\" transaction type will create the payment to pull the approved amount from an account.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateAQRC20DebitTransactionApi.new
authorization = 'authorization_example' # String | 
prepare_credit_transaction_request_schema = OpenapiClient::PrepareCreditTransactionRequestSchema.new # PrepareCreditTransactionRequestSchema | 

begin
  # Prepare a QRC20 token debit transaction for signing
  result = api_instance.prepare_debit_request(authorization, prepare_credit_transaction_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAQRC20DebitTransactionApi->prepare_debit_request: #{e}"
end
```

#### Using the prepare_debit_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareTransactionResponse>, Integer, Hash)> prepare_debit_request_with_http_info(authorization, prepare_credit_transaction_request_schema)

```ruby
begin
  # Prepare a QRC20 token debit transaction for signing
  data, status_code, headers = api_instance.prepare_debit_request_with_http_info(authorization, prepare_credit_transaction_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAQRC20DebitTransactionApi->prepare_debit_request_with_http_info: #{e}"
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

