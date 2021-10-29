# OpenapiClient::PrepareSearchResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gateway_fee** | [**Fee**](Fee.md) |  | [optional] |
| **request_id** | **String** | The ID assigned to a preparation request in Overledger | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareSearchResponseSchema.new(
  gateway_fee: null,
  request_id: null
)
```

