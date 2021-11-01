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

// Origin Where is this transaction coming from
type Origin struct {
	Sequence *string `json:"sequence,omitempty"`
	OriginId *string `json:"originId,omitempty"`
	SmartContract *SmartContract `json:"smartContract,omitempty"`
}

// NewOrigin instantiates a new Origin object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOrigin() *Origin {
	this := Origin{}
	return &this
}

// NewOriginWithDefaults instantiates a new Origin object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOriginWithDefaults() *Origin {
	this := Origin{}
	return &this
}

// GetSequence returns the Sequence field value if set, zero value otherwise.
func (o *Origin) GetSequence() string {
	if o == nil || o.Sequence == nil {
		var ret string
		return ret
	}
	return *o.Sequence
}

// GetSequenceOk returns a tuple with the Sequence field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Origin) GetSequenceOk() (*string, bool) {
	if o == nil || o.Sequence == nil {
		return nil, false
	}
	return o.Sequence, true
}

// HasSequence returns a boolean if a field has been set.
func (o *Origin) HasSequence() bool {
	if o != nil && o.Sequence != nil {
		return true
	}

	return false
}

// SetSequence gets a reference to the given string and assigns it to the Sequence field.
func (o *Origin) SetSequence(v string) {
	o.Sequence = &v
}

// GetOriginId returns the OriginId field value if set, zero value otherwise.
func (o *Origin) GetOriginId() string {
	if o == nil || o.OriginId == nil {
		var ret string
		return ret
	}
	return *o.OriginId
}

// GetOriginIdOk returns a tuple with the OriginId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Origin) GetOriginIdOk() (*string, bool) {
	if o == nil || o.OriginId == nil {
		return nil, false
	}
	return o.OriginId, true
}

// HasOriginId returns a boolean if a field has been set.
func (o *Origin) HasOriginId() bool {
	if o != nil && o.OriginId != nil {
		return true
	}

	return false
}

// SetOriginId gets a reference to the given string and assigns it to the OriginId field.
func (o *Origin) SetOriginId(v string) {
	o.OriginId = &v
}

// GetSmartContract returns the SmartContract field value if set, zero value otherwise.
func (o *Origin) GetSmartContract() SmartContract {
	if o == nil || o.SmartContract == nil {
		var ret SmartContract
		return ret
	}
	return *o.SmartContract
}

// GetSmartContractOk returns a tuple with the SmartContract field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Origin) GetSmartContractOk() (*SmartContract, bool) {
	if o == nil || o.SmartContract == nil {
		return nil, false
	}
	return o.SmartContract, true
}

// HasSmartContract returns a boolean if a field has been set.
func (o *Origin) HasSmartContract() bool {
	if o != nil && o.SmartContract != nil {
		return true
	}

	return false
}

// SetSmartContract gets a reference to the given SmartContract and assigns it to the SmartContract field.
func (o *Origin) SetSmartContract(v SmartContract) {
	o.SmartContract = &v
}

func (o Origin) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Sequence != nil {
		toSerialize["sequence"] = o.Sequence
	}
	if o.OriginId != nil {
		toSerialize["originId"] = o.OriginId
	}
	if o.SmartContract != nil {
		toSerialize["smartContract"] = o.SmartContract
	}
	return json.Marshal(toSerialize)
}

type NullableOrigin struct {
	value *Origin
	isSet bool
}

func (v NullableOrigin) Get() *Origin {
	return v.value
}

func (v *NullableOrigin) Set(val *Origin) {
	v.value = val
	v.isSet = true
}

func (v NullableOrigin) IsSet() bool {
	return v.isSet
}

func (v *NullableOrigin) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOrigin(val *Origin) *NullableOrigin {
	return &NullableOrigin{value: val, isSet: true}
}

func (v NullableOrigin) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOrigin) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

