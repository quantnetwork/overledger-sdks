# OpenapiClient::BurnRequestDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **owner** | [**Array&lt;OwnerBurnSchema&gt;**](OwnerBurnSchema.md) | Who is the owner of the tokens | [optional] |
| **message** | **String** | Any text-based element of the data payload | [optional] |
| **overledger_signing_type** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::BurnRequestDetailsSchema.new(
  owner: null,
  message: null,
  overledger_signing_type: null
)
```

