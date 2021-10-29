# OpenapiClient::SmartContractReadFunctionSchema

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **function_id** | **String** |  | [optional] |
| **name** | **String** |  | [optional] |
| **input_parameters** | [**Array&lt;SmartContractInputParameterSchema&gt;**](SmartContractInputParameterSchema.md) |  | [optional] |
| **output_parameters** | [**Array&lt;SmartContractInputParameterSchema&gt;**](SmartContractInputParameterSchema.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SmartContractReadFunctionSchema.new(
  function_id: null,
  name: null,
  input_parameters: null,
  output_parameters: null
)
```

