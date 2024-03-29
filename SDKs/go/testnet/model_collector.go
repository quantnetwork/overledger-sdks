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

// Collector Who is the collector of the tokens.
type Collector struct {
	AccountId *string `json:"accountId,omitempty"`
	Transfer *Transfer `json:"transfer,omitempty"`
}

// NewCollector instantiates a new Collector object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCollector() *Collector {
	this := Collector{}
	return &this
}

// NewCollectorWithDefaults instantiates a new Collector object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCollectorWithDefaults() *Collector {
	this := Collector{}
	return &this
}

// GetAccountId returns the AccountId field value if set, zero value otherwise.
func (o *Collector) GetAccountId() string {
	if o == nil || o.AccountId == nil {
		var ret string
		return ret
	}
	return *o.AccountId
}

// GetAccountIdOk returns a tuple with the AccountId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Collector) GetAccountIdOk() (*string, bool) {
	if o == nil || o.AccountId == nil {
		return nil, false
	}
	return o.AccountId, true
}

// HasAccountId returns a boolean if a field has been set.
func (o *Collector) HasAccountId() bool {
	if o != nil && o.AccountId != nil {
		return true
	}

	return false
}

// SetAccountId gets a reference to the given string and assigns it to the AccountId field.
func (o *Collector) SetAccountId(v string) {
	o.AccountId = &v
}

// GetTransfer returns the Transfer field value if set, zero value otherwise.
func (o *Collector) GetTransfer() Transfer {
	if o == nil || o.Transfer == nil {
		var ret Transfer
		return ret
	}
	return *o.Transfer
}

// GetTransferOk returns a tuple with the Transfer field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Collector) GetTransferOk() (*Transfer, bool) {
	if o == nil || o.Transfer == nil {
		return nil, false
	}
	return o.Transfer, true
}

// HasTransfer returns a boolean if a field has been set.
func (o *Collector) HasTransfer() bool {
	if o != nil && o.Transfer != nil {
		return true
	}

	return false
}

// SetTransfer gets a reference to the given Transfer and assigns it to the Transfer field.
func (o *Collector) SetTransfer(v Transfer) {
	o.Transfer = &v
}

func (o Collector) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.AccountId != nil {
		toSerialize["accountId"] = o.AccountId
	}
	if o.Transfer != nil {
		toSerialize["transfer"] = o.Transfer
	}
	return json.Marshal(toSerialize)
}

type NullableCollector struct {
	value *Collector
	isSet bool
}

func (v NullableCollector) Get() *Collector {
	return v.value
}

func (v *NullableCollector) Set(val *Collector) {
	v.value = val
	v.isSet = true
}

func (v NullableCollector) IsSet() bool {
	return v.isSet
}

func (v *NullableCollector) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCollector(val *Collector) *NullableCollector {
	return &NullableCollector{value: val, isSet: true}
}

func (v NullableCollector) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCollector) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


