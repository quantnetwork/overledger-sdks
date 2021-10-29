# OpenapiClient::PrepareTransactionResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **gateway_fee** | [**Fee**](Fee.md) |  | [optional] |
| **request_id** | **String** | The ID assigned to a preparation request in Overledger | [optional] |
| **dlt_fee** | [**Fee**](Fee.md) |  | [optional] |
| **native_data** | **Object** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareTransactionResponse.new(
  gateway_fee: null,
  request_id: null,
  dlt_fee: null,
  native_data: null
)
```

