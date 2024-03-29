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

// AutoExecuteSearchAddressBalanceResponseSchema struct for AutoExecuteSearchAddressBalanceResponseSchema
type AutoExecuteSearchAddressBalanceResponseSchema struct {
	PrepareAndExecuteOverledgerErrorResponse *PrepareAndExecuteOverledgerErrorResponse `json:"prepareAndExecuteOverledgerErrorResponse,omitempty"`
	ExecutionAddressBalanceSearchResponse *PrepareAndExecuteSearchAddressBalanceResponse `json:"executionAddressBalanceSearchResponse,omitempty"`
	PreparationAddressBalanceSearchResponse *PrepareSearchResponseSchema `json:"preparationAddressBalanceSearchResponse,omitempty"`
}

// NewAutoExecuteSearchAddressBalanceResponseSchema instantiates a new AutoExecuteSearchAddressBalanceResponseSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAutoExecuteSearchAddressBalanceResponseSchema() *AutoExecuteSearchAddressBalanceResponseSchema {
	this := AutoExecuteSearchAddressBalanceResponseSchema{}
	return &this
}

// NewAutoExecuteSearchAddressBalanceResponseSchemaWithDefaults instantiates a new AutoExecuteSearchAddressBalanceResponseSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAutoExecuteSearchAddressBalanceResponseSchemaWithDefaults() *AutoExecuteSearchAddressBalanceResponseSchema {
	this := AutoExecuteSearchAddressBalanceResponseSchema{}
	return &this
}

// GetPrepareAndExecuteOverledgerErrorResponse returns the PrepareAndExecuteOverledgerErrorResponse field value if set, zero value otherwise.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) GetPrepareAndExecuteOverledgerErrorResponse() PrepareAndExecuteOverledgerErrorResponse {
	if o == nil || o.PrepareAndExecuteOverledgerErrorResponse == nil {
		var ret PrepareAndExecuteOverledgerErrorResponse
		return ret
	}
	return *o.PrepareAndExecuteOverledgerErrorResponse
}

// GetPrepareAndExecuteOverledgerErrorResponseOk returns a tuple with the PrepareAndExecuteOverledgerErrorResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) GetPrepareAndExecuteOverledgerErrorResponseOk() (*PrepareAndExecuteOverledgerErrorResponse, bool) {
	if o == nil || o.PrepareAndExecuteOverledgerErrorResponse == nil {
		return nil, false
	}
	return o.PrepareAndExecuteOverledgerErrorResponse, true
}

// HasPrepareAndExecuteOverledgerErrorResponse returns a boolean if a field has been set.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) HasPrepareAndExecuteOverledgerErrorResponse() bool {
	if o != nil && o.PrepareAndExecuteOverledgerErrorResponse != nil {
		return true
	}

	return false
}

// SetPrepareAndExecuteOverledgerErrorResponse gets a reference to the given PrepareAndExecuteOverledgerErrorResponse and assigns it to the PrepareAndExecuteOverledgerErrorResponse field.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) SetPrepareAndExecuteOverledgerErrorResponse(v PrepareAndExecuteOverledgerErrorResponse) {
	o.PrepareAndExecuteOverledgerErrorResponse = &v
}

// GetExecutionAddressBalanceSearchResponse returns the ExecutionAddressBalanceSearchResponse field value if set, zero value otherwise.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) GetExecutionAddressBalanceSearchResponse() PrepareAndExecuteSearchAddressBalanceResponse {
	if o == nil || o.ExecutionAddressBalanceSearchResponse == nil {
		var ret PrepareAndExecuteSearchAddressBalanceResponse
		return ret
	}
	return *o.ExecutionAddressBalanceSearchResponse
}

// GetExecutionAddressBalanceSearchResponseOk returns a tuple with the ExecutionAddressBalanceSearchResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) GetExecutionAddressBalanceSearchResponseOk() (*PrepareAndExecuteSearchAddressBalanceResponse, bool) {
	if o == nil || o.ExecutionAddressBalanceSearchResponse == nil {
		return nil, false
	}
	return o.ExecutionAddressBalanceSearchResponse, true
}

