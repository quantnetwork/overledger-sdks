# OpenapiClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**read_approved_debit_amount**](RetrieveApprovedAccountAllowanceForAQRC20TokenApi.md#read_approved_debit_amount) | **POST** /v2/tokenise/tokens/qrc20/approved-debit-amount | Retrieve how many QRC20 tokens an address is allowed to debit |


## read_approved_debit_amount

> <TokenReadQRC20Response> read_approved_debit_amount(authorization, read_approved_account_allowance_request_schema)

Retrieve how many QRC20 tokens an address is allowed to debit

Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi.new
authorization = 'authorization_example' # String | 
read_approved_account_allowance_request_schema = OpenapiClient::ReadApprovedAccountAllowanceRequestSchema.new # ReadApprovedAccountAllowanceRequestSchema | 

begin
  # Retrieve how many QRC20 tokens an address is allowed to debit
  result = api_instance.read_approved_debit_amount(authorization, read_approved_account_allowance_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveApprovedAccountAllowanceForAQRC20TokenApi->read_approved_debit_amount: #{e}"
end
```

#### Using the read_approved_debit_amount_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TokenReadQRC20Response>, Integer, Hash)> read_approved_debit_amount_with_http_info(authorization, read_approved_account_allowance_request_schema)

```ruby
begin
  # Retrieve how many QRC20 tokens an address is allowed to debit
  data, status_code, headers = api_instance.read_approved_debit_amount_with_http_info(authorization, read_approved_account_allowance_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TokenReadQRC20Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveApprovedAccountAllowanceForAQRC20TokenApi->read_approved_debit_amount_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **read_approved_account_allowance_request_schema** | [**ReadApprovedAccountAllowanceRequestSchema**](ReadApprovedAccountAllowanceRequestSchema.md) |  |  |

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

