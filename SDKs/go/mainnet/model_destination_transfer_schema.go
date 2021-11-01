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

// DestinationTransferSchema struct for DestinationTransferSchema
type DestinationTransferSchema struct {
	Transfer *TransferSchema `json:"transfer,omitempty"`
	DestinationId *string `json:"destinationId,omitempty"`
}

// NewDestinationTransferSchema instantiates a new DestinationTransferSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewDestinationTransferSchema() *DestinationTransferSchema {
	this := DestinationTransferSchema{}
	return &this
}

// NewDestinationTransferSchemaWithDefaults instantiates a new DestinationTransferSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewDestinationTransferSchemaWithDefaults() *DestinationTransferSchema {
	this := DestinationTransferSchema{}
	return &this
}

// GetTransfer returns the Transfer field value if set, zero value otherwise.
func (o *DestinationTransferSchema) GetTransfer() TransferSchema {
	if o == nil || o.Transfer == nil {
		var ret TransferSchema
		return ret
	}
	return *o.Transfer
}

// GetTransferOk returns a tuple with the Transfer field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *DestinationTransferSchema) GetTransferOk() (*TransferSchema, bool) {
	if o == nil || o.Transfer == nil {
		return nil, false
	}
	return o.Transfer, true
}

// HasTransfer returns a boolean if a field has been set.
func (o *DestinationTransferSchema) HasTransfer() bool {
	if o != nil && o.Transfer != nil {
		return true
	}

	return false
}

// SetTransfer gets a reference to the given TransferSchema and assigns it to the Transfer field.
func (o *DestinationTransferSchema) SetTransfer(v TransferSchema) {
	o.Transfer = &v
}

// GetDestinationId returns the DestinationId field value if set, zero value otherwise.
func (o *DestinationTransferSchema) GetDestinationId() string {
	if o == nil || o.DestinationId == nil {
		var ret string
		return ret
	}
	return *o.DestinationId
}

// GetDestinationIdOk returns a tuple with the DestinationId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *DestinationTransferSchema) GetDestinationIdOk() (*string, bool) {
	if o == nil || o.DestinationId == nil {
		return nil, false
	}
	return o.DestinationId, true
}

// HasDestinationId returns a boolean if a field has been set.
func (o *DestinationTransferSchema) HasDestinationId() bool {
	if o != nil && o.DestinationId != nil {
		return true
	}

	return false
}

// SetDestinationId gets a reference to the given string and assigns it to the DestinationId field.
func (o *DestinationTransferSchema) SetDestinationId(v string) {
	o.DestinationId = &v
}

func (o DestinationTransferSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Transfer != nil {
		toSerialize["transfer"] = o.Transfer
	}
	if o.DestinationId != nil {
		toSerialize["destinationId"] = o.DestinationId
	}
	return json.Marshal(toSerialize)
}

type NullableDestinationTransferSchema struct {
	value *DestinationTransferSchema
	isSet bool
}

func (v NullableDestinationTransferSchema) Get() *DestinationTransferSchema {
	return v.value
}

func (v *NullableDestinationTransferSchema) Set(val *DestinationTransferSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableDestinationTransferSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableDestinationTransferSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableDestinationTransferSchema(val *DestinationTransferSchema) *NullableDestinationTransferSchema {
	return &NullableDestinationTransferSchema{value: val, isSet: true}
}

func (v NullableDestinationTransferSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableDestinationTransferSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

