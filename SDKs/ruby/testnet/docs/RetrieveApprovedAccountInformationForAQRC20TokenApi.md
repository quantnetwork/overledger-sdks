# OpenapiClient::RetrieveApprovedAccountInformationForAQRC20TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**read_qrc20_secondary_account_owner**](RetrieveApprovedAccountInformationForAQRC20TokenApi.md#read_qrc20_secondary_account_owner) | **POST** /v2/tokenise/tokens/qrc20/secondary-account-owner | Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token. |


## read_qrc20_secondary_account_owner

> <TokenReadQRC20Response> read_qrc20_secondary_account_owner(authorization, read_contract_owner_request_schema)

Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

Submits a query to the Blockchain Network and returns whether an account is approved to make payments on behalf of another account for a particular QRC20 token.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::RetrieveApprovedAccountInformationForAQRC20TokenApi.new
authorization = 'authorization_example' # String | 
read_contract_owner_request_schema = OpenapiClient::ReadContractOwnerRequestSchema.new # ReadContractOwnerRequestSchema | 

begin
  # Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
  result = api_instance.read_qrc20_secondary_account_owner(authorization, read_contract_owner_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveApprovedAccountInformationForAQRC20TokenApi->read_qrc20_secondary_account_owner: #{e}"
end
```

#### Using the read_qrc20_secondary_account_owner_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TokenReadQRC20Response>, Integer, Hash)> read_qrc20_secondary_account_owner_with_http_info(authorization, read_contract_owner_request_schema)

```ruby
begin
  # Retrieve whether an account is approved to make payments on behalf of another account for a particular QRC20 token.
  data, status_code, headers = api_instance.read_qrc20_secondary_account_owner_with_http_info(authorization, read_contract_owner_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TokenReadQRC20Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveApprovedAccountInformationForAQRC20TokenApi->read_qrc20_secondary_account_owner_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **read_contract_owner_request_schema** | [**ReadContractOwnerRequestSchema**](ReadContractOwnerRequestSchema.md) |  |  |

### Return type

[**TokenReadQRC20Response**](TokenReadQRC20Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

