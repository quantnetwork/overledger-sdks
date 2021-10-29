# SmartContractSearchSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Function** | Pointer to [**SmartContractSearchFunctionSchema**](SmartContractSearchFunctionSchema.md) |  | [optional] 
**SmartContractId** | Pointer to **string** |  | [optional] 

## Methods

### NewSmartContractSearchSchema

`func NewSmartContractSearchSchema() *SmartContractSearchSchema`

NewSmartContractSearchSchema instantiates a new SmartContractSearchSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSmartContractSearchSchemaWithDefaults

`func NewSmartContractSearchSchemaWithDefaults() *SmartContractSearchSchema`

NewSmartContractSearchSchemaWithDefaults instantiates a new SmartContractSearchSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFunction

`func (o *SmartContractSearchSchema) GetFunction() SmartContractSearchFunctionSchema`

GetFunction returns the Function field if non-nil, zero value otherwise.

### GetFunctionOk

`func (o *SmartContractSearchSchema) GetFunctionOk() (*SmartContractSearchFunctionSchema, bool)`

GetFunctionOk returns a tuple with the Function field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFunction

`func (o *SmartContractSearchSchema) SetFunction(v SmartContractSearchFunctionSchema)`

SetFunction sets Function field to given value.

### HasFunction

`func (o *SmartContractSearchSchema) HasFunction() bool`

HasFunction returns a boolean if a field has been set.

### GetSmartContractId

`func (o *SmartContractSearchSchema) GetSmartContractId() string`

GetSmartContractId returns the SmartContractId field if non-nil, zero value otherwise.

### GetSmartContractIdOk

`func (o *SmartContractSearchSchema) GetSmartContractIdOk() (*string, bool)`

GetSmartContractIdOk returns a tuple with the SmartContractId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContractId

`func (o *SmartContractSearchSchema) SetSmartContractId(v string)`

SetSmartContractId sets SmartContractId field to given value.

### HasSmartContractId

`func (o *SmartContractSearchSchema) HasSmartContractId() bool`

HasSmartContractId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


