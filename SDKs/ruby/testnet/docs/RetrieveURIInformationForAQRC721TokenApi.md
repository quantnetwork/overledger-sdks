# OpenapiClient::RetrieveURIInformationForAQRC721TokenApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**read_qrc721_smart_contract_uri**](RetrieveURIInformationForAQRC721TokenApi.md#read_qrc721_smart_contract_uri) | **POST** /v2/tokenise/tokens/qrc721/token-uri | Retrieve the URI for a specific QRC721 token |


## read_qrc721_smart_contract_uri

> <TokenReadQRC721Response> read_qrc721_smart_contract_uri(authorization, read_approved_account_request_schema)

Retrieve the URI for a specific QRC721 token

Submits a query to the DLN and returns the URI that is assigned to a particular QRC721 token

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::RetrieveURIInformationForAQRC721TokenApi.new
authorization = 'authorization_example' # String | 
read_approved_account_request_schema = OpenapiClient::ReadApprovedAccountRequestSchema.new # ReadApprovedAccountRequestSchema | 

begin
  # Retrieve the URI for a specific QRC721 token
  result = api_instance.read_qrc721_smart_contract_uri(authorization, read_approved_account_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveURIInformationForAQRC721TokenApi->read_qrc721_smart_contract_uri: #{e}"
end
```

#### Using the read_qrc721_smart_contract_uri_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TokenReadQRC721Response>, Integer, Hash)> read_qrc721_smart_contract_uri_with_http_info(authorization, read_approved_account_request_schema)

```ruby
begin
  # Retrieve the URI for a specific QRC721 token
  data, status_code, headers = api_instance.read_qrc721_smart_contract_uri_with_http_info(authorization, read_approved_account_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TokenReadQRC721Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveURIInformationForAQRC721TokenApi->read_qrc721_smart_contract_uri_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **read_approved_account_request_schema** | [**ReadApprovedAccountRequestSchema**](ReadApprovedAccountRequestSchema.md) |  |  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

