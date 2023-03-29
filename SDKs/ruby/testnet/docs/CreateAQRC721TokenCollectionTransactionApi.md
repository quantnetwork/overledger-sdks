# OpenapiClient::CreateAQRC721TokenCollectionTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**prepare_collect_request**](CreateAQRC721TokenCollectionTransactionApi.md#prepare_collect_request) | **POST** /v2/tokenise/preparation/transaction/qrc721/collect | Prepare a QRC721 token collection transaction for signing |


## prepare_collect_request

> <PrepareTransactionResponse> prepare_collect_request(authorization, prepare_payment_transaction_request_schema)

Prepare a QRC721 token collection transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::CreateAQRC721TokenCollectionTransactionApi.new
authorization = 'authorization_example' # String | 
prepare_payment_transaction_request_schema = OpenapiClient::PreparePaymentTransactionRequestSchema.new({location: OpenapiClient::Location.new({technology: 'technology_example', network: 'network_example'}), type: 'Payment', urgency: 'Normal', request_details: OpenapiClient::PaymentRequestDetailsSchema.new({destination: [OpenapiClient::DestinationPaymentSchema.new({destination_id: 'destination_id_example', payment: OpenapiClient::PaymentSchema.new({amount: 'amount_example', unit: 'unit_example'})})], origin: [OpenapiClient::OriginPaymentSchema.new({origin_id: 'origin_id_example'})]})}) # PreparePaymentTransactionRequestSchema | 

begin
  # Prepare a QRC721 token collection transaction for signing
  result = api_instance.prepare_collect_request(authorization, prepare_payment_transaction_request_schema)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAQRC721TokenCollectionTransactionApi->prepare_collect_request: #{e}"
end
```

#### Using the prepare_collect_request_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<PrepareTransactionResponse>, Integer, Hash)> prepare_collect_request_with_http_info(authorization, prepare_payment_transaction_request_schema)

```ruby
begin
  # Prepare a QRC721 token collection transaction for signing
  data, status_code, headers = api_instance.prepare_collect_request_with_http_info(authorization, prepare_payment_transaction_request_schema)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <PrepareTransactionResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CreateAQRC721TokenCollectionTransactionApi->prepare_collect_request_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **prepare_payment_transaction_request_schema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md) |  |  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

