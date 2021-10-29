# OpenapiClient::PrepareTransferTransactionRequestSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **urgency** | **String** |  | [optional] |
| **request_details** | [**TransferRequestDetailsSchema**](TransferRequestDetailsSchema.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareTransferTransactionRequestSchema.new(
  urgency: null,
  request_details: null,
  location: null,
  type: null
)
```

