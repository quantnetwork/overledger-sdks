# OpenapiClient::AutoExecuteSearchBlockResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **prepare_and_execute_overledger_error_response** | [**PrepareAndExecuteOverledgerErrorResponse**](PrepareAndExecuteOverledgerErrorResponse.md) |  | [optional] |
| **execution_block_search_response** | [**ExecuteSearchBlockResponse**](ExecuteSearchBlockResponse.md) |  | [optional] |
| **preparation_block_search_response** | [**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AutoExecuteSearchBlockResponseSchema.new(
  prepare_and_execute_overledger_error_response: null,
  execution_block_search_response: null,
  preparation_block_search_response: null
)
```

