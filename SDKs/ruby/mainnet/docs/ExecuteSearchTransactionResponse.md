# OpenapiClient::ExecuteSearchTransactionResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **location** | [**Location**](Location.md) |  | [optional] |
| **type** | **String** | The type of the transaction object returned | [optional] |
| **transaction** | [**Transaction**](Transaction.md) |  | [optional] |
| **timestamp** | **String** | The unix time to read the object from | [optional] |
| **status** | [**Status**](Status.md) |  | [optional] |
| **extra_fields** | **Object** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ExecuteSearchTransactionResponse.new(
  location: null,
  type: null,
  transaction: null,
  timestamp: null,
  status: null,
  extra_fields: null
)
```

