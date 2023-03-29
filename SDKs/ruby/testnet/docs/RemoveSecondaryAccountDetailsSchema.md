# OpenapiClient::RemoveSecondaryAccountDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | [**OwnerRemoveSecondarySchema**](OwnerRemoveSecondarySchema.md) |  | [optional] |
| **additional_owner** | [**AdditionalOwnerRemoveSecondarySchema**](AdditionalOwnerRemoveSecondarySchema.md) |  | [optional] |
| **message** | **String** | Any text-based element of the data payload | [optional] |
| **overledger_signing_type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RemoveSecondaryAccountDetailsSchema.new(
  owner: null,
  additional_owner: null,
  message: null,
  overledger_signing_type: null
)
```