// HasExecutionAddressBalanceSearchResponse returns a boolean if a field has been set.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) HasExecutionAddressBalanceSearchResponse() bool {
	if o != nil && o.ExecutionAddressBalanceSearchResponse != nil {
		return true
	}

	return false
}

// SetExecutionAddressBalanceSearchResponse gets a reference to the given PrepareAndExecuteSearchAddressBalanceResponse and assigns it to the ExecutionAddressBalanceSearchResponse field.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) SetExecutionAddressBalanceSearchResponse(v PrepareAndExecuteSearchAddressBalanceResponse) {
	o.ExecutionAddressBalanceSearchResponse = &v
}

// GetPreparationAddressBalanceSearchResponse returns the PreparationAddressBalanceSearchResponse field value if set, zero value otherwise.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) GetPreparationAddressBalanceSearchResponse() PrepareSearchResponseSchema {
	if o == nil || o.PreparationAddressBalanceSearchResponse == nil {
		var ret PrepareSearchResponseSchema
		return ret
	}
	return *o.PreparationAddressBalanceSearchResponse
}

// GetPreparationAddressBalanceSearchResponseOk returns a tuple with the PreparationAddressBalanceSearchResponse field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) GetPreparationAddressBalanceSearchResponseOk() (*PrepareSearchResponseSchema, bool) {
	if o == nil || o.PreparationAddressBalanceSearchResponse == nil {
		return nil, false
	}
	return o.PreparationAddressBalanceSearchResponse, true
}

// HasPreparationAddressBalanceSearchResponse returns a boolean if a field has been set.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) HasPreparationAddressBalanceSearchResponse() bool {
	if o != nil && o.PreparationAddressBalanceSearchResponse != nil {
		return true
	}

	return false
}

// SetPreparationAddressBalanceSearchResponse gets a reference to the given PrepareSearchResponseSchema and assigns it to the PreparationAddressBalanceSearchResponse field.
func (o *AutoExecuteSearchAddressBalanceResponseSchema) SetPreparationAddressBalanceSearchResponse(v PrepareSearchResponseSchema) {
	o.PreparationAddressBalanceSearchResponse = &v
}

func (o AutoExecuteSearchAddressBalanceResponseSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.PrepareAndExecuteOverledgerErrorResponse != nil {
		toSerialize["prepareAndExecuteOverledgerErrorResponse"] = o.PrepareAndExecuteOverledgerErrorResponse
	}
	if o.ExecutionAddressBalanceSearchResponse != nil {
		toSerialize["executionAddressBalanceSearchResponse"] = o.ExecutionAddressBalanceSearchResponse
	}
	if o.PreparationAddressBalanceSearchResponse != nil {
		toSerialize["preparationAddressBalanceSearchResponse"] = o.PreparationAddressBalanceSearchResponse
	}
	return json.Marshal(toSerialize)
}

type NullableAutoExecuteSearchAddressBalanceResponseSchema struct {
	value *AutoExecuteSearchAddressBalanceResponseSchema
	isSet bool
}

func (v NullableAutoExecuteSearchAddressBalanceResponseSchema) Get() *AutoExecuteSearchAddressBalanceResponseSchema {
	return v.value
}

func (v *NullableAutoExecuteSearchAddressBalanceResponseSchema) Set(val *AutoExecuteSearchAddressBalanceResponseSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableAutoExecuteSearchAddressBalanceResponseSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableAutoExecuteSearchAddressBalanceResponseSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAutoExecuteSearchAddressBalanceResponseSchema(val *AutoExecuteSearchAddressBalanceResponseSchema) *NullableAutoExecuteSearchAddressBalanceResponseSchema {
	return &NullableAutoExecuteSearchAddressBalanceResponseSchema{value: val, isSet: true}
}

func (v NullableAutoExecuteSearchAddressBalanceResponseSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAutoExecuteSearchAddressBalanceResponseSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


