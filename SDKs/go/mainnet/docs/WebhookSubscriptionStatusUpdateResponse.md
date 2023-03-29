# WebhookSubscriptionStatusUpdateResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SubscriptionDetails** | Pointer to [**WebhookSubscriptionDetails**](WebhookSubscriptionDetails.md) |  | [optional] 
**CallbackUrl** | Pointer to **string** |  | [optional] 
**SubscriptionId** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 

## Methods

### NewWebhookSubscriptionStatusUpdateResponse

`func NewWebhookSubscriptionStatusUpdateResponse() *WebhookSubscriptionStatusUpdateResponse`

NewWebhookSubscriptionStatusUpdateResponse instantiates a new WebhookSubscriptionStatusUpdateResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWebhookSubscriptionStatusUpdateResponseWithDefaults

`func NewWebhookSubscriptionStatusUpdateResponseWithDefaults() *WebhookSubscriptionStatusUpdateResponse`

NewWebhookSubscriptionStatusUpdateResponseWithDefaults instantiates a new WebhookSubscriptionStatusUpdateResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSubscriptionDetails

`func (o *WebhookSubscriptionStatusUpdateResponse) GetSubscriptionDetails() WebhookSubscriptionDetails`

GetSubscriptionDetails returns the SubscriptionDetails field if non-nil, zero value otherwise.

### GetSubscriptionDetailsOk

`func (o *WebhookSubscriptionStatusUpdateResponse) GetSubscriptionDetailsOk() (*WebhookSubscriptionDetails, bool)`

GetSubscriptionDetailsOk returns a tuple with the SubscriptionDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionDetails

`func (o *WebhookSubscriptionStatusUpdateResponse) SetSubscriptionDetails(v WebhookSubscriptionDetails)`

SetSubscriptionDetails sets SubscriptionDetails field to given value.

### HasSubscriptionDetails

`func (o *WebhookSubscriptionStatusUpdateResponse) HasSubscriptionDetails() bool`

HasSubscriptionDetails returns a boolean if a field has been set.

### GetCallbackUrl

`func (o *WebhookSubscriptionStatusUpdateResponse) GetCallbackUrl() string`

GetCallbackUrl returns the CallbackUrl field if non-nil, zero value otherwise.

### GetCallbackUrlOk

`func (o *WebhookSubscriptionStatusUpdateResponse) GetCallbackUrlOk() (*string, bool)`

GetCallbackUrlOk returns a tuple with the CallbackUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallbackUrl

`func (o *WebhookSubscriptionStatusUpdateResponse) SetCallbackUrl(v string)`

SetCallbackUrl sets CallbackUrl field to given value.

### HasCallbackUrl

`func (o *WebhookSubscriptionStatusUpdateResponse) HasCallbackUrl() bool`

HasCallbackUrl returns a boolean if a field has been set.

### GetSubscriptionId

`func (o *WebhookSubscriptionStatusUpdateResponse) GetSubscriptionId() string`

GetSubscriptionId returns the SubscriptionId field if non-nil, zero value otherwise.

### GetSubscriptionIdOk

`func (o *WebhookSubscriptionStatusUpdateResponse) GetSubscriptionIdOk() (*string, bool)`

GetSubscriptionIdOk returns a tuple with the SubscriptionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionId

`func (o *WebhookSubscriptionStatusUpdateResponse) SetSubscriptionId(v string)`

SetSubscriptionId sets SubscriptionId field to given value.

### HasSubscriptionId

`func (o *WebhookSubscriptionStatusUpdateResponse) HasSubscriptionId() bool`

HasSubscriptionId returns a boolean if a field has been set.

### GetType

`func (o *WebhookSubscriptionStatusUpdateResponse) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *WebhookSubscriptionStatusUpdateResponse) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *WebhookSubscriptionStatusUpdateResponse) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *WebhookSubscriptionStatusUpdateResponse) HasType() bool`

HasType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


