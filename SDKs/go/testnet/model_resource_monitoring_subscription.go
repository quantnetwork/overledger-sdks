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

// ResourceMonitoringSubscription struct for ResourceMonitoringSubscription
type ResourceMonitoringSubscription struct {
	CallbackUrl *string `json:"callbackUrl,omitempty"`
	SubscriptionId *string `json:"subscriptionId,omitempty"`
	Type *string `json:"type,omitempty"`
}

// NewResourceMonitoringSubscription instantiates a new ResourceMonitoringSubscription object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewResourceMonitoringSubscription() *ResourceMonitoringSubscription {
	this := ResourceMonitoringSubscription{}
	return &this
}

// NewResourceMonitoringSubscriptionWithDefaults instantiates a new ResourceMonitoringSubscription object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewResourceMonitoringSubscriptionWithDefaults() *ResourceMonitoringSubscription {
	this := ResourceMonitoringSubscription{}
	return &this
}

// GetCallbackUrl returns the CallbackUrl field value if set, zero value otherwise.
func (o *ResourceMonitoringSubscription) GetCallbackUrl() string {
	if o == nil || o.CallbackUrl == nil {
		var ret string
		return ret
	}
	return *o.CallbackUrl
}

// GetCallbackUrlOk returns a tuple with the CallbackUrl field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ResourceMonitoringSubscription) GetCallbackUrlOk() (*string, bool) {
	if o == nil || o.CallbackUrl == nil {
		return nil, false
	}
	return o.CallbackUrl, true
}

// HasCallbackUrl returns a boolean if a field has been set.
func (o *ResourceMonitoringSubscription) HasCallbackUrl() bool {
	if o != nil && o.CallbackUrl != nil {
		return true
	}

	return false
}

// SetCallbackUrl gets a reference to the given string and assigns it to the CallbackUrl field.
func (o *ResourceMonitoringSubscription) SetCallbackUrl(v string) {
	o.CallbackUrl = &v
}

// GetSubscriptionId returns the SubscriptionId field value if set, zero value otherwise.
func (o *ResourceMonitoringSubscription) GetSubscriptionId() string {
	if o == nil || o.SubscriptionId == nil {
		var ret string
		return ret
	}
	return *o.SubscriptionId
}

// GetSubscriptionIdOk returns a tuple with the SubscriptionId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ResourceMonitoringSubscription) GetSubscriptionIdOk() (*string, bool) {
	if o == nil || o.SubscriptionId == nil {
		return nil, false
	}
	return o.SubscriptionId, true
}

// HasSubscriptionId returns a boolean if a field has been set.
func (o *ResourceMonitoringSubscription) HasSubscriptionId() bool {
	if o != nil && o.SubscriptionId != nil {
		return true
	}

	return false
}

// SetSubscriptionId gets a reference to the given string and assigns it to the SubscriptionId field.
func (o *ResourceMonitoringSubscription) SetSubscriptionId(v string) {
	o.SubscriptionId = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *ResourceMonitoringSubscription) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ResourceMonitoringSubscription) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *ResourceMonitoringSubscription) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *ResourceMonitoringSubscription) SetType(v string) {
	o.Type = &v
}

func (o ResourceMonitoringSubscription) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.CallbackUrl != nil {
		toSerialize["callbackUrl"] = o.CallbackUrl
	}
	if o.SubscriptionId != nil {
		toSerialize["subscriptionId"] = o.SubscriptionId
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	return json.Marshal(toSerialize)
}

type NullableResourceMonitoringSubscription struct {
	value *ResourceMonitoringSubscription
	isSet bool
}

func (v NullableResourceMonitoringSubscription) Get() *ResourceMonitoringSubscription {
	return v.value
}

func (v *NullableResourceMonitoringSubscription) Set(val *ResourceMonitoringSubscription) {
	v.value = val
	v.isSet = true
}

func (v NullableResourceMonitoringSubscription) IsSet() bool {
	return v.isSet
}

func (v *NullableResourceMonitoringSubscription) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableResourceMonitoringSubscription(val *ResourceMonitoringSubscription) *NullableResourceMonitoringSubscription {
	return &NullableResourceMonitoringSubscription{value: val, isSet: true}
}

func (v NullableResourceMonitoringSubscription) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableResourceMonitoringSubscription) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


