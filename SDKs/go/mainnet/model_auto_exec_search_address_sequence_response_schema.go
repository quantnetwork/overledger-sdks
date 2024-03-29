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

// AutoExecSearchAddressSequenceResponseSchema struct for AutoExecSearchAddressSequenceResponseSchema
type AutoExecSearchAddressSequenceResponseSchema struct {
	PrepareAndExecuteOverledgerErrorResponse *PrepareAndExecuteOverledgerErrorResponse `json:"prepareAndExecuteOverledgerErrorResponse,omitempty"`
	ExecutionAddressSequenceSearchResponse *ExecuteSearchSequenceResponse `json:"executionAddressSequenceSearchResponse,omitempty"`
	PreparationAddressSequenceSearchResponse *PrepareSearchResponseSchema `json:"preparationAddressSequenceSearchResponse,omitempty"`
}

// NewAutoExecSearchAddressSequenceResponseSchema instantiates a new AutoExecSearchAddressSequenceResponseSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAutoExecSearchAddressSequenceResponseSchema() *AutoExecSearchAddressSequenceResponseSchema {
	this := AutoExecSearchAddressSequenceResponseSchema{}
	return &this
}

// NewAutoExecSearchAddressSequenceResponseSchemaWithDefaults instantiates a new AutoExecSearchAddressSequenceResponseSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAutoExecSearchAddressSequenceResponseSchemaWithDefaults() *AutoExecSearchAddressSequenceResponseSchema {
	this := AutoExecSearchAddressSequenceResponseSchema{}
	return &this
}

// GetPrepareAndExecuteOverledgerErrorResponse returns the PrepareAndExecuteOverledgerErrorResponse field value if set, zero value otherwise.
func (o *AutoExecSearchAddressSequenceResponseSchema) GetPrepareAndExecuteOverledgerErrorResponse() PrepareAndExecuteOverledgerErrorResponse {
	if o == nil || o.PrepareAndExecuteOverledgerErrorResponse == nil {
		var ret PrepareAndExecuteOverledgerErrorResponse
		return ret
	}
	return *o.PrepareAndExecuteOverledgerErrorResponse
}

// GetPrepareAndExecuteOverledgerErrorResponseOk returns a tuple with the PrepareAndExecuteOverledgerErrorResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecSearchAddressSequenceResponseSchema) GetPrepareAndExecuteOverledgerErrorResponseOk() (*PrepareAndExecuteOverledgerErrorResponse, bool) {
	if o == nil || o.PrepareAndExecuteOverledgerErrorResponse == nil {
		return nil, false
	}
	return o.PrepareAndExecuteOverledgerErrorResponse, true
}

// HasPrepareAndExecuteOverledgerErrorResponse returns a boolean if a field has been set.
func (o *AutoExecSearchAddressSequenceResponseSchema) HasPrepareAndExecuteOverledgerErrorResponse() bool {
	if o != nil && o.PrepareAndExecuteOverledgerErrorResponse != nil {
		return true
	}

	return false
}

// SetPrepareAndExecuteOverledgerErrorResponse gets a reference to the given PrepareAndExecuteOverledgerErrorResponse and assigns it to the PrepareAndExecuteOverledgerErrorResponse field.
func (o *AutoExecSearchAddressSequenceResponseSchema) SetPrepareAndExecuteOverledgerErrorResponse(v PrepareAndExecuteOverledgerErrorResponse) {
	o.PrepareAndExecuteOverledgerErrorResponse = &v
}

// GetExecutionAddressSequenceSearchResponse returns the ExecutionAddressSequenceSearchResponse field value if set, zero value otherwise.
func (o *AutoExecSearchAddressSequenceResponseSchema) GetExecutionAddressSequenceSearchResponse() ExecuteSearchSequenceResponse {
	if o == nil || o.ExecutionAddressSequenceSearchResponse == nil {
		var ret ExecuteSearchSequenceResponse
		return ret
	}
	return *o.ExecutionAddressSequenceSearchResponse
}

// GetExecutionAddressSequenceSearchResponseOk returns a tuple with the ExecutionAddressSequenceSearchResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecSearchAddressSequenceResponseSchema) GetExecutionAddressSequenceSearchResponseOk() (*ExecuteSearchSequenceResponse, bool) {
	if o == nil || o.ExecutionAddressSequenceSearchResponse == nil {
		return nil, false
	}
	return o.ExecutionAddressSequenceSearchResponse, true
}

