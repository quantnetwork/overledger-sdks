# UpdateWebhookSubscriptionRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**StatusUpdate** | Pointer to [**WebhookStatusUpdateSchema**](WebhookStatusUpdateSchema.md) |  | [optional] 
**CallbackUrl** | Pointer to **string** |  | [optional] 

## Methods

### NewUpdateWebhookSubscriptionRequestSchema

`func NewUpdateWebhookSubscriptionRequestSchema() *UpdateWebhookSubscriptionRequestSchema`

NewUpdateWebhookSubscriptionRequestSchema instantiates a new UpdateWebhookSubscriptionRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewUpdateWebhookSubscriptionRequestSchemaWithDefaults

`func NewUpdateWebhookSubscriptionRequestSchemaWithDefaults() *UpdateWebhookSubscriptionRequestSchema`

NewUpdateWebhookSubscriptionRequestSchemaWithDefaults instantiates a new UpdateWebhookSubscriptionRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatusUpdate

`func (o *UpdateWebhookSubscriptionRequestSchema) GetStatusUpdate() WebhookStatusUpdateSchema`

GetStatusUpdate returns the StatusUpdate field if non-nil, zero value otherwise.

### GetStatusUpdateOk

`func (o *UpdateWebhookSubscriptionRequestSchema) GetStatusUpdateOk() (*WebhookStatusUpdateSchema, bool)`

GetStatusUpdateOk returns a tuple with the StatusUpdate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatusUpdate

`func (o *UpdateWebhookSubscriptionRequestSchema) SetStatusUpdate(v WebhookStatusUpdateSchema)`

SetStatusUpdate sets StatusUpdate field to given value.

### HasStatusUpdate

`func (o *UpdateWebhookSubscriptionRequestSchema) HasStatusUpdate() bool`

HasStatusUpdate returns a boolean if a field has been set.

### GetCallbackUrl

`func (o *UpdateWebhookSubscriptionRequestSchema) GetCallbackUrl() string`

GetCallbackUrl returns the CallbackUrl field if non-nil, zero value otherwise.

### GetCallbackUrlOk

`func (o *UpdateWebhookSubscriptionRequestSchema) GetCallbackUrlOk() (*string, bool)`

GetCallbackUrlOk returns a tuple with the CallbackUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallbackUrl

`func (o *UpdateWebhookSubscriptionRequestSchema) SetCallbackUrl(v string)`

SetCallbackUrl sets CallbackUrl field to given value.

### HasCallbackUrl

`func (o *UpdateWebhookSubscriptionRequestSchema) HasCallbackUrl() bool`

HasCallbackUrl returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


