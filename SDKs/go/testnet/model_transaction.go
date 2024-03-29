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

// Transaction Smallest unit of a work process related to interactions with distributed ledgers
type Transaction struct {
	// The signatures of this transaction
	Signature *[]string `json:"signature,omitempty"`
	Origin *[]Origin `json:"origin,omitempty"`
	Fee *Fee `json:"fee,omitempty"`
	Destination *[]Destination `json:"destination,omitempty"`
	Signed *string `json:"signed,omitempty"`
	TotalPaymentAmount *[]Payment `json:"totalPaymentAmount,omitempty"`
	// Any text-based element of the data payload
	Message *string `json:"message,omitempty"`
	// The unique identifier of the transaction on this DLN
	TransactionId *string `json:"transactionId,omitempty"`
	Encoded *[]string `json:"encoded,omitempty"`
	ExtraFields *map[string]interface{} `json:"extraFields,omitempty"`
	NativeData *map[string]interface{} `json:"nativeData,omitempty"`
}

// NewTransaction instantiates a new Transaction object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTransaction() *Transaction {
	this := Transaction{}
	return &this
}

// NewTransactionWithDefaults instantiates a new Transaction object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTransactionWithDefaults() *Transaction {
	this := Transaction{}
	return &this
}

// GetSignature returns the Signature field value if set, zero value otherwise.
func (o *Transaction) GetSignature() []string {
	if o == nil || o.Signature == nil {
		var ret []string
		return ret
	}
	return *o.Signature
}

// GetSignatureOk returns a tuple with the Signature field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetSignatureOk() (*[]string, bool) {
	if o == nil || o.Signature == nil {
		return nil, false
	}
	return o.Signature, true
}

// HasSignature returns a boolean if a field has been set.
func (o *Transaction) HasSignature() bool {
	if o != nil && o.Signature != nil {
		return true
	}

	return false
}

// SetSignature gets a reference to the given []string and assigns it to the Signature field.
func (o *Transaction) SetSignature(v []string) {
	o.Signature = &v
}

// GetOrigin returns the Origin field value if set, zero value otherwise.
func (o *Transaction) GetOrigin() []Origin {
	if o == nil || o.Origin == nil {
		var ret []Origin
		return ret
	}
	return *o.Origin
}

// GetOriginOk returns a tuple with the Origin field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetOriginOk() (*[]Origin, bool) {
	if o == nil || o.Origin == nil {
		return nil, false
	}
	return o.Origin, true
}

// HasOrigin returns a boolean if a field has been set.
func (o *Transaction) HasOrigin() bool {
	if o != nil && o.Origin != nil {
		return true
	}

	return false
}

// SetOrigin gets a reference to the given []Origin and assigns it to the Origin field.
func (o *Transaction) SetOrigin(v []Origin) {
	o.Origin = &v
}

// GetFee returns the Fee field value if set, zero value otherwise.
func (o *Transaction) GetFee() Fee {
	if o == nil || o.Fee == nil {
		var ret Fee
		return ret
	}
	return *o.Fee
}

// GetFeeOk returns a tuple with the Fee field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetFeeOk() (*Fee, bool) {
	if o == nil || o.Fee == nil {
		return nil, false
	}
	return o.Fee, true
}

// HasFee returns a boolean if a field has been set.
func (o *Transaction) HasFee() bool {
	if o != nil && o.Fee != nil {
		return true
	}

	return false
}

// SetFee gets a reference to the given Fee and assigns it to the Fee field.
func (o *Transaction) SetFee(v Fee) {
	o.Fee = &v
}

// GetDestination returns the Destination field value if set, zero value otherwise.
func (o *Transaction) GetDestination() []Destination {
	if o == nil || o.Destination == nil {
		var ret []Destination
		return ret
	}
	return *o.Destination
}

// GetDestinationOk returns a tuple with the Destination field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetDestinationOk() (*[]Destination, bool) {
	if o == nil || o.Destination == nil {
		return nil, false
	}
	return o.Destination, true
}