// HasExecutionAddressSequenceSearchResponse returns a boolean if a field has been set.
func (o *AutoExecSearchAddressSequenceResponseSchema) HasExecutionAddressSequenceSearchResponse() bool {
	if o != nil && o.ExecutionAddressSequenceSearchResponse != nil {
		return true
	}

	return false
}

// SetExecutionAddressSequenceSearchResponse gets a reference to the given ExecuteSearchSequenceResponse and assigns it to the ExecutionAddressSequenceSearchResponse field.
func (o *AutoExecSearchAddressSequenceResponseSchema) SetExecutionAddressSequenceSearchResponse(v ExecuteSearchSequenceResponse) {
	o.ExecutionAddressSequenceSearchResponse = &v
}

// GetPreparationAddressSequenceSearchResponse returns the PreparationAddressSequenceSearchResponse field value if set, zero value otherwise.
func (o *AutoExecSearchAddressSequenceResponseSchema) GetPreparationAddressSequenceSearchResponse() PrepareSearchResponseSchema {
	if o == nil || o.PreparationAddressSequenceSearchResponse == nil {
		var ret PrepareSearchResponseSchema
		return ret
	}
	return *o.PreparationAddressSequenceSearchResponse
}

// GetPreparationAddressSequenceSearchResponseOk returns a tuple with the PreparationAddressSequenceSearchResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecSearchAddressSequenceResponseSchema) GetPreparationAddressSequenceSearchResponseOk() (*PrepareSearchResponseSchema, bool) {
	if o == nil || o.PreparationAddressSequenceSearchResponse == nil {
		return nil, false
	}
	return o.PreparationAddressSequenceSearchResponse, true
}

// HasPreparationAddressSequenceSearchResponse returns a boolean if a field has been set.
func (o *AutoExecSearchAddressSequenceResponseSchema) HasPreparationAddressSequenceSearchResponse() bool {
	if o != nil && o.PreparationAddressSequenceSearchResponse != nil {
		return true
	}

	return false
}

// SetPreparationAddressSequenceSearchResponse gets a reference to the given PrepareSearchResponseSchema and assigns it to the PreparationAddressSequenceSearchResponse field.
func (o *AutoExecSearchAddressSequenceResponseSchema) SetPreparationAddressSequenceSearchResponse(v PrepareSearchResponseSchema) {
	o.PreparationAddressSequenceSearchResponse = &v
}

func (o AutoExecSearchAddressSequenceResponseSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.PrepareAndExecuteOverledgerErrorResponse != nil {
		toSerialize["prepareAndExecuteOverledgerErrorResponse"] = o.PrepareAndExecuteOverledgerErrorResponse
	}
	if o.ExecutionAddressSequenceSearchResponse != nil {
		toSerialize["executionAddressSequenceSearchResponse"] = o.ExecutionAddressSequenceSearchResponse
	}
	if o.PreparationAddressSequenceSearchResponse != nil {
		toSerialize["preparationAddressSequenceSearchResponse"] = o.PreparationAddressSequenceSearchResponse
	}
	return json.Marshal(toSerialize)
}

type NullableAutoExecSearchAddressSequenceResponseSchema struct {
	value *AutoExecSearchAddressSequenceResponseSchema
	isSet bool
}

func (v NullableAutoExecSearchAddressSequenceResponseSchema) Get() *AutoExecSearchAddressSequenceResponseSchema {
	return v.value
}

func (v *NullableAutoExecSearchAddressSequenceResponseSchema) Set(val *AutoExecSearchAddressSequenceResponseSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableAutoExecSearchAddressSequenceResponseSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableAutoExecSearchAddressSequenceResponseSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAutoExecSearchAddressSequenceResponseSchema(val *AutoExecSearchAddressSequenceResponseSchema) *NullableAutoExecSearchAddressSequenceResponseSchema {
	return &NullableAutoExecSearchAddressSequenceResponseSchema{value: val, isSet: true}
}

func (v NullableAutoExecSearchAddressSequenceResponseSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAutoExecSearchAddressSequenceResponseSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


