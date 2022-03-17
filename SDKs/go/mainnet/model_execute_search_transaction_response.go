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

// ExecuteSearchTransactionResponse struct for ExecuteSearchTransactionResponse
type ExecuteSearchTransactionResponse struct {
	Location *Location `json:"location,omitempty"`
	// The type of the transaction object returned
	Type *string `json:"type,omitempty"`
	Transaction *Transaction `json:"transaction,omitempty"`
	// The unix time to read the object from
	Timestamp *string `json:"timestamp,omitempty"`
	Status *Status `json:"status,omitempty"`
	ExtraFields *map[string]interface{} `json:"extraFields,omitempty"`
}

// NewExecuteSearchTransactionResponse instantiates a new ExecuteSearchTransactionResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewExecuteSearchTransactionResponse() *ExecuteSearchTransactionResponse {
	this := ExecuteSearchTransactionResponse{}
	return &this
}

// NewExecuteSearchTransactionResponseWithDefaults instantiates a new ExecuteSearchTransactionResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewExecuteSearchTransactionResponseWithDefaults() *ExecuteSearchTransactionResponse {
	this := ExecuteSearchTransactionResponse{}
	return &this
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *ExecuteSearchTransactionResponse) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchTransactionResponse) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *ExecuteSearchTransactionResponse) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *ExecuteSearchTransactionResponse) SetLocation(v Location) {
	o.Location = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *ExecuteSearchTransactionResponse) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchTransactionResponse) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *ExecuteSearchTransactionResponse) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *ExecuteSearchTransactionResponse) SetType(v string) {
	o.Type = &v
}

// GetTransaction returns the Transaction field value if set, zero value otherwise.
func (o *ExecuteSearchTransactionResponse) GetTransaction() Transaction {
	if o == nil || o.Transaction == nil {
		var ret Transaction
		return ret
	}
	return *o.Transaction
}

// GetTransactionOk returns a tuple with the Transaction field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchTransactionResponse) GetTransactionOk() (*Transaction, bool) {
	if o == nil || o.Transaction == nil {
		return nil, false
	}
	return o.Transaction, true
}

// HasTransaction returns a boolean if a field has been set.
func (o *ExecuteSearchTransactionResponse) HasTransaction() bool {
	if o != nil && o.Transaction != nil {
		return true
	}

	return false
}

// SetTransaction gets a reference to the given Transaction and assigns it to the Transaction field.
func (o *ExecuteSearchTransactionResponse) SetTransaction(v Transaction) {
	o.Transaction = &v
}

// GetTimestamp returns the Timestamp field value if set, zero value otherwise.
func (o *ExecuteSearchTransactionResponse) GetTimestamp() string {
	if o == nil || o.Timestamp == nil {
		var ret string
		return ret
	}
	return *o.Timestamp
}

// GetTimestampOk returns a tuple with the Timestamp field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchTransactionResponse) GetTimestampOk() (*string, bool) {
	if o == nil || o.Timestamp == nil {
		return nil, false
	}
	return o.Timestamp, true
}

// HasTimestamp returns a boolean if a field has been set.
func (o *ExecuteSearchTransactionResponse) HasTimestamp() bool {
	if o != nil && o.Timestamp != nil {
		return true
	}

	return false
}

// SetTimestamp gets a reference to the given string and assigns it to the Timestamp field.
func (o *ExecuteSearchTransactionResponse) SetTimestamp(v string) {
	o.Timestamp = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *ExecuteSearchTransactionResponse) GetStatus() Status {
	if o == nil || o.Status == nil {
		var ret Status
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchTransactionResponse) GetStatusOk() (*Status, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *ExecuteSearchTransactionResponse) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given Status and assigns it to the Status field.
func (o *ExecuteSearchTransactionResponse) SetStatus(v Status) {
	o.Status = &v
}

// GetExtraFields returns the ExtraFields field value if set, zero value otherwise.
func (o *ExecuteSearchTransactionResponse) GetExtraFields() map[string]interface{} {
	if o == nil || o.ExtraFields == nil {
		var ret map[string]interface{}
		return ret
	}
	return *o.ExtraFields
}

// GetExtraFieldsOk returns a tuple with the ExtraFields field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchTransactionResponse) GetExtraFieldsOk() (*map[string]interface{}, bool) {
	if o == nil || o.ExtraFields == nil {
		return nil, false
	}
	return o.ExtraFields, true
}

// HasExtraFields returns a boolean if a field has been set.
func (o *ExecuteSearchTransactionResponse) HasExtraFields() bool {
	if o != nil && o.ExtraFields != nil {
		return true
	}

	return false
}

// SetExtraFields gets a reference to the given map[string]interface{} and assigns it to the ExtraFields field.
func (o *ExecuteSearchTransactionResponse) SetExtraFields(v map[string]interface{}) {
	o.ExtraFields = &v
}

func (o ExecuteSearchTransactionResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.Transaction != nil {
		toSerialize["transaction"] = o.Transaction
	}
	if o.Timestamp != nil {
		toSerialize["timestamp"] = o.Timestamp
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	if o.ExtraFields != nil {
		toSerialize["extraFields"] = o.ExtraFields
	}
	return json.Marshal(toSerialize)
}

type NullableExecuteSearchTransactionResponse struct {
	value *ExecuteSearchTransactionResponse
	isSet bool
}

func (v NullableExecuteSearchTransactionResponse) Get() *ExecuteSearchTransactionResponse {
	return v.value
}

func (v *NullableExecuteSearchTransactionResponse) Set(val *ExecuteSearchTransactionResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableExecuteSearchTransactionResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableExecuteSearchTransactionResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableExecuteSearchTransactionResponse(val *ExecuteSearchTransactionResponse) *NullableExecuteSearchTransactionResponse {
	return &NullableExecuteSearchTransactionResponse{value: val, isSet: true}
}

func (v NullableExecuteSearchTransactionResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableExecuteSearchTransactionResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


