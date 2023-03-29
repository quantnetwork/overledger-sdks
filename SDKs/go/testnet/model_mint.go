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

// Mint struct for Mint
type Mint struct {
	// Name of the token
	TokenName *string `json:"tokenName,omitempty"`
	// The amount of a currency
	Amount *string `json:"amount,omitempty"`
	// The unit of this currency/token
	Unit *string `json:"unit,omitempty"`
	// (Optional) String of metadata
	Metadata *string `json:"metadata,omitempty"`
	// Unique identifier for the specific token
	TokenId *string `json:"tokenId,omitempty"`
}

// NewMint instantiates a new Mint object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMint() *Mint {
	this := Mint{}
	return &this
}

// NewMintWithDefaults instantiates a new Mint object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMintWithDefaults() *Mint {
	this := Mint{}
	return &this
}

// GetTokenName returns the TokenName field value if set, zero value otherwise.
func (o *Mint) GetTokenName() string {
	if o == nil || o.TokenName == nil {
		var ret string
		return ret
	}
	return *o.TokenName
}

// GetTokenNameOk returns a tuple with the TokenName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Mint) GetTokenNameOk() (*string, bool) {
	if o == nil || o.TokenName == nil {
		return nil, false
	}
	return o.TokenName, true
}

// HasTokenName returns a boolean if a field has been set.
func (o *Mint) HasTokenName() bool {
	if o != nil && o.TokenName != nil {
		return true
	}

	return false
}

// SetTokenName gets a reference to the given string and assigns it to the TokenName field.
func (o *Mint) SetTokenName(v string) {
	o.TokenName = &v
}

// GetAmount returns the Amount field value if set, zero value otherwise.
func (o *Mint) GetAmount() string {
	if o == nil || o.Amount == nil {
		var ret string
		return ret
	}
	return *o.Amount
}

// GetAmountOk returns a tuple with the Amount field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Mint) GetAmountOk() (*string, bool) {
	if o == nil || o.Amount == nil {
		return nil, false
	}
	return o.Amount, true
}

// HasAmount returns a boolean if a field has been set.
func (o *Mint) HasAmount() bool {
	if o != nil && o.Amount != nil {
		return true
	}

	return false
}

// SetAmount gets a reference to the given string and assigns it to the Amount field.
func (o *Mint) SetAmount(v string) {
	o.Amount = &v
}

// GetUnit returns the Unit field value if set, zero value otherwise.
func (o *Mint) GetUnit() string {
	if o == nil || o.Unit == nil {
		var ret string
		return ret
	}
	return *o.Unit
}

// GetUnitOk returns a tuple with the Unit field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Mint) GetUnitOk() (*string, bool) {
	if o == nil || o.Unit == nil {
		return nil, false
	}
	return o.Unit, true
}

// HasUnit returns a boolean if a field has been set.
func (o *Mint) HasUnit() bool {
	if o != nil && o.Unit != nil {
		return true
	}

	return false
}

// SetUnit gets a reference to the given string and assigns it to the Unit field.
func (o *Mint) SetUnit(v string) {
	o.Unit = &v
}

// GetMetadata returns the Metadata field value if set, zero value otherwise.
func (o *Mint) GetMetadata() string {
	if o == nil || o.Metadata == nil {
		var ret string
		return ret
	}
	return *o.Metadata
}

// GetMetadataOk returns a tuple with the Metadata field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Mint) GetMetadataOk() (*string, bool) {
	if o == nil || o.Metadata == nil {
		return nil, false
	}
	return o.Metadata, true
}

// HasMetadata returns a boolean if a field has been set.
func (o *Mint) HasMetadata() bool {
	if o != nil && o.Metadata != nil {
		return true
	}

	return false
}

// SetMetadata gets a reference to the given string and assigns it to the Metadata field.
func (o *Mint) SetMetadata(v string) {
	o.Metadata = &v
}

// GetTokenId returns the TokenId field value if set, zero value otherwise.
func (o *Mint) GetTokenId() string {
	if o == nil || o.TokenId == nil {
		var ret string
		return ret
	}
	return *o.TokenId
}

// GetTokenIdOk returns a tuple with the TokenId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Mint) GetTokenIdOk() (*string, bool) {
	if o == nil || o.TokenId == nil {
		return nil, false
	}
	return o.TokenId, true
}

// HasTokenId returns a boolean if a field has been set.
func (o *Mint) HasTokenId() bool {
	if o != nil && o.TokenId != nil {
		return true
	}

	return false
}

// SetTokenId gets a reference to the given string and assigns it to the TokenId field.
func (o *Mint) SetTokenId(v string) {
	o.TokenId = &v
}

func (o Mint) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.TokenName != nil {
		toSerialize["tokenName"] = o.TokenName
	}
	if o.Amount != nil {
		toSerialize["amount"] = o.Amount
	}
	if o.Unit != nil {
		toSerialize["unit"] = o.Unit
	}
	if o.Metadata != nil {
		toSerialize["metadata"] = o.Metadata
	}
	if o.TokenId != nil {
		toSerialize["tokenId"] = o.TokenId
	}
	return json.Marshal(toSerialize)
}

type NullableMint struct {
	value *Mint
	isSet bool
}

func (v NullableMint) Get() *Mint {
	return v.value
}

func (v *NullableMint) Set(val *Mint) {
	v.value = val
	v.isSet = true
}

func (v NullableMint) IsSet() bool {
	return v.isSet
}

func (v *NullableMint) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMint(val *Mint) *NullableMint {
	return &NullableMint{value: val, isSet: true}
}

func (v NullableMint) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMint) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


