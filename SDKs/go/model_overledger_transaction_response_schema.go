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

// OverledgerTransactionResponseSchema struct for OverledgerTransactionResponseSchema
type OverledgerTransactionResponseSchema struct {
	ClientId *string `json:"clientId,omitempty"`
	RequestId *string `json:"requestId,omitempty"`
	OverledgerTransactionId *string `json:"overledgerTransactionId,omitempty"`
	Location *Location `json:"location,omitempty"`
	TransactionHistory *[]Status `json:"transactionHistory,omitempty"`
	Type *string `json:"type,omitempty"`
	TransactionId *string `json:"transactionId,omitempty"`
	Status *Status `json:"status,omitempty"`
}

// NewOverledgerTransactionResponseSchema instantiates a new OverledgerTransactionResponseSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOverledgerTransactionResponseSchema() *OverledgerTransactionResponseSchema {
	this := OverledgerTransactionResponseSchema{}
	return &this
}

// NewOverledgerTransactionResponseSchemaWithDefaults instantiates a new OverledgerTransactionResponseSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOverledgerTransactionResponseSchemaWithDefaults() *OverledgerTransactionResponseSchema {
	this := OverledgerTransactionResponseSchema{}
	return &this
}

// GetClientId returns the ClientId field value if set, zero value otherwise.
func (o *OverledgerTransactionResponseSchema) GetClientId() string {
	if o == nil || o.ClientId == nil {
		var ret string
		return ret
	}
	return *o.ClientId
}

// GetClientIdOk returns a tuple with the ClientId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OverledgerTransactionResponseSchema) GetClientIdOk() (*string, bool) {
	if o == nil || o.ClientId == nil {
		return nil, false
	}
	return o.ClientId, true
}

// HasClientId returns a boolean if a field has been set.
func (o *OverledgerTransactionResponseSchema) HasClientId() bool {
	if o != nil && o.ClientId != nil {
		return true
	}

	return false
}

// SetClientId gets a reference to the given string and assigns it to the ClientId field.
func (o *OverledgerTransactionResponseSchema) SetClientId(v string) {
	o.ClientId = &v
}

// GetRequestId returns the RequestId field value if set, zero value otherwise.
func (o *OverledgerTransactionResponseSchema) GetRequestId() string {
	if o == nil || o.RequestId == nil {
		var ret string
		return ret
	}
	return *o.RequestId
}

// GetRequestIdOk returns a tuple with the RequestId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OverledgerTransactionResponseSchema) GetRequestIdOk() (*string, bool) {
	if o == nil || o.RequestId == nil {
		return nil, false
	}
	return o.RequestId, true
}

// HasRequestId returns a boolean if a field has been set.
func (o *OverledgerTransactionResponseSchema) HasRequestId() bool {
	if o != nil && o.RequestId != nil {
		return true
	}

	return false
}

// SetRequestId gets a reference to the given string and assigns it to the RequestId field.
func (o *OverledgerTransactionResponseSchema) SetRequestId(v string) {
	o.RequestId = &v
}

// GetOverledgerTransactionId returns the OverledgerTransactionId field value if set, zero value otherwise.
func (o *OverledgerTransactionResponseSchema) GetOverledgerTransactionId() string {
	if o == nil || o.OverledgerTransactionId == nil {
		var ret string
		return ret
	}
	return *o.OverledgerTransactionId
}

// GetOverledgerTransactionIdOk returns a tuple with the OverledgerTransactionId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OverledgerTransactionResponseSchema) GetOverledgerTransactionIdOk() (*string, bool) {
	if o == nil || o.OverledgerTransactionId == nil {
		return nil, false
	}
	return o.OverledgerTransactionId, true
}

// HasOverledgerTransactionId returns a boolean if a field has been set.
func (o *OverledgerTransactionResponseSchema) HasOverledgerTransactionId() bool {
	if o != nil && o.OverledgerTransactionId != nil {
		return true
	}

	return false
}

// SetOverledgerTransactionId gets a reference to the given string and assigns it to the OverledgerTransactionId field.
func (o *OverledgerTransactionResponseSchema) SetOverledgerTransactionId(v string) {
	o.OverledgerTransactionId = &v
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *OverledgerTransactionResponseSchema) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OverledgerTransactionResponseSchema) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *OverledgerTransactionResponseSchema) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *OverledgerTransactionResponseSchema) SetLocation(v Location) {
	o.Location = &v
}

