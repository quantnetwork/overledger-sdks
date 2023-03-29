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

// FunctionDTO struct for FunctionDTO
type FunctionDTO struct {
	Type *string `json:"type,omitempty"`
	Api *string `json:"api,omitempty"`
}

// NewFunctionDTO instantiates a new FunctionDTO object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewFunctionDTO() *FunctionDTO {
	this := FunctionDTO{}
	return &this
}

// NewFunctionDTOWithDefaults instantiates a new FunctionDTO object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewFunctionDTOWithDefaults() *FunctionDTO {
	this := FunctionDTO{}
	return &this
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *FunctionDTO) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *FunctionDTO) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *FunctionDTO) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *FunctionDTO) SetType(v string) {
	o.Type = &v
}

// GetApi returns the Api field value if set, zero value otherwise.
func (o *FunctionDTO) GetApi() string {
	if o == nil || o.Api == nil {
		var ret string
		return ret
	}
	return *o.Api
}

// GetApiOk returns a tuple with the Api field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *FunctionDTO) GetApiOk() (*string, bool) {
	if o == nil || o.Api == nil {
		return nil, false
	}
	return o.Api, true
}

// HasApi returns a boolean if a field has been set.
func (o *FunctionDTO) HasApi() bool {
	if o != nil && o.Api != nil {
		return true
	}

	return false
}

// SetApi gets a reference to the given string and assigns it to the Api field.
func (o *FunctionDTO) SetApi(v string) {
	o.Api = &v
}

func (o FunctionDTO) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.Api != nil {
		toSerialize["api"] = o.Api
	}
	return json.Marshal(toSerialize)
}

type NullableFunctionDTO struct {
	value *FunctionDTO
	isSet bool
}

func (v NullableFunctionDTO) Get() *FunctionDTO {
	return v.value
}

func (v *NullableFunctionDTO) Set(val *FunctionDTO) {
	v.value = val
	v.isSet = true
}

func (v NullableFunctionDTO) IsSet() bool {
	return v.isSet
}

func (v *NullableFunctionDTO) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableFunctionDTO(val *FunctionDTO) *NullableFunctionDTO {
	return &NullableFunctionDTO{value: val, isSet: true}
}

func (v NullableFunctionDTO) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableFunctionDTO) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

