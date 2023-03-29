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

// ReadApprovedAccountRequestSchema struct for ReadApprovedAccountRequestSchema
type ReadApprovedAccountRequestSchema struct {
	RequestDetails *ReadApprovedAccountRequestDetailsSchema `json:"requestDetails,omitempty"`
	Location *Location `json:"location,omitempty"`
}

// NewReadApprovedAccountRequestSchema instantiates a new ReadApprovedAccountRequestSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewReadApprovedAccountRequestSchema() *ReadApprovedAccountRequestSchema {
	this := ReadApprovedAccountRequestSchema{}
	return &this
}

// NewReadApprovedAccountRequestSchemaWithDefaults instantiates a new ReadApprovedAccountRequestSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewReadApprovedAccountRequestSchemaWithDefaults() *ReadApprovedAccountRequestSchema {
	this := ReadApprovedAccountRequestSchema{}
	return &this
}

// GetRequestDetails returns the RequestDetails field value if set, zero value otherwise.
func (o *ReadApprovedAccountRequestSchema) GetRequestDetails() ReadApprovedAccountRequestDetailsSchema {
	if o == nil || o.RequestDetails == nil {
		var ret ReadApprovedAccountRequestDetailsSchema
		return ret
	}
	return *o.RequestDetails
}

// GetRequestDetailsOk returns a tuple with the RequestDetails field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ReadApprovedAccountRequestSchema) GetRequestDetailsOk() (*ReadApprovedAccountRequestDetailsSchema, bool) {
	if o == nil || o.RequestDetails == nil {
		return nil, false
	}
	return o.RequestDetails, true
}

// HasRequestDetails returns a boolean if a field has been set.
func (o *ReadApprovedAccountRequestSchema) HasRequestDetails() bool {
	if o != nil && o.RequestDetails != nil {
		return true
	}

	return false
}

// SetRequestDetails gets a reference to the given ReadApprovedAccountRequestDetailsSchema and assigns it to the RequestDetails field.
func (o *ReadApprovedAccountRequestSchema) SetRequestDetails(v ReadApprovedAccountRequestDetailsSchema) {
	o.RequestDetails = &v
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *ReadApprovedAccountRequestSchema) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ReadApprovedAccountRequestSchema) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *ReadApprovedAccountRequestSchema) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *ReadApprovedAccountRequestSchema) SetLocation(v Location) {
	o.Location = &v
}

func (o ReadApprovedAccountRequestSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.RequestDetails != nil {
		toSerialize["requestDetails"] = o.RequestDetails
	}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	return json.Marshal(toSerialize)
}

type NullableReadApprovedAccountRequestSchema struct {
	value *ReadApprovedAccountRequestSchema
	isSet bool
}

func (v NullableReadApprovedAccountRequestSchema) Get() *ReadApprovedAccountRequestSchema {
	return v.value
}

func (v *NullableReadApprovedAccountRequestSchema) Set(val *ReadApprovedAccountRequestSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableReadApprovedAccountRequestSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableReadApprovedAccountRequestSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableReadApprovedAccountRequestSchema(val *ReadApprovedAccountRequestSchema) *NullableReadApprovedAccountRequestSchema {
	return &NullableReadApprovedAccountRequestSchema{value: val, isSet: true}
}

func (v NullableReadApprovedAccountRequestSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableReadApprovedAccountRequestSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

