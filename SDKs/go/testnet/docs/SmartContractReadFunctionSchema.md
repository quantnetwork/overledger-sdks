# SmartContractReadFunctionSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**FunctionId** | Pointer to **string** |  | [optional] 
**InputParameters** | Pointer to [**[]SmartContractInputParameterSchema**](SmartContractInputParameterSchema.md) |  | [optional] 
**OutputParameters** | Pointer to [**[]SmartContractInputParameterSchema**](SmartContractInputParameterSchema.md) |  | [optional] 

## Methods

### NewSmartContractReadFunctionSchema

`func NewSmartContractReadFunctionSchema() *SmartContractReadFunctionSchema`

NewSmartContractReadFunctionSchema instantiates a new SmartContractReadFunctionSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSmartContractReadFunctionSchemaWithDefaults

`func NewSmartContractReadFunctionSchemaWithDefaults() *SmartContractReadFunctionSchema`

NewSmartContractReadFunctionSchemaWithDefaults instantiates a new SmartContractReadFunctionSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *SmartContractReadFunctionSchema) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *SmartContractReadFunctionSchema) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *SmartContractReadFunctionSchema) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *SmartContractReadFunctionSchema) HasName() bool`

HasName returns a boolean if a field has been set.

### GetFunctionId

`func (o *SmartContractReadFunctionSchema) GetFunctionId() string`

GetFunctionId returns the FunctionId field if non-nil, zero value otherwise.

### GetFunctionIdOk

`func (o *SmartContractReadFunctionSchema) GetFunctionIdOk() (*string, bool)`

GetFunctionIdOk returns a tuple with the FunctionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFunctionId

`func (o *SmartContractReadFunctionSchema) SetFunctionId(v string)`

SetFunctionId sets FunctionId field to given value.

### HasFunctionId

`func (o *SmartContractReadFunctionSchema) HasFunctionId() bool`

HasFunctionId returns a boolean if a field has been set.

### GetInputParameters

`func (o *SmartContractReadFunctionSchema) GetInputParameters() []SmartContractInputParameterSchema`

GetInputParameters returns the InputParameters field if non-nil, zero value otherwise.

### GetInputParametersOk

`func (o *SmartContractReadFunctionSchema) GetInputParametersOk() (*[]SmartContractInputParameterSchema, bool)`

GetInputParametersOk returns a tuple with the InputParameters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInputParameters

`func (o *SmartContractReadFunctionSchema) SetInputParameters(v []SmartContractInputParameterSchema)`

SetInputParameters sets InputParameters field to given value.

### HasInputParameters

`func (o *SmartContractReadFunctionSchema) HasInputParameters() bool`

HasInputParameters returns a boolean if a field has been set.

### GetOutputParameters

`func (o *SmartContractReadFunctionSchema) GetOutputParameters() []SmartContractInputParameterSchema`

GetOutputParameters returns the OutputParameters field if non-nil, zero value otherwise.

### GetOutputParametersOk

`func (o *SmartContractReadFunctionSchema) GetOutputParametersOk() (*[]SmartContractInputParameterSchema, bool)`

GetOutputParametersOk returns a tuple with the OutputParameters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutputParameters

`func (o *SmartContractReadFunctionSchema) SetOutputParameters(v []SmartContractInputParameterSchema)`

SetOutputParameters sets OutputParameters field to given value.

### HasOutputParameters

`func (o *SmartContractReadFunctionSchema) HasOutputParameters() bool`

HasOutputParameters returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


