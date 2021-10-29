# AddressMonitoringResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SubscriptionDetails** | Pointer to [**ResourceMonitoringSubscriptionDetails**](ResourceMonitoringSubscriptionDetails.md) |  | [optional] 
**ResourceMonitoring** | Pointer to [**ResourceMonitoringDetails**](ResourceMonitoringDetails.md) |  | [optional] 
**Subscription** | Pointer to [**ResourceMonitoringSubscription**](ResourceMonitoringSubscription.md) |  | [optional] 

## Methods

### NewAddressMonitoringResponseSchema

`func NewAddressMonitoringResponseSchema() *AddressMonitoringResponseSchema`

NewAddressMonitoringResponseSchema instantiates a new AddressMonitoringResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAddressMonitoringResponseSchemaWithDefaults

`func NewAddressMonitoringResponseSchemaWithDefaults() *AddressMonitoringResponseSchema`

NewAddressMonitoringResponseSchemaWithDefaults instantiates a new AddressMonitoringResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSubscriptionDetails

`func (o *AddressMonitoringResponseSchema) GetSubscriptionDetails() ResourceMonitoringSubscriptionDetails`

GetSubscriptionDetails returns the SubscriptionDetails field if non-nil, zero value otherwise.

### GetSubscriptionDetailsOk

`func (o *AddressMonitoringResponseSchema) GetSubscriptionDetailsOk() (*ResourceMonitoringSubscriptionDetails, bool)`

GetSubscriptionDetailsOk returns a tuple with the SubscriptionDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionDetails

`func (o *AddressMonitoringResponseSchema) SetSubscriptionDetails(v ResourceMonitoringSubscriptionDetails)`

SetSubscriptionDetails sets SubscriptionDetails field to given value.

### HasSubscriptionDetails

`func (o *AddressMonitoringResponseSchema) HasSubscriptionDetails() bool`

HasSubscriptionDetails returns a boolean if a field has been set.

### GetResourceMonitoring

`func (o *AddressMonitoringResponseSchema) GetResourceMonitoring() ResourceMonitoringDetails`

GetResourceMonitoring returns the ResourceMonitoring field if non-nil, zero value otherwise.

### GetResourceMonitoringOk

`func (o *AddressMonitoringResponseSchema) GetResourceMonitoringOk() (*ResourceMonitoringDetails, bool)`

GetResourceMonitoringOk returns a tuple with the ResourceMonitoring field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResourceMonitoring

`func (o *AddressMonitoringResponseSchema) SetResourceMonitoring(v ResourceMonitoringDetails)`

SetResourceMonitoring sets ResourceMonitoring field to given value.

### HasResourceMonitoring

`func (o *AddressMonitoringResponseSchema) HasResourceMonitoring() bool`

HasResourceMonitoring returns a boolean if a field has been set.

### GetSubscription

`func (o *AddressMonitoringResponseSchema) GetSubscription() ResourceMonitoringSubscription`

GetSubscription returns the Subscription field if non-nil, zero value otherwise.

### GetSubscriptionOk

`func (o *AddressMonitoringResponseSchema) GetSubscriptionOk() (*ResourceMonitoringSubscription, bool)`

GetSubscriptionOk returns a tuple with the Subscription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscription

`func (o *AddressMonitoringResponseSchema) SetSubscription(v ResourceMonitoringSubscription)`

SetSubscription sets Subscription field to given value.

### HasSubscription

`func (o *AddressMonitoringResponseSchema) HasSubscription() bool`

HasSubscription returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


