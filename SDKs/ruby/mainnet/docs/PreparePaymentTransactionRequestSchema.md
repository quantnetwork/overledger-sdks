# OpenapiClient::PreparePaymentTransactionRequestSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **urgency** | **String** |  | [optional] |
| **request_details** | [**PaymentRequestDetailsSchema**](PaymentRequestDetailsSchema.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PreparePaymentTransactionRequestSchema.new(
  urgency: null,
  request_details: null,
  location: null,
  type: null
)
```

