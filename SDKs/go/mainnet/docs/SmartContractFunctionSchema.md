# SmartContractFunctionSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**InputParameters** | Pointer to [**[]SmartContractInputParameterSchema**](SmartContractInputParameterSchema.md) |  | [optional] 

## Methods

### NewSmartContractFunctionSchema

`func NewSmartContractFunctionSchema() *SmartContractFunctionSchema`

NewSmartContractFunctionSchema instantiates a new SmartContractFunctionSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSmartContractFunctionSchemaWithDefaults

`func NewSmartContractFunctionSchemaWithDefaults() *SmartContractFunctionSchema`

NewSmartContractFunctionSchemaWithDefaults instantiates a new SmartContractFunctionSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *SmartContractFunctionSchema) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *SmartContractFunctionSchema) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *SmartContractFunctionSchema) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *SmartContractFunctionSchema) HasName() bool`

HasName returns a boolean if a field has been set.

### GetInputParameters

`func (o *SmartContractFunctionSchema) GetInputParameters() []SmartContractInputParameterSchema`

GetInputParameters returns the InputParameters field if non-nil, zero value otherwise.

### GetInputParametersOk

`func (o *SmartContractFunctionSchema) GetInputParametersOk() (*[]SmartContractInputParameterSchema, bool)`

GetInputParametersOk returns a tuple with the InputParameters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInputParameters

`func (o *SmartContractFunctionSchema) SetInputParameters(v []SmartContractInputParameterSchema)`

SetInputParameters sets InputParameters field to given value.

### HasInputParameters

`func (o *SmartContractFunctionSchema) HasInputParameters() bool`

HasInputParameters returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


