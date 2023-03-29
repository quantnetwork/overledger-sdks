# Owner

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AccountId** | Pointer to **string** |  | [optional] 
**Burn** | Pointer to [**Burn**](Burn.md) |  | [optional] 
**Unit** | Pointer to **string** |  | [optional] 

## Methods

### NewOwner

`func NewOwner() *Owner`

NewOwner instantiates a new Owner object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOwnerWithDefaults

`func NewOwnerWithDefaults() *Owner`

NewOwnerWithDefaults instantiates a new Owner object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAccountId

`func (o *Owner) GetAccountId() string`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *Owner) GetAccountIdOk() (*string, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *Owner) SetAccountId(v string)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *Owner) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetBurn

`func (o *Owner) GetBurn() Burn`

GetBurn returns the Burn field if non-nil, zero value otherwise.

### GetBurnOk

`func (o *Owner) GetBurnOk() (*Burn, bool)`

GetBurnOk returns a tuple with the Burn field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBurn

`func (o *Owner) SetBurn(v Burn)`

SetBurn sets Burn field to given value.

### HasBurn

`func (o *Owner) HasBurn() bool`

HasBurn returns a boolean if a field has been set.

### GetUnit

`func (o *Owner) GetUnit() string`

GetUnit returns the Unit field if non-nil, zero value otherwise.

### GetUnitOk

`func (o *Owner) GetUnitOk() (*string, bool)`

GetUnitOk returns a tuple with the Unit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnit

`func (o *Owner) SetUnit(v string)`

SetUnit sets Unit field to given value.

### HasUnit

`func (o *Owner) HasUnit() bool`

HasUnit returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


