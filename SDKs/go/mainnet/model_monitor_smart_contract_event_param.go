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

// MonitorSmartContractEventParam struct for MonitorSmartContractEventParam
type MonitorSmartContractEventParam struct {
	SelectedIntegerLength *string `json:"selectedIntegerLength,omitempty"`
	Type *string `json:"type,omitempty"`
	Value *string `json:"value,omitempty"`
}

// NewMonitorSmartContractEventParam instantiates a new MonitorSmartContractEventParam object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMonitorSmartContractEventParam() *MonitorSmartContractEventParam {
	this := MonitorSmartContractEventParam{}
	return &this
}

// NewMonitorSmartContractEventParamWithDefaults instantiates a new MonitorSmartContractEventParam object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMonitorSmartContractEventParamWithDefaults() *MonitorSmartContractEventParam {
	this := MonitorSmartContractEventParam{}
	return &this
}

// GetSelectedIntegerLength returns the SelectedIntegerLength field value if set, zero value otherwise.
func (o *MonitorSmartContractEventParam) GetSelectedIntegerLength() string {
	if o == nil || o.SelectedIntegerLength == nil {
		var ret string
		return ret
	}
	return *o.SelectedIntegerLength
}

// GetSelectedIntegerLengthOk returns a tuple with the SelectedIntegerLength field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MonitorSmartContractEventParam) GetSelectedIntegerLengthOk() (*string, bool) {
	if o == nil || o.SelectedIntegerLength == nil {
		return nil, false
	}
	return o.SelectedIntegerLength, true
}

// HasSelectedIntegerLength returns a boolean if a field has been set.
func (o *MonitorSmartContractEventParam) HasSelectedIntegerLength() bool {
	if o != nil && o.SelectedIntegerLength != nil {
		return true
	}

	return false
}

// SetSelectedIntegerLength gets a reference to the given string and assigns it to the SelectedIntegerLength field.
func (o *MonitorSmartContractEventParam) SetSelectedIntegerLength(v string) {
	o.SelectedIntegerLength = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *MonitorSmartContractEventParam) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MonitorSmartContractEventParam) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *MonitorSmartContractEventParam) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *MonitorSmartContractEventParam) SetType(v string) {
	o.Type = &v
}

// GetValue returns the Value field value if set, zero value otherwise.
func (o *MonitorSmartContractEventParam) GetValue() string {
	if o == nil || o.Value == nil {
		var ret string
		return ret
	}
	return *o.Value
}

// GetValueOk returns a tuple with the Value field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MonitorSmartContractEventParam) GetValueOk() (*string, bool) {
	if o == nil || o.Value == nil {
		return nil, false
	}
	return o.Value, true
}

// HasValue returns a boolean if a field has been set.
func (o *MonitorSmartContractEventParam) HasValue() bool {
	if o != nil && o.Value != nil {
		return true
	}

	return false
}

// SetValue gets a reference to the given string and assigns it to the Value field.
func (o *MonitorSmartContractEventParam) SetValue(v string) {
	o.Value = &v
}

func (o MonitorSmartContractEventParam) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.SelectedIntegerLength != nil {
		toSerialize["selectedIntegerLength"] = o.SelectedIntegerLength
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.Value != nil {
		toSerialize["value"] = o.Value
	}
	return json.Marshal(toSerialize)
}

type NullableMonitorSmartContractEventParam struct {
	value *MonitorSmartContractEventParam
	isSet bool
}

func (v NullableMonitorSmartContractEventParam) Get() *MonitorSmartContractEventParam {
	return v.value
}

func (v *NullableMonitorSmartContractEventParam) Set(val *MonitorSmartContractEventParam) {
	v.value = val
	v.isSet = true
}

func (v NullableMonitorSmartContractEventParam) IsSet() bool {
	return v.isSet
}

func (v *NullableMonitorSmartContractEventParam) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMonitorSmartContractEventParam(val *MonitorSmartContractEventParam) *NullableMonitorSmartContractEventParam {
	return &NullableMonitorSmartContractEventParam{value: val, isSet: true}
}

func (v NullableMonitorSmartContractEventParam) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMonitorSmartContractEventParam) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


