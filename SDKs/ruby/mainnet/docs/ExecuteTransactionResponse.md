# OpenapiClient::ExecuteTransactionResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **urgency** | **String** |  | [optional] |
| **request_id** | **String** | The ID assigned to a preparation request in Overledger | [optional] |
| **overledger_transaction_id** | **String** |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **type** | **String** | The type of the transaction executed | [optional] |
| **transaction_id** | **String** | The ID assigned by Overledger to a transaction submitted to a DLT via Overledger | [optional] |
| **status** | [**Status**](Status.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ExecuteTransactionResponse.new(
  urgency: null,
  request_id: null,
  overledger_transaction_id: null,
  location: null,
  type: null,
  transaction_id: null,
  status: null
)
```

