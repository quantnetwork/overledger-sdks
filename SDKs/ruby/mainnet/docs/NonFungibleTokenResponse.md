# OpenapiClient::NonFungibleTokenResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **token_name** | **String** |  | [optional] |
| **documentation_url** | **String** |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **functions** | [**Array&lt;Function&gt;**](Function.md) |  | [optional] |
| **contract_type** | **String** |  | [optional] |
| **smart_contract_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::NonFungibleTokenResponse.new(
  token_name: null,
  documentation_url: null,
  location: null,
  functions: null,
  contract_type: null,
  smart_contract_id: null
)
```

