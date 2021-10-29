# Vout

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ScriptPubKey** | Pointer to [**ScriptPubKey**](ScriptPubKey.md) |  | [optional] 
**Value** | Pointer to **float32** |  | [optional] 
**N** | Pointer to **float32** |  | [optional] 

## Methods

### NewVout

`func NewVout() *Vout`

NewVout instantiates a new Vout object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewVoutWithDefaults

`func NewVoutWithDefaults() *Vout`

NewVoutWithDefaults instantiates a new Vout object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetScriptPubKey

`func (o *Vout) GetScriptPubKey() ScriptPubKey`

GetScriptPubKey returns the ScriptPubKey field if non-nil, zero value otherwise.

### GetScriptPubKeyOk

`func (o *Vout) GetScriptPubKeyOk() (*ScriptPubKey, bool)`

GetScriptPubKeyOk returns a tuple with the ScriptPubKey field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetScriptPubKey

`func (o *Vout) SetScriptPubKey(v ScriptPubKey)`

SetScriptPubKey sets ScriptPubKey field to given value.

### HasScriptPubKey

`func (o *Vout) HasScriptPubKey() bool`

HasScriptPubKey returns a boolean if a field has been set.

### GetValue

`func (o *Vout) GetValue() float32`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *Vout) GetValueOk() (*float32, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *Vout) SetValue(v float32)`

SetValue sets Value field to given value.

### HasValue

`func (o *Vout) HasValue() bool`

HasValue returns a boolean if a field has been set.

### GetN

`func (o *Vout) GetN() float32`

GetN returns the N field if non-nil, zero value otherwise.

### GetNOk

`func (o *Vout) GetNOk() (*float32, bool)`

GetNOk returns a tuple with the N field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetN

`func (o *Vout) SetN(v float32)`

SetN sets N field to given value.

### HasN

`func (o *Vout) HasN() bool`

HasN returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


