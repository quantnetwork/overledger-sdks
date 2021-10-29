# AddressMonitoringDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**AddressDetails** | Pointer to [**ResourceMonitoredAddressDetails**](ResourceMonitoredAddressDetails.md) |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**Timestamp** | Pointer to **time.Time** |  | [optional] 

## Methods

### NewAddressMonitoringDetailsSchema

`func NewAddressMonitoringDetailsSchema() *AddressMonitoringDetailsSchema`

NewAddressMonitoringDetailsSchema instantiates a new AddressMonitoringDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAddressMonitoringDetailsSchemaWithDefaults

`func NewAddressMonitoringDetailsSchemaWithDefaults() *AddressMonitoringDetailsSchema`

NewAddressMonitoringDetailsSchemaWithDefaults instantiates a new AddressMonitoringDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLocation

`func (o *AddressMonitoringDetailsSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *AddressMonitoringDetailsSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *AddressMonitoringDetailsSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *AddressMonitoringDetailsSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetAddressDetails

`func (o *AddressMonitoringDetailsSchema) GetAddressDetails() ResourceMonitoredAddressDetails`

GetAddressDetails returns the AddressDetails field if non-nil, zero value otherwise.

### GetAddressDetailsOk

`func (o *AddressMonitoringDetailsSchema) GetAddressDetailsOk() (*ResourceMonitoredAddressDetails, bool)`

GetAddressDetailsOk returns a tuple with the AddressDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddressDetails

`func (o *AddressMonitoringDetailsSchema) SetAddressDetails(v ResourceMonitoredAddressDetails)`

SetAddressDetails sets AddressDetails field to given value.

### HasAddressDetails

`func (o *AddressMonitoringDetailsSchema) HasAddressDetails() bool`

HasAddressDetails returns a boolean if a field has been set.

### GetType

`func (o *AddressMonitoringDetailsSchema) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *AddressMonitoringDetailsSchema) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *AddressMonitoringDetailsSchema) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *AddressMonitoringDetailsSchema) HasType() bool`

HasType returns a boolean if a field has been set.

### GetTimestamp

`func (o *AddressMonitoringDetailsSchema) GetTimestamp() time.Time`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *AddressMonitoringDetailsSchema) GetTimestampOk() (*time.Time, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *AddressMonitoringDetailsSchema) SetTimestamp(v time.Time)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *AddressMonitoringDetailsSchema) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


