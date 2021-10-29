# UpdateSubscriptionRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StatusUpdate** | Pointer to [**StatusUpdateSchema**](StatusUpdateSchema.md) |  | [optional] 
**CallbackUrl** | Pointer to **string** |  | [optional] 

## Methods

### NewUpdateSubscriptionRequestSchema

`func NewUpdateSubscriptionRequestSchema() *UpdateSubscriptionRequestSchema`

NewUpdateSubscriptionRequestSchema instantiates a new UpdateSubscriptionRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewUpdateSubscriptionRequestSchemaWithDefaults

`func NewUpdateSubscriptionRequestSchemaWithDefaults() *UpdateSubscriptionRequestSchema`

NewUpdateSubscriptionRequestSchemaWithDefaults instantiates a new UpdateSubscriptionRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatusUpdate

`func (o *UpdateSubscriptionRequestSchema) GetStatusUpdate() StatusUpdateSchema`

GetStatusUpdate returns the StatusUpdate field if non-nil, zero value otherwise.

### GetStatusUpdateOk

`func (o *UpdateSubscriptionRequestSchema) GetStatusUpdateOk() (*StatusUpdateSchema, bool)`

GetStatusUpdateOk returns a tuple with the StatusUpdate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatusUpdate

`func (o *UpdateSubscriptionRequestSchema) SetStatusUpdate(v StatusUpdateSchema)`

SetStatusUpdate sets StatusUpdate field to given value.

### HasStatusUpdate

`func (o *UpdateSubscriptionRequestSchema) HasStatusUpdate() bool`

HasStatusUpdate returns a boolean if a field has been set.

### GetCallbackUrl

`func (o *UpdateSubscriptionRequestSchema) GetCallbackUrl() string`

GetCallbackUrl returns the CallbackUrl field if non-nil, zero value otherwise.

### GetCallbackUrlOk

`func (o *UpdateSubscriptionRequestSchema) GetCallbackUrlOk() (*string, bool)`

GetCallbackUrlOk returns a tuple with the CallbackUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallbackUrl

`func (o *UpdateSubscriptionRequestSchema) SetCallbackUrl(v string)`

SetCallbackUrl sets CallbackUrl field to given value.

### HasCallbackUrl

`func (o *UpdateSubscriptionRequestSchema) HasCallbackUrl() bool`

HasCallbackUrl returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


