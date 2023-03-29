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

// RemoveSecondaryAccountDetailsSchema struct for RemoveSecondaryAccountDetailsSchema
type RemoveSecondaryAccountDetailsSchema struct {
	Owner *OwnerRemoveSecondarySchema `json:"owner,omitempty"`
	AdditionalOwner *AdditionalOwnerRemoveSecondarySchema `json:"additionalOwner,omitempty"`
	// Any text-based element of the data payload
	Message *string `json:"message,omitempty"`
	OverledgerSigningType *string `json:"overledgerSigningType,omitempty"`
}

// NewRemoveSecondaryAccountDetailsSchema instantiates a new RemoveSecondaryAccountDetailsSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRemoveSecondaryAccountDetailsSchema() *RemoveSecondaryAccountDetailsSchema {
	this := RemoveSecondaryAccountDetailsSchema{}
	return &this
}

// NewRemoveSecondaryAccountDetailsSchemaWithDefaults instantiates a new RemoveSecondaryAccountDetailsSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRemoveSecondaryAccountDetailsSchemaWithDefaults() *RemoveSecondaryAccountDetailsSchema {
	this := RemoveSecondaryAccountDetailsSchema{}
	return &this
}

// GetOwner returns the Owner field value if set, zero value otherwise.
func (o *RemoveSecondaryAccountDetailsSchema) GetOwner() OwnerRemoveSecondarySchema {
	if o == nil || o.Owner == nil {
		var ret OwnerRemoveSecondarySchema
		return ret
	}
	return *o.Owner
}

// GetOwnerOk returns a tuple with the Owner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RemoveSecondaryAccountDetailsSchema) GetOwnerOk() (*OwnerRemoveSecondarySchema, bool) {
	if o == nil || o.Owner == nil {
		return nil, false
	}
	return o.Owner, true
}

// HasOwner returns a boolean if a field has been set.
func (o *RemoveSecondaryAccountDetailsSchema) HasOwner() bool {
	if o != nil && o.Owner != nil {
		return true
	}

	return false
}

// SetOwner gets a reference to the given OwnerRemoveSecondarySchema and assigns it to the Owner field.
func (o *RemoveSecondaryAccountDetailsSchema) SetOwner(v OwnerRemoveSecondarySchema) {
	o.Owner = &v
}

// GetAdditionalOwner returns the AdditionalOwner field value if set, zero value otherwise.
func (o *RemoveSecondaryAccountDetailsSchema) GetAdditionalOwner() AdditionalOwnerRemoveSecondarySchema {
	if o == nil || o.AdditionalOwner == nil {
		var ret AdditionalOwnerRemoveSecondarySchema
		return ret
	}
	return *o.AdditionalOwner
}

// GetAdditionalOwnerOk returns a tuple with the AdditionalOwner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RemoveSecondaryAccountDetailsSchema) GetAdditionalOwnerOk() (*AdditionalOwnerRemoveSecondarySchema, bool) {
	if o == nil || o.AdditionalOwner == nil {
		return nil, false
	}
	return o.AdditionalOwner, true
}

// HasAdditionalOwner returns a boolean if a field has been set.
func (o *RemoveSecondaryAccountDetailsSchema) HasAdditionalOwner() bool {
	if o != nil && o.AdditionalOwner != nil {
		return true
	}

	return false
}

// SetAdditionalOwner gets a reference to the given AdditionalOwnerRemoveSecondarySchema and assigns it to the AdditionalOwner field.
func (o *RemoveSecondaryAccountDetailsSchema) SetAdditionalOwner(v AdditionalOwnerRemoveSecondarySchema) {
	o.AdditionalOwner = &v
}

// GetMessage returns the Message field value if set, zero value otherwise.
func (o *RemoveSecondaryAccountDetailsSchema) GetMessage() string {
	if o == nil || o.Message == nil {
		var ret string
		return ret
	}
	return *o.Message
}

// GetMessageOk returns a tuple with the Message field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RemoveSecondaryAccountDetailsSchema) GetMessageOk() (*string, bool) {
	if o == nil || o.Message == nil {
		return nil, false
	}
	return o.Message, true
}

// HasMessage returns a boolean if a field has been set.
func (o *RemoveSecondaryAccountDetailsSchema) HasMessage() bool {
	if o != nil && o.Message != nil {
		return true
	}

	return false
}

// SetMessage gets a reference to the given string and assigns it to the Message field.
func (o *RemoveSecondaryAccountDetailsSchema) SetMessage(v string) {
	o.Message = &v
}

// GetOverledgerSigningType returns the OverledgerSigningType field value if set, zero value otherwise.
func (o *RemoveSecondaryAccountDetailsSchema) GetOverledgerSigningType() string {
	if o == nil || o.OverledgerSigningType == nil {
		var ret string
		return ret
	}
	return *o.OverledgerSigningType
}

// GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RemoveSecondaryAccountDetailsSchema) GetOverledgerSigningTypeOk() (*string, bool) {
	if o == nil || o.OverledgerSigningType == nil {
		return nil, false
	}
	return o.OverledgerSigningType, true
}

// HasOverledgerSigningType returns a boolean if a field has been set.
func (o *RemoveSecondaryAccountDetailsSchema) HasOverledgerSigningType() bool {
	if o != nil && o.OverledgerSigningType != nil {
		return true
	}

	return false
}

// SetOverledgerSigningType gets a reference to the given string and assigns it to the OverledgerSigningType field.
func (o *RemoveSecondaryAccountDetailsSchema) SetOverledgerSigningType(v string) {
	o.OverledgerSigningType = &v
}

func (o RemoveSecondaryAccountDetailsSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Owner != nil {
		toSerialize["owner"] = o.Owner
	}
	if o.AdditionalOwner != nil {
		toSerialize["additionalOwner"] = o.AdditionalOwner
	}
	if o.Message != nil {
		toSerialize["message"] = o.Message
	}
	if o.OverledgerSigningType != nil {
		toSerialize["overledgerSigningType"] = o.OverledgerSigningType
	}
	return json.Marshal(toSerialize)
}

type NullableRemoveSecondaryAccountDetailsSchema struct {
	value *RemoveSecondaryAccountDetailsSchema
	isSet bool
}

func (v NullableRemoveSecondaryAccountDetailsSchema) Get() *RemoveSecondaryAccountDetailsSchema {
	return v.value
}

func (v *NullableRemoveSecondaryAccountDetailsSchema) Set(val *RemoveSecondaryAccountDetailsSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableRemoveSecondaryAccountDetailsSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableRemoveSecondaryAccountDetailsSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRemoveSecondaryAccountDetailsSchema(val *RemoveSecondaryAccountDetailsSchema) *NullableRemoveSecondaryAccountDetailsSchema {
	return &NullableRemoveSecondaryAccountDetailsSchema{value: val, isSet: true}
}

func (v NullableRemoveSecondaryAccountDetailsSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRemoveSecondaryAccountDetailsSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


