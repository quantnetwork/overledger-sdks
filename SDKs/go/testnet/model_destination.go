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

// Destination The Destination of this transaction
type Destination struct {
	Payment *Payment `json:"payment,omitempty"`
	Transfer *Transfer `json:"transfer,omitempty"`
	// The unique identifier of the destination
	DestinationId *string `json:"destinationId,omitempty"`
	SmartContract *SmartContract `json:"smartContract,omitempty"`
}

// NewDestination instantiates a new Destination object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewDestination() *Destination {
	this := Destination{}
	return &this
}

// NewDestinationWithDefaults instantiates a new Destination object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewDestinationWithDefaults() *Destination {
	this := Destination{}
	return &this
}

// GetPayment returns the Payment field value if set, zero value otherwise.
func (o *Destination) GetPayment() Payment {
	if o == nil || o.Payment == nil {
		var ret Payment
		return ret
	}
	return *o.Payment
}

// GetPaymentOk returns a tuple with the Payment field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Destination) GetPaymentOk() (*Payment, bool) {
	if o == nil || o.Payment == nil {
		return nil, false
	}
	return o.Payment, true
}

// HasPayment returns a boolean if a field has been set.
func (o *Destination) HasPayment() bool {
	if o != nil && o.Payment != nil {
		return true
	}

	return false
}

// SetPayment gets a reference to the given Payment and assigns it to the Payment field.
func (o *Destination) SetPayment(v Payment) {
	o.Payment = &v
}

// GetTransfer returns the Transfer field value if set, zero value otherwise.
func (o *Destination) GetTransfer() Transfer {
	if o == nil || o.Transfer == nil {
		var ret Transfer
		return ret
	}
	return *o.Transfer
}

// GetTransferOk returns a tuple with the Transfer field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Destination) GetTransferOk() (*Transfer, bool) {
	if o == nil || o.Transfer == nil {
		return nil, false
	}
	return o.Transfer, true
}

// HasTransfer returns a boolean if a field has been set.
func (o *Destination) HasTransfer() bool {
	if o != nil && o.Transfer != nil {
		return true
	}

	return false
}

// SetTransfer gets a reference to the given Transfer and assigns it to the Transfer field.
func (o *Destination) SetTransfer(v Transfer) {
	o.Transfer = &v
}

// GetDestinationId returns the DestinationId field value if set, zero value otherwise.
func (o *Destination) GetDestinationId() string {
	if o == nil || o.DestinationId == nil {
		var ret string
		return ret
	}
	return *o.DestinationId
}

// GetDestinationIdOk returns a tuple with the DestinationId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Destination) GetDestinationIdOk() (*string, bool) {
	if o == nil || o.DestinationId == nil {
		return nil, false
	}
	return o.DestinationId, true
}

// HasDestinationId returns a boolean if a field has been set.
func (o *Destination) HasDestinationId() bool {
	if o != nil && o.DestinationId != nil {
		return true
	}

	return false
}

// SetDestinationId gets a reference to the given string and assigns it to the DestinationId field.
func (o *Destination) SetDestinationId(v string) {
	o.DestinationId = &v
}

// GetSmartContract returns the SmartContract field value if set, zero value otherwise.
func (o *Destination) GetSmartContract() SmartContract {
	if o == nil || o.SmartContract == nil {
		var ret SmartContract
		return ret
	}
	return *o.SmartContract
}

// GetSmartContractOk returns a tuple with the SmartContract field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Destination) GetSmartContractOk() (*SmartContract, bool) {
	if o == nil || o.SmartContract == nil {
		return nil, false
	}
	return o.SmartContract, true
}

// HasSmartContract returns a boolean if a field has been set.
func (o *Destination) HasSmartContract() bool {
	if o != nil && o.SmartContract != nil {
		return true
	}

	return false
}

// SetSmartContract gets a reference to the given SmartContract and assigns it to the SmartContract field.
func (o *Destination) SetSmartContract(v SmartContract) {
	o.SmartContract = &v
}

func (o Destination) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Payment != nil {
		toSerialize["payment"] = o.Payment
	}
	if o.Transfer != nil {
		toSerialize["transfer"] = o.Transfer
	}
	if o.DestinationId != nil {
		toSerialize["destinationId"] = o.DestinationId
	}
	if o.SmartContract != nil {
		toSerialize["smartContract"] = o.SmartContract
	}
	return json.Marshal(toSerialize)
}

type NullableDestination struct {
	value *Destination
	isSet bool
}

func (v NullableDestination) Get() *Destination {
	return v.value
}

func (v *NullableDestination) Set(val *Destination) {
	v.value = val
	v.isSet = true
}

func (v NullableDestination) IsSet() bool {
	return v.isSet
}

func (v *NullableDestination) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableDestination(val *Destination) *NullableDestination {
	return &NullableDestination{value: val, isSet: true}
}

func (v NullableDestination) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableDestination) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


