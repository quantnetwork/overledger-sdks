# OpenapiClient::RetrieveSupplyInformationForAQRCTokenApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**read_qrc721_smart_contract_current_supply**](RetrieveSupplyInformationForAQRCTokenApi.md#read_qrc721_smart_contract_current_supply) | **POST** /v2/tokenise/tokens/{flowType}/current-supply | Retrieve how many QRC tokens are currently in supply |


## read_qrc721_smart_contract_current_supply

> <TokenReadQRC721Response> read_qrc721_smart_contract_current_supply(authorization, flow_type, prepare_request)

Retrieve how many QRC tokens are currently in supply

Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::RetrieveSupplyInformationForAQRCTokenApi.new
authorization = 'authorization_example' # String | 
flow_type = 'flow_type_example' # String | 
prepare_request = OpenapiClient::PrepareRequest.new # PrepareRequest | 

begin
  # Retrieve how many QRC tokens are currently in supply
  result = api_instance.read_qrc721_smart_contract_current_supply(authorization, flow_type, prepare_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveSupplyInformationForAQRCTokenApi->read_qrc721_smart_contract_current_supply: #{e}"
end
```

#### Using the read_qrc721_smart_contract_current_supply_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TokenReadQRC721Response>, Integer, Hash)> read_qrc721_smart_contract_current_supply_with_http_info(authorization, flow_type, prepare_request)

```ruby
begin
  # Retrieve how many QRC tokens are currently in supply
  data, status_code, headers = api_instance.read_qrc721_smart_contract_current_supply_with_http_info(authorization, flow_type, prepare_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TokenReadQRC721Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveSupplyInformationForAQRCTokenApi->read_qrc721_smart_contract_current_supply_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **authorization** | **String** |  |  |
| **flow_type** | **String** |  |  |
| **prepare_request** | [**PrepareRequest**](PrepareRequest.md) |  |  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

