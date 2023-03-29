# PrepareMintTransactionRequestSchemaQrc20

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Location** | [**Location**](Location.md) |  | 
**Type** | **string** | The type of the transaction | 
**Urgency** | **string** | This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal | 
**RequestDetails** | Pointer to [**MintRequestDetailsSchemaQrc20**](MintRequestDetailsSchemaQrc20.md) |  | [optional] 

## Methods

### NewPrepareMintTransactionRequestSchemaQrc20

`func NewPrepareMintTransactionRequestSchemaQrc20(location Location, type_ string, urgency string, ) *PrepareMintTransactionRequestSchemaQrc20`

NewPrepareMintTransactionRequestSchemaQrc20 instantiates a new PrepareMintTransactionRequestSchemaQrc20 object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPrepareMintTransactionRequestSchemaQrc20WithDefaults

`func NewPrepareMintTransactionRequestSchemaQrc20WithDefaults() *PrepareMintTransactionRequestSchemaQrc20`

NewPrepareMintTransactionRequestSchemaQrc20WithDefaults instantiates a new PrepareMintTransactionRequestSchemaQrc20 object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLocation

`func (o *PrepareMintTransactionRequestSchemaQrc20) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *PrepareMintTransactionRequestSchemaQrc20) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *PrepareMintTransactionRequestSchemaQrc20) SetLocation(v Location)`

SetLocation sets Location field to given value.


### GetType

`func (o *PrepareMintTransactionRequestSchemaQrc20) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *PrepareMintTransactionRequestSchemaQrc20) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *PrepareMintTransactionRequestSchemaQrc20) SetType(v string)`

SetType sets Type field to given value.


### GetUrgency

`func (o *PrepareMintTransactionRequestSchemaQrc20) GetUrgency() string`

GetUrgency returns the Urgency field if non-nil, zero value otherwise.

### GetUrgencyOk

`func (o *PrepareMintTransactionRequestSchemaQrc20) GetUrgencyOk() (*string, bool)`

GetUrgencyOk returns a tuple with the Urgency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUrgency

`func (o *PrepareMintTransactionRequestSchemaQrc20) SetUrgency(v string)`

SetUrgency sets Urgency field to given value.


### GetRequestDetails

`func (o *PrepareMintTransactionRequestSchemaQrc20) GetRequestDetails() MintRequestDetailsSchemaQrc20`

GetRequestDetails returns the RequestDetails field if non-nil, zero value otherwise.

### GetRequestDetailsOk

`func (o *PrepareMintTransactionRequestSchemaQrc20) GetRequestDetailsOk() (*MintRequestDetailsSchemaQrc20, bool)`

GetRequestDetailsOk returns a tuple with the RequestDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestDetails

`func (o *PrepareMintTransactionRequestSchemaQrc20) SetRequestDetails(v MintRequestDetailsSchemaQrc20)`

SetRequestDetails sets RequestDetails field to given value.

### HasRequestDetails

`func (o *PrepareMintTransactionRequestSchemaQrc20) HasRequestDetails() bool`

HasRequestDetails returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


