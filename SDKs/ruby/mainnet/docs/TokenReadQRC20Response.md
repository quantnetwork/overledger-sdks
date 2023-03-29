# OpenapiClient::TokenReadQRC20Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **response_details** | [**Array&lt;TokenReadResponseDetails&gt;**](TokenReadResponseDetails.md) |  | [optional] |
| **request_id** | **String** | The ID assigned to a preparation request in Overledger | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TokenReadQRC20Response.new(
  response_details: null,
  request_id: null,
  location: null
)
```