// HasDestination returns a boolean if a field has been set.
func (o *Transaction) HasDestination() bool {
	if o != nil && o.Destination != nil {
		return true
	}

	return false
}

// SetDestination gets a reference to the given []Destination and assigns it to the Destination field.
func (o *Transaction) SetDestination(v []Destination) {
	o.Destination = &v
}

// GetSigned returns the Signed field value if set, zero value otherwise.
func (o *Transaction) GetSigned() string {
	if o == nil || o.Signed == nil {
		var ret string
		return ret
	}
	return *o.Signed
}

// GetSignedOk returns a tuple with the Signed field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetSignedOk() (*string, bool) {
	if o == nil || o.Signed == nil {
		return nil, false
	}
	return o.Signed, true
}

// HasSigned returns a boolean if a field has been set.
func (o *Transaction) HasSigned() bool {
	if o != nil && o.Signed != nil {
		return true
	}

	return false
}

// SetSigned gets a reference to the given string and assigns it to the Signed field.
func (o *Transaction) SetSigned(v string) {
	o.Signed = &v
}

// GetTotalPaymentAmount returns the TotalPaymentAmount field value if set, zero value otherwise.
func (o *Transaction) GetTotalPaymentAmount() []Payment {
	if o == nil || o.TotalPaymentAmount == nil {
		var ret []Payment
		return ret
	}
	return *o.TotalPaymentAmount
}

// GetTotalPaymentAmountOk returns a tuple with the TotalPaymentAmount field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetTotalPaymentAmountOk() (*[]Payment, bool) {
	if o == nil || o.TotalPaymentAmount == nil {
		return nil, false
	}
	return o.TotalPaymentAmount, true
}

// HasTotalPaymentAmount returns a boolean if a field has been set.
func (o *Transaction) HasTotalPaymentAmount() bool {
	if o != nil && o.TotalPaymentAmount != nil {
		return true
	}

	return false
}

// SetTotalPaymentAmount gets a reference to the given []Payment and assigns it to the TotalPaymentAmount field.
func (o *Transaction) SetTotalPaymentAmount(v []Payment) {
	o.TotalPaymentAmount = &v
}

// GetMessage returns the Message field value if set, zero value otherwise.
func (o *Transaction) GetMessage() string {
	if o == nil || o.Message == nil {
		var ret string
		return ret
	}
	return *o.Message
}

// GetMessageOk returns a tuple with the Message field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetMessageOk() (*string, bool) {
	if o == nil || o.Message == nil {
		return nil, false
	}
	return o.Message, true
}

// HasMessage returns a boolean if a field has been set.
func (o *Transaction) HasMessage() bool {
	if o != nil && o.Message != nil {
		return true
	}

	return false
}

// SetMessage gets a reference to the given string and assigns it to the Message field.
func (o *Transaction) SetMessage(v string) {
	o.Message = &v
}

// GetTransactionId returns the TransactionId field value if set, zero value otherwise.
func (o *Transaction) GetTransactionId() string {
	if o == nil || o.TransactionId == nil {
		var ret string
		return ret
	}
	return *o.TransactionId
}

// GetTransactionIdOk returns a tuple with the TransactionId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetTransactionIdOk() (*string, bool) {
	if o == nil || o.TransactionId == nil {
		return nil, false
	}
	return o.TransactionId, true
}

// HasTransactionId returns a boolean if a field has been set.
func (o *Transaction) HasTransactionId() bool {
	if o != nil && o.TransactionId != nil {
		return true
	}

	return false
}

// SetTransactionId gets a reference to the given string and assigns it to the TransactionId field.
func (o *Transaction) SetTransactionId(v string) {
	o.TransactionId = &v
}

// GetEncoded returns the Encoded field value if set, zero value otherwise.
func (o *Transaction) GetEncoded() []string {
	if o == nil || o.Encoded == nil {
		var ret []string
		return ret
	}
	return *o.Encoded
}

