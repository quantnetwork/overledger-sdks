# SmartContract

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Function** | Pointer to [**Function**](Function.md) |  | [optional] 
**Detail** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** | Information on the object type | [optional] 
**SmartContractId** | Pointer to **string** |  | [optional] 
**ExtraFields** | Pointer to **map[string]interface{}** |  | [optional] 

## Methods

### NewSmartContract

`func NewSmartContract() *SmartContract`

NewSmartContract instantiates a new SmartContract object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSmartContractWithDefaults

`func NewSmartContractWithDefaults() *SmartContract`

NewSmartContractWithDefaults instantiates a new SmartContract object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFunction

`func (o *SmartContract) GetFunction() Function`

GetFunction returns the Function field if non-nil, zero value otherwise.

### GetFunctionOk

`func (o *SmartContract) GetFunctionOk() (*Function, bool)`

GetFunctionOk returns a tuple with the Function field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFunction

`func (o *SmartContract) SetFunction(v Function)`

SetFunction sets Function field to given value.

### HasFunction

`func (o *SmartContract) HasFunction() bool`

HasFunction returns a boolean if a field has been set.

### GetDetail

`func (o *SmartContract) GetDetail() string`

GetDetail returns the Detail field if non-nil, zero value otherwise.

### GetDetailOk

`func (o *SmartContract) GetDetailOk() (*string, bool)`

GetDetailOk returns a tuple with the Detail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDetail

`func (o *SmartContract) SetDetail(v string)`

SetDetail sets Detail field to given value.

### HasDetail

`func (o *SmartContract) HasDetail() bool`

HasDetail returns a boolean if a field has been set.

### GetType

`func (o *SmartContract) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *SmartContract) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *SmartContract) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *SmartContract) HasType() bool`

HasType returns a boolean if a field has been set.

### GetSmartContractId

`func (o *SmartContract) GetSmartContractId() string`

GetSmartContractId returns the SmartContractId field if non-nil, zero value otherwise.

### GetSmartContractIdOk

`func (o *SmartContract) GetSmartContractIdOk() (*string, bool)`

GetSmartContractIdOk returns a tuple with the SmartContractId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContractId

`func (o *SmartContract) SetSmartContractId(v string)`

SetSmartContractId sets SmartContractId field to given value.

### HasSmartContractId

`func (o *SmartContract) HasSmartContractId() bool`

HasSmartContractId returns a boolean if a field has been set.

### GetExtraFields

`func (o *SmartContract) GetExtraFields() map[string]interface{}`

GetExtraFields returns the ExtraFields field if non-nil, zero value otherwise.

### GetExtraFieldsOk

`func (o *SmartContract) GetExtraFieldsOk() (*map[string]interface{}, bool)`

GetExtraFieldsOk returns a tuple with the ExtraFields field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraFields

`func (o *SmartContract) SetExtraFields(v map[string]interface{})`

SetExtraFields sets ExtraFields field to given value.

### HasExtraFields

`func (o *SmartContract) HasExtraFields() bool`

HasExtraFields returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


