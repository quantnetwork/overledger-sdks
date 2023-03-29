# OpenapiClient::ExecuteTransactionRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **signed** | **String** | The raw data after transaction signing | [optional] |
| **request_id** | **String** | The ID assigned to a preparation request in Overledger |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ExecuteTransactionRequest.new(
  signed: null,
  request_id: null
)
```

