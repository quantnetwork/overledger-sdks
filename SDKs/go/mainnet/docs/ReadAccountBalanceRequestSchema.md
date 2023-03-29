# ReadAccountBalanceRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**RequestDetails** | Pointer to **map[string]interface{}** |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 

## Methods

### NewReadAccountBalanceRequestSchema

`func NewReadAccountBalanceRequestSchema() *ReadAccountBalanceRequestSchema`

NewReadAccountBalanceRequestSchema instantiates a new ReadAccountBalanceRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewReadAccountBalanceRequestSchemaWithDefaults

`func NewReadAccountBalanceRequestSchemaWithDefaults() *ReadAccountBalanceRequestSchema`

NewReadAccountBalanceRequestSchemaWithDefaults instantiates a new ReadAccountBalanceRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetRequestDetails

`func (o *ReadAccountBalanceRequestSchema) GetRequestDetails() map[string]interface{}`

GetRequestDetails returns the RequestDetails field if non-nil, zero value otherwise.

### GetRequestDetailsOk

`func (o *ReadAccountBalanceRequestSchema) GetRequestDetailsOk() (*map[string]interface{}, bool)`

GetRequestDetailsOk returns a tuple with the RequestDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestDetails

`func (o *ReadAccountBalanceRequestSchema) SetRequestDetails(v map[string]interface{})`

SetRequestDetails sets RequestDetails field to given value.

### HasRequestDetails

`func (o *ReadAccountBalanceRequestSchema) HasRequestDetails() bool`

HasRequestDetails returns a boolean if a field has been set.

### GetLocation

`func (o *ReadAccountBalanceRequestSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ReadAccountBalanceRequestSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ReadAccountBalanceRequestSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ReadAccountBalanceRequestSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


