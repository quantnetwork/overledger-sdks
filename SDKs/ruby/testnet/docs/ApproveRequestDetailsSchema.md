# OpenapiClient::ApproveRequestDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **payer** | [**Array&lt;PayerCreditSchema&gt;**](PayerCreditSchema.md) | Who are the payers of this transaction | [optional] |
| **mandate** | [**Array&lt;PayeeCreditSchema&gt;**](PayeeCreditSchema.md) | Who are the payees of this transaction | [optional] |
| **overledger_signing_type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ApproveRequestDetailsSchema.new(
  payer: null,
  mandate: null,
  overledger_signing_type: null
)
```

