/*
Quant Overledger API

Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

API version: 2.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"time"
)

// ListSubscriptionResponseSchema struct for ListSubscriptionResponseSchema
type ListSubscriptionResponseSchema struct {
	SubscriptionDetails *SubscriptionDetailsSchema `json:"subscriptionDetails,omitempty"`
	SubscribedTime *time.Time `json:"subscribedTime,omitempty"`
	LastUpdatedTime *time.Time `json:"lastUpdatedTime,omitempty"`
	CallbackUrl *string `json:"callbackUrl,omitempty"`
	SubscriptionId *string `json:"subscriptionId,omitempty"`
	Type *string `json:"type,omitempty"`
}

// NewListSubscriptionResponseSchema instantiates a new ListSubscriptionResponseSchema object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewListSubscriptionResponseSchema() *ListSubscriptionResponseSchema {
	this := ListSubscriptionResponseSchema{}
	return &this
}

// NewListSubscriptionResponseSchemaWithDefaults instantiates a new ListSubscriptionResponseSchema object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewListSubscriptionResponseSchemaWithDefaults() *ListSubscriptionResponseSchema {
	this := ListSubscriptionResponseSchema{}
	return &this
}

// GetSubscriptionDetails returns the SubscriptionDetails field value if set, zero value otherwise.
func (o *ListSubscriptionResponseSchema) GetSubscriptionDetails() SubscriptionDetailsSchema {
	if o == nil || o.SubscriptionDetails == nil {
		var ret SubscriptionDetailsSchema
		return ret
	}
	return *o.SubscriptionDetails
}

// GetSubscriptionDetailsOk returns a tuple with the SubscriptionDetails field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ListSubscriptionResponseSchema) GetSubscriptionDetailsOk() (*SubscriptionDetailsSchema, bool) {
	if o == nil || o.SubscriptionDetails == nil {
		return nil, false
	}
	return o.SubscriptionDetails, true
}

// HasSubscriptionDetails returns a boolean if a field has been set.
func (o *ListSubscriptionResponseSchema) HasSubscriptionDetails() bool {
	if o != nil && o.SubscriptionDetails != nil {
		return true
	}

	return false
}

// SetSubscriptionDetails gets a reference to the given SubscriptionDetailsSchema and assigns it to the SubscriptionDetails field.
func (o *ListSubscriptionResponseSchema) SetSubscriptionDetails(v SubscriptionDetailsSchema) {
	o.SubscriptionDetails = &v
}

// GetSubscribedTime returns the SubscribedTime field value if set, zero value otherwise.
func (o *ListSubscriptionResponseSchema) GetSubscribedTime() time.Time {
	if o == nil || o.SubscribedTime == nil {
		var ret time.Time
		return ret
	}
	return *o.SubscribedTime
}

// GetSubscribedTimeOk returns a tuple with the SubscribedTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ListSubscriptionResponseSchema) GetSubscribedTimeOk() (*time.Time, bool) {
	if o == nil || o.SubscribedTime == nil {
		return nil, false
	}
	return o.SubscribedTime, true
}

// HasSubscribedTime returns a boolean if a field has been set.
func (o *ListSubscriptionResponseSchema) HasSubscribedTime() bool {
	if o != nil && o.SubscribedTime != nil {
		return true
	}

	return false
}

// SetSubscribedTime gets a reference to the given time.Time and assigns it to the SubscribedTime field.
func (o *ListSubscriptionResponseSchema) SetSubscribedTime(v time.Time) {
	o.SubscribedTime = &v
}

// GetLastUpdatedTime returns the LastUpdatedTime field value if set, zero value otherwise.
func (o *ListSubscriptionResponseSchema) GetLastUpdatedTime() time.Time {
	if o == nil || o.LastUpdatedTime == nil {
		var ret time.Time
		return ret
	}
	return *o.LastUpdatedTime
}

// GetLastUpdatedTimeOk returns a tuple with the LastUpdatedTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ListSubscriptionResponseSchema) GetLastUpdatedTimeOk() (*time.Time, bool) {
	if o == nil || o.LastUpdatedTime == nil {
		return nil, false
	}
	return o.LastUpdatedTime, true
}

// HasLastUpdatedTime returns a boolean if a field has been set.
func (o *ListSubscriptionResponseSchema) HasLastUpdatedTime() bool {
	if o != nil && o.LastUpdatedTime != nil {
		return true
	}

	return false
}

// SetLastUpdatedTime gets a reference to the given time.Time and assigns it to the LastUpdatedTime field.
func (o *ListSubscriptionResponseSchema) SetLastUpdatedTime(v time.Time) {
	o.LastUpdatedTime = &v
}

// GetCallbackUrl returns the CallbackUrl field value if set, zero value otherwise.
func (o *ListSubscriptionResponseSchema) GetCallbackUrl() string {
	if o == nil || o.CallbackUrl == nil {
		var ret string
		return ret
	}
	return *o.CallbackUrl
}

// GetCallbackUrlOk returns a tuple with the CallbackUrl field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ListSubscriptionResponseSchema) GetCallbackUrlOk() (*string, bool) {
	if o == nil || o.CallbackUrl == nil {
		return nil, false
	}
	return o.CallbackUrl, true
}

// HasCallbackUrl returns a boolean if a field has been set.
func (o *ListSubscriptionResponseSchema) HasCallbackUrl() bool {
	if o != nil && o.CallbackUrl != nil {
		return true
	}

	return false
}

// SetCallbackUrl gets a reference to the given string and assigns it to the CallbackUrl field.
func (o *ListSubscriptionResponseSchema) SetCallbackUrl(v string) {
	o.CallbackUrl = &v
}

// GetSubscriptionId returns the SubscriptionId field value if set, zero value otherwise.
func (o *ListSubscriptionResponseSchema) GetSubscriptionId() string {
	if o == nil || o.SubscriptionId == nil {
		var ret string
		return ret
	}
	return *o.SubscriptionId
}

// GetSubscriptionIdOk returns a tuple with the SubscriptionId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ListSubscriptionResponseSchema) GetSubscriptionIdOk() (*string, bool) {
	if o == nil || o.SubscriptionId == nil {
		return nil, false
	}
	return o.SubscriptionId, true
}

// HasSubscriptionId returns a boolean if a field has been set.
func (o *ListSubscriptionResponseSchema) HasSubscriptionId() bool {
	if o != nil && o.SubscriptionId != nil {
		return true
	}

	return false
}

// SetSubscriptionId gets a reference to the given string and assigns it to the SubscriptionId field.
func (o *ListSubscriptionResponseSchema) SetSubscriptionId(v string) {
	o.SubscriptionId = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *ListSubscriptionResponseSchema) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ListSubscriptionResponseSchema) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *ListSubscriptionResponseSchema) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *ListSubscriptionResponseSchema) SetType(v string) {
	o.Type = &v
}

func (o ListSubscriptionResponseSchema) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.SubscriptionDetails != nil {
		toSerialize["subscriptionDetails"] = o.SubscriptionDetails
	}
	if o.SubscribedTime != nil {
		toSerialize["subscribedTime"] = o.SubscribedTime
	}
	if o.LastUpdatedTime != nil {
		toSerialize["lastUpdatedTime"] = o.LastUpdatedTime
	}
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

type NullableListSubscriptionResponseSchema struct {
	value *ListSubscriptionResponseSchema
	isSet bool
}

func (v NullableListSubscriptionResponseSchema) Get() *ListSubscriptionResponseSchema {
	return v.value
}

func (v *NullableListSubscriptionResponseSchema) Set(val *ListSubscriptionResponseSchema) {
	v.value = val
	v.isSet = true
}

func (v NullableListSubscriptionResponseSchema) IsSet() bool {
	return v.isSet
}

func (v *NullableListSubscriptionResponseSchema) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableListSubscriptionResponseSchema(val *ListSubscriptionResponseSchema) *NullableListSubscriptionResponseSchema {
	return &NullableListSubscriptionResponseSchema{value: val, isSet: true}
}

func (v NullableListSubscriptionResponseSchema) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableListSubscriptionResponseSchema) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


