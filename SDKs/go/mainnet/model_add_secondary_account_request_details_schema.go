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

// AddSecondaryAccountRequestDetailsSchema struct for AddSecondaryAccountRequestDetailsSchema
type AddSecondaryAccountRequestDetailsSchema struct {
	Owner *SecondaryAccountOwnerSchema `json:"owner,omitempty"`
	AdditionalOwner *SecondaryAccountAdditionalOwnerSchema `json:"additionalOwner,omitempty"`
}

// NewAddSecondaryAccountRequestDetailsSchema instantiates a new AddSecondaryAccountRequestDetailsSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAddSecondaryAccountRequestDetailsSchema() *AddSecondaryAccountRequestDetailsSchema {
	this := AddSecondaryAccountRequestDetailsSchema{}
	return &this
}

// NewAddSecondaryAccountRequestDetailsSchemaWithDefaults instantiates a new AddSecondaryAccountRequestDetailsSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAddSecondaryAccountRequestDetailsSchemaWithDefaults() *AddSecondaryAccountRequestDetailsSchema {
	this := AddSecondaryAccountRequestDetailsSchema{}
	return &this
}

// GetOwner returns the Owner field value if set, zero value otherwise.
func (o *AddSecondaryAccountRequestDetailsSchema) GetOwner() SecondaryAccountOwnerSchema {
	if o == nil || o.Owner == nil {
		var ret SecondaryAccountOwnerSchema
		return ret
	}
	return *o.Owner
}

// GetOwnerOk returns a tuple with the Owner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AddSecondaryAccountRequestDetailsSchema) GetOwnerOk() (*SecondaryAccountOwnerSchema, bool) {
	if o == nil || o.Owner == nil {
		return nil, false
	}
	return o.Owner, true
}

// HasOwner returns a boolean if a field has been set.
func (o *AddSecondaryAccountRequestDetailsSchema) HasOwner() bool {
	if o != nil && o.Owner != nil {
		return true
	}

	return false
}

// SetOwner gets a reference to the given SecondaryAccountOwnerSchema and assigns it to the Owner field.
func (o *AddSecondaryAccountRequestDetailsSchema) SetOwner(v SecondaryAccountOwnerSchema) {
	o.Owner = &v
}

// GetAdditionalOwner returns the AdditionalOwner field value if set, zero value otherwise.
func (o *AddSecondaryAccountRequestDetailsSchema) GetAdditionalOwner() SecondaryAccountAdditionalOwnerSchema {
	if o == nil || o.AdditionalOwner == nil {
		var ret SecondaryAccountAdditionalOwnerSchema
		return ret
	}
	return *o.AdditionalOwner
}

// GetAdditionalOwnerOk returns a tuple with the AdditionalOwner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AddSecondaryAccountRequestDetailsSchema) GetAdditionalOwnerOk() (*SecondaryAccountAdditionalOwnerSchema, bool) {
	if o == nil || o.AdditionalOwner == nil {
		return nil, false
	}
	return o.AdditionalOwner, true
}

// HasAdditionalOwner returns a boolean if a field has been set.
func (o *AddSecondaryAccountRequestDetailsSchema) HasAdditionalOwner() bool {
	if o != nil && o.AdditionalOwner != nil {
		return true
	}

	return false
}

// SetAdditionalOwner gets a reference to the given SecondaryAccountAdditionalOwnerSchema and assigns it to the AdditionalOwner field.
func (o *AddSecondaryAccountRequestDetailsSchema) SetAdditionalOwner(v SecondaryAccountAdditionalOwnerSchema) {
	o.AdditionalOwner = &v
}

func (o AddSecondaryAccountRequestDetailsSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Owner != nil {
		toSerialize["owner"] = o.Owner
	}
	if o.AdditionalOwner != nil {
		toSerialize["additionalOwner"] = o.AdditionalOwner
	}
	return json.Marshal(toSerialize)
}

type NullableAddSecondaryAccountRequestDetailsSchema struct {
	value *AddSecondaryAccountRequestDetailsSchema
	isSet bool
}

func (v NullableAddSecondaryAccountRequestDetailsSchema) Get() *AddSecondaryAccountRequestDetailsSchema {
	return v.value
}

func (v *NullableAddSecondaryAccountRequestDetailsSchema) Set(val *AddSecondaryAccountRequestDetailsSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableAddSecondaryAccountRequestDetailsSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableAddSecondaryAccountRequestDetailsSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAddSecondaryAccountRequestDetailsSchema(val *AddSecondaryAccountRequestDetailsSchema) *NullableAddSecondaryAccountRequestDetailsSchema {
	return &NullableAddSecondaryAccountRequestDetailsSchema{value: val, isSet: true}
}

func (v NullableAddSecondaryAccountRequestDetailsSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAddSecondaryAccountRequestDetailsSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


