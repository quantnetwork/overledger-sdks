# OpenapiClient::AutoExecSearchAddressSequenceResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **prepare_and_execute_overledger_error_response** | [**PrepareAndExecuteOverledgerErrorResponse**](PrepareAndExecuteOverledgerErrorResponse.md) |  | [optional] |
| **execution_address_sequence_search_response** | [**ExecuteSearchSequenceResponse**](ExecuteSearchSequenceResponse.md) |  | [optional] |
| **preparation_address_sequence_search_response** | [**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AutoExecSearchAddressSequenceResponseSchema.new(
  prepare_and_execute_overledger_error_response: null,
  execution_address_sequence_search_response: null,
  preparation_address_sequence_search_response: null
)
```

