# OpenapiClient::PrepareRequestDetails

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **mandate** | [**Array&lt;Mandate&gt;**](Mandate.md) |  | [optional] |
| **alias_details** | [**AliasDetails**](AliasDetails.md) |  | [optional] |
| **pagination** | [**Pagination**](Pagination.md) |  | [optional] |
| **origin** | [**Array&lt;Origin&gt;**](Origin.md) |  | [optional] |
| **destination** | [**Array&lt;Destination&gt;**](Destination.md) |  | [optional] |
| **token_name** | **String** | Name of the token | [optional] |
| **block_search_type** | **String** |  | [optional] |
| **payer** | [**Array&lt;Payer&gt;**](Payer.md) |  | [optional] |
| **collector** | [**Collector**](Collector.md) |  | [optional] |
| **payee** | [**Array&lt;Payee&gt;**](Payee.md) |  | [optional] |
| **additional_owner** | [**AdditionalOwner**](AdditionalOwner.md) |  | [optional] |
| **owner** | [**Owner**](Owner.md) |  | [optional] |
| **creator** | [**Creator**](Creator.md) |  | [optional] |
| **receiver** | [**Array&lt;Receiver&gt;**](Receiver.md) |  | [optional] |
| **token_id** | **String** | Unique identifier for the specific token | [optional] |
| **message** | **String** |  | [optional] |
| **lock_details** | [**LockDetails**](LockDetails.md) |  | [optional] |
| **block_id** | **String** |  | [optional] |
| **account_id** | **String** | The unique identifiers of the account | [optional] |
| **token_unit** | **String** | The unit of this token | [optional] |
| **beneficiary** | [**Beneficiary**](Beneficiary.md) |  | [optional] |
| **sender** | [**Array&lt;Sender&gt;**](Sender.md) |  | [optional] |
| **account_details** | [**AccountDetails**](AccountDetails.md) |  | [optional] |
| **overledger_signing_type** | **String** |  | [optional] |
| **total_payment_amount** | [**Payment**](Payment.md) |  | [optional] |
| **signer_account** | [**SignerAccount**](SignerAccount.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrepareRequestDetails.new(
  mandate: null,
  alias_details: null,
  pagination: null,
  origin: null,
  destination: null,
  token_name: null,
  block_search_type: null,
  payer: null,
  collector: null,
  payee: null,
  additional_owner: null,
  owner: null,
  creator: null,
  receiver: null,
  token_id: null,
  message: null,
  lock_details: null,
  block_id: null,
  account_id: null,
  token_unit: null,
  beneficiary: null,
  sender: null,
  account_details: null,
  overledger_signing_type: null,
  total_payment_amount: null,
  signer_account: null
)
```

