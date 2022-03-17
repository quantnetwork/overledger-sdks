/*
Quant Overledger API

Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// AutoExecuteSearchUTXOResponseSchema struct for AutoExecuteSearchUTXOResponseSchema
type AutoExecuteSearchUTXOResponseSchema struct {
	ExecutionUtxoSearchResponse *ExecuteSearchUTXOResponse `json:"executionUtxoSearchResponse,omitempty"`
	PrepareAndExecuteOverledgerErrorResponse *PrepareAndExecuteOverledgerErrorResponse `json:"prepareAndExecuteOverledgerErrorResponse,omitempty"`
	PreparationUtxoSearchResponse *PrepareTransactionResponse `json:"preparationUtxoSearchResponse,omitempty"`
}

// NewAutoExecuteSearchUTXOResponseSchema instantiates a new AutoExecuteSearchUTXOResponseSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAutoExecuteSearchUTXOResponseSchema() *AutoExecuteSearchUTXOResponseSchema {
	this := AutoExecuteSearchUTXOResponseSchema{}
	return &this
}

// NewAutoExecuteSearchUTXOResponseSchemaWithDefaults instantiates a new AutoExecuteSearchUTXOResponseSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAutoExecuteSearchUTXOResponseSchemaWithDefaults() *AutoExecuteSearchUTXOResponseSchema {
	this := AutoExecuteSearchUTXOResponseSchema{}
	return &this
}

// GetExecutionUtxoSearchResponse returns the ExecutionUtxoSearchResponse field value if set, zero value otherwise.
func (o *AutoExecuteSearchUTXOResponseSchema) GetExecutionUtxoSearchResponse() ExecuteSearchUTXOResponse {
	if o == nil || o.ExecutionUtxoSearchResponse == nil {
		var ret ExecuteSearchUTXOResponse
		return ret
	}
	return *o.ExecutionUtxoSearchResponse
}

// GetExecutionUtxoSearchResponseOk returns a tuple with the ExecutionUtxoSearchResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecuteSearchUTXOResponseSchema) GetExecutionUtxoSearchResponseOk() (*ExecuteSearchUTXOResponse, bool) {
	if o == nil || o.ExecutionUtxoSearchResponse == nil {
		return nil, false
	}
	return o.ExecutionUtxoSearchResponse, true
}

// HasExecutionUtxoSearchResponse returns a boolean if a field has been set.
func (o *AutoExecuteSearchUTXOResponseSchema) HasExecutionUtxoSearchResponse() bool {
	if o != nil && o.ExecutionUtxoSearchResponse != nil {
		return true
	}

	return false
}

// SetExecutionUtxoSearchResponse gets a reference to the given ExecuteSearchUTXOResponse and assigns it to the ExecutionUtxoSearchResponse field.
func (o *AutoExecuteSearchUTXOResponseSchema) SetExecutionUtxoSearchResponse(v ExecuteSearchUTXOResponse) {
	o.ExecutionUtxoSearchResponse = &v
}

// GetPrepareAndExecuteOverledgerErrorResponse returns the PrepareAndExecuteOverledgerErrorResponse field value if set, zero value otherwise.
func (o *AutoExecuteSearchUTXOResponseSchema) GetPrepareAndExecuteOverledgerErrorResponse() PrepareAndExecuteOverledgerErrorResponse {
	if o == nil || o.PrepareAndExecuteOverledgerErrorResponse == nil {
		var ret PrepareAndExecuteOverledgerErrorResponse
		return ret
	}
	return *o.PrepareAndExecuteOverledgerErrorResponse
}

// GetPrepareAndExecuteOverledgerErrorResponseOk returns a tuple with the PrepareAndExecuteOverledgerErrorResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecuteSearchUTXOResponseSchema) GetPrepareAndExecuteOverledgerErrorResponseOk() (*PrepareAndExecuteOverledgerErrorResponse, bool) {
	if o == nil || o.PrepareAndExecuteOverledgerErrorResponse == nil {
		return nil, false
	}
	return o.PrepareAndExecuteOverledgerErrorResponse, true
}

// HasPrepareAndExecuteOverledgerErrorResponse returns a boolean if a field has been set.
func (o *AutoExecuteSearchUTXOResponseSchema) HasPrepareAndExecuteOverledgerErrorResponse() bool {
	if o != nil && o.PrepareAndExecuteOverledgerErrorResponse != nil {
		return true
	}

	return false
}

// SetPrepareAndExecuteOverledgerErrorResponse gets a reference to the given PrepareAndExecuteOverledgerErrorResponse and assigns it to the PrepareAndExecuteOverledgerErrorResponse field.
func (o *AutoExecuteSearchUTXOResponseSchema) SetPrepareAndExecuteOverledgerErrorResponse(v PrepareAndExecuteOverledgerErrorResponse) {
	o.PrepareAndExecuteOverledgerErrorResponse = &v
}

// GetPreparationUtxoSearchResponse returns the PreparationUtxoSearchResponse field value if set, zero value otherwise.
func (o *AutoExecuteSearchUTXOResponseSchema) GetPreparationUtxoSearchResponse() PrepareTransactionResponse {
	if o == nil || o.PreparationUtxoSearchResponse == nil {
		var ret PrepareTransactionResponse
		return ret
	}
	return *o.PreparationUtxoSearchResponse
}

// GetPreparationUtxoSearchResponseOk returns a tuple with the PreparationUtxoSearchResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecuteSearchUTXOResponseSchema) GetPreparationUtxoSearchResponseOk() (*PrepareTransactionResponse, bool) {
	if o == nil || o.PreparationUtxoSearchResponse == nil {
		return nil, false
	}
	return o.PreparationUtxoSearchResponse, true
}

// HasPreparationUtxoSearchResponse returns a boolean if a field has been set.
func (o *AutoExecuteSearchUTXOResponseSchema) HasPreparationUtxoSearchResponse() bool {
	if o != nil && o.PreparationUtxoSearchResponse != nil {
		return true
	}

	return false
}

// SetPreparationUtxoSearchResponse gets a reference to the given PrepareTransactionResponse and assigns it to the PreparationUtxoSearchResponse field.
func (o *AutoExecuteSearchUTXOResponseSchema) SetPreparationUtxoSearchResponse(v PrepareTransactionResponse) {
	o.PreparationUtxoSearchResponse = &v
}

func (o AutoExecuteSearchUTXOResponseSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ExecutionUtxoSearchResponse != nil {
		toSerialize["executionUtxoSearchResponse"] = o.ExecutionUtxoSearchResponse
	}
	if o.PrepareAndExecuteOverledgerErrorResponse != nil {
		toSerialize["prepareAndExecuteOverledgerErrorResponse"] = o.PrepareAndExecuteOverledgerErrorResponse
	}
	if o.PreparationUtxoSearchResponse != nil {
		toSerialize["preparationUtxoSearchResponse"] = o.PreparationUtxoSearchResponse
	}
	return json.Marshal(toSerialize)
}

type NullableAutoExecuteSearchUTXOResponseSchema struct {
	value *AutoExecuteSearchUTXOResponseSchema
	isSet bool
}

func (v NullableAutoExecuteSearchUTXOResponseSchema) Get() *AutoExecuteSearchUTXOResponseSchema {
	return v.value
}

func (v *NullableAutoExecuteSearchUTXOResponseSchema) Set(val *AutoExecuteSearchUTXOResponseSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableAutoExecuteSearchUTXOResponseSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableAutoExecuteSearchUTXOResponseSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAutoExecuteSearchUTXOResponseSchema(val *AutoExecuteSearchUTXOResponseSchema) *NullableAutoExecuteSearchUTXOResponseSchema {
	return &NullableAutoExecuteSearchUTXOResponseSchema{value: val, isSet: true}
}

func (v NullableAutoExecuteSearchUTXOResponseSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAutoExecuteSearchUTXOResponseSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


