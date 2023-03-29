# OpenapiClient::Destination

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **payment** | [**Payment**](Payment.md) |  | [optional] |
| **transfer** | [**Transfer**](Transfer.md) |  | [optional] |
| **destination_id** | **String** | The unique identifier of the destination | [optional] |
| **smart_contract** | [**SmartContract**](SmartContract.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Destination.new(
  payment: null,
  transfer: null,
  destination_id: null,
  smart_contract: null
)
```

