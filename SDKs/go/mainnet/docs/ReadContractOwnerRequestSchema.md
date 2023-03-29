# ReadContractOwnerRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**RequestDetails** | Pointer to [**ReadContractOwnerRequestDetailsSchema**](ReadContractOwnerRequestDetailsSchema.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 

## Methods

### NewReadContractOwnerRequestSchema

`func NewReadContractOwnerRequestSchema() *ReadContractOwnerRequestSchema`

NewReadContractOwnerRequestSchema instantiates a new ReadContractOwnerRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewReadContractOwnerRequestSchemaWithDefaults

`func NewReadContractOwnerRequestSchemaWithDefaults() *ReadContractOwnerRequestSchema`

NewReadContractOwnerRequestSchemaWithDefaults instantiates a new ReadContractOwnerRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetRequestDetails

`func (o *ReadContractOwnerRequestSchema) GetRequestDetails() ReadContractOwnerRequestDetailsSchema`

GetRequestDetails returns the RequestDetails field if non-nil, zero value otherwise.

### GetRequestDetailsOk

`func (o *ReadContractOwnerRequestSchema) GetRequestDetailsOk() (*ReadContractOwnerRequestDetailsSchema, bool)`

GetRequestDetailsOk returns a tuple with the RequestDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestDetails

`func (o *ReadContractOwnerRequestSchema) SetRequestDetails(v ReadContractOwnerRequestDetailsSchema)`

SetRequestDetails sets RequestDetails field to given value.

### HasRequestDetails

`func (o *ReadContractOwnerRequestSchema) HasRequestDetails() bool`

HasRequestDetails returns a boolean if a field has been set.

### GetLocation

`func (o *ReadContractOwnerRequestSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ReadContractOwnerRequestSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ReadContractOwnerRequestSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ReadContractOwnerRequestSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


