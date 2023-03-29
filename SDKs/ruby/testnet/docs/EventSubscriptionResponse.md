# OpenapiClient::EventSubscriptionResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **token_name** | **String** | Name of the token | [optional] |
| **subscription_details** | [**EventSubscriptionResponseDetails**](EventSubscriptionResponseDetails.md) |  | [optional] |
| **location** | [**Location**](Location.md) |  | [optional] |
| **type** | **String** | Type of event | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::EventSubscriptionResponse.new(
  token_name: null,
  subscription_details: null,
  location: null,
  type: null
)
```

