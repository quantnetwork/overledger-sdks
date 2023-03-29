# Erc20DTO

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**IsQrc20** | Pointer to **bool** |  | [optional] 
**TokenUnit** | Pointer to **string** |  | [optional] 
**DecimalPlaces** | Pointer to **int32** |  | [optional] 
**Functions** | Pointer to [**[]TierFunctionDTO**](TierFunctionDTO.md) |  | [optional] 
**TokenName** | Pointer to **string** |  | [optional] 
**SmartContractAddress** | Pointer to **string** |  | [optional] 
**Location** | Pointer to [**LocationDTO**](LocationDTO.md) |  | [optional] 
**Version** | Pointer to **string** |  | [optional] 
**Url** | Pointer to **string** |  | [optional] 
**AuditDate** | Pointer to **string** |  | [optional] 

## Methods

### NewErc20DTO

`func NewErc20DTO() *Erc20DTO`

NewErc20DTO instantiates a new Erc20DTO object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewErc20DTOWithDefaults

`func NewErc20DTOWithDefaults() *Erc20DTO`

NewErc20DTOWithDefaults instantiates a new Erc20DTO object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIsQrc20

`func (o *Erc20DTO) GetIsQrc20() bool`

GetIsQrc20 returns the IsQrc20 field if non-nil, zero value otherwise.

### GetIsQrc20Ok

`func (o *Erc20DTO) GetIsQrc20Ok() (*bool, bool)`

GetIsQrc20Ok returns a tuple with the IsQrc20 field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsQrc20

`func (o *Erc20DTO) SetIsQrc20(v bool)`

SetIsQrc20 sets IsQrc20 field to given value.

### HasIsQrc20

`func (o *Erc20DTO) HasIsQrc20() bool`

HasIsQrc20 returns a boolean if a field has been set.

### GetTokenUnit

`func (o *Erc20DTO) GetTokenUnit() string`

GetTokenUnit returns the TokenUnit field if non-nil, zero value otherwise.

### GetTokenUnitOk

`func (o *Erc20DTO) GetTokenUnitOk() (*string, bool)`

GetTokenUnitOk returns a tuple with the TokenUnit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTokenUnit

`func (o *Erc20DTO) SetTokenUnit(v string)`

SetTokenUnit sets TokenUnit field to given value.

### HasTokenUnit

`func (o *Erc20DTO) HasTokenUnit() bool`

HasTokenUnit returns a boolean if a field has been set.

### GetDecimalPlaces

`func (o *Erc20DTO) GetDecimalPlaces() int32`

GetDecimalPlaces returns the DecimalPlaces field if non-nil, zero value otherwise.

### GetDecimalPlacesOk

`func (o *Erc20DTO) GetDecimalPlacesOk() (*int32, bool)`

GetDecimalPlacesOk returns a tuple with the DecimalPlaces field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDecimalPlaces

`func (o *Erc20DTO) SetDecimalPlaces(v int32)`

SetDecimalPlaces sets DecimalPlaces field to given value.

### HasDecimalPlaces

`func (o *Erc20DTO) HasDecimalPlaces() bool`

HasDecimalPlaces returns a boolean if a field has been set.

### GetFunctions

`func (o *Erc20DTO) GetFunctions() []TierFunctionDTO`

GetFunctions returns the Functions field if non-nil, zero value otherwise.

### GetFunctionsOk

`func (o *Erc20DTO) GetFunctionsOk() (*[]TierFunctionDTO, bool)`

GetFunctionsOk returns a tuple with the Functions field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFunctions

`func (o *Erc20DTO) SetFunctions(v []TierFunctionDTO)`

SetFunctions sets Functions field to given value.

### HasFunctions

`func (o *Erc20DTO) HasFunctions() bool`

HasFunctions returns a boolean if a field has been set.

### GetTokenName

`func (o *Erc20DTO) GetTokenName() string`

GetTokenName returns the TokenName field if non-nil, zero value otherwise.

### GetTokenNameOk

`func (o *Erc20DTO) GetTokenNameOk() (*string, bool)`

GetTokenNameOk returns a tuple with the TokenName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTokenName

`func (o *Erc20DTO) SetTokenName(v string)`

SetTokenName sets TokenName field to given value.

### HasTokenName

`func (o *Erc20DTO) HasTokenName() bool`

HasTokenName returns a boolean if a field has been set.

### GetSmartContractAddress

`func (o *Erc20DTO) GetSmartContractAddress() string`

GetSmartContractAddress returns the SmartContractAddress field if non-nil, zero value otherwise.

### GetSmartContractAddressOk

`func (o *Erc20DTO) GetSmartContractAddressOk() (*string, bool)`

GetSmartContractAddressOk returns a tuple with the SmartContractAddress field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContractAddress

`func (o *Erc20DTO) SetSmartContractAddress(v string)`

SetSmartContractAddress sets SmartContractAddress field to given value.

### HasSmartContractAddress

`func (o *Erc20DTO) HasSmartContractAddress() bool`

HasSmartContractAddress returns a boolean if a field has been set.

### GetLocation

`func (o *Erc20DTO) GetLocation() LocationDTO`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *Erc20DTO) GetLocationOk() (*LocationDTO, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *Erc20DTO) SetLocation(v LocationDTO)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *Erc20DTO) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetVersion

`func (o *Erc20DTO) GetVersion() string`

GetVersion returns the Version field if non-nil, zero value otherwise.

### GetVersionOk

`func (o *Erc20DTO) GetVersionOk() (*string, bool)`

GetVersionOk returns a tuple with the Version field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVersion

`func (o *Erc20DTO) SetVersion(v string)`

SetVersion sets Version field to given value.

### HasVersion

`func (o *Erc20DTO) HasVersion() bool`

HasVersion returns a boolean if a field has been set.

### GetUrl

`func (o *Erc20DTO) GetUrl() string`

GetUrl returns the Url field if non-nil, zero value otherwise.

### GetUrlOk

`func (o *Erc20DTO) GetUrlOk() (*string, bool)`

GetUrlOk returns a tuple with the Url field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUrl

`func (o *Erc20DTO) SetUrl(v string)`

SetUrl sets Url field to given value.

### HasUrl

`func (o *Erc20DTO) HasUrl() bool`

HasUrl returns a boolean if a field has been set.

### GetAuditDate

`func (o *Erc20DTO) GetAuditDate() string`

GetAuditDate returns the AuditDate field if non-nil, zero value otherwise.

### GetAuditDateOk

`func (o *Erc20DTO) GetAuditDateOk() (*string, bool)`

GetAuditDateOk returns a tuple with the AuditDate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAuditDate

`func (o *Erc20DTO) SetAuditDate(v string)`

SetAuditDate sets AuditDate field to given value.

### HasAuditDate

`func (o *Erc20DTO) HasAuditDate() bool`

HasAuditDate returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


