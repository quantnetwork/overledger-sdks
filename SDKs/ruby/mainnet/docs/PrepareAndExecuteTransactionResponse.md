# OpenapiClient::PrepareAndExecuteTransactionResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **preparation_transaction_search_response** | [**PrepareTransactionResponse**](PrepareTransactionResponse.md) |  | [optional] |
| **execution_transaction_search_response** | [**ExecuteSearchTransactionResponse**](ExecuteSearchTransactionResponse.md) |  | [optional] |
| **execution_transaction_search_overledger_error_response** | [**PrepareAndExecuteOverledgerErrorResponse**](PrepareAndExecuteOverledgerErrorResponse.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareAndExecuteTransactionResponse.new(
  preparation_transaction_search_response: null,
  execution_transaction_search_response: null,
  execution_transaction_search_overledger_error_response: null
)
```

