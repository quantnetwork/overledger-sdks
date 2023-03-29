# OpenapiClient::AutoExecuteSearchAddressBalanceResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **prepare_and_execute_overledger_error_response** | [**PrepareAndExecuteOverledgerErrorResponse**](PrepareAndExecuteOverledgerErrorResponse.md) |  | [optional] |
| **execution_address_balance_search_response** | [**PrepareAndExecuteSearchAddressBalanceResponse**](PrepareAndExecuteSearchAddressBalanceResponse.md) |  | [optional] |
| **preparation_address_balance_search_response** | [**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AutoExecuteSearchAddressBalanceResponseSchema.new(
  prepare_and_execute_overledger_error_response: null,
  execution_address_balance_search_response: null,
  preparation_address_balance_search_response: null
)
```

