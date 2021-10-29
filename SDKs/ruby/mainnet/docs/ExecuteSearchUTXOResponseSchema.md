# OpenapiClient::ExecuteSearchUTXOResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **destination** | [**Array&lt;UTXODestination&gt;**](UTXODestination.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **timestamp** | [**UTXOTimestampSchema**](UTXOTimestampSchema.md) |  | [optional] |
| **status** | [**Status**](Status.md) |  | [optional] |
| **native_data** | [**UTXONativeData**](UTXONativeData.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ExecuteSearchUTXOResponseSchema.new(
  destination: null,
  location: null,
  timestamp: null,
  status: null,
  native_data: null
)
```

