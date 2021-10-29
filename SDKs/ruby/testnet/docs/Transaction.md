# OpenapiClient::Transaction

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **signature** | **Array&lt;String&gt;** | The signatures of this transaction | [optional] |
| **origin** | [**Array&lt;Origin&gt;**](Origin.md) |  | [optional] |
| **fee** | [**Fee**](Fee.md) |  | [optional] |
| **destination** | [**Array&lt;Destination&gt;**](Destination.md) |  | [optional] |
| **signed** | **String** |  | [optional] |
| **total_payment_amount** | [**Array&lt;Payment&gt;**](Payment.md) |  | [optional] |
| **message** | **String** | Any text-based element of the data payload | [optional] |
| **transaction_id** | **String** | The unique identifier of the transaction on this DLN | [optional] |
| **encoded** | **Array&lt;String&gt;** |  | [optional] |
| **native_data** | **Object** |  | [optional] |
| **extra_fields** | **Object** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Transaction.new(
  signature: null,
  origin: null,
  fee: null,
  destination: null,
  signed: null,
  total_payment_amount: null,
  message: null,
  transaction_id: null,
  encoded: null,
  native_data: null,
  extra_fields: null
)
```

