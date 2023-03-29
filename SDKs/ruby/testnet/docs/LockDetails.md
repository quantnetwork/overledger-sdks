# OpenapiClient::LockDetails

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **expiry_date** | **String** |  | [optional] |
| **lock_id** | **String** |  | [optional] |
| **account_id** | **String** |  | [optional] |
| **amount** | **String** |  | [optional] |
| **unit** | **String** |  | [optional] |
| **account_owning_institution_id** | **String** |  | [optional] |
| **lock_description** | **String** |  | [optional] |
| **payee_id** | **String** |  | [optional] |
| **secret** | **String** |  | [optional] |
| **hash** | **String** |  | [optional] |
| **payee_owning_institution_id** | **String** |  | [optional] |
| **lock_owning_institution_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::LockDetails.new(
  expiry_date: null,
  lock_id: null,
  account_id: null,
  amount: null,
  unit: null,
  account_owning_institution_id: null,
  lock_description: null,
  payee_id: null,
  secret: null,
  hash: null,
  payee_owning_institution_id: null,
  lock_owning_institution_id: null
)
```

