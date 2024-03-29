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

// PrepareAndExecuteTransactionResponse struct for PrepareAndExecuteTransactionResponse
type PrepareAndExecuteTransactionResponse struct {
	PreparationTransactionSearchResponse *PrepareTransactionResponse `json:"preparationTransactionSearchResponse,omitempty"`
	ExecutionTransactionSearchResponse *ExecuteSearchTransactionResponse `json:"executionTransactionSearchResponse,omitempty"`
	ExecutionTransactionSearchOverledgerErrorResponse *PrepareAndExecuteOverledgerErrorResponse `json:"executionTransactionSearchOverledgerErrorResponse,omitempty"`
}

// NewPrepareAndExecuteTransactionResponse instantiates a new PrepareAndExecuteTransactionResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPrepareAndExecuteTransactionResponse() *PrepareAndExecuteTransactionResponse {
	this := PrepareAndExecuteTransactionResponse{}
	return &this
}

// NewPrepareAndExecuteTransactionResponseWithDefaults instantiates a new PrepareAndExecuteTransactionResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPrepareAndExecuteTransactionResponseWithDefaults() *PrepareAndExecuteTransactionResponse {
	this := PrepareAndExecuteTransactionResponse{}
	return &this
}

// GetPreparationTransactionSearchResponse returns the PreparationTransactionSearchResponse field value if set, zero value otherwise.
func (o *PrepareAndExecuteTransactionResponse) GetPreparationTransactionSearchResponse() PrepareTransactionResponse {
	if o == nil || o.PreparationTransactionSearchResponse == nil {
		var ret PrepareTransactionResponse
		return ret
	}
	return *o.PreparationTransactionSearchResponse
}

// GetPreparationTransactionSearchResponseOk returns a tuple with the PreparationTransactionSearchResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareAndExecuteTransactionResponse) GetPreparationTransactionSearchResponseOk() (*PrepareTransactionResponse, bool) {
	if o == nil || o.PreparationTransactionSearchResponse == nil {
		return nil, false
	}
	return o.PreparationTransactionSearchResponse, true
}

// HasPreparationTransactionSearchResponse returns a boolean if a field has been set.
func (o *PrepareAndExecuteTransactionResponse) HasPreparationTransactionSearchResponse() bool {
	if o != nil && o.PreparationTransactionSearchResponse != nil {
		return true
	}

	return false
}

// SetPreparationTransactionSearchResponse gets a reference to the given PrepareTransactionResponse and assigns it to the PreparationTransactionSearchResponse field.
func (o *PrepareAndExecuteTransactionResponse) SetPreparationTransactionSearchResponse(v PrepareTransactionResponse) {
	o.PreparationTransactionSearchResponse = &v
}

// GetExecutionTransactionSearchResponse returns the ExecutionTransactionSearchResponse field value if set, zero value otherwise.
func (o *PrepareAndExecuteTransactionResponse) GetExecutionTransactionSearchResponse() ExecuteSearchTransactionResponse {
	if o == nil || o.ExecutionTransactionSearchResponse == nil {
		var ret ExecuteSearchTransactionResponse
		return ret
	}
	return *o.ExecutionTransactionSearchResponse
}

// GetExecutionTransactionSearchResponseOk returns a tuple with the ExecutionTransactionSearchResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareAndExecuteTransactionResponse) GetExecutionTransactionSearchResponseOk() (*ExecuteSearchTransactionResponse, bool) {
	if o == nil || o.ExecutionTransactionSearchResponse == nil {
		return nil, false
	}
	return o.ExecutionTransactionSearchResponse, true
}

// HasExecutionTransactionSearchResponse returns a boolean if a field has been set.
func (o *PrepareAndExecuteTransactionResponse) HasExecutionTransactionSearchResponse() bool {
	if o != nil && o.ExecutionTransactionSearchResponse != nil {
		return true
	}

	return false
}

