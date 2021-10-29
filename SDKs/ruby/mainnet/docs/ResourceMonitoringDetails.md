# OpenapiClient::ResourceMonitoringDetails

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **resource_monitoring_id** | **String** |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **type** | **String** |  | [optional] |
| **timestamp** | **Time** |  | [optional] |
| **status** | [**Status**](Status.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ResourceMonitoringDetails.new(
  resource_monitoring_id: null,
  location: null,
  type: null,
  timestamp: null,
  status: null
)
```

