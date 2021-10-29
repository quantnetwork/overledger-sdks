# ScriptPubKey

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Addresses** | Pointer to **[]string** |  | [optional] 
**Asm** | Pointer to **string** |  | [optional] 
**Hex** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**ReqSigs** | Pointer to **string** |  | [optional] 

## Methods

### NewScriptPubKey

`func NewScriptPubKey() *ScriptPubKey`

NewScriptPubKey instantiates a new ScriptPubKey object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewScriptPubKeyWithDefaults

`func NewScriptPubKeyWithDefaults() *ScriptPubKey`

NewScriptPubKeyWithDefaults instantiates a new ScriptPubKey object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAddresses

`func (o *ScriptPubKey) GetAddresses() []string`

GetAddresses returns the Addresses field if non-nil, zero value otherwise.

### GetAddressesOk

`func (o *ScriptPubKey) GetAddressesOk() (*[]string, bool)`

GetAddressesOk returns a tuple with the Addresses field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddresses

`func (o *ScriptPubKey) SetAddresses(v []string)`

SetAddresses sets Addresses field to given value.

### HasAddresses

`func (o *ScriptPubKey) HasAddresses() bool`

HasAddresses returns a boolean if a field has been set.

### GetAsm

`func (o *ScriptPubKey) GetAsm() string`

GetAsm returns the Asm field if non-nil, zero value otherwise.

### GetAsmOk

`func (o *ScriptPubKey) GetAsmOk() (*string, bool)`

GetAsmOk returns a tuple with the Asm field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAsm

`func (o *ScriptPubKey) SetAsm(v string)`

SetAsm sets Asm field to given value.

### HasAsm

`func (o *ScriptPubKey) HasAsm() bool`

HasAsm returns a boolean if a field has been set.

### GetHex

`func (o *ScriptPubKey) GetHex() string`

GetHex returns the Hex field if non-nil, zero value otherwise.

### GetHexOk

`func (o *ScriptPubKey) GetHexOk() (*string, bool)`

GetHexOk returns a tuple with the Hex field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHex

`func (o *ScriptPubKey) SetHex(v string)`

SetHex sets Hex field to given value.

### HasHex

`func (o *ScriptPubKey) HasHex() bool`

HasHex returns a boolean if a field has been set.

### GetType

`func (o *ScriptPubKey) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ScriptPubKey) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ScriptPubKey) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ScriptPubKey) HasType() bool`

HasType returns a boolean if a field has been set.

### GetReqSigs

`func (o *ScriptPubKey) GetReqSigs() string`

GetReqSigs returns the ReqSigs field if non-nil, zero value otherwise.

### GetReqSigsOk

`func (o *ScriptPubKey) GetReqSigsOk() (*string, bool)`

GetReqSigsOk returns a tuple with the ReqSigs field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReqSigs

`func (o *ScriptPubKey) SetReqSigs(v string)`

SetReqSigs sets ReqSigs field to given value.

### HasReqSigs

`func (o *ScriptPubKey) HasReqSigs() bool`

HasReqSigs returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


