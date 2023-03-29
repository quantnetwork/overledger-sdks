# OpenapiClient::ExecuteSearchUTXOResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **utxo_id** | **String** |  | [optional] |
| **destination** | [**Array&lt;Destination&gt;**](Destination.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **timestamp** | **String** |  | [optional] |
| **status** | [**Status**](Status.md) |  | [optional] |
| **native_data** | **Object** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ExecuteSearchUTXOResponse.new(
  utxo_id: null,
  destination: null,
  location: null,
  timestamp: null,
  status: null,
  native_data: null
)
```

