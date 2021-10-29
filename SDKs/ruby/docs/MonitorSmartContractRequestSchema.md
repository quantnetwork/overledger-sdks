# OpenapiClient::MonitorSmartContractRequestSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **call_back_url** | **String** |  | [optional] |
| **event_params** | [**Array&lt;MonitorSmartContractEventParam&gt;**](MonitorSmartContractEventParam.md) |  | [optional] |
| **event_name** | **String** |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **smart_contract_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MonitorSmartContractRequestSchema.new(
  call_back_url: null,
  event_params: null,
  event_name: null,
  location: null,
  smart_contract_id: null
)
```

