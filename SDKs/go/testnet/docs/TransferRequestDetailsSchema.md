# TransferRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Destination** | Pointer to [**[]DestinationTransferSchema**](DestinationTransferSchema.md) |  | [optional] 
**Message** | Pointer to **string** |  | [optional] 
**OverledgerSigningType** | Pointer to **string** |  | [optional] 
**Origin** | Pointer to [**[]OriginTransferSchema**](OriginTransferSchema.md) |  | [optional] 

## Methods

### NewTransferRequestDetailsSchema

`func NewTransferRequestDetailsSchema() *TransferRequestDetailsSchema`

NewTransferRequestDetailsSchema instantiates a new TransferRequestDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransferRequestDetailsSchemaWithDefaults

`func NewTransferRequestDetailsSchemaWithDefaults() *TransferRequestDetailsSchema`

NewTransferRequestDetailsSchemaWithDefaults instantiates a new TransferRequestDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDestination

`func (o *TransferRequestDetailsSchema) GetDestination() []DestinationTransferSchema`

GetDestination returns the Destination field if non-nil, zero value otherwise.

### GetDestinationOk

`func (o *TransferRequestDetailsSchema) GetDestinationOk() (*[]DestinationTransferSchema, bool)`

GetDestinationOk returns a tuple with the Destination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestination

`func (o *TransferRequestDetailsSchema) SetDestination(v []DestinationTransferSchema)`

SetDestination sets Destination field to given value.

### HasDestination

`func (o *TransferRequestDetailsSchema) HasDestination() bool`

HasDestination returns a boolean if a field has been set.

### GetMessage

`func (o *TransferRequestDetailsSchema) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *TransferRequestDetailsSchema) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *TransferRequestDetailsSchema) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *TransferRequestDetailsSchema) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetOverledgerSigningType

`func (o *TransferRequestDetailsSchema) GetOverledgerSigningType() string`

GetOverledgerSigningType returns the OverledgerSigningType field if non-nil, zero value otherwise.

### GetOverledgerSigningTypeOk

`func (o *TransferRequestDetailsSchema) GetOverledgerSigningTypeOk() (*string, bool)`

GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerSigningType

`func (o *TransferRequestDetailsSchema) SetOverledgerSigningType(v string)`

SetOverledgerSigningType sets OverledgerSigningType field to given value.

### HasOverledgerSigningType

`func (o *TransferRequestDetailsSchema) HasOverledgerSigningType() bool`

HasOverledgerSigningType returns a boolean if a field has been set.

### GetOrigin

`func (o *TransferRequestDetailsSchema) GetOrigin() []OriginTransferSchema`

GetOrigin returns the Origin field if non-nil, zero value otherwise.

### GetOriginOk

`func (o *TransferRequestDetailsSchema) GetOriginOk() (*[]OriginTransferSchema, bool)`

GetOriginOk returns a tuple with the Origin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrigin

`func (o *TransferRequestDetailsSchema) SetOrigin(v []OriginTransferSchema)`

SetOrigin sets Origin field to given value.

### HasOrigin

`func (o *TransferRequestDetailsSchema) HasOrigin() bool`

HasOrigin returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


