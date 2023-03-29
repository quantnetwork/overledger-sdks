# EventSubscriptionResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**TokenName** | Pointer to **string** | Name of the token | [optional] 
**SubscriptionDetails** | Pointer to [**EventSubscriptionResponseDetails**](EventSubscriptionResponseDetails.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Type** | Pointer to **string** | Type of event | [optional] 

## Methods

### NewEventSubscriptionResponse

`func NewEventSubscriptionResponse() *EventSubscriptionResponse`

NewEventSubscriptionResponse instantiates a new EventSubscriptionResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewEventSubscriptionResponseWithDefaults

`func NewEventSubscriptionResponseWithDefaults() *EventSubscriptionResponse`

NewEventSubscriptionResponseWithDefaults instantiates a new EventSubscriptionResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTokenName

`func (o *EventSubscriptionResponse) GetTokenName() string`

GetTokenName returns the TokenName field if non-nil, zero value otherwise.

### GetTokenNameOk

`func (o *EventSubscriptionResponse) GetTokenNameOk() (*string, bool)`

GetTokenNameOk returns a tuple with the TokenName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTokenName

`func (o *EventSubscriptionResponse) SetTokenName(v string)`

SetTokenName sets TokenName field to given value.

### HasTokenName

`func (o *EventSubscriptionResponse) HasTokenName() bool`

HasTokenName returns a boolean if a field has been set.

### GetSubscriptionDetails

`func (o *EventSubscriptionResponse) GetSubscriptionDetails() EventSubscriptionResponseDetails`

GetSubscriptionDetails returns the SubscriptionDetails field if non-nil, zero value otherwise.

### GetSubscriptionDetailsOk

`func (o *EventSubscriptionResponse) GetSubscriptionDetailsOk() (*EventSubscriptionResponseDetails, bool)`

GetSubscriptionDetailsOk returns a tuple with the SubscriptionDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSubscriptionDetails

`func (o *EventSubscriptionResponse) SetSubscriptionDetails(v EventSubscriptionResponseDetails)`

SetSubscriptionDetails sets SubscriptionDetails field to given value.

### HasSubscriptionDetails

`func (o *EventSubscriptionResponse) HasSubscriptionDetails() bool`

HasSubscriptionDetails returns a boolean if a field has been set.

### GetLocation

`func (o *EventSubscriptionResponse) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *EventSubscriptionResponse) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *EventSubscriptionResponse) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *EventSubscriptionResponse) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetType

`func (o *EventSubscriptionResponse) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *EventSubscriptionResponse) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *EventSubscriptionResponse) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *EventSubscriptionResponse) HasType() bool`

HasType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


