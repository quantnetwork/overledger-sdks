# OpenapiClient::PaymentRequestDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **overledger_signing_type** | **String** |  | [optional] |
| **origin** | [**Array&lt;OriginPaymentSchema&gt;**](OriginPaymentSchema.md) | Where is this transaction coming from | [optional] |
| **destination** | [**Array&lt;DestinationPaymentSchema&gt;**](DestinationPaymentSchema.md) | The Destination of this transaction | [optional] |
| **message** | **String** | Any text-based element of the data payload | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PaymentRequestDetailsSchema.new(
  overledger_signing_type: null,
  origin: null,
  destination: null,
  message: null
)
```

