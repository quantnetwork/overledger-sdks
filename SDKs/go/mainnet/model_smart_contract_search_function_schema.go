/*
Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// SmartContractSearchFunctionSchema struct for SmartContractSearchFunctionSchema
type SmartContractSearchFunctionSchema struct {
	Name *string `json:"name,omitempty"`
	InputParameters *[]SmartContractInputParameterSchema `json:"inputParameters,omitempty"`
	OutputParameters *[]SmartContractOutputParameterSchema `json:"outputParameters,omitempty"`
}

// NewSmartContractSearchFunctionSchema instantiates a new SmartContractSearchFunctionSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSmartContractSearchFunctionSchema() *SmartContractSearchFunctionSchema {
	this := SmartContractSearchFunctionSchema{}
	return &this
}

// NewSmartContractSearchFunctionSchemaWithDefaults instantiates a new SmartContractSearchFunctionSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSmartContractSearchFunctionSchemaWithDefaults() *SmartContractSearchFunctionSchema {
	this := SmartContractSearchFunctionSchema{}
	return &this
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *SmartContractSearchFunctionSchema) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContractSearchFunctionSchema) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *SmartContractSearchFunctionSchema) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *SmartContractSearchFunctionSchema) SetName(v string) {
	o.Name = &v
}

// GetInputParameters returns the InputParameters field value if set, zero value otherwise.
func (o *SmartContractSearchFunctionSchema) GetInputParameters() []SmartContractInputParameterSchema {
	if o == nil || o.InputParameters == nil {
		var ret []SmartContractInputParameterSchema
		return ret
	}
	return *o.InputParameters
}

// GetInputParametersOk returns a tuple with the InputParameters field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContractSearchFunctionSchema) GetInputParametersOk() (*[]SmartContractInputParameterSchema, bool) {
	if o == nil || o.InputParameters == nil {
		return nil, false
	}
	return o.InputParameters, true
}

// HasInputParameters returns a boolean if a field has been set.
func (o *SmartContractSearchFunctionSchema) HasInputParameters() bool {
	if o != nil && o.InputParameters != nil {
		return true
	}

	return false
}

// SetInputParameters gets a reference to the given []SmartContractInputParameterSchema and assigns it to the InputParameters field.
func (o *SmartContractSearchFunctionSchema) SetInputParameters(v []SmartContractInputParameterSchema) {
	o.InputParameters = &v
}

// GetOutputParameters returns the OutputParameters field value if set, zero value otherwise.
func (o *SmartContractSearchFunctionSchema) GetOutputParameters() []SmartContractOutputParameterSchema {
	if o == nil || o.OutputParameters == nil {
		var ret []SmartContractOutputParameterSchema
		return ret
	}
	return *o.OutputParameters
}

// GetOutputParametersOk returns a tuple with the OutputParameters field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContractSearchFunctionSchema) GetOutputParametersOk() (*[]SmartContractOutputParameterSchema, bool) {
	if o == nil || o.OutputParameters == nil {
		return nil, false
	}
	return o.OutputParameters, true
}

// HasOutputParameters returns a boolean if a field has been set.
func (o *SmartContractSearchFunctionSchema) HasOutputParameters() bool {
	if o != nil && o.OutputParameters != nil {
		return true
	}

	return false
}

// SetOutputParameters gets a reference to the given []SmartContractOutputParameterSchema and assigns it to the OutputParameters field.
func (o *SmartContractSearchFunctionSchema) SetOutputParameters(v []SmartContractOutputParameterSchema) {
	o.OutputParameters = &v
}

func (o SmartContractSearchFunctionSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
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

type NullableSmartContractSearchFunctionSchema struct {
	value *SmartContractSearchFunctionSchema
	isSet bool
}

func (v NullableSmartContractSearchFunctionSchema) Get() *SmartContractSearchFunctionSchema {
	return v.value
}

func (v *NullableSmartContractSearchFunctionSchema) Set(val *SmartContractSearchFunctionSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableSmartContractSearchFunctionSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableSmartContractSearchFunctionSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSmartContractSearchFunctionSchema(val *SmartContractSearchFunctionSchema) *NullableSmartContractSearchFunctionSchema {
	return &NullableSmartContractSearchFunctionSchema{value: val, isSet: true}
}

func (v NullableSmartContractSearchFunctionSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSmartContractSearchFunctionSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


