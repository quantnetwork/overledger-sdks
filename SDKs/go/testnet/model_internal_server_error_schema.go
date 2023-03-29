/*
Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"time"
)

// InternalServerErrorSchema struct for InternalServerErrorSchema
type InternalServerErrorSchema struct {
	Path *string `json:"path,omitempty"`
	Error *string `json:"error,omitempty"`
	Message *string `json:"message,omitempty"`
	Timestamp *time.Time `json:"timestamp,omitempty"`
	Status *int32 `json:"status,omitempty"`
}

// NewInternalServerErrorSchema instantiates a new InternalServerErrorSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewInternalServerErrorSchema() *InternalServerErrorSchema {
	this := InternalServerErrorSchema{}
	return &this
}

// NewInternalServerErrorSchemaWithDefaults instantiates a new InternalServerErrorSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewInternalServerErrorSchemaWithDefaults() *InternalServerErrorSchema {
	this := InternalServerErrorSchema{}
	return &this
}

// GetPath returns the Path field value if set, zero value otherwise.
func (o *InternalServerErrorSchema) GetPath() string {
	if o == nil || o.Path == nil {
		var ret string
		return ret
	}
	return *o.Path
}

// GetPathOk returns a tuple with the Path field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *InternalServerErrorSchema) GetPathOk() (*string, bool) {
	if o == nil || o.Path == nil {
		return nil, false
	}
	return o.Path, true
}

// HasPath returns a boolean if a field has been set.
func (o *InternalServerErrorSchema) HasPath() bool {
	if o != nil && o.Path != nil {
		return true
	}

	return false
}

// SetPath gets a reference to the given string and assigns it to the Path field.
func (o *InternalServerErrorSchema) SetPath(v string) {
	o.Path = &v
}

// GetError returns the Error field value if set, zero value otherwise.
func (o *InternalServerErrorSchema) GetError() string {
	if o == nil || o.Error == nil {
		var ret string
		return ret
	}
	return *o.Error
}

// GetErrorOk returns a tuple with the Error field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *InternalServerErrorSchema) GetErrorOk() (*string, bool) {
	if o == nil || o.Error == nil {
		return nil, false
	}
	return o.Error, true
}

// HasError returns a boolean if a field has been set.
func (o *InternalServerErrorSchema) HasError() bool {
	if o != nil && o.Error != nil {
		return true
	}

	return false
}

// SetError gets a reference to the given string and assigns it to the Error field.
func (o *InternalServerErrorSchema) SetError(v string) {
	o.Error = &v
}

// GetMessage returns the Message field value if set, zero value otherwise.
func (o *InternalServerErrorSchema) GetMessage() string {
	if o == nil || o.Message == nil {
		var ret string
		return ret
	}
	return *o.Message
}

// GetMessageOk returns a tuple with the Message field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *InternalServerErrorSchema) GetMessageOk() (*string, bool) {
	if o == nil || o.Message == nil {
		return nil, false
	}
	return o.Message, true
}

// HasMessage returns a boolean if a field has been set.
func (o *InternalServerErrorSchema) HasMessage() bool {
	if o != nil && o.Message != nil {
		return true
	}

	return false
}

// SetMessage gets a reference to the given string and assigns it to the Message field.
func (o *InternalServerErrorSchema) SetMessage(v string) {
	o.Message = &v
}

// GetTimestamp returns the Timestamp field value if set, zero value otherwise.
func (o *InternalServerErrorSchema) GetTimestamp() time.Time {
	if o == nil || o.Timestamp == nil {
		var ret time.Time
		return ret
	}
	return *o.Timestamp
}

// GetTimestampOk returns a tuple with the Timestamp field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *InternalServerErrorSchema) GetTimestampOk() (*time.Time, bool) {
	if o == nil || o.Timestamp == nil {
		return nil, false
	}
	return o.Timestamp, true
}

// HasTimestamp returns a boolean if a field has been set.
func (o *InternalServerErrorSchema) HasTimestamp() bool {
	if o != nil && o.Timestamp != nil {
		return true
	}

	return false
}

// SetTimestamp gets a reference to the given time.Time and assigns it to the Timestamp field.
func (o *InternalServerErrorSchema) SetTimestamp(v time.Time) {
	o.Timestamp = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *InternalServerErrorSchema) GetStatus() int32 {
	if o == nil || o.Status == nil {
		var ret int32
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *InternalServerErrorSchema) GetStatusOk() (*int32, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *InternalServerErrorSchema) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given int32 and assigns it to the Status field.
func (o *InternalServerErrorSchema) SetStatus(v int32) {
	o.Status = &v
}

func (o InternalServerErrorSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Path != nil {
		toSerialize["path"] = o.Path
	}
	if o.Error != nil {
		toSerialize["error"] = o.Error
	}
	if o.Message != nil {
		toSerialize["message"] = o.Message
	}
	if o.Timestamp != nil {
		toSerialize["timestamp"] = o.Timestamp
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	return json.Marshal(toSerialize)
}

type NullableInternalServerErrorSchema struct {
	value *InternalServerErrorSchema
	isSet bool
}

func (v NullableInternalServerErrorSchema) Get() *InternalServerErrorSchema {
	return v.value
}

func (v *NullableInternalServerErrorSchema) Set(val *InternalServerErrorSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableInternalServerErrorSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableInternalServerErrorSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableInternalServerErrorSchema(val *InternalServerErrorSchema) *NullableInternalServerErrorSchema {
	return &NullableInternalServerErrorSchema{value: val, isSet: true}
}

func (v NullableInternalServerErrorSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableInternalServerErrorSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


