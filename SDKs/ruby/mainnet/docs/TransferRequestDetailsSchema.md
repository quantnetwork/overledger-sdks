# OpenapiClient::TransferRequestDetailsSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **destination** | [**Array&lt;DestinationTransferSchema&gt;**](DestinationTransferSchema.md) |  | [optional] |
| **message** | **String** |  | [optional] |
| **overledger_signing_type** | **String** |  | [optional] |
| **origin** | [**Array&lt;OriginTransferSchema&gt;**](OriginTransferSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TransferRequestDetailsSchema.new(
  destination: null,
  message: null,
  overledger_signing_type: null,
  origin: null
)
```

