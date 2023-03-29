# OpenapiClient::FungibleTokenControllerApi

All URIs are relative to *https://api.sandbox.overledger.io*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**get_token**](FungibleTokenControllerApi.md#get_token) | **GET** /v2/token/fungible |  |


## get_token

> <Erc20DTO> get_token(technology, network, unit)



### Examples

```ruby
require 'time'
require 'openapi_client'

api_instance = OpenapiClient::FungibleTokenControllerApi.new
technology = 'technology_example' # String | 
network = 'network_example' # String | 
unit = 'unit_example' # String | 

begin
  
  result = api_instance.get_token(technology, network, unit)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling FungibleTokenControllerApi->get_token: #{e}"
end
```

#### Using the get_token_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<Erc20DTO>, Integer, Hash)> get_token_with_http_info(technology, network, unit)

```ruby
begin
  
  data, status_code, headers = api_instance.get_token_with_http_info(technology, network, unit)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <Erc20DTO>
rescue OpenapiClient::ApiError => e
  puts "Error when calling FungibleTokenControllerApi->get_token_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **technology** | **String** |  |  |
| **network** | **String** |  |  |
| **unit** | **String** |  |  |

### Return type

[**Erc20DTO**](Erc20DTO.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: */*

