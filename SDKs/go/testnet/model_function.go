/*
Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// Function struct for Function
type Function struct {
	FunctionId *string `json:"functionId,omitempty"`
	Code *string `json:"code,omitempty"`
	Name *string `json:"name,omitempty"`
	InputParameters *[]Parameter `json:"inputParameters,omitempty"`
	OutputParameters *[]Parameter `json:"outputParameters,omitempty"`
}

// NewFunction instantiates a new Function object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewFunction() *Function {
	this := Function{}
	return &this
}

// NewFunctionWithDefaults instantiates a new Function object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewFunctionWithDefaults() *Function {
	this := Function{}
	return &this
}

// GetFunctionId returns the FunctionId field value if set, zero value otherwise.
func (o *Function) GetFunctionId() string {
	if o == nil || o.FunctionId == nil {
		var ret string
		return ret
	}
	return *o.FunctionId
}

// GetFunctionIdOk returns a tuple with the FunctionId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Function) GetFunctionIdOk() (*string, bool) {
	if o == nil || o.FunctionId == nil {
		return nil, false
	}
	return o.FunctionId, true
}

// HasFunctionId returns a boolean if a field has been set.
func (o *Function) HasFunctionId() bool {
	if o != nil && o.FunctionId != nil {
		return true
	}

	return false
}

// SetFunctionId gets a reference to the given string and assigns it to the FunctionId field.
func (o *Function) SetFunctionId(v string) {
	o.FunctionId = &v
}

// GetCode returns the Code field value if set, zero value otherwise.
func (o *Function) GetCode() string {
	if o == nil || o.Code == nil {
		var ret string
		return ret
	}
	return *o.Code
}

// GetCodeOk returns a tuple with the Code field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Function) GetCodeOk() (*string, bool) {
	if o == nil || o.Code == nil {
		return nil, false
	}
	return o.Code, true
}

// HasCode returns a boolean if a field has been set.
func (o *Function) HasCode() bool {
	if o != nil && o.Code != nil {
		return true
	}

	return false
}

// SetCode gets a reference to the given string and assigns it to the Code field.
func (o *Function) SetCode(v string) {
	o.Code = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *Function) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Function) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *Function) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *Function) SetName(v string) {
	o.Name = &v
}

// GetInputParameters returns the InputParameters field value if set, zero value otherwise.
func (o *Function) GetInputParameters() []Parameter {
	if o == nil || o.InputParameters == nil {
		var ret []Parameter
		return ret
	}
	return *o.InputParameters
}

// GetInputParametersOk returns a tuple with the InputParameters field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Function) GetInputParametersOk() (*[]Parameter, bool) {
	if o == nil || o.InputParameters == nil {
		return nil, false
	}
	return o.InputParameters, true
}

// HasInputParameters returns a boolean if a field has been set.
func (o *Function) HasInputParameters() bool {
	if o != nil && o.InputParameters != nil {
		return true
	}

	return false
}

// SetInputParameters gets a reference to the given []Parameter and assigns it to the InputParameters field.
func (o *Function) SetInputParameters(v []Parameter) {
	o.InputParameters = &v
}

// GetOutputParameters returns the OutputParameters field value if set, zero value otherwise.
func (o *Function) GetOutputParameters() []Parameter {
	if o == nil || o.OutputParameters == nil {
		var ret []Parameter
		return ret
	}
	return *o.OutputParameters
}

// GetOutputParametersOk returns a tuple with the OutputParameters field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Function) GetOutputParametersOk() (*[]Parameter, bool) {
	if o == nil || o.OutputParameters == nil {
		return nil, false
	}
	return o.OutputParameters, true
}

// HasOutputParameters returns a boolean if a field has been set.
func (o *Function) HasOutputParameters() bool {
	if o != nil && o.OutputParameters != nil {
		return true
	}

	return false
}

// SetOutputParameters gets a reference to the given []Parameter and assigns it to the OutputParameters field.
func (o *Function) SetOutputParameters(v []Parameter) {
	o.OutputParameters = &v
}

func (o Function) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.FunctionId != nil {
		toSerialize["functionId"] = o.FunctionId
	}
	if o.Code != nil {
		toSerialize["code"] = o.Code
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.InputParameters != nil {
		toSerialize["inputParameters"] = o.InputParameters
	}
	if o.OutputParameters != nil {
		toSerialize["outputParameters"] = o.OutputParameters
	}
	return json.Marshal(toSerialize)
}

type NullableFunction struct {
	value *Function
	isSet bool
}

func (v NullableFunction) Get() *Function {
	return v.value
}

func (v *NullableFunction) Set(val *Function) {
	v.value = val
	v.isSet = true
}

func (v NullableFunction) IsSet() bool {
	return v.isSet
}

func (v *NullableFunction) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableFunction(val *Function) *NullableFunction {
	return &NullableFunction{value: val, isSet: true}
}

func (v NullableFunction) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableFunction) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

