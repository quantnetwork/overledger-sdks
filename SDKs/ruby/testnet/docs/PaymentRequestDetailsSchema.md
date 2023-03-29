# OpenapiClient::PaymentRequestDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **destination** | [**Array&lt;DestinationPaymentSchema&gt;**](DestinationPaymentSchema.md) | List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail |  |
| **message** | **String** | Any text-based element of the data payload | [optional] |
| **overledger_signing_type** | **String** | The method of signing used to submit the transaction | [optional] |
| **origin** | [**Array&lt;OriginPaymentSchema&gt;**](OriginPaymentSchema.md) | List of where this transaction is coming from |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PaymentRequestDetailsSchema.new(
  destination: null,
  message: null,
  overledger_signing_type: null,
  origin: null
)
```

