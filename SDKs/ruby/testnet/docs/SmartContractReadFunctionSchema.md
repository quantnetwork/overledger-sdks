# OpenapiClient::SmartContractReadFunctionSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  | [optional] |
| **function_id** | **String** |  | [optional] |
| **input_parameters** | [**Array&lt;SmartContractInputParameterSchema&gt;**](SmartContractInputParameterSchema.md) |  | [optional] |
| **output_parameters** | [**Array&lt;SmartContractInputParameterSchema&gt;**](SmartContractInputParameterSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SmartContractReadFunctionSchema.new(
  name: null,
  function_id: null,
  input_parameters: null,
  output_parameters: null
)
```

