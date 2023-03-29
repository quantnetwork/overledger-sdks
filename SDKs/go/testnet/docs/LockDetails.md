# LockDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ExpiryDate** | Pointer to **string** |  | [optional] 
**LockId** | Pointer to **string** |  | [optional] 
**AccountId** | Pointer to **string** |  | [optional] 
**Amount** | Pointer to **string** |  | [optional] 
**Unit** | Pointer to **string** |  | [optional] 
**AccountOwningInstitutionId** | Pointer to **string** |  | [optional] 
**LockDescription** | Pointer to **string** |  | [optional] 
**PayeeId** | Pointer to **string** |  | [optional] 
**Secret** | Pointer to **string** |  | [optional] 
**Hash** | Pointer to **string** |  | [optional] 
**PayeeOwningInstitutionId** | Pointer to **string** |  | [optional] 
**LockOwningInstitutionId** | Pointer to **string** |  | [optional] 

## Methods

### NewLockDetails

`func NewLockDetails() *LockDetails`

NewLockDetails instantiates a new LockDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLockDetailsWithDefaults

`func NewLockDetailsWithDefaults() *LockDetails`

NewLockDetailsWithDefaults instantiates a new LockDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetExpiryDate

`func (o *LockDetails) GetExpiryDate() string`

GetExpiryDate returns the ExpiryDate field if non-nil, zero value otherwise.

### GetExpiryDateOk

`func (o *LockDetails) GetExpiryDateOk() (*string, bool)`

GetExpiryDateOk returns a tuple with the ExpiryDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExpiryDate

`func (o *LockDetails) SetExpiryDate(v string)`

SetExpiryDate sets ExpiryDate field to given value.

### HasExpiryDate

`func (o *LockDetails) HasExpiryDate() bool`

HasExpiryDate returns a boolean if a field has been set.

### GetLockId

`func (o *LockDetails) GetLockId() string`

GetLockId returns the LockId field if non-nil, zero value otherwise.

### GetLockIdOk

`func (o *LockDetails) GetLockIdOk() (*string, bool)`

GetLockIdOk returns a tuple with the LockId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLockId

`func (o *LockDetails) SetLockId(v string)`

SetLockId sets LockId field to given value.

### HasLockId

`func (o *LockDetails) HasLockId() bool`

HasLockId returns a boolean if a field has been set.

### GetAccountId

`func (o *LockDetails) GetAccountId() string`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *LockDetails) GetAccountIdOk() (*string, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *LockDetails) SetAccountId(v string)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *LockDetails) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetAmount

`func (o *LockDetails) GetAmount() string`

GetAmount returns the Amount field if non-nil, zero value otherwise.

### GetAmountOk

`func (o *LockDetails) GetAmountOk() (*string, bool)`

GetAmountOk returns a tuple with the Amount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAmount

`func (o *LockDetails) SetAmount(v string)`

SetAmount sets Amount field to given value.

### HasAmount

`func (o *LockDetails) HasAmount() bool`

HasAmount returns a boolean if a field has been set.

### GetUnit

`func (o *LockDetails) GetUnit() string`

GetUnit returns the Unit field if non-nil, zero value otherwise.

### GetUnitOk

`func (o *LockDetails) GetUnitOk() (*string, bool)`

GetUnitOk returns a tuple with the Unit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnit

`func (o *LockDetails) SetUnit(v string)`

SetUnit sets Unit field to given value.

### HasUnit

`func (o *LockDetails) HasUnit() bool`

HasUnit returns a boolean if a field has been set.

### GetAccountOwningInstitutionId

`func (o *LockDetails) GetAccountOwningInstitutionId() string`

GetAccountOwningInstitutionId returns the AccountOwningInstitutionId field if non-nil, zero value otherwise.

### GetAccountOwningInstitutionIdOk

`func (o *LockDetails) GetAccountOwningInstitutionIdOk() (*string, bool)`

GetAccountOwningInstitutionIdOk returns a tuple with the AccountOwningInstitutionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountOwningInstitutionId

`func (o *LockDetails) SetAccountOwningInstitutionId(v string)`

