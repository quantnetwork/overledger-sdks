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

// WebhookSubscriptionDetailsSchema struct for WebhookSubscriptionDetailsSchema
type WebhookSubscriptionDetailsSchema struct {
	Ids *[]string `json:"ids,omitempty"`
	Status *Status `json:"status,omitempty"`
}

// NewWebhookSubscriptionDetailsSchema instantiates a new WebhookSubscriptionDetailsSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewWebhookSubscriptionDetailsSchema() *WebhookSubscriptionDetailsSchema {
	this := WebhookSubscriptionDetailsSchema{}
	return &this
}

// NewWebhookSubscriptionDetailsSchemaWithDefaults instantiates a new WebhookSubscriptionDetailsSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewWebhookSubscriptionDetailsSchemaWithDefaults() *WebhookSubscriptionDetailsSchema {
	this := WebhookSubscriptionDetailsSchema{}
	return &this
}

// GetIds returns the Ids field value if set, zero value otherwise.
func (o *WebhookSubscriptionDetailsSchema) GetIds() []string {
	if o == nil || o.Ids == nil {
		var ret []string
		return ret
	}
	return *o.Ids
}

// GetIdsOk returns a tuple with the Ids field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *WebhookSubscriptionDetailsSchema) GetIdsOk() (*[]string, bool) {
	if o == nil || o.Ids == nil {
		return nil, false
	}
	return o.Ids, true
}

// HasIds returns a boolean if a field has been set.
func (o *WebhookSubscriptionDetailsSchema) HasIds() bool {
	if o != nil && o.Ids != nil {
		return true
	}

	return false
}

// SetIds gets a reference to the given []string and assigns it to the Ids field.
func (o *WebhookSubscriptionDetailsSchema) SetIds(v []string) {
	o.Ids = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *WebhookSubscriptionDetailsSchema) GetStatus() Status {
	if o == nil || o.Status == nil {
		var ret Status
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *WebhookSubscriptionDetailsSchema) GetStatusOk() (*Status, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *WebhookSubscriptionDetailsSchema) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given Status and assigns it to the Status field.
func (o *WebhookSubscriptionDetailsSchema) SetStatus(v Status) {
	o.Status = &v
}

func (o WebhookSubscriptionDetailsSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Ids != nil {
		toSerialize["ids"] = o.Ids
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	return json.Marshal(toSerialize)
}

type NullableWebhookSubscriptionDetailsSchema struct {
	value *WebhookSubscriptionDetailsSchema
	isSet bool
}

func (v NullableWebhookSubscriptionDetailsSchema) Get() *WebhookSubscriptionDetailsSchema {
	return v.value
}

func (v *NullableWebhookSubscriptionDetailsSchema) Set(val *WebhookSubscriptionDetailsSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableWebhookSubscriptionDetailsSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableWebhookSubscriptionDetailsSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableWebhookSubscriptionDetailsSchema(val *WebhookSubscriptionDetailsSchema) *NullableWebhookSubscriptionDetailsSchema {
	return &NullableWebhookSubscriptionDetailsSchema{value: val, isSet: true}
}

func (v NullableWebhookSubscriptionDetailsSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableWebhookSubscriptionDetailsSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


