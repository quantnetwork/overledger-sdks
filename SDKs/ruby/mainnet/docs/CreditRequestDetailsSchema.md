# OpenapiClient::CreditRequestDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **payee** | [**Array&lt;PayeeCreditSchema&gt;**](PayeeCreditSchema.md) | Who are the payees of this transaction | [optional] |
| **message** | **String** | Any text-based element of the data payload | [optional] |
| **payer** | [**Array&lt;PayerCreditSchema&gt;**](PayerCreditSchema.md) | Who are the payers of this transaction | [optional] |
| **overledger_signing_type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CreditRequestDetailsSchema.new(
  payee: null,
  message: null,
  payer: null,
  overledger_signing_type: null
)
```

