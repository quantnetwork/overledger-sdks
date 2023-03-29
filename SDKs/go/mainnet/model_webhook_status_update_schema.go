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

// WebhookStatusUpdateSchema struct for WebhookStatusUpdateSchema
type WebhookStatusUpdateSchema struct {
	Value *string `json:"value,omitempty"`
}

// NewWebhookStatusUpdateSchema instantiates a new WebhookStatusUpdateSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewWebhookStatusUpdateSchema() *WebhookStatusUpdateSchema {
	this := WebhookStatusUpdateSchema{}
	return &this
}

// NewWebhookStatusUpdateSchemaWithDefaults instantiates a new WebhookStatusUpdateSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewWebhookStatusUpdateSchemaWithDefaults() *WebhookStatusUpdateSchema {
	this := WebhookStatusUpdateSchema{}
	return &this
}

// GetValue returns the Value field value if set, zero value otherwise.
func (o *WebhookStatusUpdateSchema) GetValue() string {
	if o == nil || o.Value == nil {
		var ret string
		return ret
	}
	return *o.Value
}

// GetValueOk returns a tuple with the Value field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *WebhookStatusUpdateSchema) GetValueOk() (*string, bool) {
	if o == nil || o.Value == nil {
		return nil, false
	}
	return o.Value, true
}

// HasValue returns a boolean if a field has been set.
func (o *WebhookStatusUpdateSchema) HasValue() bool {
	if o != nil && o.Value != nil {
		return true
	}

	return false
}

// SetValue gets a reference to the given string and assigns it to the Value field.
func (o *WebhookStatusUpdateSchema) SetValue(v string) {
	o.Value = &v
}

func (o WebhookStatusUpdateSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Value != nil {
		toSerialize["value"] = o.Value
	}
	return json.Marshal(toSerialize)
}

type NullableWebhookStatusUpdateSchema struct {
	value *WebhookStatusUpdateSchema
	isSet bool
}

func (v NullableWebhookStatusUpdateSchema) Get() *WebhookStatusUpdateSchema {
	return v.value
}

func (v *NullableWebhookStatusUpdateSchema) Set(val *WebhookStatusUpdateSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableWebhookStatusUpdateSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableWebhookStatusUpdateSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableWebhookStatusUpdateSchema(val *WebhookStatusUpdateSchema) *NullableWebhookStatusUpdateSchema {
	return &NullableWebhookStatusUpdateSchema{value: val, isSet: true}
}

func (v NullableWebhookStatusUpdateSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableWebhookStatusUpdateSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


