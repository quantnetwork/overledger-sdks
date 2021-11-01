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

// SmartContractOutputParameterSchema struct for SmartContractOutputParameterSchema
type SmartContractOutputParameterSchema struct {
	Type *string `json:"type,omitempty"`
}

// NewSmartContractOutputParameterSchema instantiates a new SmartContractOutputParameterSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSmartContractOutputParameterSchema() *SmartContractOutputParameterSchema {
	this := SmartContractOutputParameterSchema{}
	return &this
}

// NewSmartContractOutputParameterSchemaWithDefaults instantiates a new SmartContractOutputParameterSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSmartContractOutputParameterSchemaWithDefaults() *SmartContractOutputParameterSchema {
	this := SmartContractOutputParameterSchema{}
	return &this
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *SmartContractOutputParameterSchema) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContractOutputParameterSchema) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *SmartContractOutputParameterSchema) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *SmartContractOutputParameterSchema) SetType(v string) {
	o.Type = &v
}

func (o SmartContractOutputParameterSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	return json.Marshal(toSerialize)
}

type NullableSmartContractOutputParameterSchema struct {
	value *SmartContractOutputParameterSchema
	isSet bool
}

func (v NullableSmartContractOutputParameterSchema) Get() *SmartContractOutputParameterSchema {
	return v.value
}

func (v *NullableSmartContractOutputParameterSchema) Set(val *SmartContractOutputParameterSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableSmartContractOutputParameterSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableSmartContractOutputParameterSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSmartContractOutputParameterSchema(val *SmartContractOutputParameterSchema) *NullableSmartContractOutputParameterSchema {
	return &NullableSmartContractOutputParameterSchema{value: val, isSet: true}
}

func (v NullableSmartContractOutputParameterSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSmartContractOutputParameterSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

