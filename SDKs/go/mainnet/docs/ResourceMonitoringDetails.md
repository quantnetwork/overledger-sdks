# ResourceMonitoringDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ResourceMonitoringId** | Pointer to **string** |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**Timestamp** | Pointer to **time.Time** |  | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 

## Methods

### NewResourceMonitoringDetails

`func NewResourceMonitoringDetails() *ResourceMonitoringDetails`

NewResourceMonitoringDetails instantiates a new ResourceMonitoringDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewResourceMonitoringDetailsWithDefaults

`func NewResourceMonitoringDetailsWithDefaults() *ResourceMonitoringDetails`

NewResourceMonitoringDetailsWithDefaults instantiates a new ResourceMonitoringDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetResourceMonitoringId

`func (o *ResourceMonitoringDetails) GetResourceMonitoringId() string`

GetResourceMonitoringId returns the ResourceMonitoringId field if non-nil, zero value otherwise.

### GetResourceMonitoringIdOk

`func (o *ResourceMonitoringDetails) GetResourceMonitoringIdOk() (*string, bool)`

GetResourceMonitoringIdOk returns a tuple with the ResourceMonitoringId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResourceMonitoringId

`func (o *ResourceMonitoringDetails) SetResourceMonitoringId(v string)`

SetResourceMonitoringId sets ResourceMonitoringId field to given value.

### HasResourceMonitoringId

`func (o *ResourceMonitoringDetails) HasResourceMonitoringId() bool`

HasResourceMonitoringId returns a boolean if a field has been set.

### GetLocation

`func (o *ResourceMonitoringDetails) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ResourceMonitoringDetails) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ResourceMonitoringDetails) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ResourceMonitoringDetails) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetType

`func (o *ResourceMonitoringDetails) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ResourceMonitoringDetails) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ResourceMonitoringDetails) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ResourceMonitoringDetails) HasType() bool`

HasType returns a boolean if a field has been set.

### GetTimestamp

`func (o *ResourceMonitoringDetails) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *ResourceMonitoringDetails) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *ResourceMonitoringDetails) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *ResourceMonitoringDetails) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetStatus

`func (o *ResourceMonitoringDetails) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *ResourceMonitoringDetails) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *ResourceMonitoringDetails) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *ResourceMonitoringDetails) HasStatus() bool`

HasStatus returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


