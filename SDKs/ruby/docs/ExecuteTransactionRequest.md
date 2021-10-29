# OpenapiClient::ExecuteTransactionRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **request_id** | **String** | The ID assigned to a preparation request in Overledger |  |
| **signed** | **String** | The raw data after transaction signing |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ExecuteTransactionRequest.new(
  request_id: null,
  signed: null
)
```

