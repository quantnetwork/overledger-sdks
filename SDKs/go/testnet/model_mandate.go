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

// Mandate The Destination of this transaction
type Mandate struct {
	Payment *Payment `json:"payment,omitempty"`
	// The unique identifiers of the payee
	PayeeId *string `json:"payeeId,omitempty"`
}

// NewMandate instantiates a new Mandate object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMandate() *Mandate {
	this := Mandate{}
	return &this
}

// NewMandateWithDefaults instantiates a new Mandate object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMandateWithDefaults() *Mandate {
	this := Mandate{}
	return &this
}

// GetPayment returns the Payment field value if set, zero value otherwise.
func (o *Mandate) GetPayment() Payment {
	if o == nil || o.Payment == nil {
		var ret Payment
		return ret
	}
	return *o.Payment
}

// GetPaymentOk returns a tuple with the Payment field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Mandate) GetPaymentOk() (*Payment, bool) {
	if o == nil || o.Payment == nil {
		return nil, false
	}
	return o.Payment, true
}

// HasPayment returns a boolean if a field has been set.
func (o *Mandate) HasPayment() bool {
	if o != nil && o.Payment != nil {
		return true
	}

	return false
}

// SetPayment gets a reference to the given Payment and assigns it to the Payment field.
func (o *Mandate) SetPayment(v Payment) {
	o.Payment = &v
}

// GetPayeeId returns the PayeeId field value if set, zero value otherwise.
func (o *Mandate) GetPayeeId() string {
	if o == nil || o.PayeeId == nil {
		var ret string
		return ret
	}
	return *o.PayeeId
}

// GetPayeeIdOk returns a tuple with the PayeeId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Mandate) GetPayeeIdOk() (*string, bool) {
	if o == nil || o.PayeeId == nil {
		return nil, false
	}
	return o.PayeeId, true
}

// HasPayeeId returns a boolean if a field has been set.
func (o *Mandate) HasPayeeId() bool {
	if o != nil && o.PayeeId != nil {
		return true
	}

	return false
}

// SetPayeeId gets a reference to the given string and assigns it to the PayeeId field.
func (o *Mandate) SetPayeeId(v string) {
	o.PayeeId = &v
}

func (o Mandate) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Payment != nil {
		toSerialize["payment"] = o.Payment
	}
	if o.PayeeId != nil {
		toSerialize["payeeId"] = o.PayeeId
	}
	return json.Marshal(toSerialize)
}

type NullableMandate struct {
	value *Mandate
	isSet bool
}

func (v NullableMandate) Get() *Mandate {
	return v.value
}

func (v *NullableMandate) Set(val *Mandate) {
	v.value = val
	v.isSet = true
}

func (v NullableMandate) IsSet() bool {
	return v.isSet
}

func (v *NullableMandate) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMandate(val *Mandate) *NullableMandate {
	return &NullableMandate{value: val, isSet: true}
}

func (v NullableMandate) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMandate) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


