# Beneficiary

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AccountId** | Pointer to **string** | The unique identifiers of the account | [optional] 
**Mint** | Pointer to [**Mint**](Mint.md) |  | [optional] 

## Methods

### NewBeneficiary

`func NewBeneficiary() *Beneficiary`

NewBeneficiary instantiates a new Beneficiary object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBeneficiaryWithDefaults

`func NewBeneficiaryWithDefaults() *Beneficiary`

NewBeneficiaryWithDefaults instantiates a new Beneficiary object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAccountId

`func (o *Beneficiary) GetAccountId() string`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *Beneficiary) GetAccountIdOk() (*string, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *Beneficiary) SetAccountId(v string)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *Beneficiary) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetMint

`func (o *Beneficiary) GetMint() Mint`

GetMint returns the Mint field if non-nil, zero value otherwise.

### GetMintOk

`func (o *Beneficiary) GetMintOk() (*Mint, bool)`

GetMintOk returns a tuple with the Mint field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMint

`func (o *Beneficiary) SetMint(v Mint)`

SetMint sets Mint field to given value.

### HasMint

`func (o *Beneficiary) HasMint() bool`

HasMint returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


