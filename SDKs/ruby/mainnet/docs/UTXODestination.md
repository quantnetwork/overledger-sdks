# OpenapiClient::UTXODestination

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **smart_contract** | [**UTXOSmartContract**](UTXOSmartContract.md) |  | [optional] |
| **payment** | [**Payment**](Payment.md) |  | [optional] |
| **destination_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UTXODestination.new(
  smart_contract: null,
  payment: null,
  destination_id: null
)
```

