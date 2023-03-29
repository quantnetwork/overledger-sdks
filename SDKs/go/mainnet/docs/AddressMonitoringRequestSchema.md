# AddressMonitoringRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**CallBackURL** | Pointer to **string** |  | [optional] 
**AddressId** | Pointer to **string** |  | [optional] 

## Methods

### NewAddressMonitoringRequestSchema

`func NewAddressMonitoringRequestSchema() *AddressMonitoringRequestSchema`

NewAddressMonitoringRequestSchema instantiates a new AddressMonitoringRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAddressMonitoringRequestSchemaWithDefaults

`func NewAddressMonitoringRequestSchemaWithDefaults() *AddressMonitoringRequestSchema`

NewAddressMonitoringRequestSchemaWithDefaults instantiates a new AddressMonitoringRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetLocation

`func (o *AddressMonitoringRequestSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *AddressMonitoringRequestSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *AddressMonitoringRequestSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *AddressMonitoringRequestSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetCallBackURL

`func (o *AddressMonitoringRequestSchema) GetCallBackURL() string`

GetCallBackURL returns the CallBackURL field if non-nil, zero value otherwise.

### GetCallBackURLOk

`func (o *AddressMonitoringRequestSchema) GetCallBackURLOk() (*string, bool)`

GetCallBackURLOk returns a tuple with the CallBackURL field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallBackURL

`func (o *AddressMonitoringRequestSchema) SetCallBackURL(v string)`

SetCallBackURL sets CallBackURL field to given value.

### HasCallBackURL

`func (o *AddressMonitoringRequestSchema) HasCallBackURL() bool`

HasCallBackURL returns a boolean if a field has been set.

### GetAddressId

`func (o *AddressMonitoringRequestSchema) GetAddressId() string`

GetAddressId returns the AddressId field if non-nil, zero value otherwise.

### GetAddressIdOk

`func (o *AddressMonitoringRequestSchema) GetAddressIdOk() (*string, bool)`

GetAddressIdOk returns a tuple with the AddressId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddressId

`func (o *AddressMonitoringRequestSchema) SetAddressId(v string)`

SetAddressId sets AddressId field to given value.

### HasAddressId

`func (o *AddressMonitoringRequestSchema) HasAddressId() bool`

HasAddressId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


