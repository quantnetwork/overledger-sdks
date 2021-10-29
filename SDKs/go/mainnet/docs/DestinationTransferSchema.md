# DestinationTransferSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transfer** | Pointer to [**TransferSchema**](TransferSchema.md) |  | [optional] 
**DestinationId** | Pointer to **string** |  | [optional] 

## Methods

### NewDestinationTransferSchema

`func NewDestinationTransferSchema() *DestinationTransferSchema`

NewDestinationTransferSchema instantiates a new DestinationTransferSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDestinationTransferSchemaWithDefaults

`func NewDestinationTransferSchemaWithDefaults() *DestinationTransferSchema`

NewDestinationTransferSchemaWithDefaults instantiates a new DestinationTransferSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransfer

`func (o *DestinationTransferSchema) GetTransfer() TransferSchema`

GetTransfer returns the Transfer field if non-nil, zero value otherwise.

### GetTransferOk

`func (o *DestinationTransferSchema) GetTransferOk() (*TransferSchema, bool)`

GetTransferOk returns a tuple with the Transfer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransfer

`func (o *DestinationTransferSchema) SetTransfer(v TransferSchema)`

SetTransfer sets Transfer field to given value.

### HasTransfer

`func (o *DestinationTransferSchema) HasTransfer() bool`

HasTransfer returns a boolean if a field has been set.

### GetDestinationId

`func (o *DestinationTransferSchema) GetDestinationId() string`

GetDestinationId returns the DestinationId field if non-nil, zero value otherwise.

### GetDestinationIdOk

`func (o *DestinationTransferSchema) GetDestinationIdOk() (*string, bool)`

GetDestinationIdOk returns a tuple with the DestinationId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestinationId

`func (o *DestinationTransferSchema) SetDestinationId(v string)`

SetDestinationId sets DestinationId field to given value.

### HasDestinationId

`func (o *DestinationTransferSchema) HasDestinationId() bool`

HasDestinationId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


