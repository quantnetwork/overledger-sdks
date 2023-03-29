# CreateWebhookSubscriptionResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SubscriptionId** | Pointer to **string** |  | [optional] 
**ScubscriptionDetails** | Pointer to [**WebhookSubscriptionDetailsSchema**](WebhookSubscriptionDetailsSchema.md) |  | [optional] 

## Methods

### NewCreateWebhookSubscriptionResponseSchema

`func NewCreateWebhookSubscriptionResponseSchema() *CreateWebhookSubscriptionResponseSchema`

NewCreateWebhookSubscriptionResponseSchema instantiates a new CreateWebhookSubscriptionResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCreateWebhookSubscriptionResponseSchemaWithDefaults

`func NewCreateWebhookSubscriptionResponseSchemaWithDefaults() *CreateWebhookSubscriptionResponseSchema`

NewCreateWebhookSubscriptionResponseSchemaWithDefaults instantiates a new CreateWebhookSubscriptionResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSubscriptionId

`func (o *CreateWebhookSubscriptionResponseSchema) GetSubscriptionId() string`

GetSubscriptionId returns the SubscriptionId field if non-nil, zero value otherwise.

### GetSubscriptionIdOk

`func (o *CreateWebhookSubscriptionResponseSchema) GetSubscriptionIdOk() (*string, bool)`

GetSubscriptionIdOk returns a tuple with the SubscriptionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionId

`func (o *CreateWebhookSubscriptionResponseSchema) SetSubscriptionId(v string)`

SetSubscriptionId sets SubscriptionId field to given value.

### HasSubscriptionId

`func (o *CreateWebhookSubscriptionResponseSchema) HasSubscriptionId() bool`

HasSubscriptionId returns a boolean if a field has been set.

### GetScubscriptionDetails

`func (o *CreateWebhookSubscriptionResponseSchema) GetScubscriptionDetails() WebhookSubscriptionDetailsSchema`

GetScubscriptionDetails returns the ScubscriptionDetails field if non-nil, zero value otherwise.

### GetScubscriptionDetailsOk

`func (o *CreateWebhookSubscriptionResponseSchema) GetScubscriptionDetailsOk() (*WebhookSubscriptionDetailsSchema, bool)`

GetScubscriptionDetailsOk returns a tuple with the ScubscriptionDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetScubscriptionDetails

`func (o *CreateWebhookSubscriptionResponseSchema) SetScubscriptionDetails(v WebhookSubscriptionDetailsSchema)`

SetScubscriptionDetails sets ScubscriptionDetails field to given value.

### HasScubscriptionDetails

`func (o *CreateWebhookSubscriptionResponseSchema) HasScubscriptionDetails() bool`

HasScubscriptionDetails returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


