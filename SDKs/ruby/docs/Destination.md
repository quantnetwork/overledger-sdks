# OpenapiClient::Destination

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **transfer** | [**Transfer**](Transfer.md) |  | [optional] |
| **smart_contract** | [**SmartContract**](SmartContract.md) |  | [optional] |
| **payment** | [**Payment**](Payment.md) |  | [optional] |
| **destination_id** | **String** | The unique identifiers of the destination | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Destination.new(
  transfer: null,
  smart_contract: null,
  payment: null,
  destination_id: null
)
```

