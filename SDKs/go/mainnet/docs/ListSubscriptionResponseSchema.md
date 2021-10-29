# ListSubscriptionResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SubscriptionDetails** | Pointer to [**SubscriptionDetailsSchema**](SubscriptionDetailsSchema.md) |  | [optional] 
**SubscribedTime** | Pointer to **time.Time** |  | [optional] 
**LastUpdatedTime** | Pointer to **time.Time** |  | [optional] 
**CallbackUrl** | Pointer to **string** |  | [optional] 
**SubscriptionId** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 

## Methods

### NewListSubscriptionResponseSchema

`func NewListSubscriptionResponseSchema() *ListSubscriptionResponseSchema`

NewListSubscriptionResponseSchema instantiates a new ListSubscriptionResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewListSubscriptionResponseSchemaWithDefaults

`func NewListSubscriptionResponseSchemaWithDefaults() *ListSubscriptionResponseSchema`

NewListSubscriptionResponseSchemaWithDefaults instantiates a new ListSubscriptionResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSubscriptionDetails

`func (o *ListSubscriptionResponseSchema) GetSubscriptionDetails() SubscriptionDetailsSchema`

GetSubscriptionDetails returns the SubscriptionDetails field if non-nil, zero value otherwise.

### GetSubscriptionDetailsOk

`func (o *ListSubscriptionResponseSchema) GetSubscriptionDetailsOk() (*SubscriptionDetailsSchema, bool)`

GetSubscriptionDetailsOk returns a tuple with the SubscriptionDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionDetails

`func (o *ListSubscriptionResponseSchema) SetSubscriptionDetails(v SubscriptionDetailsSchema)`

SetSubscriptionDetails sets SubscriptionDetails field to given value.

### HasSubscriptionDetails

`func (o *ListSubscriptionResponseSchema) HasSubscriptionDetails() bool`

HasSubscriptionDetails returns a boolean if a field has been set.

### GetSubscribedTime

`func (o *ListSubscriptionResponseSchema) GetSubscribedTime() time.Time`

GetSubscribedTime returns the SubscribedTime field if non-nil, zero value otherwise.

### GetSubscribedTimeOk

`func (o *ListSubscriptionResponseSchema) GetSubscribedTimeOk() (*time.Time, bool)`

GetSubscribedTimeOk returns a tuple with the SubscribedTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscribedTime

`func (o *ListSubscriptionResponseSchema) SetSubscribedTime(v time.Time)`

SetSubscribedTime sets SubscribedTime field to given value.

### HasSubscribedTime

`func (o *ListSubscriptionResponseSchema) HasSubscribedTime() bool`

HasSubscribedTime returns a boolean if a field has been set.

### GetLastUpdatedTime

`func (o *ListSubscriptionResponseSchema) GetLastUpdatedTime() time.Time`

GetLastUpdatedTime returns the LastUpdatedTime field if non-nil, zero value otherwise.

### GetLastUpdatedTimeOk

`func (o *ListSubscriptionResponseSchema) GetLastUpdatedTimeOk() (*time.Time, bool)`

GetLastUpdatedTimeOk returns a tuple with the LastUpdatedTime field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLastUpdatedTime

`func (o *ListSubscriptionResponseSchema) SetLastUpdatedTime(v time.Time)`

SetLastUpdatedTime sets LastUpdatedTime field to given value.

### HasLastUpdatedTime

`func (o *ListSubscriptionResponseSchema) HasLastUpdatedTime() bool`

HasLastUpdatedTime returns a boolean if a field has been set.

### GetCallbackUrl

`func (o *ListSubscriptionResponseSchema) GetCallbackUrl() string`

GetCallbackUrl returns the CallbackUrl field if non-nil, zero value otherwise.

### GetCallbackUrlOk

`func (o *ListSubscriptionResponseSchema) GetCallbackUrlOk() (*string, bool)`

GetCallbackUrlOk returns a tuple with the CallbackUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallbackUrl

`func (o *ListSubscriptionResponseSchema) SetCallbackUrl(v string)`

SetCallbackUrl sets CallbackUrl field to given value.

### HasCallbackUrl

`func (o *ListSubscriptionResponseSchema) HasCallbackUrl() bool`

HasCallbackUrl returns a boolean if a field has been set.

### GetSubscriptionId

`func (o *ListSubscriptionResponseSchema) GetSubscriptionId() string`

GetSubscriptionId returns the SubscriptionId field if non-nil, zero value otherwise.

### GetSubscriptionIdOk

`func (o *ListSubscriptionResponseSchema) GetSubscriptionIdOk() (*string, bool)`

GetSubscriptionIdOk returns a tuple with the SubscriptionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionId

`func (o *ListSubscriptionResponseSchema) SetSubscriptionId(v string)`

SetSubscriptionId sets SubscriptionId field to given value.

### HasSubscriptionId

`func (o *ListSubscriptionResponseSchema) HasSubscriptionId() bool`

HasSubscriptionId returns a boolean if a field has been set.

### GetType

`func (o *ListSubscriptionResponseSchema) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *ListSubscriptionResponseSchema) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *ListSubscriptionResponseSchema) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *ListSubscriptionResponseSchema) HasType() bool`

HasType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


