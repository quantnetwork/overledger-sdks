# OpenapiClient::UTXODestination

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **destination_id** | **String** |  | [optional] |
| **smart_contract** | [**UTXOSmartContract**](UTXOSmartContract.md) |  | [optional] |
| **payment** | [**Payment**](Payment.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UTXODestination.new(
  destination_id: null,
  smart_contract: null,
  payment: null
)
```

