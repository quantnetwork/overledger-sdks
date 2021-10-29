/*
Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"time"
)

// AddressMonitoringDetailsSchema struct for AddressMonitoringDetailsSchema
type AddressMonitoringDetailsSchema struct {
	Location *Location `json:"location,omitempty"`
	AddressDetails *ResourceMonitoredAddressDetails `json:"addressDetails,omitempty"`
	Type *string `json:"type,omitempty"`
	Timestamp *time.Time `json:"timestamp,omitempty"`
}

// NewAddressMonitoringDetailsSchema instantiates a new AddressMonitoringDetailsSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAddressMonitoringDetailsSchema() *AddressMonitoringDetailsSchema {
	this := AddressMonitoringDetailsSchema{}
	return &this
}

// NewAddressMonitoringDetailsSchemaWithDefaults instantiates a new AddressMonitoringDetailsSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAddressMonitoringDetailsSchemaWithDefaults() *AddressMonitoringDetailsSchema {
	this := AddressMonitoringDetailsSchema{}
	return &this
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *AddressMonitoringDetailsSchema) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AddressMonitoringDetailsSchema) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *AddressMonitoringDetailsSchema) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *AddressMonitoringDetailsSchema) SetLocation(v Location) {
	o.Location = &v
}

// GetAddressDetails returns the AddressDetails field value if set, zero value otherwise.
func (o *AddressMonitoringDetailsSchema) GetAddressDetails() ResourceMonitoredAddressDetails {
	if o == nil || o.AddressDetails == nil {
		var ret ResourceMonitoredAddressDetails
		return ret
	}
	return *o.AddressDetails
}

// GetAddressDetailsOk returns a tuple with the AddressDetails field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AddressMonitoringDetailsSchema) GetAddressDetailsOk() (*ResourceMonitoredAddressDetails, bool) {
	if o == nil || o.AddressDetails == nil {
		return nil, false
	}
	return o.AddressDetails, true
}

// HasAddressDetails returns a boolean if a field has been set.
func (o *AddressMonitoringDetailsSchema) HasAddressDetails() bool {
	if o != nil && o.AddressDetails != nil {
		return true
	}

	return false
}

// SetAddressDetails gets a reference to the given ResourceMonitoredAddressDetails and assigns it to the AddressDetails field.
func (o *AddressMonitoringDetailsSchema) SetAddressDetails(v ResourceMonitoredAddressDetails) {
	o.AddressDetails = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *AddressMonitoringDetailsSchema) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AddressMonitoringDetailsSchema) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *AddressMonitoringDetailsSchema) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *AddressMonitoringDetailsSchema) SetType(v string) {
	o.Type = &v
}

// GetTimestamp returns the Timestamp field value if set, zero value otherwise.
func (o *AddressMonitoringDetailsSchema) GetTimestamp() time.Time {
	if o == nil || o.Timestamp == nil {
		var ret time.Time
		return ret
	}
	return *o.Timestamp
}

// GetTimestampOk returns a tuple with the Timestamp field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AddressMonitoringDetailsSchema) GetTimestampOk() (*time.Time, bool) {
	if o == nil || o.Timestamp == nil {
		return nil, false
	}
	return o.Timestamp, true
}

// HasTimestamp returns a boolean if a field has been set.
func (o *AddressMonitoringDetailsSchema) HasTimestamp() bool {
	if o != nil && o.Timestamp != nil {
		return true
	}

	return false
}

// SetTimestamp gets a reference to the given time.Time and assigns it to the Timestamp field.
func (o *AddressMonitoringDetailsSchema) SetTimestamp(v time.Time) {
	o.Timestamp = &v
}

func (o AddressMonitoringDetailsSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	if o.AddressDetails != nil {
		toSerialize["addressDetails"] = o.AddressDetails
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.Timestamp != nil {
		toSerialize["timestamp"] = o.Timestamp
	}
	return json.Marshal(toSerialize)
}

type NullableAddressMonitoringDetailsSchema struct {
	value *AddressMonitoringDetailsSchema
	isSet bool
}

func (v NullableAddressMonitoringDetailsSchema) Get() *AddressMonitoringDetailsSchema {
	return v.value
}

func (v *NullableAddressMonitoringDetailsSchema) Set(val *AddressMonitoringDetailsSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableAddressMonitoringDetailsSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableAddressMonitoringDetailsSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAddressMonitoringDetailsSchema(val *AddressMonitoringDetailsSchema) *NullableAddressMonitoringDetailsSchema {
	return &NullableAddressMonitoringDetailsSchema{value: val, isSet: true}
}

func (v NullableAddressMonitoringDetailsSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAddressMonitoringDetailsSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


