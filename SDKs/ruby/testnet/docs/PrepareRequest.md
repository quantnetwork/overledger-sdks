# OpenapiClient::PrepareRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **api_lookup_path** | **String** |  | [optional] |
| **smart_contract_tag** | [**Array&lt;SmartContractTag&gt;**](SmartContractTag.md) |  | [optional] |
| **urgency** | **String** |  | [optional] |
| **request_details** | [**PrepareRequestDetails**](PrepareRequestDetails.md) |  | [optional] |
| **smart_contract_address** | **String** |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareRequest.new(
  api_lookup_path: null,
  smart_contract_tag: null,
  urgency: null,
  request_details: null,
  smart_contract_address: null,
  location: null,
  type: null
)
```

