# OpenapiClient::TransferRequestDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **overledger_signing_type** | **String** |  | [optional] |
| **origin** | [**Array&lt;OriginTransferSchema&gt;**](OriginTransferSchema.md) |  | [optional] |
| **destination** | [**Array&lt;DestinationTransferSchema&gt;**](DestinationTransferSchema.md) |  | [optional] |
| **message** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TransferRequestDetailsSchema.new(
  overledger_signing_type: null,
  origin: null,
  destination: null,
  message: null
)
```

