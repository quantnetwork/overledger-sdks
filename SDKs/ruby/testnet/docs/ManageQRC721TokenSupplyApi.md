# OpenapiClient::ManageQRC721TokenSupplyApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**prepare_supply_request**](ManageQRC721TokenSupplyApi.md#prepare_supply_request) | **POST** /v2/tokenise/preparation/transaction/qrc721/supply | Prepare a transaction to manage QRC721 token supply |


## prepare_supply_request

> <PrepareTransactionResponse> prepare_supply_request(authorization, prepare_mint_transaction_request_schema_qrc721)

Prepare a transaction to manage QRC721 token supply

Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \"Burn Tokens\" which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::ManageQRC721TokenSupplyApi.new
authorization = 'authorization_example' # String | 
prepare_mint_transaction_request_schema_qrc721 = OpenapiClient::PrepareMintTransactionRequestSchemaQrc721.new({location: OpenapiClient::Location.new({technology: 'technology_example', network: 'network_example'}), type: 'Payment', urgency: 'Normal'}) # PrepareMintTransactionRequestSchemaQrc721 | 

begin
  # Prepare a transaction to manage QRC721 token supply
  result = api_instance.prepare_supply_request(authorization, prepare_mint_transaction_request_schema_qrc721)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageQRC721TokenSupplyApi->prepare_supply_request: #{e}"
end
```

#### Using the prepare_supply_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareTransactionResponse>, Integer, Hash)> prepare_supply_request_with_http_info(authorization, prepare_mint_transaction_request_schema_qrc721)

```ruby
begin
  # Prepare a transaction to manage QRC721 token supply
  data, status_code, headers = api_instance.prepare_supply_request_with_http_info(authorization, prepare_mint_transaction_request_schema_qrc721)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling ManageQRC721TokenSupplyApi->prepare_supply_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_mint_transaction_request_schema_qrc721** | [**PrepareMintTransactionRequestSchemaQrc721**](PrepareMintTransactionRequestSchemaQrc721.md) |  |  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

