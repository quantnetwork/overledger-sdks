# OpenapiClient::Erc20DTO

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **is_qrc20** | **Boolean** |  | [optional] |
| **token_unit** | **String** |  | [optional] |
| **decimal_places** | **Integer** |  | [optional] |
| **functions** | [**Array&lt;TierFunctionDTO&gt;**](TierFunctionDTO.md) |  | [optional] |
| **token_name** | **String** |  | [optional] |
| **smart_contract_address** | **String** |  | [optional] |
| **location** | [**LocationDTO**](LocationDTO.md) |  | [optional] |
| **version** | **String** |  | [optional] |
| **url** | **String** |  | [optional] |
| **audit_date** | **Date** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Erc20DTO.new(
  is_qrc20: null,
  token_unit: null,
  decimal_places: null,
  functions: null,
  token_name: null,
  smart_contract_address: null,
  location: null,
  version: null,
  url: null,
  audit_date: null
)
```

