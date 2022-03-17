/*
Quant Overledger API

Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// OriginPaymentSchema Where is this transaction coming from
type OriginPaymentSchema struct {
	// Unique Identifier of the originator
	OriginId *string `json:"originId,omitempty"`
}

// NewOriginPaymentSchema instantiates a new OriginPaymentSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOriginPaymentSchema() *OriginPaymentSchema {
	this := OriginPaymentSchema{}
	return &this
}

// NewOriginPaymentSchemaWithDefaults instantiates a new OriginPaymentSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOriginPaymentSchemaWithDefaults() *OriginPaymentSchema {
	this := OriginPaymentSchema{}
	return &this
}

// GetOriginId returns the OriginId field value if set, zero value otherwise.
func (o *OriginPaymentSchema) GetOriginId() string {
	if o == nil || o.OriginId == nil {
		var ret string
		return ret
	}
	return *o.OriginId
}

// GetOriginIdOk returns a tuple with the OriginId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OriginPaymentSchema) GetOriginIdOk() (*string, bool) {
	if o == nil || o.OriginId == nil {
		return nil, false
	}
	return o.OriginId, true
}

// HasOriginId returns a boolean if a field has been set.
func (o *OriginPaymentSchema) HasOriginId() bool {
	if o != nil && o.OriginId != nil {
		return true
	}

	return false
}

// SetOriginId gets a reference to the given string and assigns it to the OriginId field.
func (o *OriginPaymentSchema) SetOriginId(v string) {
	o.OriginId = &v
}

func (o OriginPaymentSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.OriginId != nil {
		toSerialize["originId"] = o.OriginId
	}
	return json.Marshal(toSerialize)
}

type NullableOriginPaymentSchema struct {
	value *OriginPaymentSchema
	isSet bool
}

func (v NullableOriginPaymentSchema) Get() *OriginPaymentSchema {
	return v.value
}

func (v *NullableOriginPaymentSchema) Set(val *OriginPaymentSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableOriginPaymentSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableOriginPaymentSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOriginPaymentSchema(val *OriginPaymentSchema) *NullableOriginPaymentSchema {
	return &NullableOriginPaymentSchema{value: val, isSet: true}
}

func (v NullableOriginPaymentSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOriginPaymentSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


