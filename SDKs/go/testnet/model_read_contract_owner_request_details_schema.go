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

// ReadContractOwnerRequestDetailsSchema struct for ReadContractOwnerRequestDetailsSchema
type ReadContractOwnerRequestDetailsSchema struct {
	// Name of the token
	TokenName *string `json:"tokenName,omitempty"`
}

// NewReadContractOwnerRequestDetailsSchema instantiates a new ReadContractOwnerRequestDetailsSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewReadContractOwnerRequestDetailsSchema() *ReadContractOwnerRequestDetailsSchema {
	this := ReadContractOwnerRequestDetailsSchema{}
	return &this
}

// NewReadContractOwnerRequestDetailsSchemaWithDefaults instantiates a new ReadContractOwnerRequestDetailsSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewReadContractOwnerRequestDetailsSchemaWithDefaults() *ReadContractOwnerRequestDetailsSchema {
	this := ReadContractOwnerRequestDetailsSchema{}
	return &this
}

// GetTokenName returns the TokenName field value if set, zero value otherwise.
func (o *ReadContractOwnerRequestDetailsSchema) GetTokenName() string {
	if o == nil || o.TokenName == nil {
		var ret string
		return ret
	}
	return *o.TokenName
}

// GetTokenNameOk returns a tuple with the TokenName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ReadContractOwnerRequestDetailsSchema) GetTokenNameOk() (*string, bool) {
	if o == nil || o.TokenName == nil {
		return nil, false
	}
	return o.TokenName, true
}

// HasTokenName returns a boolean if a field has been set.
func (o *ReadContractOwnerRequestDetailsSchema) HasTokenName() bool {
	if o != nil && o.TokenName != nil {
		return true
	}

	return false
}

// SetTokenName gets a reference to the given string and assigns it to the TokenName field.
func (o *ReadContractOwnerRequestDetailsSchema) SetTokenName(v string) {
	o.TokenName = &v
}

func (o ReadContractOwnerRequestDetailsSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.TokenName != nil {
		toSerialize["tokenName"] = o.TokenName
	}
	return json.Marshal(toSerialize)
}

type NullableReadContractOwnerRequestDetailsSchema struct {
	value *ReadContractOwnerRequestDetailsSchema
	isSet bool
}

func (v NullableReadContractOwnerRequestDetailsSchema) Get() *ReadContractOwnerRequestDetailsSchema {
	return v.value
}

func (v *NullableReadContractOwnerRequestDetailsSchema) Set(val *ReadContractOwnerRequestDetailsSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableReadContractOwnerRequestDetailsSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableReadContractOwnerRequestDetailsSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableReadContractOwnerRequestDetailsSchema(val *ReadContractOwnerRequestDetailsSchema) *NullableReadContractOwnerRequestDetailsSchema {
	return &NullableReadContractOwnerRequestDetailsSchema{value: val, isSet: true}
}

func (v NullableReadContractOwnerRequestDetailsSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableReadContractOwnerRequestDetailsSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

