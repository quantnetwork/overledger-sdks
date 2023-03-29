# OpenapiClient::ExecuteSearchBalanceResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **balances** | [**Array&lt;AddressBalanceResponse&gt;**](AddressBalanceResponse.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **timestamp** | **String** |  | [optional] |
| **address_id** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ExecuteSearchBalanceResponse.new(
  balances: null,
  location: null,
  timestamp: null,
  address_id: null
)
```

