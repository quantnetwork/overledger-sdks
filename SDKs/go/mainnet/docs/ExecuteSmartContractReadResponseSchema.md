# ExecuteSmartContractReadResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SmartContract** | Pointer to [**SmartContractReadSchema**](SmartContractReadSchema.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 

## Methods

### NewExecuteSmartContractReadResponseSchema

`func NewExecuteSmartContractReadResponseSchema() *ExecuteSmartContractReadResponseSchema`

NewExecuteSmartContractReadResponseSchema instantiates a new ExecuteSmartContractReadResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewExecuteSmartContractReadResponseSchemaWithDefaults

`func NewExecuteSmartContractReadResponseSchemaWithDefaults() *ExecuteSmartContractReadResponseSchema`

NewExecuteSmartContractReadResponseSchemaWithDefaults instantiates a new ExecuteSmartContractReadResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSmartContract

`func (o *ExecuteSmartContractReadResponseSchema) GetSmartContract() SmartContractReadSchema`

GetSmartContract returns the SmartContract field if non-nil, zero value otherwise.

### GetSmartContractOk

`func (o *ExecuteSmartContractReadResponseSchema) GetSmartContractOk() (*SmartContractReadSchema, bool)`

GetSmartContractOk returns a tuple with the SmartContract field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContract

`func (o *ExecuteSmartContractReadResponseSchema) SetSmartContract(v SmartContractReadSchema)`

SetSmartContract sets SmartContract field to given value.

### HasSmartContract

`func (o *ExecuteSmartContractReadResponseSchema) HasSmartContract() bool`

HasSmartContract returns a boolean if a field has been set.

### GetLocation

`func (o *ExecuteSmartContractReadResponseSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *ExecuteSmartContractReadResponseSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *ExecuteSmartContractReadResponseSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *ExecuteSmartContractReadResponseSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


