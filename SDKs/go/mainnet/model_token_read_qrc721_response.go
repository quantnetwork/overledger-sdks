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

// TokenReadQRC721Response struct for TokenReadQRC721Response
type TokenReadQRC721Response struct {
	// Name of the token
	TokenName *string `json:"tokenName,omitempty"`
	ResponseDetails *TokenReadResponseDetails `json:"responseDetails,omitempty"`
	Location *Location `json:"location,omitempty"`
	// The ID assigned to a preparation request in Overledger
	RequestId *string `json:"requestId,omitempty"`
}

// NewTokenReadQRC721Response instantiates a new TokenReadQRC721Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTokenReadQRC721Response() *TokenReadQRC721Response {
	this := TokenReadQRC721Response{}
	return &this
}

// NewTokenReadQRC721ResponseWithDefaults instantiates a new TokenReadQRC721Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTokenReadQRC721ResponseWithDefaults() *TokenReadQRC721Response {
	this := TokenReadQRC721Response{}
	return &this
}

// GetTokenName returns the TokenName field value if set, zero value otherwise.
func (o *TokenReadQRC721Response) GetTokenName() string {
	if o == nil || o.TokenName == nil {
		var ret string
		return ret
	}
	return *o.TokenName
}

// GetTokenNameOk returns a tuple with the TokenName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TokenReadQRC721Response) GetTokenNameOk() (*string, bool) {
	if o == nil || o.TokenName == nil {
		return nil, false
	}
	return o.TokenName, true
}

// HasTokenName returns a boolean if a field has been set.
func (o *TokenReadQRC721Response) HasTokenName() bool {
	if o != nil && o.TokenName != nil {
		return true
	}

	return false
}

// SetTokenName gets a reference to the given string and assigns it to the TokenName field.
func (o *TokenReadQRC721Response) SetTokenName(v string) {
	o.TokenName = &v
}

// GetResponseDetails returns the ResponseDetails field value if set, zero value otherwise.
func (o *TokenReadQRC721Response) GetResponseDetails() TokenReadResponseDetails {
	if o == nil || o.ResponseDetails == nil {
		var ret TokenReadResponseDetails
		return ret
	}
	return *o.ResponseDetails
}

// GetResponseDetailsOk returns a tuple with the ResponseDetails field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TokenReadQRC721Response) GetResponseDetailsOk() (*TokenReadResponseDetails, bool) {
	if o == nil || o.ResponseDetails == nil {
		return nil, false
	}
	return o.ResponseDetails, true
}

// HasResponseDetails returns a boolean if a field has been set.
func (o *TokenReadQRC721Response) HasResponseDetails() bool {
	if o != nil && o.ResponseDetails != nil {
		return true
	}

	return false
}

// SetResponseDetails gets a reference to the given TokenReadResponseDetails and assigns it to the ResponseDetails field.
func (o *TokenReadQRC721Response) SetResponseDetails(v TokenReadResponseDetails) {
	o.ResponseDetails = &v
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *TokenReadQRC721Response) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TokenReadQRC721Response) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *TokenReadQRC721Response) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *TokenReadQRC721Response) SetLocation(v Location) {
	o.Location = &v
}

// GetRequestId returns the RequestId field value if set, zero value otherwise.
func (o *TokenReadQRC721Response) GetRequestId() string {
	if o == nil || o.RequestId == nil {
		var ret string
		return ret
	}
	return *o.RequestId
}

// GetRequestIdOk returns a tuple with the RequestId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TokenReadQRC721Response) GetRequestIdOk() (*string, bool) {
	if o == nil || o.RequestId == nil {
		return nil, false
	}
	return o.RequestId, true
}

// HasRequestId returns a boolean if a field has been set.
func (o *TokenReadQRC721Response) HasRequestId() bool {
	if o != nil && o.RequestId != nil {
		return true
	}

	return false
}

// SetRequestId gets a reference to the given string and assigns it to the RequestId field.
func (o *TokenReadQRC721Response) SetRequestId(v string) {
	o.RequestId = &v
}

func (o TokenReadQRC721Response) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.TokenName != nil {
		toSerialize["tokenName"] = o.TokenName
	}
	if o.ResponseDetails != nil {
		toSerialize["responseDetails"] = o.ResponseDetails
	}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	if o.RequestId != nil {
		toSerialize["requestId"] = o.RequestId
	}
	return json.Marshal(toSerialize)
}

type NullableTokenReadQRC721Response struct {
	value *TokenReadQRC721Response
	isSet bool
}

func (v NullableTokenReadQRC721Response) Get() *TokenReadQRC721Response {
	return v.value
}

func (v *NullableTokenReadQRC721Response) Set(val *TokenReadQRC721Response) {
	v.value = val
	v.isSet = true
}

func (v NullableTokenReadQRC721Response) IsSet() bool {
	return v.isSet
}

func (v *NullableTokenReadQRC721Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTokenReadQRC721Response(val *TokenReadQRC721Response) *NullableTokenReadQRC721Response {
	return &NullableTokenReadQRC721Response{value: val, isSet: true}
}

func (v NullableTokenReadQRC721Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTokenReadQRC721Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


