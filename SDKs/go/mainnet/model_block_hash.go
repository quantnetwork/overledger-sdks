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

// BlockHash struct for BlockHash
type BlockHash struct {
	Type *string `json:"type,omitempty"`
	Value *string `json:"value,omitempty"`
}

// NewBlockHash instantiates a new BlockHash object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewBlockHash() *BlockHash {
	this := BlockHash{}
	return &this
}

// NewBlockHashWithDefaults instantiates a new BlockHash object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewBlockHashWithDefaults() *BlockHash {
	this := BlockHash{}
	return &this
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *BlockHash) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BlockHash) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *BlockHash) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *BlockHash) SetType(v string) {
	o.Type = &v
}

// GetValue returns the Value field value if set, zero value otherwise.
func (o *BlockHash) GetValue() string {
	if o == nil || o.Value == nil {
		var ret string
		return ret
	}
	return *o.Value
}

// GetValueOk returns a tuple with the Value field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BlockHash) GetValueOk() (*string, bool) {
	if o == nil || o.Value == nil {
		return nil, false
	}
	return o.Value, true
}

// HasValue returns a boolean if a field has been set.
func (o *BlockHash) HasValue() bool {
	if o != nil && o.Value != nil {
		return true
	}

	return false
}

// SetValue gets a reference to the given string and assigns it to the Value field.
func (o *BlockHash) SetValue(v string) {
	o.Value = &v
}

func (o BlockHash) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.Value != nil {
		toSerialize["value"] = o.Value
	}
	return json.Marshal(toSerialize)
}

type NullableBlockHash struct {
	value *BlockHash
	isSet bool
}

func (v NullableBlockHash) Get() *BlockHash {
	return v.value
}

func (v *NullableBlockHash) Set(val *BlockHash) {
	v.value = val
	v.isSet = true
}

func (v NullableBlockHash) IsSet() bool {
	return v.isSet
}

func (v *NullableBlockHash) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableBlockHash(val *BlockHash) *NullableBlockHash {
	return &NullableBlockHash{value: val, isSet: true}
}

func (v NullableBlockHash) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableBlockHash) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


