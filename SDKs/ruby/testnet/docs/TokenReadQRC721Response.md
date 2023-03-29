# OpenapiClient::TokenReadQRC721Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **token_name** | **String** | Name of the token | [optional] |
| **response_details** | [**TokenReadResponseDetails**](TokenReadResponseDetails.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **request_id** | **String** | The ID assigned to a preparation request in Overledger | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TokenReadQRC721Response.new(
  token_name: null,
  response_details: null,
  location: null,
  request_id: null
)
```

