# PrepareAndExecuteSearchAddressBalanceResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Balances** | Pointer to [**[]PrepareAndExecuteBalanceDetails**](PrepareAndExecuteBalanceDetails.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Timestamp** | Pointer to **string** |  | [optional] 
**AddressId** | Pointer to **string** |  | [optional] 

## Methods

### NewPrepareAndExecuteSearchAddressBalanceResponse

`func NewPrepareAndExecuteSearchAddressBalanceResponse() *PrepareAndExecuteSearchAddressBalanceResponse`

NewPrepareAndExecuteSearchAddressBalanceResponse instantiates a new PrepareAndExecuteSearchAddressBalanceResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPrepareAndExecuteSearchAddressBalanceResponseWithDefaults

`func NewPrepareAndExecuteSearchAddressBalanceResponseWithDefaults() *PrepareAndExecuteSearchAddressBalanceResponse`

NewPrepareAndExecuteSearchAddressBalanceResponseWithDefaults instantiates a new PrepareAndExecuteSearchAddressBalanceResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetBalances

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetBalances() []PrepareAndExecuteBalanceDetails`

GetBalances returns the Balances field if non-nil, zero value otherwise.

### GetBalancesOk

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetBalancesOk() (*[]PrepareAndExecuteBalanceDetails, bool)`

GetBalancesOk returns a tuple with the Balances field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBalances

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) SetBalances(v []PrepareAndExecuteBalanceDetails)`

SetBalances sets Balances field to given value.

### HasBalances

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) HasBalances() bool`

HasBalances returns a boolean if a field has been set.

### GetLocation

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetTimestamp

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetTimestamp() string`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetTimestampOk() (*string, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) SetTimestamp(v string)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetAddressId

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetAddressId() string`

GetAddressId returns the AddressId field if non-nil, zero value otherwise.

### GetAddressIdOk

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) GetAddressIdOk() (*string, bool)`

GetAddressIdOk returns a tuple with the AddressId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddressId

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) SetAddressId(v string)`

SetAddressId sets AddressId field to given value.

### HasAddressId

`func (o *PrepareAndExecuteSearchAddressBalanceResponse) HasAddressId() bool`

HasAddressId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


