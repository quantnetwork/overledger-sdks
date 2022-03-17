# OpenapiClient::PrepareCreditTransactionRequestSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **urgency** | **String** |  | [optional] |
| **request_details** | [**CreditRequestDetailsSchema**](CreditRequestDetailsSchema.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareCreditTransactionRequestSchema.new(
  urgency: null,
  request_details: null,
  location: null,
  type: null
)
```

