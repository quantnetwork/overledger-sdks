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

// ExecuteSearchBlockResponse struct for ExecuteSearchBlockResponse
type ExecuteSearchBlockResponse struct {
	Location *Location `json:"location,omitempty"`
	Block *Block `json:"block,omitempty"`
	Status *Status `json:"status,omitempty"`
}

// NewExecuteSearchBlockResponse instantiates a new ExecuteSearchBlockResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewExecuteSearchBlockResponse() *ExecuteSearchBlockResponse {
	this := ExecuteSearchBlockResponse{}
	return &this
}

// NewExecuteSearchBlockResponseWithDefaults instantiates a new ExecuteSearchBlockResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewExecuteSearchBlockResponseWithDefaults() *ExecuteSearchBlockResponse {
	this := ExecuteSearchBlockResponse{}
	return &this
}

// GetLocation returns the Location field value if set, zero value otherwise.
func (o *ExecuteSearchBlockResponse) GetLocation() Location {
	if o == nil || o.Location == nil {
		var ret Location
		return ret
	}
	return *o.Location
}

// GetLocationOk returns a tuple with the Location field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchBlockResponse) GetLocationOk() (*Location, bool) {
	if o == nil || o.Location == nil {
		return nil, false
	}
	return o.Location, true
}

// HasLocation returns a boolean if a field has been set.
func (o *ExecuteSearchBlockResponse) HasLocation() bool {
	if o != nil && o.Location != nil {
		return true
	}

	return false
}

// SetLocation gets a reference to the given Location and assigns it to the Location field.
func (o *ExecuteSearchBlockResponse) SetLocation(v Location) {
	o.Location = &v
}

// GetBlock returns the Block field value if set, zero value otherwise.
func (o *ExecuteSearchBlockResponse) GetBlock() Block {
	if o == nil || o.Block == nil {
		var ret Block
		return ret
	}
	return *o.Block
}

// GetBlockOk returns a tuple with the Block field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchBlockResponse) GetBlockOk() (*Block, bool) {
	if o == nil || o.Block == nil {
		return nil, false
	}
	return o.Block, true
}

// HasBlock returns a boolean if a field has been set.
func (o *ExecuteSearchBlockResponse) HasBlock() bool {
	if o != nil && o.Block != nil {
		return true
	}

	return false
}

// SetBlock gets a reference to the given Block and assigns it to the Block field.
func (o *ExecuteSearchBlockResponse) SetBlock(v Block) {
	o.Block = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *ExecuteSearchBlockResponse) GetStatus() Status {
	if o == nil || o.Status == nil {
		var ret Status
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ExecuteSearchBlockResponse) GetStatusOk() (*Status, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *ExecuteSearchBlockResponse) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given Status and assigns it to the Status field.
func (o *ExecuteSearchBlockResponse) SetStatus(v Status) {
	o.Status = &v
}

func (o ExecuteSearchBlockResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Location != nil {
		toSerialize["location"] = o.Location
	}
	if o.Block != nil {
		toSerialize["block"] = o.Block
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	return json.Marshal(toSerialize)
}

type NullableExecuteSearchBlockResponse struct {
	value *ExecuteSearchBlockResponse
	isSet bool
}

func (v NullableExecuteSearchBlockResponse) Get() *ExecuteSearchBlockResponse {
	return v.value
}

func (v *NullableExecuteSearchBlockResponse) Set(val *ExecuteSearchBlockResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableExecuteSearchBlockResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableExecuteSearchBlockResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableExecuteSearchBlockResponse(val *ExecuteSearchBlockResponse) *NullableExecuteSearchBlockResponse {
	return &NullableExecuteSearchBlockResponse{value: val, isSet: true}
}

func (v NullableExecuteSearchBlockResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableExecuteSearchBlockResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


