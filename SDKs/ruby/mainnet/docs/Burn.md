# OpenapiClient::Burn

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **token_name** | **String** | Name of the token | [optional] |
| **amount** | **String** | The amount of a currency | [optional] |
| **unit** | **String** | The unit of this currency/token | [optional] |
| **metadata** | **String** | (Optional) String of metadata | [optional] |
| **token_id** | **String** | Unique identifier for the specific token | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Burn.new(
  token_name: null,
  amount: null,
  unit: null,
  metadata: null,
  token_id: null
)
```

