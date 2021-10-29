# OpenapiClient::Block

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **block_id** | **String** |  | [optional] |
| **number** | **Integer** |  | [optional] |
| **transaction_ids** | **Array&lt;String&gt;** |  | [optional] |
| **size** | [**Array&lt;BlockSize&gt;**](BlockSize.md) |  | [optional] |
| **hashes** | [**Array&lt;BlockHash&gt;**](BlockHash.md) |  | [optional] |
| **linked_blocks** | [**LinkedBlocks**](LinkedBlocks.md) |  | [optional] |
| **number_of_transactions** | **Integer** |  | [optional] |
| **message** | **String** |  | [optional] |
| **timestamp** | **Integer** |  | [optional] |
| **native_data** | **Object** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Block.new(
  block_id: null,
  number: null,
  transaction_ids: null,
  size: null,
  hashes: null,
  linked_blocks: null,
  number_of_transactions: null,
  message: null,
  timestamp: null,
  native_data: null
)
```

