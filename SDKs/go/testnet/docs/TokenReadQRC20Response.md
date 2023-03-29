# TokenReadQRC20Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ResponseDetails** | Pointer to [**[]TokenReadResponseDetails**](TokenReadResponseDetails.md) |  | [optional] 
**RequestId** | Pointer to **string** | The ID assigned to a preparation request in Overledger | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 

## Methods

### NewTokenReadQRC20Response

`func NewTokenReadQRC20Response() *TokenReadQRC20Response`

NewTokenReadQRC20Response instantiates a new TokenReadQRC20Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTokenReadQRC20ResponseWithDefaults

`func NewTokenReadQRC20ResponseWithDefaults() *TokenReadQRC20Response`

NewTokenReadQRC20ResponseWithDefaults instantiates a new TokenReadQRC20Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetResponseDetails

`func (o *TokenReadQRC20Response) GetResponseDetails() []TokenReadResponseDetails`

GetResponseDetails returns the ResponseDetails field if non-nil, zero value otherwise.

### GetResponseDetailsOk

`func (o *TokenReadQRC20Response) GetResponseDetailsOk() (*[]TokenReadResponseDetails, bool)`

GetResponseDetailsOk returns a tuple with the ResponseDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResponseDetails

`func (o *TokenReadQRC20Response) SetResponseDetails(v []TokenReadResponseDetails)`

SetResponseDetails sets ResponseDetails field to given value.

### HasResponseDetails

`func (o *TokenReadQRC20Response) HasResponseDetails() bool`

HasResponseDetails returns a boolean if a field has been set.

### GetRequestId

`func (o *TokenReadQRC20Response) GetRequestId() string`

GetRequestId returns the RequestId field if non-nil, zero value otherwise.

### GetRequestIdOk

`func (o *TokenReadQRC20Response) GetRequestIdOk() (*string, bool)`

GetRequestIdOk returns a tuple with the RequestId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestId

`func (o *TokenReadQRC20Response) SetRequestId(v string)`

SetRequestId sets RequestId field to given value.

### HasRequestId

`func (o *TokenReadQRC20Response) HasRequestId() bool`

HasRequestId returns a boolean if a field has been set.

### GetLocation

`func (o *TokenReadQRC20Response) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *TokenReadQRC20Response) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *TokenReadQRC20Response) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *TokenReadQRC20Response) HasLocation() bool`

HasLocation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


