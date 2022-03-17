# ExecuteSearchUTXOResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**UtxoId** | Pointer to **string** |  | [optional] 
**Destination** | Pointer to [**[]Destination**](Destination.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Timestamp** | Pointer to **string** |  | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 
**NativeData** | Pointer to **map[string]interface{}** |  | [optional] 

## Methods

### NewExecuteSearchUTXOResponse

`func NewExecuteSearchUTXOResponse() *ExecuteSearchUTXOResponse`

NewExecuteSearchUTXOResponse instantiates a new ExecuteSearchUTXOResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewExecuteSearchUTXOResponseWithDefaults

`func NewExecuteSearchUTXOResponseWithDefaults() *ExecuteSearchUTXOResponse`

NewExecuteSearchUTXOResponseWithDefaults instantiates a new ExecuteSearchUTXOResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUtxoId

`func (o *ExecuteSearchUTXOResponse) GetUtxoId() string`

GetUtxoId returns the UtxoId field if non-nil, zero value otherwise.

### GetUtxoIdOk

`func (o *ExecuteSearchUTXOResponse) GetUtxoIdOk() (*string, bool)`

GetUtxoIdOk returns a tuple with the UtxoId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUtxoId

`func (o *ExecuteSearchUTXOResponse) SetUtxoId(v string)`

SetUtxoId sets UtxoId field to given value.

### HasUtxoId

`func (o *ExecuteSearchUTXOResponse) HasUtxoId() bool`

HasUtxoId returns a boolean if a field has been set.

### GetDestination

`func (o *ExecuteSearchUTXOResponse) GetDestination() []Destination`

GetDestination returns the Destination field if non-nil, zero value otherwise.

### GetDestinationOk

`func (o *ExecuteSearchUTXOResponse) GetDestinationOk() (*[]Destination, bool)`

GetDestinationOk returns a tuple with the Destination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestination

`func (o *ExecuteSearchUTXOResponse) SetDestination(v []Destination)`

SetDestination sets Destination field to given value.

### HasDestination

`func (o *ExecuteSearchUTXOResponse) HasDestination() bool`

HasDestination returns a boolean if a field has been set.

### GetLocation

`func (o *ExecuteSearchUTXOResponse) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ExecuteSearchUTXOResponse) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ExecuteSearchUTXOResponse) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ExecuteSearchUTXOResponse) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetTimestamp

`func (o *ExecuteSearchUTXOResponse) GetTimestamp() string`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ExecuteSearchUTXOResponse) GetTimestampOk() (*string, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ExecuteSearchUTXOResponse) SetTimestamp(v string)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ExecuteSearchUTXOResponse) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetStatus

`func (o *ExecuteSearchUTXOResponse) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *ExecuteSearchUTXOResponse) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *ExecuteSearchUTXOResponse) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *ExecuteSearchUTXOResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetNativeData

`func (o *ExecuteSearchUTXOResponse) GetNativeData() map[string]interface{}`

GetNativeData returns the NativeData field if non-nil, zero value otherwise.

### GetNativeDataOk

`func (o *ExecuteSearchUTXOResponse) GetNativeDataOk() (*map[string]interface{}, bool)`

GetNativeDataOk returns a tuple with the NativeData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNativeData

`func (o *ExecuteSearchUTXOResponse) SetNativeData(v map[string]interface{})`

SetNativeData sets NativeData field to given value.

### HasNativeData

`func (o *ExecuteSearchUTXOResponse) HasNativeData() bool`

HasNativeData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


