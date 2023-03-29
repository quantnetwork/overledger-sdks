# OpenapiClient::AutoExecuteSearchUTXOResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **execution_utxo_search_response** | [**ExecuteSearchUTXOResponse**](ExecuteSearchUTXOResponse.md) |  | [optional] |
| **prepare_and_execute_overledger_error_response** | [**PrepareAndExecuteOverledgerErrorResponse**](PrepareAndExecuteOverledgerErrorResponse.md) |  | [optional] |
| **preparation_utxo_search_response** | [**PrepareTransactionResponse**](PrepareTransactionResponse.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AutoExecuteSearchUTXOResponseSchema.new(
  execution_utxo_search_response: null,
  prepare_and_execute_overledger_error_response: null,
  preparation_utxo_search_response: null
)
```

