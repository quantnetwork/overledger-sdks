# TokenReadQRC721Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**TokenName** | Pointer to **string** | Name of the token | [optional] 
**ResponseDetails** | Pointer to [**TokenReadResponseDetails**](TokenReadResponseDetails.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**RequestId** | Pointer to **string** | The ID assigned to a preparation request in Overledger | [optional] 

## Methods

### NewTokenReadQRC721Response

`func NewTokenReadQRC721Response() *TokenReadQRC721Response`

NewTokenReadQRC721Response instantiates a new TokenReadQRC721Response object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTokenReadQRC721ResponseWithDefaults

`func NewTokenReadQRC721ResponseWithDefaults() *TokenReadQRC721Response`

NewTokenReadQRC721ResponseWithDefaults instantiates a new TokenReadQRC721Response object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTokenName

`func (o *TokenReadQRC721Response) GetTokenName() string`

GetTokenName returns the TokenName field if non-nil, zero value otherwise.

### GetTokenNameOk

`func (o *TokenReadQRC721Response) GetTokenNameOk() (*string, bool)`

GetTokenNameOk returns a tuple with the TokenName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTokenName

`func (o *TokenReadQRC721Response) SetTokenName(v string)`

SetTokenName sets TokenName field to given value.

### HasTokenName

`func (o *TokenReadQRC721Response) HasTokenName() bool`

HasTokenName returns a boolean if a field has been set.

### GetResponseDetails

`func (o *TokenReadQRC721Response) GetResponseDetails() TokenReadResponseDetails`

GetResponseDetails returns the ResponseDetails field if non-nil, zero value otherwise.

### GetResponseDetailsOk

`func (o *TokenReadQRC721Response) GetResponseDetailsOk() (*TokenReadResponseDetails, bool)`

GetResponseDetailsOk returns a tuple with the ResponseDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResponseDetails

`func (o *TokenReadQRC721Response) SetResponseDetails(v TokenReadResponseDetails)`

SetResponseDetails sets ResponseDetails field to given value.

### HasResponseDetails

`func (o *TokenReadQRC721Response) HasResponseDetails() bool`

HasResponseDetails returns a boolean if a field has been set.

### GetLocation

`func (o *TokenReadQRC721Response) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *TokenReadQRC721Response) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *TokenReadQRC721Response) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *TokenReadQRC721Response) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetRequestId

`func (o *TokenReadQRC721Response) GetRequestId() string`

GetRequestId returns the RequestId field if non-nil, zero value otherwise.

### GetRequestIdOk

`func (o *TokenReadQRC721Response) GetRequestIdOk() (*string, bool)`

GetRequestIdOk returns a tuple with the RequestId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestId

`func (o *TokenReadQRC721Response) SetRequestId(v string)`

SetRequestId sets RequestId field to given value.

### HasRequestId

`func (o *TokenReadQRC721Response) HasRequestId() bool`

HasRequestId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


