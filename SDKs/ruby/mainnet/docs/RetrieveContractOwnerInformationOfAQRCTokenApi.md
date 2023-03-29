# OpenapiClient::RetrieveContractOwnerInformationOfAQRCTokenApi

All URIs are relative to *https://api.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**read_qrc_smart_contract_owner**](RetrieveContractOwnerInformationOfAQRCTokenApi.md#read_qrc_smart_contract_owner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token |


## read_qrc_smart_contract_owner

> <TokenReadQRC721Response> read_qrc_smart_contract_owner(authorization, flow_type, prepare_request)

Retrieve which account has contract owner permissions for a QRC token

Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
  config.access_token = 'YOUR ACCESS TOKEN'
end

api_instance = OpenapiClient::RetrieveContractOwnerInformationOfAQRCTokenApi.new
authorization = 'authorization_example' # String | 
flow_type = 'flow_type_example' # String | 
prepare_request = OpenapiClient::PrepareRequest.new # PrepareRequest | 

begin
  # Retrieve which account has contract owner permissions for a QRC token
  result = api_instance.read_qrc_smart_contract_owner(authorization, flow_type, prepare_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveContractOwnerInformationOfAQRCTokenApi->read_qrc_smart_contract_owner: #{e}"
end
```

#### Using the read_qrc_smart_contract_owner_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<TokenReadQRC721Response>, Integer, Hash)> read_qrc_smart_contract_owner_with_http_info(authorization, flow_type, prepare_request)

```ruby
begin
  # Retrieve which account has contract owner permissions for a QRC token
  data, status_code, headers = api_instance.read_qrc_smart_contract_owner_with_http_info(authorization, flow_type, prepare_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <TokenReadQRC721Response>
rescue OpenapiClient::ApiError => e
  puts "Error when calling RetrieveContractOwnerInformationOfAQRCTokenApi->read_qrc_smart_contract_owner_with_http_info: #{e}"
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

