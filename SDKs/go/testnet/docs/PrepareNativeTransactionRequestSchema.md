# PrepareNativeTransactionRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Type** | Pointer to **string** | The type of the object | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 

## Methods

### NewPrepareNativeTransactionRequestSchema

`func NewPrepareNativeTransactionRequestSchema() *PrepareNativeTransactionRequestSchema`

NewPrepareNativeTransactionRequestSchema instantiates a new PrepareNativeTransactionRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPrepareNativeTransactionRequestSchemaWithDefaults

`func NewPrepareNativeTransactionRequestSchemaWithDefaults() *PrepareNativeTransactionRequestSchema`

NewPrepareNativeTransactionRequestSchemaWithDefaults instantiates a new PrepareNativeTransactionRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetType

`func (o *PrepareNativeTransactionRequestSchema) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *PrepareNativeTransactionRequestSchema) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *PrepareNativeTransactionRequestSchema) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *PrepareNativeTransactionRequestSchema) HasType() bool`

HasType returns a boolean if a field has been set.

### GetLocation

`func (o *PrepareNativeTransactionRequestSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *PrepareNativeTransactionRequestSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *PrepareNativeTransactionRequestSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *PrepareNativeTransactionRequestSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


