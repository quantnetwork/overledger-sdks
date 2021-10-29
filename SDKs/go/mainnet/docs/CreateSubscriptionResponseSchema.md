# CreateSubscriptionResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ScubscriptionDetails** | Pointer to [**SubscriptionDetailsSchema**](SubscriptionDetailsSchema.md) |  | [optional] 
**SubscriptionId** | Pointer to **string** |  | [optional] 

## Methods

### NewCreateSubscriptionResponseSchema

`func NewCreateSubscriptionResponseSchema() *CreateSubscriptionResponseSchema`

NewCreateSubscriptionResponseSchema instantiates a new CreateSubscriptionResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCreateSubscriptionResponseSchemaWithDefaults

`func NewCreateSubscriptionResponseSchemaWithDefaults() *CreateSubscriptionResponseSchema`

NewCreateSubscriptionResponseSchemaWithDefaults instantiates a new CreateSubscriptionResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetScubscriptionDetails

`func (o *CreateSubscriptionResponseSchema) GetScubscriptionDetails() SubscriptionDetailsSchema`

GetScubscriptionDetails returns the ScubscriptionDetails field if non-nil, zero value otherwise.

### GetScubscriptionDetailsOk

`func (o *CreateSubscriptionResponseSchema) GetScubscriptionDetailsOk() (*SubscriptionDetailsSchema, bool)`

GetScubscriptionDetailsOk returns a tuple with the ScubscriptionDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetScubscriptionDetails

`func (o *CreateSubscriptionResponseSchema) SetScubscriptionDetails(v SubscriptionDetailsSchema)`

SetScubscriptionDetails sets ScubscriptionDetails field to given value.

### HasScubscriptionDetails

`func (o *CreateSubscriptionResponseSchema) HasScubscriptionDetails() bool`

HasScubscriptionDetails returns a boolean if a field has been set.

### GetSubscriptionId

`func (o *CreateSubscriptionResponseSchema) GetSubscriptionId() string`

GetSubscriptionId returns the SubscriptionId field if non-nil, zero value otherwise.

### GetSubscriptionIdOk

`func (o *CreateSubscriptionResponseSchema) GetSubscriptionIdOk() (*string, bool)`

GetSubscriptionIdOk returns a tuple with the SubscriptionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionId

`func (o *CreateSubscriptionResponseSchema) SetSubscriptionId(v string)`

SetSubscriptionId sets SubscriptionId field to given value.

### HasSubscriptionId

`func (o *CreateSubscriptionResponseSchema) HasSubscriptionId() bool`

HasSubscriptionId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


