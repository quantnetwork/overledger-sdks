# OpenapiClient::MintRequestDetailsSchemaQrc20

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **creator** | [**CreatorMintSchema**](CreatorMintSchema.md) |  | [optional] |
| **beneficiary** | [**BeneficiaryMintSchemaQrc20**](BeneficiaryMintSchemaQrc20.md) |  | [optional] |
| **message** | **String** | Any text-based element of the data payload | [optional] |
| **overledger_signing_type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MintRequestDetailsSchemaQrc20.new(
  creator: null,
  beneficiary: null,
  message: null,
  overledger_signing_type: null
)
```

