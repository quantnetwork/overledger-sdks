# OpenapiClient::CreateAndPayFromAQRC20SharedAccountApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**execute_prepared_request_transaction**](CreateAndPayFromAQRC20SharedAccountApi.md#execute_prepared_request_transaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT |
| [**prepare_secondary_owner_request**](CreateAndPayFromAQRC20SharedAccountApi.md#prepare_secondary_owner_request) | **POST** /v2/preparation/secondaryaccountowner | Prepare a request for a QRC20 shared account |


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

api_instance = OpenapiClient::CreateAndPayFromAQRC20SharedAccountApi.new
authorization = 'authorization_example' # String | 
execute_transaction_request = OpenapiClient::ExecuteTransactionRequest.new({request_id: 'request_id_example'}) # ExecuteTransactionRequest | 

begin
  # Execute a transaction on a DLT
  result = api_instance.execute_prepared_request_transaction(authorization, execute_transaction_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAndPayFromAQRC20SharedAccountApi->execute_prepared_request_transaction: #{e}"
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
  puts "Error when calling CreateAndPayFromAQRC20SharedAccountApi->execute_prepared_request_transaction_with_http_info: #{e}"
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


## prepare_secondary_owner_request

> <PrepareTransactionResponse> prepare_secondary_owner_request(authorization, prepare_add_secondary_account_request_schema)

Prepare a request for a QRC20 shared account

Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \"Remove Account\" which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateAndPayFromAQRC20SharedAccountApi.new
authorization = 'authorization_example' # String | 
prepare_add_secondary_account_request_schema = OpenapiClient::PrepareAddSecondaryAccountRequestSchema.new({location: OpenapiClient::Location.new({technology: 'technology_example', network: 'network_example'}), type: 'Payment', urgency: 'Normal'}) # PrepareAddSecondaryAccountRequestSchema | 

begin
  # Prepare a request for a QRC20 shared account
  result = api_instance.prepare_secondary_owner_request(authorization, prepare_add_secondary_account_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAndPayFromAQRC20SharedAccountApi->prepare_secondary_owner_request: #{e}"
end
```

#### Using the prepare_secondary_owner_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareTransactionResponse>, Integer, Hash)> prepare_secondary_owner_request_with_http_info(authorization, prepare_add_secondary_account_request_schema)

```ruby
begin
  # Prepare a request for a QRC20 shared account
  data, status_code, headers = api_instance.prepare_secondary_owner_request_with_http_info(authorization, prepare_add_secondary_account_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAndPayFromAQRC20SharedAccountApi->prepare_secondary_owner_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_add_secondary_account_request_schema** | [**PrepareAddSecondaryAccountRequestSchema**](PrepareAddSecondaryAccountRequestSchema.md) |  |  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

