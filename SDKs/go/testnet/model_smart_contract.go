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

// SmartContract Computer program storage in a DLT system where the outcome is recorded on the distributed ledger
type SmartContract struct {
	Detail *string `json:"detail,omitempty"`
	// Information on the object type
	Type *string `json:"type,omitempty"`
	SmartContractId *string `json:"smartContractId,omitempty"`
	Function *Function `json:"function,omitempty"`
	ExtraFields *map[string]interface{} `json:"extraFields,omitempty"`
}

// NewSmartContract instantiates a new SmartContract object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSmartContract() *SmartContract {
	this := SmartContract{}
	return &this
}

// NewSmartContractWithDefaults instantiates a new SmartContract object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSmartContractWithDefaults() *SmartContract {
	this := SmartContract{}
	return &this
}

// GetDetail returns the Detail field value if set, zero value otherwise.
func (o *SmartContract) GetDetail() string {
	if o == nil || o.Detail == nil {
		var ret string
		return ret
	}
	return *o.Detail
}

// GetDetailOk returns a tuple with the Detail field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContract) GetDetailOk() (*string, bool) {
	if o == nil || o.Detail == nil {
		return nil, false
	}
	return o.Detail, true
}

// HasDetail returns a boolean if a field has been set.
func (o *SmartContract) HasDetail() bool {
	if o != nil && o.Detail != nil {
		return true
	}

	return false
}

// SetDetail gets a reference to the given string and assigns it to the Detail field.
func (o *SmartContract) SetDetail(v string) {
	o.Detail = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *SmartContract) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContract) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *SmartContract) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *SmartContract) SetType(v string) {
	o.Type = &v
}

// GetSmartContractId returns the SmartContractId field value if set, zero value otherwise.
func (o *SmartContract) GetSmartContractId() string {
	if o == nil || o.SmartContractId == nil {
		var ret string
		return ret
	}
	return *o.SmartContractId
}

// GetSmartContractIdOk returns a tuple with the SmartContractId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContract) GetSmartContractIdOk() (*string, bool) {
	if o == nil || o.SmartContractId == nil {
		return nil, false
	}
	return o.SmartContractId, true
}

// HasSmartContractId returns a boolean if a field has been set.
func (o *SmartContract) HasSmartContractId() bool {
	if o != nil && o.SmartContractId != nil {
		return true
	}

	return false
}

// SetSmartContractId gets a reference to the given string and assigns it to the SmartContractId field.
func (o *SmartContract) SetSmartContractId(v string) {
	o.SmartContractId = &v
}

// GetFunction returns the Function field value if set, zero value otherwise.
func (o *SmartContract) GetFunction() Function {
	if o == nil || o.Function == nil {
		var ret Function
		return ret
	}
	return *o.Function
}

// GetFunctionOk returns a tuple with the Function field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContract) GetFunctionOk() (*Function, bool) {
	if o == nil || o.Function == nil {
		return nil, false
	}
	return o.Function, true
}

// HasFunction returns a boolean if a field has been set.
func (o *SmartContract) HasFunction() bool {
	if o != nil && o.Function != nil {
		return true
	}

	return false
}

// SetFunction gets a reference to the given Function and assigns it to the Function field.
func (o *SmartContract) SetFunction(v Function) {
	o.Function = &v
}

// GetExtraFields returns the ExtraFields field value if set, zero value otherwise.
func (o *SmartContract) GetExtraFields() map[string]interface{} {
	if o == nil || o.ExtraFields == nil {
		var ret map[string]interface{}
		return ret
	}
	return *o.ExtraFields
}

// GetExtraFieldsOk returns a tuple with the ExtraFields field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SmartContract) GetExtraFieldsOk() (*map[string]interface{}, bool) {
	if o == nil || o.ExtraFields == nil {
		return nil, false
	}
	return o.ExtraFields, true
}

// HasExtraFields returns a boolean if a field has been set.
func (o *SmartContract) HasExtraFields() bool {
	if o != nil && o.ExtraFields != nil {
		return true
	}

	return false
}

// SetExtraFields gets a reference to the given map[string]interface{} and assigns it to the ExtraFields field.
func (o *SmartContract) SetExtraFields(v map[string]interface{}) {
	o.ExtraFields = &v
}

func (o SmartContract) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Detail != nil {
		toSerialize["detail"] = o.Detail
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.SmartContractId != nil {
		toSerialize["smartContractId"] = o.SmartContractId
	}
	if o.Function != nil {
		toSerialize["function"] = o.Function
	}
	if o.ExtraFields != nil {
		toSerialize["extraFields"] = o.ExtraFields
	}
	return json.Marshal(toSerialize)
}

type NullableSmartContract struct {
	value *SmartContract
	isSet bool
}

func (v NullableSmartContract) Get() *SmartContract {
	return v.value
}

func (v *NullableSmartContract) Set(val *SmartContract) {
	v.value = val
	v.isSet = true
}

func (v NullableSmartContract) IsSet() bool {
	return v.isSet
}

func (v *NullableSmartContract) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSmartContract(val *SmartContract) *NullableSmartContract {
	return &NullableSmartContract{value: val, isSet: true}
}

func (v NullableSmartContract) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSmartContract) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


