# ListWebhookSubscriptionResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SubscriptionDetails** | Pointer to [**WebhookSubscriptionDetailsSchema**](WebhookSubscriptionDetailsSchema.md) |  | [optional] 
**LastUpdatedTime** | Pointer to **time.Time** |  | [optional] 
**CallbackUrl** | Pointer to **string** |  | [optional] 
**SubscriptionId** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**SubscribedTime** | Pointer to **time.Time** |  | [optional] 

## Methods

### NewListWebhookSubscriptionResponseSchema

`func NewListWebhookSubscriptionResponseSchema() *ListWebhookSubscriptionResponseSchema`

NewListWebhookSubscriptionResponseSchema instantiates a new ListWebhookSubscriptionResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewListWebhookSubscriptionResponseSchemaWithDefaults

`func NewListWebhookSubscriptionResponseSchemaWithDefaults() *ListWebhookSubscriptionResponseSchema`

NewListWebhookSubscriptionResponseSchemaWithDefaults instantiates a new ListWebhookSubscriptionResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSubscriptionDetails

`func (o *ListWebhookSubscriptionResponseSchema) GetSubscriptionDetails() WebhookSubscriptionDetailsSchema`

GetSubscriptionDetails returns the SubscriptionDetails field if non-nil, zero value otherwise.

### GetSubscriptionDetailsOk

`func (o *ListWebhookSubscriptionResponseSchema) GetSubscriptionDetailsOk() (*WebhookSubscriptionDetailsSchema, bool)`

GetSubscriptionDetailsOk returns a tuple with the SubscriptionDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionDetails

`func (o *ListWebhookSubscriptionResponseSchema) SetSubscriptionDetails(v WebhookSubscriptionDetailsSchema)`

SetSubscriptionDetails sets SubscriptionDetails field to given value.

### HasSubscriptionDetails

`func (o *ListWebhookSubscriptionResponseSchema) HasSubscriptionDetails() bool`

HasSubscriptionDetails returns a boolean if a field has been set.

### GetLastUpdatedTime

`func (o *ListWebhookSubscriptionResponseSchema) GetLastUpdatedTime() time.Time`

GetLastUpdatedTime returns the LastUpdatedTime field if non-nil, zero value otherwise.

### GetLastUpdatedTimeOk

`func (o *ListWebhookSubscriptionResponseSchema) GetLastUpdatedTimeOk() (*time.Time, bool)`

GetLastUpdatedTimeOk returns a tuple with the LastUpdatedTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastUpdatedTime

`func (o *ListWebhookSubscriptionResponseSchema) SetLastUpdatedTime(v time.Time)`

SetLastUpdatedTime sets LastUpdatedTime field to given value.

### HasLastUpdatedTime

`func (o *ListWebhookSubscriptionResponseSchema) HasLastUpdatedTime() bool`

HasLastUpdatedTime returns a boolean if a field has been set.

### GetCallbackUrl

`func (o *ListWebhookSubscriptionResponseSchema) GetCallbackUrl() string`

GetCallbackUrl returns the CallbackUrl field if non-nil, zero value otherwise.

### GetCallbackUrlOk

`func (o *ListWebhookSubscriptionResponseSchema) GetCallbackUrlOk() (*string, bool)`

GetCallbackUrlOk returns a tuple with the CallbackUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallbackUrl

`func (o *ListWebhookSubscriptionResponseSchema) SetCallbackUrl(v string)`

SetCallbackUrl sets CallbackUrl field to given value.

### HasCallbackUrl

`func (o *ListWebhookSubscriptionResponseSchema) HasCallbackUrl() bool`

HasCallbackUrl returns a boolean if a field has been set.

### GetSubscriptionId

`func (o *ListWebhookSubscriptionResponseSchema) GetSubscriptionId() string`

GetSubscriptionId returns the SubscriptionId field if non-nil, zero value otherwise.

### GetSubscriptionIdOk

`func (o *ListWebhookSubscriptionResponseSchema) GetSubscriptionIdOk() (*string, bool)`

GetSubscriptionIdOk returns a tuple with the SubscriptionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionId

`func (o *ListWebhookSubscriptionResponseSchema) SetSubscriptionId(v string)`

SetSubscriptionId sets SubscriptionId field to given value.

### HasSubscriptionId

`func (o *ListWebhookSubscriptionResponseSchema) HasSubscriptionId() bool`

HasSubscriptionId returns a boolean if a field has been set.

### GetType

`func (o *ListWebhookSubscriptionResponseSchema) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ListWebhookSubscriptionResponseSchema) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ListWebhookSubscriptionResponseSchema) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ListWebhookSubscriptionResponseSchema) HasType() bool`

HasType returns a boolean if a field has been set.

### GetSubscribedTime

`func (o *ListWebhookSubscriptionResponseSchema) GetSubscribedTime() time.Time`

GetSubscribedTime returns the SubscribedTime field if non-nil, zero value otherwise.

### GetSubscribedTimeOk

`func (o *ListWebhookSubscriptionResponseSchema) GetSubscribedTimeOk() (*time.Time, bool)`

GetSubscribedTimeOk returns a tuple with the SubscribedTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscribedTime

`func (o *ListWebhookSubscriptionResponseSchema) SetSubscribedTime(v time.Time)`

SetSubscribedTime sets SubscribedTime field to given value.

### HasSubscribedTime

`func (o *ListWebhookSubscriptionResponseSchema) HasSubscribedTime() bool`

HasSubscribedTime returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


