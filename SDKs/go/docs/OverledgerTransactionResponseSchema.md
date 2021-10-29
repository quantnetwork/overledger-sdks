# OverledgerTransactionResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ClientId** | Pointer to **string** |  | [optional] 
**RequestId** | Pointer to **string** |  | [optional] 
**OverledgerTransactionId** | Pointer to **string** |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**TransactionHistory** | Pointer to [**[]Status**](Status.md) |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**TransactionId** | Pointer to **string** |  | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 

## Methods

### NewOverledgerTransactionResponseSchema

`func NewOverledgerTransactionResponseSchema() *OverledgerTransactionResponseSchema`

NewOverledgerTransactionResponseSchema instantiates a new OverledgerTransactionResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOverledgerTransactionResponseSchemaWithDefaults

`func NewOverledgerTransactionResponseSchemaWithDefaults() *OverledgerTransactionResponseSchema`

NewOverledgerTransactionResponseSchemaWithDefaults instantiates a new OverledgerTransactionResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetClientId

`func (o *OverledgerTransactionResponseSchema) GetClientId() string`

GetClientId returns the ClientId field if non-nil, zero value otherwise.

### GetClientIdOk

`func (o *OverledgerTransactionResponseSchema) GetClientIdOk() (*string, bool)`

GetClientIdOk returns a tuple with the ClientId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientId

`func (o *OverledgerTransactionResponseSchema) SetClientId(v string)`

SetClientId sets ClientId field to given value.

### HasClientId

`func (o *OverledgerTransactionResponseSchema) HasClientId() bool`

HasClientId returns a boolean if a field has been set.

### GetRequestId

`func (o *OverledgerTransactionResponseSchema) GetRequestId() string`

GetRequestId returns the RequestId field if non-nil, zero value otherwise.

### GetRequestIdOk

`func (o *OverledgerTransactionResponseSchema) GetRequestIdOk() (*string, bool)`

GetRequestIdOk returns a tuple with the RequestId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestId

`func (o *OverledgerTransactionResponseSchema) SetRequestId(v string)`

SetRequestId sets RequestId field to given value.

### HasRequestId

`func (o *OverledgerTransactionResponseSchema) HasRequestId() bool`

HasRequestId returns a boolean if a field has been set.

### GetOverledgerTransactionId

`func (o *OverledgerTransactionResponseSchema) GetOverledgerTransactionId() string`

GetOverledgerTransactionId returns the OverledgerTransactionId field if non-nil, zero value otherwise.

### GetOverledgerTransactionIdOk

`func (o *OverledgerTransactionResponseSchema) GetOverledgerTransactionIdOk() (*string, bool)`

GetOverledgerTransactionIdOk returns a tuple with the OverledgerTransactionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerTransactionId

`func (o *OverledgerTransactionResponseSchema) SetOverledgerTransactionId(v string)`

SetOverledgerTransactionId sets OverledgerTransactionId field to given value.

### HasOverledgerTransactionId

`func (o *OverledgerTransactionResponseSchema) HasOverledgerTransactionId() bool`

HasOverledgerTransactionId returns a boolean if a field has been set.

### GetLocation

`func (o *OverledgerTransactionResponseSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *OverledgerTransactionResponseSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *OverledgerTransactionResponseSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *OverledgerTransactionResponseSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetTransactionHistory

`func (o *OverledgerTransactionResponseSchema) GetTransactionHistory() []Status`

GetTransactionHistory returns the TransactionHistory field if non-nil, zero value otherwise.

### GetTransactionHistoryOk

`func (o *OverledgerTransactionResponseSchema) GetTransactionHistoryOk() (*[]Status, bool)`

GetTransactionHistoryOk returns a tuple with the TransactionHistory field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransactionHistory

`func (o *OverledgerTransactionResponseSchema) SetTransactionHistory(v []Status)`

SetTransactionHistory sets TransactionHistory field to given value.

### HasTransactionHistory

`func (o *OverledgerTransactionResponseSchema) HasTransactionHistory() bool`

HasTransactionHistory returns a boolean if a field has been set.

### GetType

`func (o *OverledgerTransactionResponseSchema) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *OverledgerTransactionResponseSchema) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *OverledgerTransactionResponseSchema) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *OverledgerTransactionResponseSchema) HasType() bool`

HasType returns a boolean if a field has been set.

### GetTransactionId

`func (o *OverledgerTransactionResponseSchema) GetTransactionId() string`

GetTransactionId returns the TransactionId field if non-nil, zero value otherwise.

### GetTransactionIdOk

`func (o *OverledgerTransactionResponseSchema) GetTransactionIdOk() (*string, bool)`

GetTransactionIdOk returns a tuple with the TransactionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransactionId

`func (o *OverledgerTransactionResponseSchema) SetTransactionId(v string)`

SetTransactionId sets TransactionId field to given value.

### HasTransactionId

`func (o *OverledgerTransactionResponseSchema) HasTransactionId() bool`

HasTransactionId returns a boolean if a field has been set.

### GetStatus

`func (o *OverledgerTransactionResponseSchema) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *OverledgerTransactionResponseSchema) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *OverledgerTransactionResponseSchema) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *OverledgerTransactionResponseSchema) HasStatus() bool`

HasStatus returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


