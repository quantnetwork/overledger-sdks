# DeleteResourceMonitoringAddressSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AddressMonitoringDetails** | Pointer to [**ResourceMonitoringAddressDetails**](ResourceMonitoringAddressDetails.md) |  | [optional] 
**ResourceMonitoring** | Pointer to [**ResourceMonitoringDetails**](ResourceMonitoringDetails.md) |  | [optional] 

## Methods

### NewDeleteResourceMonitoringAddressSchema

`func NewDeleteResourceMonitoringAddressSchema() *DeleteResourceMonitoringAddressSchema`

NewDeleteResourceMonitoringAddressSchema instantiates a new DeleteResourceMonitoringAddressSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDeleteResourceMonitoringAddressSchemaWithDefaults

`func NewDeleteResourceMonitoringAddressSchemaWithDefaults() *DeleteResourceMonitoringAddressSchema`

NewDeleteResourceMonitoringAddressSchemaWithDefaults instantiates a new DeleteResourceMonitoringAddressSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAddressMonitoringDetails

`func (o *DeleteResourceMonitoringAddressSchema) GetAddressMonitoringDetails() ResourceMonitoringAddressDetails`

GetAddressMonitoringDetails returns the AddressMonitoringDetails field if non-nil, zero value otherwise.

### GetAddressMonitoringDetailsOk

`func (o *DeleteResourceMonitoringAddressSchema) GetAddressMonitoringDetailsOk() (*ResourceMonitoringAddressDetails, bool)`

GetAddressMonitoringDetailsOk returns a tuple with the AddressMonitoringDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddressMonitoringDetails

`func (o *DeleteResourceMonitoringAddressSchema) SetAddressMonitoringDetails(v ResourceMonitoringAddressDetails)`

SetAddressMonitoringDetails sets AddressMonitoringDetails field to given value.

### HasAddressMonitoringDetails

`func (o *DeleteResourceMonitoringAddressSchema) HasAddressMonitoringDetails() bool`

HasAddressMonitoringDetails returns a boolean if a field has been set.

### GetResourceMonitoring

`func (o *DeleteResourceMonitoringAddressSchema) GetResourceMonitoring() ResourceMonitoringDetails`

GetResourceMonitoring returns the ResourceMonitoring field if non-nil, zero value otherwise.

### GetResourceMonitoringOk

`func (o *DeleteResourceMonitoringAddressSchema) GetResourceMonitoringOk() (*ResourceMonitoringDetails, bool)`

GetResourceMonitoringOk returns a tuple with the ResourceMonitoring field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResourceMonitoring

`func (o *DeleteResourceMonitoringAddressSchema) SetResourceMonitoring(v ResourceMonitoringDetails)`

SetResourceMonitoring sets ResourceMonitoring field to given value.

### HasResourceMonitoring

`func (o *DeleteResourceMonitoringAddressSchema) HasResourceMonitoring() bool`

HasResourceMonitoring returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


