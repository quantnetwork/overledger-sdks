# SubscriptionDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Ids** | Pointer to **[]string** |  | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 

## Methods

### NewSubscriptionDetailsSchema

`func NewSubscriptionDetailsSchema() *SubscriptionDetailsSchema`

NewSubscriptionDetailsSchema instantiates a new SubscriptionDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSubscriptionDetailsSchemaWithDefaults

`func NewSubscriptionDetailsSchemaWithDefaults() *SubscriptionDetailsSchema`

NewSubscriptionDetailsSchemaWithDefaults instantiates a new SubscriptionDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIds

`func (o *SubscriptionDetailsSchema) GetIds() []string`

GetIds returns the Ids field if non-nil, zero value otherwise.

### GetIdsOk

`func (o *SubscriptionDetailsSchema) GetIdsOk() (*[]string, bool)`

GetIdsOk returns a tuple with the Ids field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIds

`func (o *SubscriptionDetailsSchema) SetIds(v []string)`

SetIds sets Ids field to given value.

### HasIds

`func (o *SubscriptionDetailsSchema) HasIds() bool`

HasIds returns a boolean if a field has been set.

### GetStatus

`func (o *SubscriptionDetailsSchema) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *SubscriptionDetailsSchema) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *SubscriptionDetailsSchema) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *SubscriptionDetailsSchema) HasStatus() bool`

HasStatus returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


