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

// PrepareSearchSchema struct for PrepareSearchSchema
type PrepareSearchSchema struct {
	Location *Location `json:"location,omitempty"`
}

// NewPrepareSearchSchema instantiates a new PrepareSearchSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPrepareSearchSchema() *PrepareSearchSchema {
	this := PrepareSearchSchema{}
	return &this
}

// NewPrepareSearchSchemaWithDefaults instantiates a new PrepareSearchSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPrepareSearchSchemaWithDefaults() *PrepareSearchSchema {
	this := PrepareSearchSchema{}
	return &this
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *PrepareSearchSchema) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareSearchSchema) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *PrepareSearchSchema) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *PrepareSearchSchema) SetLocation(v Location) {
	o.Location = &v
}

func (o PrepareSearchSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	return json.Marshal(toSerialize)
}

type NullablePrepareSearchSchema struct {
	value *PrepareSearchSchema
	isSet bool
}

func (v NullablePrepareSearchSchema) Get() *PrepareSearchSchema {
	return v.value
}

func (v *NullablePrepareSearchSchema) Set(val *PrepareSearchSchema) {
	v.value = val
	v.isSet = true
}

func (v NullablePrepareSearchSchema) IsSet() bool {
	return v.isSet
}

func (v *NullablePrepareSearchSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePrepareSearchSchema(val *PrepareSearchSchema) *NullablePrepareSearchSchema {
	return &NullablePrepareSearchSchema{value: val, isSet: true}
}

func (v NullablePrepareSearchSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePrepareSearchSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


