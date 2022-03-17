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

// UTXOSmartContract struct for UTXOSmartContract
type UTXOSmartContract struct {
	Detail *string `json:"detail,omitempty"`
	Type *string `json:"type,omitempty"`
	ExtraFields *ExtraFields `json:"extraFields,omitempty"`
}

// NewUTXOSmartContract instantiates a new UTXOSmartContract object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewUTXOSmartContract() *UTXOSmartContract {
	this := UTXOSmartContract{}
	return &this
}

// NewUTXOSmartContractWithDefaults instantiates a new UTXOSmartContract object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewUTXOSmartContractWithDefaults() *UTXOSmartContract {
	this := UTXOSmartContract{}
	return &this
}

// GetDetail returns the Detail field value if set, zero value otherwise.
func (o *UTXOSmartContract) GetDetail() string {
	if o == nil || o.Detail == nil {
		var ret string
		return ret
	}
	return *o.Detail
}

// GetDetailOk returns a tuple with the Detail field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *UTXOSmartContract) GetDetailOk() (*string, bool) {
	if o == nil || o.Detail == nil {
		return nil, false
	}
	return o.Detail, true
}

// HasDetail returns a boolean if a field has been set.
func (o *UTXOSmartContract) HasDetail() bool {
	if o != nil && o.Detail != nil {
		return true
	}

	return false
}

// SetDetail gets a reference to the given string and assigns it to the Detail field.
func (o *UTXOSmartContract) SetDetail(v string) {
	o.Detail = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *UTXOSmartContract) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *UTXOSmartContract) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *UTXOSmartContract) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *UTXOSmartContract) SetType(v string) {
	o.Type = &v
}

// GetExtraFields returns the ExtraFields field value if set, zero value otherwise.
func (o *UTXOSmartContract) GetExtraFields() ExtraFields {
	if o == nil || o.ExtraFields == nil {
		var ret ExtraFields
		return ret
	}
	return *o.ExtraFields
}

// GetExtraFieldsOk returns a tuple with the ExtraFields field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *UTXOSmartContract) GetExtraFieldsOk() (*ExtraFields, bool) {
	if o == nil || o.ExtraFields == nil {
		return nil, false
	}
	return o.ExtraFields, true
}

// HasExtraFields returns a boolean if a field has been set.
func (o *UTXOSmartContract) HasExtraFields() bool {
	if o != nil && o.ExtraFields != nil {
		return true
	}

	return false
}

// SetExtraFields gets a reference to the given ExtraFields and assigns it to the ExtraFields field.
func (o *UTXOSmartContract) SetExtraFields(v ExtraFields) {
	o.ExtraFields = &v
}

func (o UTXOSmartContract) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Detail != nil {
		toSerialize["detail"] = o.Detail
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.ExtraFields != nil {
		toSerialize["extraFields"] = o.ExtraFields
	}
	return json.Marshal(toSerialize)
}

type NullableUTXOSmartContract struct {
	value *UTXOSmartContract
	isSet bool
}

func (v NullableUTXOSmartContract) Get() *UTXOSmartContract {
	return v.value
}

func (v *NullableUTXOSmartContract) Set(val *UTXOSmartContract) {
	v.value = val
	v.isSet = true
}

func (v NullableUTXOSmartContract) IsSet() bool {
	return v.isSet
}

func (v *NullableUTXOSmartContract) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableUTXOSmartContract(val *UTXOSmartContract) *NullableUTXOSmartContract {
	return &NullableUTXOSmartContract{value: val, isSet: true}
}

func (v NullableUTXOSmartContract) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableUTXOSmartContract) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


