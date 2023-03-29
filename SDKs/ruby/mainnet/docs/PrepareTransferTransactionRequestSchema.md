# OpenapiClient::PrepareTransferTransactionRequestSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **location** | [**Location**](Location.md) |  |  |
| **type** | **String** | The type of the transaction |  |
| **urgency** | **String** | This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal |  |
| **request_details** | [**TransferRequestDetailsSchema**](TransferRequestDetailsSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareTransferTransactionRequestSchema.new(
  location: null,
  type: null,
  urgency: null,
  request_details: null
)
```

