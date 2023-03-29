# LocationDTO

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Technology** | Pointer to **string** |  | [optional] 
**Network** | Pointer to **string** |  | [optional] 

## Methods

### NewLocationDTO

`func NewLocationDTO() *LocationDTO`

NewLocationDTO instantiates a new LocationDTO object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewLocationDTOWithDefaults

`func NewLocationDTOWithDefaults() *LocationDTO`

NewLocationDTOWithDefaults instantiates a new LocationDTO object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTechnology

`func (o *LocationDTO) GetTechnology() string`

GetTechnology returns the Technology field if non-nil, zero value otherwise.

### GetTechnologyOk

`func (o *LocationDTO) GetTechnologyOk() (*string, bool)`

GetTechnologyOk returns a tuple with the Technology field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTechnology

`func (o *LocationDTO) SetTechnology(v string)`

SetTechnology sets Technology field to given value.

### HasTechnology

`func (o *LocationDTO) HasTechnology() bool`

HasTechnology returns a boolean if a field has been set.

### GetNetwork

`func (o *LocationDTO) GetNetwork() string`

GetNetwork returns the Network field if non-nil, zero value otherwise.

### GetNetworkOk

`func (o *LocationDTO) GetNetworkOk() (*string, bool)`

GetNetworkOk returns a tuple with the Network field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNetwork

`func (o *LocationDTO) SetNetwork(v string)`

SetNetwork sets Network field to given value.

### HasNetwork

`func (o *LocationDTO) HasNetwork() bool`

HasNetwork returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


