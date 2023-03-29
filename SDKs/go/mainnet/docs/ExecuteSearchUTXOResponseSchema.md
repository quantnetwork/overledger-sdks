# ExecuteSearchUTXOResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**UtxoId** | Pointer to **string** |  | [optional] 
**Destination** | Pointer to [**[]UTXODestination**](UTXODestination.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Timestamp** | Pointer to **string** |  | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 
**NativeData** | Pointer to [**UTXONativeData**](UTXONativeData.md) |  | [optional] 

## Methods

### NewExecuteSearchUTXOResponseSchema

`func NewExecuteSearchUTXOResponseSchema() *ExecuteSearchUTXOResponseSchema`

NewExecuteSearchUTXOResponseSchema instantiates a new ExecuteSearchUTXOResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewExecuteSearchUTXOResponseSchemaWithDefaults

`func NewExecuteSearchUTXOResponseSchemaWithDefaults() *ExecuteSearchUTXOResponseSchema`

NewExecuteSearchUTXOResponseSchemaWithDefaults instantiates a new ExecuteSearchUTXOResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUtxoId

`func (o *ExecuteSearchUTXOResponseSchema) GetUtxoId() string`

GetUtxoId returns the UtxoId field if non-nil, zero value otherwise.

### GetUtxoIdOk

`func (o *ExecuteSearchUTXOResponseSchema) GetUtxoIdOk() (*string, bool)`

GetUtxoIdOk returns a tuple with the UtxoId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUtxoId

`func (o *ExecuteSearchUTXOResponseSchema) SetUtxoId(v string)`

SetUtxoId sets UtxoId field to given value.

### HasUtxoId

`func (o *ExecuteSearchUTXOResponseSchema) HasUtxoId() bool`

HasUtxoId returns a boolean if a field has been set.

### GetDestination

`func (o *ExecuteSearchUTXOResponseSchema) GetDestination() []UTXODestination`

GetDestination returns the Destination field if non-nil, zero value otherwise.

### GetDestinationOk

`func (o *ExecuteSearchUTXOResponseSchema) GetDestinationOk() (*[]UTXODestination, bool)`

GetDestinationOk returns a tuple with the Destination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestination

`func (o *ExecuteSearchUTXOResponseSchema) SetDestination(v []UTXODestination)`

SetDestination sets Destination field to given value.

### HasDestination

`func (o *ExecuteSearchUTXOResponseSchema) HasDestination() bool`

HasDestination returns a boolean if a field has been set.

### GetLocation

`func (o *ExecuteSearchUTXOResponseSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ExecuteSearchUTXOResponseSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ExecuteSearchUTXOResponseSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ExecuteSearchUTXOResponseSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetTimestamp

`func (o *ExecuteSearchUTXOResponseSchema) GetTimestamp() string`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ExecuteSearchUTXOResponseSchema) GetTimestampOk() (*string, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ExecuteSearchUTXOResponseSchema) SetTimestamp(v string)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ExecuteSearchUTXOResponseSchema) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetStatus

`func (o *ExecuteSearchUTXOResponseSchema) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *ExecuteSearchUTXOResponseSchema) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *ExecuteSearchUTXOResponseSchema) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *ExecuteSearchUTXOResponseSchema) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetNativeData

`func (o *ExecuteSearchUTXOResponseSchema) GetNativeData() UTXONativeData`

GetNativeData returns the NativeData field if non-nil, zero value otherwise.

### GetNativeDataOk

`func (o *ExecuteSearchUTXOResponseSchema) GetNativeDataOk() (*UTXONativeData, bool)`

GetNativeDataOk returns a tuple with the NativeData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNativeData

`func (o *ExecuteSearchUTXOResponseSchema) SetNativeData(v UTXONativeData)`

SetNativeData sets NativeData field to given value.

### HasNativeData

`func (o *ExecuteSearchUTXOResponseSchema) HasNativeData() bool`

HasNativeData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


