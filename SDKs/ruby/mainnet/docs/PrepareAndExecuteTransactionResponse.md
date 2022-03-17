# OpenapiClient::PrepareAndExecuteTransactionResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **execution_transaction_search_overledger_error_response** | [**PrepareAndExecuteOverledgerErrorResponse**](PrepareAndExecuteOverledgerErrorResponse.md) |  | [optional] |
| **preparation_transaction_search_response** | [**PrepareTransactionResponse**](PrepareTransactionResponse.md) |  | [optional] |
| **execution_transaction_search_response** | [**ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareAndExecuteTransactionResponse.new(
  execution_transaction_search_overledger_error_response: null,
  preparation_transaction_search_response: null,
  execution_transaction_search_response: null
)
```

