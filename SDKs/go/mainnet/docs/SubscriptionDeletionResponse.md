# SubscriptionDeletionResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SubscriptionDetails** | Pointer to [**SubscriptionDetails**](SubscriptionDetails.md) |  | [optional] 
**CallbackUrl** | Pointer to **string** |  | [optional] 
**SubscriptionId** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 

## Methods

### NewSubscriptionDeletionResponse

`func NewSubscriptionDeletionResponse() *SubscriptionDeletionResponse`

NewSubscriptionDeletionResponse instantiates a new SubscriptionDeletionResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSubscriptionDeletionResponseWithDefaults

`func NewSubscriptionDeletionResponseWithDefaults() *SubscriptionDeletionResponse`

NewSubscriptionDeletionResponseWithDefaults instantiates a new SubscriptionDeletionResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSubscriptionDetails

`func (o *SubscriptionDeletionResponse) GetSubscriptionDetails() SubscriptionDetails`

GetSubscriptionDetails returns the SubscriptionDetails field if non-nil, zero value otherwise.

### GetSubscriptionDetailsOk

`func (o *SubscriptionDeletionResponse) GetSubscriptionDetailsOk() (*SubscriptionDetails, bool)`

GetSubscriptionDetailsOk returns a tuple with the SubscriptionDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionDetails

`func (o *SubscriptionDeletionResponse) SetSubscriptionDetails(v SubscriptionDetails)`

SetSubscriptionDetails sets SubscriptionDetails field to given value.

### HasSubscriptionDetails

`func (o *SubscriptionDeletionResponse) HasSubscriptionDetails() bool`

HasSubscriptionDetails returns a boolean if a field has been set.

### GetCallbackUrl

`func (o *SubscriptionDeletionResponse) GetCallbackUrl() string`

GetCallbackUrl returns the CallbackUrl field if non-nil, zero value otherwise.

### GetCallbackUrlOk

`func (o *SubscriptionDeletionResponse) GetCallbackUrlOk() (*string, bool)`

GetCallbackUrlOk returns a tuple with the CallbackUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallbackUrl

`func (o *SubscriptionDeletionResponse) SetCallbackUrl(v string)`

SetCallbackUrl sets CallbackUrl field to given value.

### HasCallbackUrl

`func (o *SubscriptionDeletionResponse) HasCallbackUrl() bool`

HasCallbackUrl returns a boolean if a field has been set.

### GetSubscriptionId

`func (o *SubscriptionDeletionResponse) GetSubscriptionId() string`

GetSubscriptionId returns the SubscriptionId field if non-nil, zero value otherwise.

### GetSubscriptionIdOk

`func (o *SubscriptionDeletionResponse) GetSubscriptionIdOk() (*string, bool)`

GetSubscriptionIdOk returns a tuple with the SubscriptionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionId

`func (o *SubscriptionDeletionResponse) SetSubscriptionId(v string)`

SetSubscriptionId sets SubscriptionId field to given value.

### HasSubscriptionId

`func (o *SubscriptionDeletionResponse) HasSubscriptionId() bool`

HasSubscriptionId returns a boolean if a field has been set.

### GetType

`func (o *SubscriptionDeletionResponse) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *SubscriptionDeletionResponse) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *SubscriptionDeletionResponse) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *SubscriptionDeletionResponse) HasType() bool`

HasType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