// GetTransactionHistory returns the TransactionHistory field value if set, zero value otherwise.
func (o *OverledgerTransactionResponseSchema) GetTransactionHistory() []Status {
	if o == nil || o.TransactionHistory == nil {
		var ret []Status
		return ret
	}
	return *o.TransactionHistory
}

// GetTransactionHistoryOk returns a tuple with the TransactionHistory field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OverledgerTransactionResponseSchema) GetTransactionHistoryOk() (*[]Status, bool) {
	if o == nil || o.TransactionHistory == nil {
		return nil, false
	}
	return o.TransactionHistory, true
}

// HasTransactionHistory returns a boolean if a field has been set.
func (o *OverledgerTransactionResponseSchema) HasTransactionHistory() bool {
	if o != nil && o.TransactionHistory != nil {
		return true
	}

	return false
}

// SetTransactionHistory gets a reference to the given []Status and assigns it to the TransactionHistory field.
func (o *OverledgerTransactionResponseSchema) SetTransactionHistory(v []Status) {
	o.TransactionHistory = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *OverledgerTransactionResponseSchema) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OverledgerTransactionResponseSchema) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *OverledgerTransactionResponseSchema) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *OverledgerTransactionResponseSchema) SetType(v string) {
	o.Type = &v
}

// GetTransactionId returns the TransactionId field value if set, zero value otherwise.
func (o *OverledgerTransactionResponseSchema) GetTransactionId() string {
	if o == nil || o.TransactionId == nil {
		var ret string
		return ret
	}
	return *o.TransactionId
}

// GetTransactionIdOk returns a tuple with the TransactionId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OverledgerTransactionResponseSchema) GetTransactionIdOk() (*string, bool) {
	if o == nil || o.TransactionId == nil {
		return nil, false
	}
	return o.TransactionId, true
}

// HasTransactionId returns a boolean if a field has been set.
func (o *OverledgerTransactionResponseSchema) HasTransactionId() bool {
	if o != nil && o.TransactionId != nil {
		return true
	}

	return false
}

// SetTransactionId gets a reference to the given string and assigns it to the TransactionId field.
func (o *OverledgerTransactionResponseSchema) SetTransactionId(v string) {
	o.TransactionId = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *OverledgerTransactionResponseSchema) GetStatus() Status {
	if o == nil || o.Status == nil {
		var ret Status
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OverledgerTransactionResponseSchema) GetStatusOk() (*Status, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *OverledgerTransactionResponseSchema) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given Status and assigns it to the Status field.
func (o *OverledgerTransactionResponseSchema) SetStatus(v Status) {
	o.Status = &v
}

func (o OverledgerTransactionResponseSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ClientId != nil {
		toSerialize["clientId"] = o.ClientId
	}
	if o.RequestId != nil {
		toSerialize["requestId"] = o.RequestId
	}
	if o.OverledgerTransactionId != nil {
		toSerialize["overledgerTransactionId"] = o.OverledgerTransactionId
	}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	if o.TransactionHistory != nil {
		toSerialize["transactionHistory"] = o.TransactionHistory
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.TransactionId != nil {
		toSerialize["transactionId"] = o.TransactionId
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	return json.Marshal(toSerialize)
}

type NullableOverledgerTransactionResponseSchema struct {
	value *OverledgerTransactionResponseSchema
	isSet bool
}

func (v NullableOverledgerTransactionResponseSchema) Get() *OverledgerTransactionResponseSchema {
	return v.value
}

func (v *NullableOverledgerTransactionResponseSchema) Set(val *OverledgerTransactionResponseSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableOverledgerTransactionResponseSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableOverledgerTransactionResponseSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOverledgerTransactionResponseSchema(val *OverledgerTransactionResponseSchema) *NullableOverledgerTransactionResponseSchema {
	return &NullableOverledgerTransactionResponseSchema{value: val, isSet: true}
}

func (v NullableOverledgerTransactionResponseSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOverledgerTransactionResponseSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


