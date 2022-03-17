# OpenapiClient::ExecuteSearchUTXOResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **utxo_id** | **String** |  | [optional] |
| **destination** | [**Array&lt;UTXODestination&gt;**](UTXODestination.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **timestamp** | [**UTXOTimestampSchema**](UTXOTimestampSchema.md) |  | [optional] |
| **status** | [**Status**](Status.md) |  | [optional] |
| **native_data** | [**UTXONativeData**](UTXONativeData.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ExecuteSearchUTXOResponseSchema.new(
  utxo_id: null,
  destination: null,
  location: null,
  timestamp: null,
  status: null,
  native_data: null
)
```

