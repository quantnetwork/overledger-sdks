/*
Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// DeleteResourceMonitoringAddressSchema struct for DeleteResourceMonitoringAddressSchema
type DeleteResourceMonitoringAddressSchema struct {
	AddressMonitoringDetails *ResourceMonitoringAddressDetails `json:"addressMonitoringDetails,omitempty"`
	ResourceMonitoring *ResourceMonitoringDetails `json:"resourceMonitoring,omitempty"`
}

// NewDeleteResourceMonitoringAddressSchema instantiates a new DeleteResourceMonitoringAddressSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewDeleteResourceMonitoringAddressSchema() *DeleteResourceMonitoringAddressSchema {
	this := DeleteResourceMonitoringAddressSchema{}
	return &this
}

// NewDeleteResourceMonitoringAddressSchemaWithDefaults instantiates a new DeleteResourceMonitoringAddressSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewDeleteResourceMonitoringAddressSchemaWithDefaults() *DeleteResourceMonitoringAddressSchema {
	this := DeleteResourceMonitoringAddressSchema{}
	return &this
}

// GetAddressMonitoringDetails returns the AddressMonitoringDetails field value if set, zero value otherwise.
func (o *DeleteResourceMonitoringAddressSchema) GetAddressMonitoringDetails() ResourceMonitoringAddressDetails {
	if o == nil || o.AddressMonitoringDetails == nil {
		var ret ResourceMonitoringAddressDetails
		return ret
	}
	return *o.AddressMonitoringDetails
}

// GetAddressMonitoringDetailsOk returns a tuple with the AddressMonitoringDetails field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *DeleteResourceMonitoringAddressSchema) GetAddressMonitoringDetailsOk() (*ResourceMonitoringAddressDetails, bool) {
	if o == nil || o.AddressMonitoringDetails == nil {
		return nil, false
	}
	return o.AddressMonitoringDetails, true
}

// HasAddressMonitoringDetails returns a boolean if a field has been set.
func (o *DeleteResourceMonitoringAddressSchema) HasAddressMonitoringDetails() bool {
	if o != nil && o.AddressMonitoringDetails != nil {
		return true
	}

	return false
}

// SetAddressMonitoringDetails gets a reference to the given ResourceMonitoringAddressDetails and assigns it to the AddressMonitoringDetails field.
func (o *DeleteResourceMonitoringAddressSchema) SetAddressMonitoringDetails(v ResourceMonitoringAddressDetails) {
	o.AddressMonitoringDetails = &v
}

// GetResourceMonitoring returns the ResourceMonitoring field value if set, zero value otherwise.
func (o *DeleteResourceMonitoringAddressSchema) GetResourceMonitoring() ResourceMonitoringDetails {
	if o == nil || o.ResourceMonitoring == nil {
		var ret ResourceMonitoringDetails
		return ret
	}
	return *o.ResourceMonitoring
}

// GetResourceMonitoringOk returns a tuple with the ResourceMonitoring field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *DeleteResourceMonitoringAddressSchema) GetResourceMonitoringOk() (*ResourceMonitoringDetails, bool) {
	if o == nil || o.ResourceMonitoring == nil {
		return nil, false
	}
	return o.ResourceMonitoring, true
}

// HasResourceMonitoring returns a boolean if a field has been set.
func (o *DeleteResourceMonitoringAddressSchema) HasResourceMonitoring() bool {
	if o != nil && o.ResourceMonitoring != nil {
		return true
	}

	return false
}

// SetResourceMonitoring gets a reference to the given ResourceMonitoringDetails and assigns it to the ResourceMonitoring field.
func (o *DeleteResourceMonitoringAddressSchema) SetResourceMonitoring(v ResourceMonitoringDetails) {
	o.ResourceMonitoring = &v
}

func (o DeleteResourceMonitoringAddressSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.AddressMonitoringDetails != nil {
		toSerialize["addressMonitoringDetails"] = o.AddressMonitoringDetails
	}
	if o.ResourceMonitoring != nil {
		toSerialize["resourceMonitoring"] = o.ResourceMonitoring
	}
	return json.Marshal(toSerialize)
}

type NullableDeleteResourceMonitoringAddressSchema struct {
	value *DeleteResourceMonitoringAddressSchema
	isSet bool
}

func (v NullableDeleteResourceMonitoringAddressSchema) Get() *DeleteResourceMonitoringAddressSchema {
	return v.value
}

func (v *NullableDeleteResourceMonitoringAddressSchema) Set(val *DeleteResourceMonitoringAddressSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableDeleteResourceMonitoringAddressSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableDeleteResourceMonitoringAddressSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableDeleteResourceMonitoringAddressSchema(val *DeleteResourceMonitoringAddressSchema) *NullableDeleteResourceMonitoringAddressSchema {
	return &NullableDeleteResourceMonitoringAddressSchema{value: val, isSet: true}
}

func (v NullableDeleteResourceMonitoringAddressSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableDeleteResourceMonitoringAddressSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


