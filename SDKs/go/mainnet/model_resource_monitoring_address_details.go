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

// ResourceMonitoringAddressDetails struct for ResourceMonitoringAddressDetails
type ResourceMonitoringAddressDetails struct {
	AddressId *string `json:"addressId,omitempty"`
}

// NewResourceMonitoringAddressDetails instantiates a new ResourceMonitoringAddressDetails object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResourceMonitoringAddressDetails() *ResourceMonitoringAddressDetails {
	this := ResourceMonitoringAddressDetails{}
	return &this
}

// NewResourceMonitoringAddressDetailsWithDefaults instantiates a new ResourceMonitoringAddressDetails object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResourceMonitoringAddressDetailsWithDefaults() *ResourceMonitoringAddressDetails {
	this := ResourceMonitoringAddressDetails{}
	return &this
}

// GetAddressId returns the AddressId field value if set, zero value otherwise.
func (o *ResourceMonitoringAddressDetails) GetAddressId() string {
	if o == nil || o.AddressId == nil {
		var ret string
		return ret
	}
	return *o.AddressId
}

// GetAddressIdOk returns a tuple with the AddressId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ResourceMonitoringAddressDetails) GetAddressIdOk() (*string, bool) {
	if o == nil || o.AddressId == nil {
		return nil, false
	}
	return o.AddressId, true
}

// HasAddressId returns a boolean if a field has been set.
func (o *ResourceMonitoringAddressDetails) HasAddressId() bool {
	if o != nil && o.AddressId != nil {
		return true
	}

	return false
}

// SetAddressId gets a reference to the given string and assigns it to the AddressId field.
func (o *ResourceMonitoringAddressDetails) SetAddressId(v string) {
	o.AddressId = &v
}

func (o ResourceMonitoringAddressDetails) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.AddressId != nil {
		toSerialize["addressId"] = o.AddressId
	}
	return json.Marshal(toSerialize)
}

type NullableResourceMonitoringAddressDetails struct {
	value *ResourceMonitoringAddressDetails
	isSet bool
}

func (v NullableResourceMonitoringAddressDetails) Get() *ResourceMonitoringAddressDetails {
	return v.value
}

func (v *NullableResourceMonitoringAddressDetails) Set(val *ResourceMonitoringAddressDetails) {
	v.value = val
	v.isSet = true
}

func (v NullableResourceMonitoringAddressDetails) IsSet() bool {
	return v.isSet
}

func (v *NullableResourceMonitoringAddressDetails) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResourceMonitoringAddressDetails(val *ResourceMonitoringAddressDetails) *NullableResourceMonitoringAddressDetails {
	return &NullableResourceMonitoringAddressDetails{value: val, isSet: true}
}

func (v NullableResourceMonitoringAddressDetails) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResourceMonitoringAddressDetails) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


