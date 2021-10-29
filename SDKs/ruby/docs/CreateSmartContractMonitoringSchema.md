# OpenapiClient::CreateSmartContractMonitoringSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **subscription_details** | [**ResourceMonitoringSubscriptionDetails**](ResourceMonitoringSubscriptionDetails.md) |  | [optional] |
| **resource_monitoring** | [**ResourceMonitoringDetails**](ResourceMonitoringDetails.md) |  | [optional] |
| **subscription** | [**ResourceMonitoringSubscription**](ResourceMonitoringSubscription.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CreateSmartContractMonitoringSchema.new(
  subscription_details: null,
  resource_monitoring: null,
  subscription: null
)
```

