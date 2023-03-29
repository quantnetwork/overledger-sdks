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

// BeneficiaryMintSchemaQrc721 Who is the beneficiary of this transaction
type BeneficiaryMintSchemaQrc721 struct {
	// The unique identifiers of the beneficiaries
	AccountId *string `json:"accountId,omitempty"`
	Mint *MintSchemaQrc721 `json:"mint,omitempty"`
}

// NewBeneficiaryMintSchemaQrc721 instantiates a new BeneficiaryMintSchemaQrc721 object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewBeneficiaryMintSchemaQrc721() *BeneficiaryMintSchemaQrc721 {
	this := BeneficiaryMintSchemaQrc721{}
	return &this
}

// NewBeneficiaryMintSchemaQrc721WithDefaults instantiates a new BeneficiaryMintSchemaQrc721 object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewBeneficiaryMintSchemaQrc721WithDefaults() *BeneficiaryMintSchemaQrc721 {
	this := BeneficiaryMintSchemaQrc721{}
	return &this
}

// GetAccountId returns the AccountId field value if set, zero value otherwise.
func (o *BeneficiaryMintSchemaQrc721) GetAccountId() string {
	if o == nil || o.AccountId == nil {
		var ret string
		return ret
	}
	return *o.AccountId
}

// GetAccountIdOk returns a tuple with the AccountId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BeneficiaryMintSchemaQrc721) GetAccountIdOk() (*string, bool) {
	if o == nil || o.AccountId == nil {
		return nil, false
	}
	return o.AccountId, true
}

// HasAccountId returns a boolean if a field has been set.
func (o *BeneficiaryMintSchemaQrc721) HasAccountId() bool {
	if o != nil && o.AccountId != nil {
		return true
	}

	return false
}

// SetAccountId gets a reference to the given string and assigns it to the AccountId field.
func (o *BeneficiaryMintSchemaQrc721) SetAccountId(v string) {
	o.AccountId = &v
}

// GetMint returns the Mint field value if set, zero value otherwise.
func (o *BeneficiaryMintSchemaQrc721) GetMint() MintSchemaQrc721 {
	if o == nil || o.Mint == nil {
		var ret MintSchemaQrc721
		return ret
	}
	return *o.Mint
}

// GetMintOk returns a tuple with the Mint field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *BeneficiaryMintSchemaQrc721) GetMintOk() (*MintSchemaQrc721, bool) {
	if o == nil || o.Mint == nil {
		return nil, false
	}
	return o.Mint, true
}

// HasMint returns a boolean if a field has been set.
func (o *BeneficiaryMintSchemaQrc721) HasMint() bool {
	if o != nil && o.Mint != nil {
		return true
	}

	return false
}

// SetMint gets a reference to the given MintSchemaQrc721 and assigns it to the Mint field.
func (o *BeneficiaryMintSchemaQrc721) SetMint(v MintSchemaQrc721) {
	o.Mint = &v
}

func (o BeneficiaryMintSchemaQrc721) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.AccountId != nil {
		toSerialize["accountId"] = o.AccountId
	}
	if o.Mint != nil {
		toSerialize["mint"] = o.Mint
	}
	return json.Marshal(toSerialize)
}

type NullableBeneficiaryMintSchemaQrc721 struct {
	value *BeneficiaryMintSchemaQrc721
	isSet bool
}

func (v NullableBeneficiaryMintSchemaQrc721) Get() *BeneficiaryMintSchemaQrc721 {
	return v.value
}

func (v *NullableBeneficiaryMintSchemaQrc721) Set(val *BeneficiaryMintSchemaQrc721) {
	v.value = val
	v.isSet = true
}

func (v NullableBeneficiaryMintSchemaQrc721) IsSet() bool {
	return v.isSet
}

func (v *NullableBeneficiaryMintSchemaQrc721) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableBeneficiaryMintSchemaQrc721(val *BeneficiaryMintSchemaQrc721) *NullableBeneficiaryMintSchemaQrc721 {
	return &NullableBeneficiaryMintSchemaQrc721{value: val, isSet: true}
}

func (v NullableBeneficiaryMintSchemaQrc721) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableBeneficiaryMintSchemaQrc721) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

