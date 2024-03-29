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

// CreditRequestDetailsSchema struct for CreditRequestDetailsSchema
type CreditRequestDetailsSchema struct {
	// Who are the payees of this transaction
	Payee *[]PayeeCreditSchema `json:"payee,omitempty"`
	// Any text-based element of the data payload
	Message *string `json:"message,omitempty"`
	// Who are the payers of this transaction
	Payer *[]PayerCreditSchema `json:"payer,omitempty"`
	OverledgerSigningType *string `json:"overledgerSigningType,omitempty"`
}

// NewCreditRequestDetailsSchema instantiates a new CreditRequestDetailsSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCreditRequestDetailsSchema() *CreditRequestDetailsSchema {
	this := CreditRequestDetailsSchema{}
	return &this
}

// NewCreditRequestDetailsSchemaWithDefaults instantiates a new CreditRequestDetailsSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCreditRequestDetailsSchemaWithDefaults() *CreditRequestDetailsSchema {
	this := CreditRequestDetailsSchema{}
	return &this
}

// GetPayee returns the Payee field value if set, zero value otherwise.
func (o *CreditRequestDetailsSchema) GetPayee() []PayeeCreditSchema {
	if o == nil || o.Payee == nil {
		var ret []PayeeCreditSchema
		return ret
	}
	return *o.Payee
}

// GetPayeeOk returns a tuple with the Payee field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CreditRequestDetailsSchema) GetPayeeOk() (*[]PayeeCreditSchema, bool) {
	if o == nil || o.Payee == nil {
		return nil, false
	}
	return o.Payee, true
}

// HasPayee returns a boolean if a field has been set.
func (o *CreditRequestDetailsSchema) HasPayee() bool {
	if o != nil && o.Payee != nil {
		return true
	}

	return false
}

// SetPayee gets a reference to the given []PayeeCreditSchema and assigns it to the Payee field.
func (o *CreditRequestDetailsSchema) SetPayee(v []PayeeCreditSchema) {
	o.Payee = &v
}

// GetMessage returns the Message field value if set, zero value otherwise.
func (o *CreditRequestDetailsSchema) GetMessage() string {
	if o == nil || o.Message == nil {
		var ret string
		return ret
	}
	return *o.Message
}

// GetMessageOk returns a tuple with the Message field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CreditRequestDetailsSchema) GetMessageOk() (*string, bool) {
	if o == nil || o.Message == nil {
		return nil, false
	}
	return o.Message, true
}

// HasMessage returns a boolean if a field has been set.
func (o *CreditRequestDetailsSchema) HasMessage() bool {
	if o != nil && o.Message != nil {
		return true
	}

	return false
}

// SetMessage gets a reference to the given string and assigns it to the Message field.
func (o *CreditRequestDetailsSchema) SetMessage(v string) {
	o.Message = &v
}

// GetPayer returns the Payer field value if set, zero value otherwise.
func (o *CreditRequestDetailsSchema) GetPayer() []PayerCreditSchema {
	if o == nil || o.Payer == nil {
		var ret []PayerCreditSchema
		return ret
	}
	return *o.Payer
}

// GetPayerOk returns a tuple with the Payer field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CreditRequestDetailsSchema) GetPayerOk() (*[]PayerCreditSchema, bool) {
	if o == nil || o.Payer == nil {
		return nil, false
	}
	return o.Payer, true
}

// HasPayer returns a boolean if a field has been set.
func (o *CreditRequestDetailsSchema) HasPayer() bool {
	if o != nil && o.Payer != nil {
		return true
	}

	return false
}

// SetPayer gets a reference to the given []PayerCreditSchema and assigns it to the Payer field.
func (o *CreditRequestDetailsSchema) SetPayer(v []PayerCreditSchema) {
	o.Payer = &v
}

// GetOverledgerSigningType returns the OverledgerSigningType field value if set, zero value otherwise.
func (o *CreditRequestDetailsSchema) GetOverledgerSigningType() string {
	if o == nil || o.OverledgerSigningType == nil {
		var ret string
		return ret
	}
	return *o.OverledgerSigningType
}

// GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CreditRequestDetailsSchema) GetOverledgerSigningTypeOk() (*string, bool) {
	if o == nil || o.OverledgerSigningType == nil {
		return nil, false
	}
	return o.OverledgerSigningType, true
}

// HasOverledgerSigningType returns a boolean if a field has been set.
func (o *CreditRequestDetailsSchema) HasOverledgerSigningType() bool {
	if o != nil && o.OverledgerSigningType != nil {
		return true
	}

	return false
}

// SetOverledgerSigningType gets a reference to the given string and assigns it to the OverledgerSigningType field.
func (o *CreditRequestDetailsSchema) SetOverledgerSigningType(v string) {
	o.OverledgerSigningType = &v
}

func (o CreditRequestDetailsSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Payee != nil {
		toSerialize["payee"] = o.Payee
	}
	if o.Message != nil {
		toSerialize["message"] = o.Message
	}
	if o.Payer != nil {
		toSerialize["payer"] = o.Payer
	}
	if o.OverledgerSigningType != nil {
		toSerialize["overledgerSigningType"] = o.OverledgerSigningType
	}
	return json.Marshal(toSerialize)
}

type NullableCreditRequestDetailsSchema struct {
	value *CreditRequestDetailsSchema
	isSet bool
}

func (v NullableCreditRequestDetailsSchema) Get() *CreditRequestDetailsSchema {
	return v.value
}

func (v *NullableCreditRequestDetailsSchema) Set(val *CreditRequestDetailsSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableCreditRequestDetailsSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableCreditRequestDetailsSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCreditRequestDetailsSchema(val *CreditRequestDetailsSchema) *NullableCreditRequestDetailsSchema {
	return &NullableCreditRequestDetailsSchema{value: val, isSet: true}
}

func (v NullableCreditRequestDetailsSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCreditRequestDetailsSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


