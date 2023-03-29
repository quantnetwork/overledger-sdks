# OpenapiClient::RetrieveTheCountOfQRC721TokensApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**get_token_count**](RetrieveTheCountOfQRC721TokensApi.md#get_token_count) | **POST** /v2/tokenise/tokens/qrc721/token-count | Retrieve the count of a QRC721 token for a particular account |


## get_token_count

> <TokenReadQRC721Response> get_token_count(authorization, read_balance_request_schema)

Retrieve the count of a QRC721 token for a particular account

Submits a query to the DLN and returns the number of QRC721 tokens held by the given account ID

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::RetrieveTheCountOfQRC721TokensApi.new
authorization = 'authorization_example' # String | 
read_balance_request_schema = OpenapiClient::ReadBalanceRequestSchema.new # ReadBalanceRequestSchema | 

begin
  # Retrieve the count of a QRC721 token for a particular account
  result = api_instance.get_token_count(authorization, read_balance_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveTheCountOfQRC721TokensApi->get_token_count: #{e}"
end
```

#### Using the get_token_count_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TokenReadQRC721Response>, Integer, Hash)> get_token_count_with_http_info(authorization, read_balance_request_schema)

```ruby
begin
  # Retrieve the count of a QRC721 token for a particular account
  data, status_code, headers = api_instance.get_token_count_with_http_info(authorization, read_balance_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TokenReadQRC721Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveTheCountOfQRC721TokensApi->get_token_count_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **read_balance_request_schema** | [**ReadBalanceRequestSchema**](ReadBalanceRequestSchema.md) |  |  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

