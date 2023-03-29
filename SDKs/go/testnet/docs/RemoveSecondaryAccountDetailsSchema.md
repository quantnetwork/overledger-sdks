# RemoveSecondaryAccountDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Owner** | Pointer to [**OwnerRemoveSecondarySchema**](OwnerRemoveSecondarySchema.md) |  | [optional] 
**AdditionalOwner** | Pointer to [**AdditionalOwnerRemoveSecondarySchema**](AdditionalOwnerRemoveSecondarySchema.md) |  | [optional] 
**Message** | Pointer to **string** | Any text-based element of the data payload | [optional] 
**OverledgerSigningType** | Pointer to **string** |  | [optional] 

## Methods

### NewRemoveSecondaryAccountDetailsSchema

`func NewRemoveSecondaryAccountDetailsSchema() *RemoveSecondaryAccountDetailsSchema`

NewRemoveSecondaryAccountDetailsSchema instantiates a new RemoveSecondaryAccountDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRemoveSecondaryAccountDetailsSchemaWithDefaults

`func NewRemoveSecondaryAccountDetailsSchemaWithDefaults() *RemoveSecondaryAccountDetailsSchema`

NewRemoveSecondaryAccountDetailsSchemaWithDefaults instantiates a new RemoveSecondaryAccountDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetOwner

`func (o *RemoveSecondaryAccountDetailsSchema) GetOwner() OwnerRemoveSecondarySchema`

GetOwner returns the Owner field if non-nil, zero value otherwise.

### GetOwnerOk

`func (o *RemoveSecondaryAccountDetailsSchema) GetOwnerOk() (*OwnerRemoveSecondarySchema, bool)`

GetOwnerOk returns a tuple with the Owner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOwner

`func (o *RemoveSecondaryAccountDetailsSchema) SetOwner(v OwnerRemoveSecondarySchema)`

SetOwner sets Owner field to given value.

### HasOwner

`func (o *RemoveSecondaryAccountDetailsSchema) HasOwner() bool`

HasOwner returns a boolean if a field has been set.

### GetAdditionalOwner

`func (o *RemoveSecondaryAccountDetailsSchema) GetAdditionalOwner() AdditionalOwnerRemoveSecondarySchema`

GetAdditionalOwner returns the AdditionalOwner field if non-nil, zero value otherwise.

### GetAdditionalOwnerOk

`func (o *RemoveSecondaryAccountDetailsSchema) GetAdditionalOwnerOk() (*AdditionalOwnerRemoveSecondarySchema, bool)`

GetAdditionalOwnerOk returns a tuple with the AdditionalOwner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAdditionalOwner

`func (o *RemoveSecondaryAccountDetailsSchema) SetAdditionalOwner(v AdditionalOwnerRemoveSecondarySchema)`

SetAdditionalOwner sets AdditionalOwner field to given value.

### HasAdditionalOwner

`func (o *RemoveSecondaryAccountDetailsSchema) HasAdditionalOwner() bool`

HasAdditionalOwner returns a boolean if a field has been set.

### GetMessage

`func (o *RemoveSecondaryAccountDetailsSchema) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *RemoveSecondaryAccountDetailsSchema) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *RemoveSecondaryAccountDetailsSchema) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *RemoveSecondaryAccountDetailsSchema) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetOverledgerSigningType

`func (o *RemoveSecondaryAccountDetailsSchema) GetOverledgerSigningType() string`

GetOverledgerSigningType returns the OverledgerSigningType field if non-nil, zero value otherwise.

### GetOverledgerSigningTypeOk

`func (o *RemoveSecondaryAccountDetailsSchema) GetOverledgerSigningTypeOk() (*string, bool)`

GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerSigningType

`func (o *RemoveSecondaryAccountDetailsSchema) SetOverledgerSigningType(v string)`

SetOverledgerSigningType sets OverledgerSigningType field to given value.

### HasOverledgerSigningType

`func (o *RemoveSecondaryAccountDetailsSchema) HasOverledgerSigningType() bool`

HasOverledgerSigningType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


