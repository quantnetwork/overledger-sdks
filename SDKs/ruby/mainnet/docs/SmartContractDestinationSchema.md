# OpenapiClient::SmartContractDestinationSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **smart_contract** | [**SmartContractSchema**](SmartContractSchema.md) |  | [optional] |
| **payment** | [**SmartContractPaymentSchema**](SmartContractPaymentSchema.md) |  | [optional] |
| **destination_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SmartContractDestinationSchema.new(
  smart_contract: null,
  payment: null,
  destination_id: null
)
```