SetAccountOwningInstitutionId sets AccountOwningInstitutionId field to given value.

### HasAccountOwningInstitutionId

`func (o *LockDetails) HasAccountOwningInstitutionId() bool`

HasAccountOwningInstitutionId returns a boolean if a field has been set.

### GetLockDescription

`func (o *LockDetails) GetLockDescription() string`

GetLockDescription returns the LockDescription field if non-nil, zero value otherwise.

### GetLockDescriptionOk

`func (o *LockDetails) GetLockDescriptionOk() (*string, bool)`

GetLockDescriptionOk returns a tuple with the LockDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLockDescription

`func (o *LockDetails) SetLockDescription(v string)`

SetLockDescription sets LockDescription field to given value.

### HasLockDescription

`func (o *LockDetails) HasLockDescription() bool`

HasLockDescription returns a boolean if a field has been set.

### GetPayeeId

`func (o *LockDetails) GetPayeeId() string`

GetPayeeId returns the PayeeId field if non-nil, zero value otherwise.

### GetPayeeIdOk

`func (o *LockDetails) GetPayeeIdOk() (*string, bool)`

GetPayeeIdOk returns a tuple with the PayeeId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayeeId

`func (o *LockDetails) SetPayeeId(v string)`

SetPayeeId sets PayeeId field to given value.

### HasPayeeId

`func (o *LockDetails) HasPayeeId() bool`

HasPayeeId returns a boolean if a field has been set.

### GetSecret

`func (o *LockDetails) GetSecret() string`

GetSecret returns the Secret field if non-nil, zero value otherwise.

### GetSecretOk

`func (o *LockDetails) GetSecretOk() (*string, bool)`

GetSecretOk returns a tuple with the Secret field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSecret

`func (o *LockDetails) SetSecret(v string)`

SetSecret sets Secret field to given value.

### HasSecret

`func (o *LockDetails) HasSecret() bool`

HasSecret returns a boolean if a field has been set.

### GetHash

`func (o *LockDetails) GetHash() string`

GetHash returns the Hash field if non-nil, zero value otherwise.

### GetHashOk

`func (o *LockDetails) GetHashOk() (*string, bool)`

GetHashOk returns a tuple with the Hash field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHash

`func (o *LockDetails) SetHash(v string)`

SetHash sets Hash field to given value.

### HasHash

`func (o *LockDetails) HasHash() bool`

HasHash returns a boolean if a field has been set.

### GetPayeeOwningInstitutionId

`func (o *LockDetails) GetPayeeOwningInstitutionId() string`

GetPayeeOwningInstitutionId returns the PayeeOwningInstitutionId field if non-nil, zero value otherwise.

### GetPayeeOwningInstitutionIdOk

`func (o *LockDetails) GetPayeeOwningInstitutionIdOk() (*string, bool)`

GetPayeeOwningInstitutionIdOk returns a tuple with the PayeeOwningInstitutionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayeeOwningInstitutionId

`func (o *LockDetails) SetPayeeOwningInstitutionId(v string)`

SetPayeeOwningInstitutionId sets PayeeOwningInstitutionId field to given value.

### HasPayeeOwningInstitutionId

`func (o *LockDetails) HasPayeeOwningInstitutionId() bool`

HasPayeeOwningInstitutionId returns a boolean if a field has been set.

### GetLockOwningInstitutionId

`func (o *LockDetails) GetLockOwningInstitutionId() string`

GetLockOwningInstitutionId returns the LockOwningInstitutionId field if non-nil, zero value otherwise.

### GetLockOwningInstitutionIdOk

`func (o *LockDetails) GetLockOwningInstitutionIdOk() (*string, bool)`

GetLockOwningInstitutionIdOk returns a tuple with the LockOwningInstitutionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLockOwningInstitutionId

`func (o *LockDetails) SetLockOwningInstitutionId(v string)`

SetLockOwningInstitutionId sets LockOwningInstitutionId field to given value.

### HasLockOwningInstitutionId

`func (o *LockDetails) HasLockOwningInstitutionId() bool`

HasLockOwningInstitutionId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