// GetEncodedOk returns a tuple with the Encoded field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetEncodedOk() (*[]string, bool) {
	if o == nil || o.Encoded == nil {
		return nil, false
	}
	return o.Encoded, true
}

// HasEncoded returns a boolean if a field has been set.
func (o *Transaction) HasEncoded() bool {
	if o != nil && o.Encoded != nil {
		return true
	}

	return false
}

// SetEncoded gets a reference to the given []string and assigns it to the Encoded field.
func (o *Transaction) SetEncoded(v []string) {
	o.Encoded = &v
}

// GetExtraFields returns the ExtraFields field value if set, zero value otherwise.
func (o *Transaction) GetExtraFields() map[string]interface{} {
	if o == nil || o.ExtraFields == nil {
		var ret map[string]interface{}
		return ret
	}
	return *o.ExtraFields
}

// GetExtraFieldsOk returns a tuple with the ExtraFields field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetExtraFieldsOk() (*map[string]interface{}, bool) {
	if o == nil || o.ExtraFields == nil {
		return nil, false
	}
	return o.ExtraFields, true
}

// HasExtraFields returns a boolean if a field has been set.
func (o *Transaction) HasExtraFields() bool {
	if o != nil && o.ExtraFields != nil {
		return true
	}

	return false
}

// SetExtraFields gets a reference to the given map[string]interface{} and assigns it to the ExtraFields field.
func (o *Transaction) SetExtraFields(v map[string]interface{}) {
	o.ExtraFields = &v
}

// GetNativeData returns the NativeData field value if set, zero value otherwise.
func (o *Transaction) GetNativeData() map[string]interface{} {
	if o == nil || o.NativeData == nil {
		var ret map[string]interface{}
		return ret
	}
	return *o.NativeData
}

// GetNativeDataOk returns a tuple with the NativeData field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Transaction) GetNativeDataOk() (*map[string]interface{}, bool) {
	if o == nil || o.NativeData == nil {
		return nil, false
	}
	return o.NativeData, true
}

// HasNativeData returns a boolean if a field has been set.
func (o *Transaction) HasNativeData() bool {
	if o != nil && o.NativeData != nil {
		return true
	}

	return false
}

// SetNativeData gets a reference to the given map[string]interface{} and assigns it to the NativeData field.
func (o *Transaction) SetNativeData(v map[string]interface{}) {
	o.NativeData = &v
}

func (o Transaction) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Signature != nil {
		toSerialize["signature"] = o.Signature
	}
	if o.Origin != nil {
		toSerialize["origin"] = o.Origin
	}
	if o.Fee != nil {
		toSerialize["fee"] = o.Fee
	}
	if o.Destination != nil {
		toSerialize["destination"] = o.Destination
	}
	if o.Signed != nil {
		toSerialize["signed"] = o.Signed
	}
	if o.TotalPaymentAmount != nil {
		toSerialize["totalPaymentAmount"] = o.TotalPaymentAmount
	}
	if o.Message != nil {
		toSerialize["message"] = o.Message
	}
	if o.TransactionId != nil {
		toSerialize["transactionId"] = o.TransactionId
	}
	if o.Encoded != nil {
		toSerialize["encoded"] = o.Encoded
	}
	if o.ExtraFields != nil {
		toSerialize["extraFields"] = o.ExtraFields
	}
	if o.NativeData != nil {
		toSerialize["nativeData"] = o.NativeData
	}
	return json.Marshal(toSerialize)
}

type NullableTransaction struct {
	value *Transaction
	isSet bool
}

func (v NullableTransaction) Get() *Transaction {
	return v.value
}

func (v *NullableTransaction) Set(val *Transaction) {
	v.value = val
	v.isSet = true
}

func (v NullableTransaction) IsSet() bool {
	return v.isSet
}

func (v *NullableTransaction) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransaction(val *Transaction) *NullableTransaction {
	return &NullableTransaction{value: val, isSet: true}
}

func (v NullableTransaction) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransaction) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


