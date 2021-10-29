# OpenapiClient::OverledgerTransactionResponseSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **client_id** | **String** |  | [optional] |
| **request_id** | **String** |  | [optional] |
| **overledger_transaction_id** | **String** |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **transaction_history** | [**Array&lt;Status&gt;**](Status.md) |  | [optional] |
| **type** | **String** |  | [optional] |
| **transaction_id** | **String** |  | [optional] |
| **status** | [**Status**](Status.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OverledgerTransactionResponseSchema.new(
  client_id: null,
  request_id: null,
  overledger_transaction_id: null,
  location: null,
  transaction_history: null,
  type: null,
  transaction_id: null,
  status: null
)
```

