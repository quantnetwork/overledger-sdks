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

// PrepareMintTransactionRequestSchemaQrc20 struct for PrepareMintTransactionRequestSchemaQrc20
type PrepareMintTransactionRequestSchemaQrc20 struct {
	Location Location `json:"location"`
	// The type of the transaction
	Type string `json:"type"`
	// This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
	Urgency string `json:"urgency"`
	RequestDetails *MintRequestDetailsSchemaQrc20 `json:"requestDetails,omitempty"`
}

// NewPrepareMintTransactionRequestSchemaQrc20 instantiates a new PrepareMintTransactionRequestSchemaQrc20 object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPrepareMintTransactionRequestSchemaQrc20(location Location, type_ string, urgency string) *PrepareMintTransactionRequestSchemaQrc20 {
	this := PrepareMintTransactionRequestSchemaQrc20{}
	this.Location = location
	this.Type = type_
	this.Urgency = urgency
	return &this
}

// NewPrepareMintTransactionRequestSchemaQrc20WithDefaults instantiates a new PrepareMintTransactionRequestSchemaQrc20 object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPrepareMintTransactionRequestSchemaQrc20WithDefaults() *PrepareMintTransactionRequestSchemaQrc20 {
	this := PrepareMintTransactionRequestSchemaQrc20{}
	return &this
}

// GetLocation returns the Location field value
func (o *PrepareMintTransactionRequestSchemaQrc20) GetLocation() Location {
	if o == nil {
		var ret Location
		return ret
	}

	return o.Location
}

// GetLocationOk returns a tuple with the Location field value
// and a boolean to check if the value has been set.
func (o *PrepareMintTransactionRequestSchemaQrc20) GetLocationOk() (*Location, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Location, true
}

// SetLocation sets field value
func (o *PrepareMintTransactionRequestSchemaQrc20) SetLocation(v Location) {
	o.Location = v
}

// GetType returns the Type field value
func (o *PrepareMintTransactionRequestSchemaQrc20) GetType() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Type
}

// GetTypeOk returns a tuple with the Type field value
// and a boolean to check if the value has been set.
func (o *PrepareMintTransactionRequestSchemaQrc20) GetTypeOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Type, true
}

// SetType sets field value
func (o *PrepareMintTransactionRequestSchemaQrc20) SetType(v string) {
	o.Type = v
}

// GetUrgency returns the Urgency field value
func (o *PrepareMintTransactionRequestSchemaQrc20) GetUrgency() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Urgency
}

// GetUrgencyOk returns a tuple with the Urgency field value
// and a boolean to check if the value has been set.
func (o *PrepareMintTransactionRequestSchemaQrc20) GetUrgencyOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Urgency, true
}

// SetUrgency sets field value
func (o *PrepareMintTransactionRequestSchemaQrc20) SetUrgency(v string) {
	o.Urgency = v
}

// GetRequestDetails returns the RequestDetails field value if set, zero value otherwise.
func (o *PrepareMintTransactionRequestSchemaQrc20) GetRequestDetails() MintRequestDetailsSchemaQrc20 {
	if o == nil || o.RequestDetails == nil {
		var ret MintRequestDetailsSchemaQrc20
		return ret
	}
	return *o.RequestDetails
}

// GetRequestDetailsOk returns a tuple with the RequestDetails field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareMintTransactionRequestSchemaQrc20) GetRequestDetailsOk() (*MintRequestDetailsSchemaQrc20, bool) {
	if o == nil || o.RequestDetails == nil {
		return nil, false
	}
	return o.RequestDetails, true
}

// HasRequestDetails returns a boolean if a field has been set.
func (o *PrepareMintTransactionRequestSchemaQrc20) HasRequestDetails() bool {
	if o != nil && o.RequestDetails != nil {
		return true
	}

	return false
}

// SetRequestDetails gets a reference to the given MintRequestDetailsSchemaQrc20 and assigns it to the RequestDetails field.
func (o *PrepareMintTransactionRequestSchemaQrc20) SetRequestDetails(v MintRequestDetailsSchemaQrc20) {
	o.RequestDetails = &v
}

func (o PrepareMintTransactionRequestSchemaQrc20) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["location"] = o.Location
	}
	if true {
		toSerialize["type"] = o.Type
	}
	if true {
		toSerialize["urgency"] = o.Urgency
	}
	if o.RequestDetails != nil {
		toSerialize["requestDetails"] = o.RequestDetails
	}
	return json.Marshal(toSerialize)
}

type NullablePrepareMintTransactionRequestSchemaQrc20 struct {
	value *PrepareMintTransactionRequestSchemaQrc20
	isSet bool
}

func (v NullablePrepareMintTransactionRequestSchemaQrc20) Get() *PrepareMintTransactionRequestSchemaQrc20 {
	return v.value
}

func (v *NullablePrepareMintTransactionRequestSchemaQrc20) Set(val *PrepareMintTransactionRequestSchemaQrc20) {
	v.value = val
	v.isSet = true
}

func (v NullablePrepareMintTransactionRequestSchemaQrc20) IsSet() bool {
	return v.isSet
}

func (v *NullablePrepareMintTransactionRequestSchemaQrc20) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePrepareMintTransactionRequestSchemaQrc20(val *PrepareMintTransactionRequestSchemaQrc20) *NullablePrepareMintTransactionRequestSchemaQrc20 {
	return &NullablePrepareMintTransactionRequestSchemaQrc20{value: val, isSet: true}
}

func (v NullablePrepareMintTransactionRequestSchemaQrc20) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePrepareMintTransactionRequestSchemaQrc20) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


