# OpenapiClient::CreateSmartContractMonitoringSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **resource_monitoring** | [**ResourceMonitoringDetails**](ResourceMonitoringDetails.md) |  | [optional] |
| **subscription_details** | [**ResourceMonitoringSubscriptionDetails**](ResourceMonitoringSubscriptionDetails.md) |  | [optional] |
| **subscription** | [**ResourceMonitoringSubscription**](ResourceMonitoringSubscription.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CreateSmartContractMonitoringSchema.new(
  resource_monitoring: null,
  subscription_details: null,
  subscription: null
)
```

