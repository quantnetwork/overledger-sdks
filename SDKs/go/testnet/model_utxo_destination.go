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

// UTXODestination struct for UTXODestination
type UTXODestination struct {
	SmartContract *UTXOSmartContract `json:"smartContract,omitempty"`
	Payment *Payment `json:"payment,omitempty"`
	DestinationId *string `json:"destinationId,omitempty"`
}

// NewUTXODestination instantiates a new UTXODestination object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewUTXODestination() *UTXODestination {
	this := UTXODestination{}
	return &this
}

// NewUTXODestinationWithDefaults instantiates a new UTXODestination object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewUTXODestinationWithDefaults() *UTXODestination {
	this := UTXODestination{}
	return &this
}

// GetSmartContract returns the SmartContract field value if set, zero value otherwise.
func (o *UTXODestination) GetSmartContract() UTXOSmartContract {
	if o == nil || o.SmartContract == nil {
		var ret UTXOSmartContract
		return ret
	}
	return *o.SmartContract
}

// GetSmartContractOk returns a tuple with the SmartContract field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *UTXODestination) GetSmartContractOk() (*UTXOSmartContract, bool) {
	if o == nil || o.SmartContract == nil {
		return nil, false
	}
	return o.SmartContract, true
}

// HasSmartContract returns a boolean if a field has been set.
func (o *UTXODestination) HasSmartContract() bool {
	if o != nil && o.SmartContract != nil {
		return true
	}

	return false
}

// SetSmartContract gets a reference to the given UTXOSmartContract and assigns it to the SmartContract field.
func (o *UTXODestination) SetSmartContract(v UTXOSmartContract) {
	o.SmartContract = &v
}

// GetPayment returns the Payment field value if set, zero value otherwise.
func (o *UTXODestination) GetPayment() Payment {
	if o == nil || o.Payment == nil {
		var ret Payment
		return ret
	}
	return *o.Payment
}

// GetPaymentOk returns a tuple with the Payment field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *UTXODestination) GetPaymentOk() (*Payment, bool) {
	if o == nil || o.Payment == nil {
		return nil, false
	}
	return o.Payment, true
}

// HasPayment returns a boolean if a field has been set.
func (o *UTXODestination) HasPayment() bool {
	if o != nil && o.Payment != nil {
		return true
	}

	return false
}

// SetPayment gets a reference to the given Payment and assigns it to the Payment field.
func (o *UTXODestination) SetPayment(v Payment) {
	o.Payment = &v
}

// GetDestinationId returns the DestinationId field value if set, zero value otherwise.
func (o *UTXODestination) GetDestinationId() string {
	if o == nil || o.DestinationId == nil {
		var ret string
		return ret
	}
	return *o.DestinationId
}

// GetDestinationIdOk returns a tuple with the DestinationId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *UTXODestination) GetDestinationIdOk() (*string, bool) {
	if o == nil || o.DestinationId == nil {
		return nil, false
	}
	return o.DestinationId, true
}

// HasDestinationId returns a boolean if a field has been set.
func (o *UTXODestination) HasDestinationId() bool {
	if o != nil && o.DestinationId != nil {
		return true
	}

	return false
}

// SetDestinationId gets a reference to the given string and assigns it to the DestinationId field.
func (o *UTXODestination) SetDestinationId(v string) {
	o.DestinationId = &v
}

func (o UTXODestination) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.SmartContract != nil {
		toSerialize["smartContract"] = o.SmartContract
	}
	if o.Payment != nil {
		toSerialize["payment"] = o.Payment
	}
	if o.DestinationId != nil {
		toSerialize["destinationId"] = o.DestinationId
	}
	return json.Marshal(toSerialize)
}

type NullableUTXODestination struct {
	value *UTXODestination
	isSet bool
}

func (v NullableUTXODestination) Get() *UTXODestination {
	return v.value
}

func (v *NullableUTXODestination) Set(val *UTXODestination) {
	v.value = val
	v.isSet = true
}

func (v NullableUTXODestination) IsSet() bool {
	return v.isSet
}

func (v *NullableUTXODestination) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableUTXODestination(val *UTXODestination) *NullableUTXODestination {
	return &NullableUTXODestination{value: val, isSet: true}
}

func (v NullableUTXODestination) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableUTXODestination) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

