# WebhookSubscriptionDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Ids** | Pointer to **[]string** |  | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 

## Methods

### NewWebhookSubscriptionDetails

`func NewWebhookSubscriptionDetails() *WebhookSubscriptionDetails`

NewWebhookSubscriptionDetails instantiates a new WebhookSubscriptionDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewWebhookSubscriptionDetailsWithDefaults

`func NewWebhookSubscriptionDetailsWithDefaults() *WebhookSubscriptionDetails`

NewWebhookSubscriptionDetailsWithDefaults instantiates a new WebhookSubscriptionDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIds

`func (o *WebhookSubscriptionDetails) GetIds() []string`

GetIds returns the Ids field if non-nil, zero value otherwise.

### GetIdsOk

`func (o *WebhookSubscriptionDetails) GetIdsOk() (*[]string, bool)`

GetIdsOk returns a tuple with the Ids field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIds

`func (o *WebhookSubscriptionDetails) SetIds(v []string)`

SetIds sets Ids field to given value.

### HasIds

`func (o *WebhookSubscriptionDetails) HasIds() bool`

HasIds returns a boolean if a field has been set.

### GetStatus

`func (o *WebhookSubscriptionDetails) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *WebhookSubscriptionDetails) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *WebhookSubscriptionDetails) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *WebhookSubscriptionDetails) HasStatus() bool`

HasStatus returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


