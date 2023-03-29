# OpenapiClient::RetrieveAccountBalanceForAQRC20TokenApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**read_qrc20_smart_contract_balance**](RetrieveAccountBalanceForAQRC20TokenApi.md#read_qrc20_smart_contract_balance) | **POST** /v2/tokenise/tokens/qrc20/account-balance | Retrieve the balance of QRC20 tokens for an account |


## read_qrc20_smart_contract_balance

> <TokenReadQRC20Response> read_qrc20_smart_contract_balance(authorization, read_account_balance_request_schema)

Retrieve the balance of QRC20 tokens for an account

Submits a query to the Blockchain Network and returns the balance of QRC20 tokens for an account .

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::RetrieveAccountBalanceForAQRC20TokenApi.new
authorization = 'authorization_example' # String | 
read_account_balance_request_schema = OpenapiClient::ReadAccountBalanceRequestSchema.new # ReadAccountBalanceRequestSchema | 

begin
  # Retrieve the balance of QRC20 tokens for an account
  result = api_instance.read_qrc20_smart_contract_balance(authorization, read_account_balance_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveAccountBalanceForAQRC20TokenApi->read_qrc20_smart_contract_balance: #{e}"
end
```

#### Using the read_qrc20_smart_contract_balance_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TokenReadQRC20Response>, Integer, Hash)> read_qrc20_smart_contract_balance_with_http_info(authorization, read_account_balance_request_schema)

```ruby
begin
  # Retrieve the balance of QRC20 tokens for an account
  data, status_code, headers = api_instance.read_qrc20_smart_contract_balance_with_http_info(authorization, read_account_balance_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TokenReadQRC20Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveAccountBalanceForAQRC20TokenApi->read_qrc20_smart_contract_balance_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **read_account_balance_request_schema** | [**ReadAccountBalanceRequestSchema**](ReadAccountBalanceRequestSchema.md) |  |  |

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

