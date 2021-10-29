# Function

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FunctionId** | Pointer to **string** |  | [optional] 
**Code** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**InputParameters** | Pointer to [**[]Parameter**](Parameter.md) |  | [optional] 
**OutputParameters** | Pointer to [**[]Parameter**](Parameter.md) |  | [optional] 

## Methods

### NewFunction

`func NewFunction() *Function`

NewFunction instantiates a new Function object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewFunctionWithDefaults

`func NewFunctionWithDefaults() *Function`

NewFunctionWithDefaults instantiates a new Function object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFunctionId

`func (o *Function) GetFunctionId() string`

GetFunctionId returns the FunctionId field if non-nil, zero value otherwise.

### GetFunctionIdOk

`func (o *Function) GetFunctionIdOk() (*string, bool)`

GetFunctionIdOk returns a tuple with the FunctionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFunctionId

`func (o *Function) SetFunctionId(v string)`

SetFunctionId sets FunctionId field to given value.

### HasFunctionId

`func (o *Function) HasFunctionId() bool`

HasFunctionId returns a boolean if a field has been set.

### GetCode

`func (o *Function) GetCode() string`

GetCode returns the Code field if non-nil, zero value otherwise.

### GetCodeOk

`func (o *Function) GetCodeOk() (*string, bool)`

GetCodeOk returns a tuple with the Code field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCode

`func (o *Function) SetCode(v string)`

SetCode sets Code field to given value.

### HasCode

`func (o *Function) HasCode() bool`

HasCode returns a boolean if a field has been set.

### GetName

`func (o *Function) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *Function) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *Function) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *Function) HasName() bool`

HasName returns a boolean if a field has been set.

### GetInputParameters

`func (o *Function) GetInputParameters() []Parameter`

GetInputParameters returns the InputParameters field if non-nil, zero value otherwise.

### GetInputParametersOk

`func (o *Function) GetInputParametersOk() (*[]Parameter, bool)`

GetInputParametersOk returns a tuple with the InputParameters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInputParameters

`func (o *Function) SetInputParameters(v []Parameter)`

SetInputParameters sets InputParameters field to given value.

### HasInputParameters

`func (o *Function) HasInputParameters() bool`

HasInputParameters returns a boolean if a field has been set.

### GetOutputParameters

`func (o *Function) GetOutputParameters() []Parameter`

GetOutputParameters returns the OutputParameters field if non-nil, zero value otherwise.

### GetOutputParametersOk

`func (o *Function) GetOutputParametersOk() (*[]Parameter, bool)`

GetOutputParametersOk returns a tuple with the OutputParameters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOutputParameters

`func (o *Function) SetOutputParameters(v []Parameter)`

SetOutputParameters sets OutputParameters field to given value.

### HasOutputParameters

`func (o *Function) HasOutputParameters() bool`

HasOutputParameters returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


