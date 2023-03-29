# OpenapiClient::MonitorSmartContractRequestSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **event_params** | [**Array&lt;MonitorSmartContractEventParam&gt;**](MonitorSmartContractEventParam.md) |  | [optional] |
| **event_name** | **String** |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **call_back_url** | **String** |  | [optional] |
| **smart_contract_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MonitorSmartContractRequestSchema.new(
  event_params: null,
  event_name: null,
  location: null,
  call_back_url: null,
  smart_contract_id: null
)
```

