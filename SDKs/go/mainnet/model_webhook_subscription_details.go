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

// WebhookSubscriptionDetails struct for WebhookSubscriptionDetails
type WebhookSubscriptionDetails struct {
	Ids *[]string `json:"ids,omitempty"`
	Status *Status `json:"status,omitempty"`
}

// NewWebhookSubscriptionDetails instantiates a new WebhookSubscriptionDetails object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewWebhookSubscriptionDetails() *WebhookSubscriptionDetails {
	this := WebhookSubscriptionDetails{}
	return &this
}

// NewWebhookSubscriptionDetailsWithDefaults instantiates a new WebhookSubscriptionDetails object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewWebhookSubscriptionDetailsWithDefaults() *WebhookSubscriptionDetails {
	this := WebhookSubscriptionDetails{}
	return &this
}

// GetIds returns the Ids field value if set, zero value otherwise.
func (o *WebhookSubscriptionDetails) GetIds() []string {
	if o == nil || o.Ids == nil {
		var ret []string
		return ret
	}
	return *o.Ids
}

// GetIdsOk returns a tuple with the Ids field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *WebhookSubscriptionDetails) GetIdsOk() (*[]string, bool) {
	if o == nil || o.Ids == nil {
		return nil, false
	}
	return o.Ids, true
}

// HasIds returns a boolean if a field has been set.
func (o *WebhookSubscriptionDetails) HasIds() bool {
	if o != nil && o.Ids != nil {
		return true
	}

	return false
}

// SetIds gets a reference to the given []string and assigns it to the Ids field.
func (o *WebhookSubscriptionDetails) SetIds(v []string) {
	o.Ids = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *WebhookSubscriptionDetails) GetStatus() Status {
	if o == nil || o.Status == nil {
		var ret Status
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *WebhookSubscriptionDetails) GetStatusOk() (*Status, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *WebhookSubscriptionDetails) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given Status and assigns it to the Status field.
func (o *WebhookSubscriptionDetails) SetStatus(v Status) {
	o.Status = &v
}

func (o WebhookSubscriptionDetails) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Ids != nil {
		toSerialize["ids"] = o.Ids
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	return json.Marshal(toSerialize)
}

type NullableWebhookSubscriptionDetails struct {
	value *WebhookSubscriptionDetails
	isSet bool
}

func (v NullableWebhookSubscriptionDetails) Get() *WebhookSubscriptionDetails {
	return v.value
}

func (v *NullableWebhookSubscriptionDetails) Set(val *WebhookSubscriptionDetails) {
	v.value = val
	v.isSet = true
}

func (v NullableWebhookSubscriptionDetails) IsSet() bool {
	return v.isSet
}

func (v *NullableWebhookSubscriptionDetails) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableWebhookSubscriptionDetails(val *WebhookSubscriptionDetails) *NullableWebhookSubscriptionDetails {
	return &NullableWebhookSubscriptionDetails{value: val, isSet: true}
}

func (v NullableWebhookSubscriptionDetails) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableWebhookSubscriptionDetails) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


