# ExecuteTransactionResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Urgency** | Pointer to **string** |  | [optional] 
**RequestId** | Pointer to **string** | The ID assigned to a preparation request in Overledger | [optional] 
**OverledgerTransactionId** | Pointer to **string** |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Type** | Pointer to **string** | The type of the transaction executed | [optional] 
**TransactionId** | Pointer to **string** | The ID assigned by Overledger to a transaction submitted to a DLT via Overledger | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 

## Methods

### NewExecuteTransactionResponse

`func NewExecuteTransactionResponse() *ExecuteTransactionResponse`

NewExecuteTransactionResponse instantiates a new ExecuteTransactionResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewExecuteTransactionResponseWithDefaults

`func NewExecuteTransactionResponseWithDefaults() *ExecuteTransactionResponse`

NewExecuteTransactionResponseWithDefaults instantiates a new ExecuteTransactionResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUrgency

`func (o *ExecuteTransactionResponse) GetUrgency() string`

GetUrgency returns the Urgency field if non-nil, zero value otherwise.

### GetUrgencyOk

`func (o *ExecuteTransactionResponse) GetUrgencyOk() (*string, bool)`

GetUrgencyOk returns a tuple with the Urgency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUrgency

`func (o *ExecuteTransactionResponse) SetUrgency(v string)`

SetUrgency sets Urgency field to given value.

### HasUrgency

`func (o *ExecuteTransactionResponse) HasUrgency() bool`

HasUrgency returns a boolean if a field has been set.

### GetRequestId

`func (o *ExecuteTransactionResponse) GetRequestId() string`

GetRequestId returns the RequestId field if non-nil, zero value otherwise.

### GetRequestIdOk

`func (o *ExecuteTransactionResponse) GetRequestIdOk() (*string, bool)`

GetRequestIdOk returns a tuple with the RequestId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestId

`func (o *ExecuteTransactionResponse) SetRequestId(v string)`

SetRequestId sets RequestId field to given value.

### HasRequestId

`func (o *ExecuteTransactionResponse) HasRequestId() bool`

HasRequestId returns a boolean if a field has been set.

### GetOverledgerTransactionId

`func (o *ExecuteTransactionResponse) GetOverledgerTransactionId() string`

GetOverledgerTransactionId returns the OverledgerTransactionId field if non-nil, zero value otherwise.

### GetOverledgerTransactionIdOk

`func (o *ExecuteTransactionResponse) GetOverledgerTransactionIdOk() (*string, bool)`

GetOverledgerTransactionIdOk returns a tuple with the OverledgerTransactionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerTransactionId

`func (o *ExecuteTransactionResponse) SetOverledgerTransactionId(v string)`

SetOverledgerTransactionId sets OverledgerTransactionId field to given value.

### HasOverledgerTransactionId

`func (o *ExecuteTransactionResponse) HasOverledgerTransactionId() bool`

HasOverledgerTransactionId returns a boolean if a field has been set.

### GetLocation

`func (o *ExecuteTransactionResponse) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ExecuteTransactionResponse) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ExecuteTransactionResponse) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ExecuteTransactionResponse) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetType

`func (o *ExecuteTransactionResponse) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ExecuteTransactionResponse) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ExecuteTransactionResponse) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ExecuteTransactionResponse) HasType() bool`

HasType returns a boolean if a field has been set.

### GetTransactionId

`func (o *ExecuteTransactionResponse) GetTransactionId() string`

GetTransactionId returns the TransactionId field if non-nil, zero value otherwise.

### GetTransactionIdOk

`func (o *ExecuteTransactionResponse) GetTransactionIdOk() (*string, bool)`

GetTransactionIdOk returns a tuple with the TransactionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransactionId

`func (o *ExecuteTransactionResponse) SetTransactionId(v string)`

SetTransactionId sets TransactionId field to given value.

### HasTransactionId

`func (o *ExecuteTransactionResponse) HasTransactionId() bool`

HasTransactionId returns a boolean if a field has been set.

### GetStatus

`func (o *ExecuteTransactionResponse) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *ExecuteTransactionResponse) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *ExecuteTransactionResponse) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *ExecuteTransactionResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


