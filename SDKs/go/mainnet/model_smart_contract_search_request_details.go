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

// SmartContractSearchRequestDetails struct for SmartContractSearchRequestDetails
type SmartContractSearchRequestDetails struct {
	Destination *[]SmartContractSearchDestinationSchema `json:"destination,omitempty"`
}

// NewSmartContractSearchRequestDetails instantiates a new SmartContractSearchRequestDetails object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSmartContractSearchRequestDetails() *SmartContractSearchRequestDetails {
	this := SmartContractSearchRequestDetails{}
	return &this
}

// NewSmartContractSearchRequestDetailsWithDefaults instantiates a new SmartContractSearchRequestDetails object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSmartContractSearchRequestDetailsWithDefaults() *SmartContractSearchRequestDetails {
	this := SmartContractSearchRequestDetails{}
	return &this
}

// GetDestination returns the Destination field value if set, zero value otherwise.
func (o *SmartContractSearchRequestDetails) GetDestination() []SmartContractSearchDestinationSchema {
	if o == nil || o.Destination == nil {
		var ret []SmartContractSearchDestinationSchema
		return ret
	}
	return *o.Destination
}

// GetDestinationOk returns a tuple with the Destination field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContractSearchRequestDetails) GetDestinationOk() (*[]SmartContractSearchDestinationSchema, bool) {
	if o == nil || o.Destination == nil {
		return nil, false
	}
	return o.Destination, true
}

// HasDestination returns a boolean if a field has been set.
func (o *SmartContractSearchRequestDetails) HasDestination() bool {
	if o != nil && o.Destination != nil {
		return true
	}

	return false
}

// SetDestination gets a reference to the given []SmartContractSearchDestinationSchema and assigns it to the Destination field.
func (o *SmartContractSearchRequestDetails) SetDestination(v []SmartContractSearchDestinationSchema) {
	o.Destination = &v
}

func (o SmartContractSearchRequestDetails) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Destination != nil {
		toSerialize["destination"] = o.Destination
	}
	return json.Marshal(toSerialize)
}

type NullableSmartContractSearchRequestDetails struct {
	value *SmartContractSearchRequestDetails
	isSet bool
}

func (v NullableSmartContractSearchRequestDetails) Get() *SmartContractSearchRequestDetails {
	return v.value
}

func (v *NullableSmartContractSearchRequestDetails) Set(val *SmartContractSearchRequestDetails) {
	v.value = val
	v.isSet = true
}

func (v NullableSmartContractSearchRequestDetails) IsSet() bool {
	return v.isSet
}

func (v *NullableSmartContractSearchRequestDetails) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSmartContractSearchRequestDetails(val *SmartContractSearchRequestDetails) *NullableSmartContractSearchRequestDetails {
	return &NullableSmartContractSearchRequestDetails{value: val, isSet: true}
}

func (v NullableSmartContractSearchRequestDetails) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSmartContractSearchRequestDetails) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

