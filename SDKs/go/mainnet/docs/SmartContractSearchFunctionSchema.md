# SmartContractSearchFunctionSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**InputParameters** | Pointer to [**[]SmartContractInputParameterSchema**](SmartContractInputParameterSchema.md) |  | [optional] 
**OutputParameters** | Pointer to [**[]SmartContractOutputParameterSchema**](SmartContractOutputParameterSchema.md) |  | [optional] 

## Methods

### NewSmartContractSearchFunctionSchema

`func NewSmartContractSearchFunctionSchema() *SmartContractSearchFunctionSchema`

NewSmartContractSearchFunctionSchema instantiates a new SmartContractSearchFunctionSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSmartContractSearchFunctionSchemaWithDefaults

`func NewSmartContractSearchFunctionSchemaWithDefaults() *SmartContractSearchFunctionSchema`

NewSmartContractSearchFunctionSchemaWithDefaults instantiates a new SmartContractSearchFunctionSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *SmartContractSearchFunctionSchema) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *SmartContractSearchFunctionSchema) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *SmartContractSearchFunctionSchema) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *SmartContractSearchFunctionSchema) HasName() bool`

HasName returns a boolean if a field has been set.

### GetInputParameters

`func (o *SmartContractSearchFunctionSchema) GetInputParameters() []SmartContractInputParameterSchema`

GetInputParameters returns the InputParameters field if non-nil, zero value otherwise.

### GetInputParametersOk

`func (o *SmartContractSearchFunctionSchema) GetInputParametersOk() (*[]SmartContractInputParameterSchema, bool)`

GetInputParametersOk returns a tuple with the InputParameters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInputParameters

`func (o *SmartContractSearchFunctionSchema) SetInputParameters(v []SmartContractInputParameterSchema)`

SetInputParameters sets InputParameters field to given value.

### HasInputParameters

`func (o *SmartContractSearchFunctionSchema) HasInputParameters() bool`

HasInputParameters returns a boolean if a field has been set.

### GetOutputParameters

`func (o *SmartContractSearchFunctionSchema) GetOutputParameters() []SmartContractOutputParameterSchema`

GetOutputParameters returns the OutputParameters field if non-nil, zero value otherwise.

### GetOutputParametersOk

`func (o *SmartContractSearchFunctionSchema) GetOutputParametersOk() (*[]SmartContractOutputParameterSchema, bool)`

GetOutputParametersOk returns a tuple with the OutputParameters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutputParameters

`func (o *SmartContractSearchFunctionSchema) SetOutputParameters(v []SmartContractOutputParameterSchema)`

SetOutputParameters sets OutputParameters field to given value.

### HasOutputParameters

`func (o *SmartContractSearchFunctionSchema) HasOutputParameters() bool`

HasOutputParameters returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


