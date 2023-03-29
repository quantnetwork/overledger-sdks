# PrepareRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ApiLookupPath** | Pointer to **string** |  | [optional] 
**SmartContractTag** | Pointer to [**[]SmartContractTag**](SmartContractTag.md) |  | [optional] 
**Urgency** | Pointer to **string** |  | [optional] 
**RequestDetails** | Pointer to [**PrepareRequestDetails**](PrepareRequestDetails.md) |  | [optional] 
**SmartContractAddress** | Pointer to **string** |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 

## Methods

### NewPrepareRequest

`func NewPrepareRequest() *PrepareRequest`

NewPrepareRequest instantiates a new PrepareRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPrepareRequestWithDefaults

`func NewPrepareRequestWithDefaults() *PrepareRequest`

NewPrepareRequestWithDefaults instantiates a new PrepareRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetApiLookupPath

`func (o *PrepareRequest) GetApiLookupPath() string`

GetApiLookupPath returns the ApiLookupPath field if non-nil, zero value otherwise.

### GetApiLookupPathOk

`func (o *PrepareRequest) GetApiLookupPathOk() (*string, bool)`

GetApiLookupPathOk returns a tuple with the ApiLookupPath field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetApiLookupPath

`func (o *PrepareRequest) SetApiLookupPath(v string)`

SetApiLookupPath sets ApiLookupPath field to given value.

### HasApiLookupPath

`func (o *PrepareRequest) HasApiLookupPath() bool`

HasApiLookupPath returns a boolean if a field has been set.

### GetSmartContractTag

`func (o *PrepareRequest) GetSmartContractTag() []SmartContractTag`

GetSmartContractTag returns the SmartContractTag field if non-nil, zero value otherwise.

### GetSmartContractTagOk

`func (o *PrepareRequest) GetSmartContractTagOk() (*[]SmartContractTag, bool)`

GetSmartContractTagOk returns a tuple with the SmartContractTag field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContractTag

`func (o *PrepareRequest) SetSmartContractTag(v []SmartContractTag)`

SetSmartContractTag sets SmartContractTag field to given value.

### HasSmartContractTag

`func (o *PrepareRequest) HasSmartContractTag() bool`

HasSmartContractTag returns a boolean if a field has been set.

### GetUrgency

`func (o *PrepareRequest) GetUrgency() string`

GetUrgency returns the Urgency field if non-nil, zero value otherwise.

### GetUrgencyOk

`func (o *PrepareRequest) GetUrgencyOk() (*string, bool)`

GetUrgencyOk returns a tuple with the Urgency field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUrgency

`func (o *PrepareRequest) SetUrgency(v string)`

SetUrgency sets Urgency field to given value.

### HasUrgency

`func (o *PrepareRequest) HasUrgency() bool`

HasUrgency returns a boolean if a field has been set.

### GetRequestDetails

`func (o *PrepareRequest) GetRequestDetails() PrepareRequestDetails`

GetRequestDetails returns the RequestDetails field if non-nil, zero value otherwise.

### GetRequestDetailsOk

`func (o *PrepareRequest) GetRequestDetailsOk() (*PrepareRequestDetails, bool)`

GetRequestDetailsOk returns a tuple with the RequestDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestDetails

`func (o *PrepareRequest) SetRequestDetails(v PrepareRequestDetails)`

SetRequestDetails sets RequestDetails field to given value.

### HasRequestDetails

`func (o *PrepareRequest) HasRequestDetails() bool`

HasRequestDetails returns a boolean if a field has been set.

### GetSmartContractAddress

`func (o *PrepareRequest) GetSmartContractAddress() string`

GetSmartContractAddress returns the SmartContractAddress field if non-nil, zero value otherwise.

### GetSmartContractAddressOk

`func (o *PrepareRequest) GetSmartContractAddressOk() (*string, bool)`

GetSmartContractAddressOk returns a tuple with the SmartContractAddress field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContractAddress

`func (o *PrepareRequest) SetSmartContractAddress(v string)`

SetSmartContractAddress sets SmartContractAddress field to given value.

### HasSmartContractAddress

`func (o *PrepareRequest) HasSmartContractAddress() bool`

HasSmartContractAddress returns a boolean if a field has been set.

### GetLocation

`func (o *PrepareRequest) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *PrepareRequest) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *PrepareRequest) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *PrepareRequest) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetType

`func (o *PrepareRequest) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *PrepareRequest) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *PrepareRequest) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *PrepareRequest) HasType() bool`

HasType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


