# ExecuteSearchTransactionResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Type** | Pointer to **string** | The type of the transaction object returned | [optional] 
**Transaction** | Pointer to [**Transaction**](Transaction.md) |  | [optional] 
**Timestamp** | Pointer to **string** | The unix time to read the object from | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 
**ExtraFields** | Pointer to **map[string]interface{}** |  | [optional] 

## Methods

### NewExecuteSearchTransactionResponse

`func NewExecuteSearchTransactionResponse() *ExecuteSearchTransactionResponse`

NewExecuteSearchTransactionResponse instantiates a new ExecuteSearchTransactionResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewExecuteSearchTransactionResponseWithDefaults

`func NewExecuteSearchTransactionResponseWithDefaults() *ExecuteSearchTransactionResponse`

NewExecuteSearchTransactionResponseWithDefaults instantiates a new ExecuteSearchTransactionResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLocation

`func (o *ExecuteSearchTransactionResponse) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ExecuteSearchTransactionResponse) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ExecuteSearchTransactionResponse) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ExecuteSearchTransactionResponse) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetType

`func (o *ExecuteSearchTransactionResponse) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ExecuteSearchTransactionResponse) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ExecuteSearchTransactionResponse) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ExecuteSearchTransactionResponse) HasType() bool`

HasType returns a boolean if a field has been set.

### GetTransaction

`func (o *ExecuteSearchTransactionResponse) GetTransaction() Transaction`

GetTransaction returns the Transaction field if non-nil, zero value otherwise.

### GetTransactionOk

`func (o *ExecuteSearchTransactionResponse) GetTransactionOk() (*Transaction, bool)`

GetTransactionOk returns a tuple with the Transaction field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransaction

`func (o *ExecuteSearchTransactionResponse) SetTransaction(v Transaction)`

SetTransaction sets Transaction field to given value.

### HasTransaction

`func (o *ExecuteSearchTransactionResponse) HasTransaction() bool`

HasTransaction returns a boolean if a field has been set.

### GetTimestamp

`func (o *ExecuteSearchTransactionResponse) GetTimestamp() string`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ExecuteSearchTransactionResponse) GetTimestampOk() (*string, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ExecuteSearchTransactionResponse) SetTimestamp(v string)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ExecuteSearchTransactionResponse) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetStatus

`func (o *ExecuteSearchTransactionResponse) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *ExecuteSearchTransactionResponse) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *ExecuteSearchTransactionResponse) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *ExecuteSearchTransactionResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetExtraFields

`func (o *ExecuteSearchTransactionResponse) GetExtraFields() map[string]interface{}`

GetExtraFields returns the ExtraFields field if non-nil, zero value otherwise.

### GetExtraFieldsOk

`func (o *ExecuteSearchTransactionResponse) GetExtraFieldsOk() (*map[string]interface{}, bool)`

GetExtraFieldsOk returns a tuple with the ExtraFields field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraFields

`func (o *ExecuteSearchTransactionResponse) SetExtraFields(v map[string]interface{})`

SetExtraFields sets ExtraFields field to given value.

### HasExtraFields

`func (o *ExecuteSearchTransactionResponse) HasExtraFields() bool`

HasExtraFields returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