// SetExecutionTransactionSearchResponse gets a reference to the given ExecuteSearchTransactionResponse and assigns it to the ExecutionTransactionSearchResponse field.
func (o *PrepareAndExecuteTransactionResponse) SetExecutionTransactionSearchResponse(v ExecuteSearchTransactionResponse) {
	o.ExecutionTransactionSearchResponse = &v
}

// GetExecutionTransactionSearchOverledgerErrorResponse returns the ExecutionTransactionSearchOverledgerErrorResponse field value if set, zero value otherwise.
func (o *PrepareAndExecuteTransactionResponse) GetExecutionTransactionSearchOverledgerErrorResponse() PrepareAndExecuteOverledgerErrorResponse {
	if o == nil || o.ExecutionTransactionSearchOverledgerErrorResponse == nil {
		var ret PrepareAndExecuteOverledgerErrorResponse
		return ret
	}
	return *o.ExecutionTransactionSearchOverledgerErrorResponse
}

// GetExecutionTransactionSearchOverledgerErrorResponseOk returns a tuple with the ExecutionTransactionSearchOverledgerErrorResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareAndExecuteTransactionResponse) GetExecutionTransactionSearchOverledgerErrorResponseOk() (*PrepareAndExecuteOverledgerErrorResponse, bool) {
	if o == nil || o.ExecutionTransactionSearchOverledgerErrorResponse == nil {
		return nil, false
	}
	return o.ExecutionTransactionSearchOverledgerErrorResponse, true
}

// HasExecutionTransactionSearchOverledgerErrorResponse returns a boolean if a field has been set.
func (o *PrepareAndExecuteTransactionResponse) HasExecutionTransactionSearchOverledgerErrorResponse() bool {
	if o != nil && o.ExecutionTransactionSearchOverledgerErrorResponse != nil {
		return true
	}

	return false
}

// SetExecutionTransactionSearchOverledgerErrorResponse gets a reference to the given PrepareAndExecuteOverledgerErrorResponse and assigns it to the ExecutionTransactionSearchOverledgerErrorResponse field.
func (o *PrepareAndExecuteTransactionResponse) SetExecutionTransactionSearchOverledgerErrorResponse(v PrepareAndExecuteOverledgerErrorResponse) {
	o.ExecutionTransactionSearchOverledgerErrorResponse = &v
}

func (o PrepareAndExecuteTransactionResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.PreparationTransactionSearchResponse != nil {
		toSerialize["preparationTransactionSearchResponse"] = o.PreparationTransactionSearchResponse
	}
	if o.ExecutionTransactionSearchResponse != nil {
		toSerialize["executionTransactionSearchResponse"] = o.ExecutionTransactionSearchResponse
	}
	if o.ExecutionTransactionSearchOverledgerErrorResponse != nil {
		toSerialize["executionTransactionSearchOverledgerErrorResponse"] = o.ExecutionTransactionSearchOverledgerErrorResponse
	}
	return json.Marshal(toSerialize)
}

type NullablePrepareAndExecuteTransactionResponse struct {
	value *PrepareAndExecuteTransactionResponse
	isSet bool
}

func (v NullablePrepareAndExecuteTransactionResponse) Get() *PrepareAndExecuteTransactionResponse {
	return v.value
}

func (v *NullablePrepareAndExecuteTransactionResponse) Set(val *PrepareAndExecuteTransactionResponse) {
	v.value = val
	v.isSet = true
}

func (v NullablePrepareAndExecuteTransactionResponse) IsSet() bool {
	return v.isSet
}

func (v *NullablePrepareAndExecuteTransactionResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePrepareAndExecuteTransactionResponse(val *PrepareAndExecuteTransactionResponse) *NullablePrepareAndExecuteTransactionResponse {
	return &NullablePrepareAndExecuteTransactionResponse{value: val, isSet: true}
}

func (v NullablePrepareAndExecuteTransactionResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePrepareAndExecuteTransactionResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


