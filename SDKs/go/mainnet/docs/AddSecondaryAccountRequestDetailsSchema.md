# AddSecondaryAccountRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Owner** | Pointer to [**SecondaryAccountOwnerSchema**](SecondaryAccountOwnerSchema.md) |  | [optional] 
**AdditionalOwner** | Pointer to [**SecondaryAccountAdditionalOwnerSchema**](SecondaryAccountAdditionalOwnerSchema.md) |  | [optional] 

## Methods

### NewAddSecondaryAccountRequestDetailsSchema

`func NewAddSecondaryAccountRequestDetailsSchema() *AddSecondaryAccountRequestDetailsSchema`

NewAddSecondaryAccountRequestDetailsSchema instantiates a new AddSecondaryAccountRequestDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAddSecondaryAccountRequestDetailsSchemaWithDefaults

`func NewAddSecondaryAccountRequestDetailsSchemaWithDefaults() *AddSecondaryAccountRequestDetailsSchema`

NewAddSecondaryAccountRequestDetailsSchemaWithDefaults instantiates a new AddSecondaryAccountRequestDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetOwner

`func (o *AddSecondaryAccountRequestDetailsSchema) GetOwner() SecondaryAccountOwnerSchema`

GetOwner returns the Owner field if non-nil, zero value otherwise.

### GetOwnerOk

`func (o *AddSecondaryAccountRequestDetailsSchema) GetOwnerOk() (*SecondaryAccountOwnerSchema, bool)`

GetOwnerOk returns a tuple with the Owner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOwner

`func (o *AddSecondaryAccountRequestDetailsSchema) SetOwner(v SecondaryAccountOwnerSchema)`

SetOwner sets Owner field to given value.

### HasOwner

`func (o *AddSecondaryAccountRequestDetailsSchema) HasOwner() bool`

HasOwner returns a boolean if a field has been set.

### GetAdditionalOwner

`func (o *AddSecondaryAccountRequestDetailsSchema) GetAdditionalOwner() SecondaryAccountAdditionalOwnerSchema`

GetAdditionalOwner returns the AdditionalOwner field if non-nil, zero value otherwise.

### GetAdditionalOwnerOk

`func (o *AddSecondaryAccountRequestDetailsSchema) GetAdditionalOwnerOk() (*SecondaryAccountAdditionalOwnerSchema, bool)`

GetAdditionalOwnerOk returns a tuple with the AdditionalOwner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAdditionalOwner

`func (o *AddSecondaryAccountRequestDetailsSchema) SetAdditionalOwner(v SecondaryAccountAdditionalOwnerSchema)`

SetAdditionalOwner sets AdditionalOwner field to given value.

### HasAdditionalOwner

`func (o *AddSecondaryAccountRequestDetailsSchema) HasAdditionalOwner() bool`

HasAdditionalOwner returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


