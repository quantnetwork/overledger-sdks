# BurnRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Owner** | Pointer to [**[]OwnerBurnSchema**](OwnerBurnSchema.md) | Who is the owner of the tokens | [optional] 
**Message** | Pointer to **string** | Any text-based element of the data payload | [optional] 
**OverledgerSigningType** | Pointer to **string** |  | [optional] 

## Methods

### NewBurnRequestDetailsSchema

`func NewBurnRequestDetailsSchema() *BurnRequestDetailsSchema`

NewBurnRequestDetailsSchema instantiates a new BurnRequestDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBurnRequestDetailsSchemaWithDefaults

`func NewBurnRequestDetailsSchemaWithDefaults() *BurnRequestDetailsSchema`

NewBurnRequestDetailsSchemaWithDefaults instantiates a new BurnRequestDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetOwner

`func (o *BurnRequestDetailsSchema) GetOwner() []OwnerBurnSchema`

GetOwner returns the Owner field if non-nil, zero value otherwise.

### GetOwnerOk

`func (o *BurnRequestDetailsSchema) GetOwnerOk() (*[]OwnerBurnSchema, bool)`

GetOwnerOk returns a tuple with the Owner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOwner

`func (o *BurnRequestDetailsSchema) SetOwner(v []OwnerBurnSchema)`

SetOwner sets Owner field to given value.

### HasOwner

`func (o *BurnRequestDetailsSchema) HasOwner() bool`

HasOwner returns a boolean if a field has been set.

### GetMessage

`func (o *BurnRequestDetailsSchema) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *BurnRequestDetailsSchema) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *BurnRequestDetailsSchema) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *BurnRequestDetailsSchema) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetOverledgerSigningType

`func (o *BurnRequestDetailsSchema) GetOverledgerSigningType() string`

GetOverledgerSigningType returns the OverledgerSigningType field if non-nil, zero value otherwise.

### GetOverledgerSigningTypeOk

`func (o *BurnRequestDetailsSchema) GetOverledgerSigningTypeOk() (*string, bool)`

GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerSigningType

`func (o *BurnRequestDetailsSchema) SetOverledgerSigningType(v string)`

SetOverledgerSigningType sets OverledgerSigningType field to given value.

### HasOverledgerSigningType

`func (o *BurnRequestDetailsSchema) HasOverledgerSigningType() bool`

HasOverledgerSigningType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


