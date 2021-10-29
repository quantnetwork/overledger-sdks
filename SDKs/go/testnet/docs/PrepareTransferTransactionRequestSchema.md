# PrepareTransferTransactionRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Urgency** | Pointer to **string** |  | [optional] 
**RequestDetails** | Pointer to [**TransferRequestDetailsSchema**](TransferRequestDetailsSchema.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 

## Methods

### NewPrepareTransferTransactionRequestSchema

`func NewPrepareTransferTransactionRequestSchema() *PrepareTransferTransactionRequestSchema`

NewPrepareTransferTransactionRequestSchema instantiates a new PrepareTransferTransactionRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPrepareTransferTransactionRequestSchemaWithDefaults

`func NewPrepareTransferTransactionRequestSchemaWithDefaults() *PrepareTransferTransactionRequestSchema`

NewPrepareTransferTransactionRequestSchemaWithDefaults instantiates a new PrepareTransferTransactionRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUrgency

`func (o *PrepareTransferTransactionRequestSchema) GetUrgency() string`

GetUrgency returns the Urgency field if non-nil, zero value otherwise.

### GetUrgencyOk

`func (o *PrepareTransferTransactionRequestSchema) GetUrgencyOk() (*string, bool)`

GetUrgencyOk returns a tuple with the Urgency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUrgency

`func (o *PrepareTransferTransactionRequestSchema) SetUrgency(v string)`

SetUrgency sets Urgency field to given value.

### HasUrgency

`func (o *PrepareTransferTransactionRequestSchema) HasUrgency() bool`

HasUrgency returns a boolean if a field has been set.

### GetRequestDetails

`func (o *PrepareTransferTransactionRequestSchema) GetRequestDetails() TransferRequestDetailsSchema`

GetRequestDetails returns the RequestDetails field if non-nil, zero value otherwise.

### GetRequestDetailsOk

`func (o *PrepareTransferTransactionRequestSchema) GetRequestDetailsOk() (*TransferRequestDetailsSchema, bool)`

GetRequestDetailsOk returns a tuple with the RequestDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestDetails

`func (o *PrepareTransferTransactionRequestSchema) SetRequestDetails(v TransferRequestDetailsSchema)`

SetRequestDetails sets RequestDetails field to given value.

### HasRequestDetails

`func (o *PrepareTransferTransactionRequestSchema) HasRequestDetails() bool`

HasRequestDetails returns a boolean if a field has been set.

### GetLocation

`func (o *PrepareTransferTransactionRequestSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *PrepareTransferTransactionRequestSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *PrepareTransferTransactionRequestSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *PrepareTransferTransactionRequestSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetType

`func (o *PrepareTransferTransactionRequestSchema) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *PrepareTransferTransactionRequestSchema) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *PrepareTransferTransactionRequestSchema) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *PrepareTransferTransactionRequestSchema) HasType() bool`

HasType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


