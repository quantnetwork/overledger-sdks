# MintRequestDetailsSchemaQrc20

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Creator** | Pointer to [**CreatorMintSchema**](CreatorMintSchema.md) |  | [optional] 
**Beneficiary** | Pointer to [**BeneficiaryMintSchemaQrc20**](BeneficiaryMintSchemaQrc20.md) |  | [optional] 
**Message** | Pointer to **string** | Any text-based element of the data payload | [optional] 
**OverledgerSigningType** | Pointer to **string** |  | [optional] 

## Methods

### NewMintRequestDetailsSchemaQrc20

`func NewMintRequestDetailsSchemaQrc20() *MintRequestDetailsSchemaQrc20`

NewMintRequestDetailsSchemaQrc20 instantiates a new MintRequestDetailsSchemaQrc20 object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMintRequestDetailsSchemaQrc20WithDefaults

`func NewMintRequestDetailsSchemaQrc20WithDefaults() *MintRequestDetailsSchemaQrc20`

NewMintRequestDetailsSchemaQrc20WithDefaults instantiates a new MintRequestDetailsSchemaQrc20 object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCreator

`func (o *MintRequestDetailsSchemaQrc20) GetCreator() CreatorMintSchema`

GetCreator returns the Creator field if non-nil, zero value otherwise.

### GetCreatorOk

`func (o *MintRequestDetailsSchemaQrc20) GetCreatorOk() (*CreatorMintSchema, bool)`

GetCreatorOk returns a tuple with the Creator field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCreator

`func (o *MintRequestDetailsSchemaQrc20) SetCreator(v CreatorMintSchema)`

SetCreator sets Creator field to given value.

### HasCreator

`func (o *MintRequestDetailsSchemaQrc20) HasCreator() bool`

HasCreator returns a boolean if a field has been set.

### GetBeneficiary

`func (o *MintRequestDetailsSchemaQrc20) GetBeneficiary() BeneficiaryMintSchemaQrc20`

GetBeneficiary returns the Beneficiary field if non-nil, zero value otherwise.

### GetBeneficiaryOk

`func (o *MintRequestDetailsSchemaQrc20) GetBeneficiaryOk() (*BeneficiaryMintSchemaQrc20, bool)`

GetBeneficiaryOk returns a tuple with the Beneficiary field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBeneficiary

`func (o *MintRequestDetailsSchemaQrc20) SetBeneficiary(v BeneficiaryMintSchemaQrc20)`

SetBeneficiary sets Beneficiary field to given value.

### HasBeneficiary

`func (o *MintRequestDetailsSchemaQrc20) HasBeneficiary() bool`

HasBeneficiary returns a boolean if a field has been set.

### GetMessage

`func (o *MintRequestDetailsSchemaQrc20) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *MintRequestDetailsSchemaQrc20) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *MintRequestDetailsSchemaQrc20) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *MintRequestDetailsSchemaQrc20) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetOverledgerSigningType

`func (o *MintRequestDetailsSchemaQrc20) GetOverledgerSigningType() string`

GetOverledgerSigningType returns the OverledgerSigningType field if non-nil, zero value otherwise.

### GetOverledgerSigningTypeOk

`func (o *MintRequestDetailsSchemaQrc20) GetOverledgerSigningTypeOk() (*string, bool)`

GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerSigningType

`func (o *MintRequestDetailsSchemaQrc20) SetOverledgerSigningType(v string)`

SetOverledgerSigningType sets OverledgerSigningType field to given value.

### HasOverledgerSigningType

`func (o *MintRequestDetailsSchemaQrc20) HasOverledgerSigningType() bool`

HasOverledgerSigningType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


