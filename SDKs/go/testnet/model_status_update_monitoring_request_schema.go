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

// StatusUpdateMonitoringRequestSchema struct for StatusUpdateMonitoringRequestSchema
type StatusUpdateMonitoringRequestSchema struct {
	StatusUpdate *StatusUpdateSchema `json:"statusUpdate,omitempty"`
}

// NewStatusUpdateMonitoringRequestSchema instantiates a new StatusUpdateMonitoringRequestSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewStatusUpdateMonitoringRequestSchema() *StatusUpdateMonitoringRequestSchema {
	this := StatusUpdateMonitoringRequestSchema{}
	return &this
}

// NewStatusUpdateMonitoringRequestSchemaWithDefaults instantiates a new StatusUpdateMonitoringRequestSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewStatusUpdateMonitoringRequestSchemaWithDefaults() *StatusUpdateMonitoringRequestSchema {
	this := StatusUpdateMonitoringRequestSchema{}
	return &this
}

// GetStatusUpdate returns the StatusUpdate field value if set, zero value otherwise.
func (o *StatusUpdateMonitoringRequestSchema) GetStatusUpdate() StatusUpdateSchema {
	if o == nil || o.StatusUpdate == nil {
		var ret StatusUpdateSchema
		return ret
	}
	return *o.StatusUpdate
}

// GetStatusUpdateOk returns a tuple with the StatusUpdate field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *StatusUpdateMonitoringRequestSchema) GetStatusUpdateOk() (*StatusUpdateSchema, bool) {
	if o == nil || o.StatusUpdate == nil {
		return nil, false
	}
	return o.StatusUpdate, true
}

// HasStatusUpdate returns a boolean if a field has been set.
func (o *StatusUpdateMonitoringRequestSchema) HasStatusUpdate() bool {
	if o != nil && o.StatusUpdate != nil {
		return true
	}

	return false
}

// SetStatusUpdate gets a reference to the given StatusUpdateSchema and assigns it to the StatusUpdate field.
func (o *StatusUpdateMonitoringRequestSchema) SetStatusUpdate(v StatusUpdateSchema) {
	o.StatusUpdate = &v
}

func (o StatusUpdateMonitoringRequestSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.StatusUpdate != nil {
		toSerialize["statusUpdate"] = o.StatusUpdate
	}
	return json.Marshal(toSerialize)
}

type NullableStatusUpdateMonitoringRequestSchema struct {
	value *StatusUpdateMonitoringRequestSchema
	isSet bool
}

func (v NullableStatusUpdateMonitoringRequestSchema) Get() *StatusUpdateMonitoringRequestSchema {
	return v.value
}

func (v *NullableStatusUpdateMonitoringRequestSchema) Set(val *StatusUpdateMonitoringRequestSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableStatusUpdateMonitoringRequestSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableStatusUpdateMonitoringRequestSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableStatusUpdateMonitoringRequestSchema(val *StatusUpdateMonitoringRequestSchema) *NullableStatusUpdateMonitoringRequestSchema {
	return &NullableStatusUpdateMonitoringRequestSchema{value: val, isSet: true}
}

func (v NullableStatusUpdateMonitoringRequestSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableStatusUpdateMonitoringRequestSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


