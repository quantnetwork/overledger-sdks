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

// PaymentSchema The payload for each recipient
type PaymentSchema struct {
	// The payload amount. The exact format depends on the unit of the token.
	Amount string `json:"amount"`
	// The currency or token code
	Unit string `json:"unit"`
}

// NewPaymentSchema instantiates a new PaymentSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPaymentSchema(amount string, unit string) *PaymentSchema {
	this := PaymentSchema{}
	this.Amount = amount
	this.Unit = unit
	return &this
}

// NewPaymentSchemaWithDefaults instantiates a new PaymentSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPaymentSchemaWithDefaults() *PaymentSchema {
	this := PaymentSchema{}
	return &this
}

// GetAmount returns the Amount field value
func (o *PaymentSchema) GetAmount() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Amount
}

// GetAmountOk returns a tuple with the Amount field value
// and a boolean to check if the value has been set.
func (o *PaymentSchema) GetAmountOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Amount, true
}

// SetAmount sets field value
func (o *PaymentSchema) SetAmount(v string) {
	o.Amount = v
}

// GetUnit returns the Unit field value
func (o *PaymentSchema) GetUnit() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Unit
}

// GetUnitOk returns a tuple with the Unit field value
// and a boolean to check if the value has been set.
func (o *PaymentSchema) GetUnitOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Unit, true
}

// SetUnit sets field value
func (o *PaymentSchema) SetUnit(v string) {
	o.Unit = v
}

func (o PaymentSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["amount"] = o.Amount
	}
	if true {
		toSerialize["unit"] = o.Unit
	}
	return json.Marshal(toSerialize)
}

type NullablePaymentSchema struct {
	value *PaymentSchema
	isSet bool
}

func (v NullablePaymentSchema) Get() *PaymentSchema {
	return v.value
}

func (v *NullablePaymentSchema) Set(val *PaymentSchema) {
	v.value = val
	v.isSet = true
}

func (v NullablePaymentSchema) IsSet() bool {
	return v.isSet
}

func (v *NullablePaymentSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePaymentSchema(val *PaymentSchema) *NullablePaymentSchema {
	return &NullablePaymentSchema{value: val, isSet: true}
}

func (v NullablePaymentSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePaymentSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


