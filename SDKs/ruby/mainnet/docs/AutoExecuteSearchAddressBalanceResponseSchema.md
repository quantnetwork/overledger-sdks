# OpenapiClient::AutoExecuteSearchAddressBalanceResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **execution_address_balance_search_response** | [**PrepareAndExecuteSearchAddressBalanceResponse**](PrepareAndExecuteSearchAddressBalanceResponse.md) |  | [optional] |
| **prepare_and_execute_overledger_error_response** | [**PrepareAndExecuteOverledgerErrorResponse**](PrepareAndExecuteOverledgerErrorResponse.md) |  | [optional] |
| **preparation_address_balance_search_response** | [**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AutoExecuteSearchAddressBalanceResponseSchema.new(
  execution_address_balance_search_response: null,
  prepare_and_execute_overledger_error_response: null,
  preparation_address_balance_search_response: null
)
```

