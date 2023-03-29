# OpenapiClient::RetrieveOwnerInformationForAQRC721TokenApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**read_qrc721_smart_contract_token_owner**](RetrieveOwnerInformationForAQRC721TokenApi.md#read_qrc721_smart_contract_token_owner) | **POST** /v2/tokenise/tokens/qrc721/token-owner | Retrieve which account currently owns a specific QRC721 token |


## read_qrc721_smart_contract_token_owner

> <TokenReadQRC721Response> read_qrc721_smart_contract_token_owner(authorization, read_token_owner_request_schema)

Retrieve which account currently owns a specific QRC721 token

Submits a query to the DLN and returns the address that currently has owns a particular QRC721 token.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::RetrieveOwnerInformationForAQRC721TokenApi.new
authorization = 'authorization_example' # String | 
read_token_owner_request_schema = OpenapiClient::ReadTokenOwnerRequestSchema.new # ReadTokenOwnerRequestSchema | 

begin
  # Retrieve which account currently owns a specific QRC721 token
  result = api_instance.read_qrc721_smart_contract_token_owner(authorization, read_token_owner_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveOwnerInformationForAQRC721TokenApi->read_qrc721_smart_contract_token_owner: #{e}"
end
```

#### Using the read_qrc721_smart_contract_token_owner_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TokenReadQRC721Response>, Integer, Hash)> read_qrc721_smart_contract_token_owner_with_http_info(authorization, read_token_owner_request_schema)

```ruby
begin
  # Retrieve which account currently owns a specific QRC721 token
  data, status_code, headers = api_instance.read_qrc721_smart_contract_token_owner_with_http_info(authorization, read_token_owner_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TokenReadQRC721Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveOwnerInformationForAQRC721TokenApi->read_qrc721_smart_contract_token_owner_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **read_token_owner_request_schema** | [**ReadTokenOwnerRequestSchema**](ReadTokenOwnerRequestSchema.md) |  |  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

