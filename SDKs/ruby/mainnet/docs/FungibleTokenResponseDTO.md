# OpenapiClient::FungibleTokenResponseDTO

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **documentation_url** | **String** |  | [optional] |
| **unit** | **String** |  | [optional] |
| **decimal_places** | **Integer** |  | [optional] |
| **functions** | [**Array&lt;FunctionDTO&gt;**](FunctionDTO.md) |  | [optional] |
| **contract_type** | **String** |  | [optional] |
| **location** | [**LocationDTO**](LocationDTO.md) |  | [optional] |
| **smart_contract_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::FungibleTokenResponseDTO.new(
  documentation_url: null,
  unit: null,
  decimal_places: null,
  functions: null,
  contract_type: null,
  location: null,
  smart_contract_id: null
)
```

