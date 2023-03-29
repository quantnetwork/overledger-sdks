# OpenapiClient::SmartContractMonitoringDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **smart_contract_event_details** | [**ResourceMonitoringSmartContractEventDetails**](ResourceMonitoringSmartContractEventDetails.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **smart_contract_event_history** | [**Array&lt;SmartContractEventHistory&gt;**](SmartContractEventHistory.md) |  | [optional] |
| **type** | **String** |  | [optional] |
| **status** | [**Status**](Status.md) |  | [optional] |
| **timestamp** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SmartContractMonitoringDetailsSchema.new(
  smart_contract_event_details: null,
  location: null,
  smart_contract_event_history: null,
  type: null,
  status: null,
  timestamp: null
)
```

