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

// PrepareRequest struct for PrepareRequest
type PrepareRequest struct {
	ApiLookupPath *string `json:"apiLookupPath,omitempty"`
	SmartContractTag *[]SmartContractTag `json:"smartContractTag,omitempty"`
	Urgency *string `json:"urgency,omitempty"`
	RequestDetails *PrepareRequestDetails `json:"requestDetails,omitempty"`
	SmartContractAddress *string `json:"smartContractAddress,omitempty"`
	Location *Location `json:"location,omitempty"`
	Type *string `json:"type,omitempty"`
}

// NewPrepareRequest instantiates a new PrepareRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPrepareRequest() *PrepareRequest {
	this := PrepareRequest{}
	return &this
}

// NewPrepareRequestWithDefaults instantiates a new PrepareRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPrepareRequestWithDefaults() *PrepareRequest {
	this := PrepareRequest{}
	return &this
}

// GetApiLookupPath returns the ApiLookupPath field value if set, zero value otherwise.
func (o *PrepareRequest) GetApiLookupPath() string {
	if o == nil || o.ApiLookupPath == nil {
		var ret string
		return ret
	}
	return *o.ApiLookupPath
}

// GetApiLookupPathOk returns a tuple with the ApiLookupPath field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareRequest) GetApiLookupPathOk() (*string, bool) {
	if o == nil || o.ApiLookupPath == nil {
		return nil, false
	}
	return o.ApiLookupPath, true
}

// HasApiLookupPath returns a boolean if a field has been set.
func (o *PrepareRequest) HasApiLookupPath() bool {
	if o != nil && o.ApiLookupPath != nil {
		return true
	}

	return false
}

// SetApiLookupPath gets a reference to the given string and assigns it to the ApiLookupPath field.
func (o *PrepareRequest) SetApiLookupPath(v string) {
	o.ApiLookupPath = &v
}

// GetSmartContractTag returns the SmartContractTag field value if set, zero value otherwise.
func (o *PrepareRequest) GetSmartContractTag() []SmartContractTag {
	if o == nil || o.SmartContractTag == nil {
		var ret []SmartContractTag
		return ret
	}
	return *o.SmartContractTag
}

// GetSmartContractTagOk returns a tuple with the SmartContractTag field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareRequest) GetSmartContractTagOk() (*[]SmartContractTag, bool) {
	if o == nil || o.SmartContractTag == nil {
		return nil, false
	}
	return o.SmartContractTag, true
}

// HasSmartContractTag returns a boolean if a field has been set.
func (o *PrepareRequest) HasSmartContractTag() bool {
	if o != nil && o.SmartContractTag != nil {
		return true
	}

	return false
}

// SetSmartContractTag gets a reference to the given []SmartContractTag and assigns it to the SmartContractTag field.
func (o *PrepareRequest) SetSmartContractTag(v []SmartContractTag) {
	o.SmartContractTag = &v
}

// GetUrgency returns the Urgency field value if set, zero value otherwise.
func (o *PrepareRequest) GetUrgency() string {
	if o == nil || o.Urgency == nil {
		var ret string
		return ret
	}
	return *o.Urgency
}

// GetUrgencyOk returns a tuple with the Urgency field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareRequest) GetUrgencyOk() (*string, bool) {
	if o == nil || o.Urgency == nil {
		return nil, false
	}
	return o.Urgency, true
}

// HasUrgency returns a boolean if a field has been set.
func (o *PrepareRequest) HasUrgency() bool {
	if o != nil && o.Urgency != nil {
		return true
	}

	return false
}

// SetUrgency gets a reference to the given string and assigns it to the Urgency field.
func (o *PrepareRequest) SetUrgency(v string) {
	o.Urgency = &v
}

// GetRequestDetails returns the RequestDetails field value if set, zero value otherwise.
func (o *PrepareRequest) GetRequestDetails() PrepareRequestDetails {
	if o == nil || o.RequestDetails == nil {
		var ret PrepareRequestDetails
		return ret
	}
	return *o.RequestDetails
}

// GetRequestDetailsOk returns a tuple with the RequestDetails field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareRequest) GetRequestDetailsOk() (*PrepareRequestDetails, bool) {
	if o == nil || o.RequestDetails == nil {
		return nil, false
	}
	return o.RequestDetails, true
}

// HasRequestDetails returns a boolean if a field has been set.
func (o *PrepareRequest) HasRequestDetails() bool {
	if o != nil && o.RequestDetails != nil {
		return true
	}

	return false
}

// SetRequestDetails gets a reference to the given PrepareRequestDetails and assigns it to the RequestDetails field.
func (o *PrepareRequest) SetRequestDetails(v PrepareRequestDetails) {
	o.RequestDetails = &v
}

// GetSmartContractAddress returns the SmartContractAddress field value if set, zero value otherwise.
func (o *PrepareRequest) GetSmartContractAddress() string {
	if o == nil || o.SmartContractAddress == nil {
		var ret string
		return ret
	}
	return *o.SmartContractAddress
}

// GetSmartContractAddressOk returns a tuple with the SmartContractAddress field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareRequest) GetSmartContractAddressOk() (*string, bool) {
	if o == nil || o.SmartContractAddress == nil {
		return nil, false
	}
	return o.SmartContractAddress, true
}

// HasSmartContractAddress returns a boolean if a field has been set.
func (o *PrepareRequest) HasSmartContractAddress() bool {
	if o != nil && o.SmartContractAddress != nil {
		return true
	}

	return false
}

// SetSmartContractAddress gets a reference to the given string and assigns it to the SmartContractAddress field.
func (o *PrepareRequest) SetSmartContractAddress(v string) {
	o.SmartContractAddress = &v
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *PrepareRequest) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareRequest) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *PrepareRequest) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *PrepareRequest) SetLocation(v Location) {
	o.Location = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *PrepareRequest) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareRequest) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *PrepareRequest) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *PrepareRequest) SetType(v string) {
	o.Type = &v
}

func (o PrepareRequest) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ApiLookupPath != nil {
		toSerialize["apiLookupPath"] = o.ApiLookupPath
	}
	if o.SmartContractTag != nil {
		toSerialize["smartContractTag"] = o.SmartContractTag
	}
	if o.Urgency != nil {
		toSerialize["urgency"] = o.Urgency
	}
	if o.RequestDetails != nil {
		toSerialize["requestDetails"] = o.RequestDetails
	}
	if o.SmartContractAddress != nil {
		toSerialize["smartContractAddress"] = o.SmartContractAddress
	}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	return json.Marshal(toSerialize)
}

type NullablePrepareRequest struct {
	value *PrepareRequest
	isSet bool
}

func (v NullablePrepareRequest) Get() *PrepareRequest {
	return v.value
}

func (v *NullablePrepareRequest) Set(val *PrepareRequest) {
	v.value = val
	v.isSet = true
}

func (v NullablePrepareRequest) IsSet() bool {
	return v.isSet
}

func (v *NullablePrepareRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePrepareRequest(val *PrepareRequest) *NullablePrepareRequest {
	return &NullablePrepareRequest{value: val, isSet: true}
}

func (v NullablePrepareRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePrepareRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

