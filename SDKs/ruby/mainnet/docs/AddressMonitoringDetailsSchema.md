# OpenapiClient::AddressMonitoringDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **location** | [**Location**](Location.md) |  | [optional] |
| **address_details** | [**ResourceMonitoredAddressDetails**](ResourceMonitoredAddressDetails.md) |  | [optional] |
| **type** | **String** |  | [optional] |
| **timestamp** | **Time** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AddressMonitoringDetailsSchema.new(
  location: null,
  address_details: null,
  type: null,
  timestamp: null
)
```

