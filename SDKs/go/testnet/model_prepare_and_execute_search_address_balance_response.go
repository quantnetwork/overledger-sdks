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

// PrepareAndExecuteSearchAddressBalanceResponse struct for PrepareAndExecuteSearchAddressBalanceResponse
type PrepareAndExecuteSearchAddressBalanceResponse struct {
	Balances *[]PrepareAndExecuteBalanceDetails `json:"balances,omitempty"`
	Location *Location `json:"location,omitempty"`
	Timestamp *string `json:"timestamp,omitempty"`
	AddressId *string `json:"addressId,omitempty"`
}

// NewPrepareAndExecuteSearchAddressBalanceResponse instantiates a new PrepareAndExecuteSearchAddressBalanceResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewPrepareAndExecuteSearchAddressBalanceResponse() *PrepareAndExecuteSearchAddressBalanceResponse {
	this := PrepareAndExecuteSearchAddressBalanceResponse{}
	return &this
}

// NewPrepareAndExecuteSearchAddressBalanceResponseWithDefaults instantiates a new PrepareAndExecuteSearchAddressBalanceResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewPrepareAndExecuteSearchAddressBalanceResponseWithDefaults() *PrepareAndExecuteSearchAddressBalanceResponse {
	this := PrepareAndExecuteSearchAddressBalanceResponse{}
	return &this
}

// GetBalances returns the Balances field value if set, zero value otherwise.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetBalances() []PrepareAndExecuteBalanceDetails {
	if o == nil || o.Balances == nil {
		var ret []PrepareAndExecuteBalanceDetails
		return ret
	}
	return *o.Balances
}

// GetBalancesOk returns a tuple with the Balances field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetBalancesOk() (*[]PrepareAndExecuteBalanceDetails, bool) {
	if o == nil || o.Balances == nil {
		return nil, false
	}
	return o.Balances, true
}

// HasBalances returns a boolean if a field has been set.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) HasBalances() bool {
	if o != nil && o.Balances != nil {
		return true
	}

	return false
}

// SetBalances gets a reference to the given []PrepareAndExecuteBalanceDetails and assigns it to the Balances field.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) SetBalances(v []PrepareAndExecuteBalanceDetails) {
	o.Balances = &v
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) SetLocation(v Location) {
	o.Location = &v
}

// GetTimestamp returns the Timestamp field value if set, zero value otherwise.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetTimestamp() string {
	if o == nil || o.Timestamp == nil {
		var ret string
		return ret
	}
	return *o.Timestamp
}

// GetTimestampOk returns a tuple with the Timestamp field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetTimestampOk() (*string, bool) {
	if o == nil || o.Timestamp == nil {
		return nil, false
	}
	return o.Timestamp, true
}

// HasTimestamp returns a boolean if a field has been set.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) HasTimestamp() bool {
	if o != nil && o.Timestamp != nil {
		return true
	}

	return false
}

// SetTimestamp gets a reference to the given string and assigns it to the Timestamp field.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) SetTimestamp(v string) {
	o.Timestamp = &v
}

// GetAddressId returns the AddressId field value if set, zero value otherwise.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetAddressId() string {
	if o == nil || o.AddressId == nil {
		var ret string
		return ret
	}
	return *o.AddressId
}

// GetAddressIdOk returns a tuple with the AddressId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetAddressIdOk() (*string, bool) {
	if o == nil || o.AddressId == nil {
		return nil, false
	}
	return o.AddressId, true
}

// HasAddressId returns a boolean if a field has been set.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) HasAddressId() bool {
	if o != nil && o.AddressId != nil {
		return true
	}

	return false
}

// SetAddressId gets a reference to the given string and assigns it to the AddressId field.
func (o *PrepareAndExecuteSearchAddressBalanceResponse) SetAddressId(v string) {
	o.AddressId = &v
}

func (o PrepareAndExecuteSearchAddressBalanceResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Balances != nil {
		toSerialize["balances"] = o.Balances
	}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	if o.Timestamp != nil {
		toSerialize["timestamp"] = o.Timestamp
	}
	if o.AddressId != nil {
		toSerialize["addressId"] = o.AddressId
	}
	return json.Marshal(toSerialize)
}

type NullablePrepareAndExecuteSearchAddressBalanceResponse struct {
	value *PrepareAndExecuteSearchAddressBalanceResponse
	isSet bool
}

func (v NullablePrepareAndExecuteSearchAddressBalanceResponse) Get() *PrepareAndExecuteSearchAddressBalanceResponse {
	return v.value
}

func (v *NullablePrepareAndExecuteSearchAddressBalanceResponse) Set(val *PrepareAndExecuteSearchAddressBalanceResponse) {
	v.value = val
	v.isSet = true
}

func (v NullablePrepareAndExecuteSearchAddressBalanceResponse) IsSet() bool {
	return v.isSet
}

func (v *NullablePrepareAndExecuteSearchAddressBalanceResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullablePrepareAndExecuteSearchAddressBalanceResponse(val *PrepareAndExecuteSearchAddressBalanceResponse) *NullablePrepareAndExecuteSearchAddressBalanceResponse {
	return &NullablePrepareAndExecuteSearchAddressBalanceResponse{value: val, isSet: true}
}

func (v NullablePrepareAndExecuteSearchAddressBalanceResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullablePrepareAndExecuteSearchAddressBalanceResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


