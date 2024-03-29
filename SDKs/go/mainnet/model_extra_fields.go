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

// ExtraFields struct for ExtraFields
type ExtraFields struct {
	RequiredSignatures *float32 `json:"requiredSignatures,omitempty"`
}

// NewExtraFields instantiates a new ExtraFields object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewExtraFields() *ExtraFields {
	this := ExtraFields{}
	return &this
}

// NewExtraFieldsWithDefaults instantiates a new ExtraFields object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewExtraFieldsWithDefaults() *ExtraFields {
	this := ExtraFields{}
	return &this
}

// GetRequiredSignatures returns the RequiredSignatures field value if set, zero value otherwise.
func (o *ExtraFields) GetRequiredSignatures() float32 {
	if o == nil || o.RequiredSignatures == nil {
		var ret float32
		return ret
	}
	return *o.RequiredSignatures
}

// GetRequiredSignaturesOk returns a tuple with the RequiredSignatures field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExtraFields) GetRequiredSignaturesOk() (*float32, bool) {
	if o == nil || o.RequiredSignatures == nil {
		return nil, false
	}
	return o.RequiredSignatures, true
}

// HasRequiredSignatures returns a boolean if a field has been set.
func (o *ExtraFields) HasRequiredSignatures() bool {
	if o != nil && o.RequiredSignatures != nil {
		return true
	}

	return false
}

// SetRequiredSignatures gets a reference to the given float32 and assigns it to the RequiredSignatures field.
func (o *ExtraFields) SetRequiredSignatures(v float32) {
	o.RequiredSignatures = &v
}

func (o ExtraFields) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.RequiredSignatures != nil {
		toSerialize["requiredSignatures"] = o.RequiredSignatures
	}
	return json.Marshal(toSerialize)
}

type NullableExtraFields struct {
	value *ExtraFields
	isSet bool
}

func (v NullableExtraFields) Get() *ExtraFields {
	return v.value
}

func (v *NullableExtraFields) Set(val *ExtraFields) {
	v.value = val
	v.isSet = true
}

func (v NullableExtraFields) IsSet() bool {
	return v.isSet
}

func (v *NullableExtraFields) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableExtraFields(val *ExtraFields) *NullableExtraFields {
	return &NullableExtraFields{value: val, isSet: true}
}

func (v NullableExtraFields) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableExtraFields) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


