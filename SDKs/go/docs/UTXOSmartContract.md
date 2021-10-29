# UTXOSmartContract

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Detail** | Pointer to **string** |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**ExtraFields** | Pointer to [**ExtraFields**](ExtraFields.md) |  | [optional] 

## Methods

### NewUTXOSmartContract

`func NewUTXOSmartContract() *UTXOSmartContract`

NewUTXOSmartContract instantiates a new UTXOSmartContract object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewUTXOSmartContractWithDefaults

`func NewUTXOSmartContractWithDefaults() *UTXOSmartContract`

NewUTXOSmartContractWithDefaults instantiates a new UTXOSmartContract object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDetail

`func (o *UTXOSmartContract) GetDetail() string`

GetDetail returns the Detail field if non-nil, zero value otherwise.

### GetDetailOk

`func (o *UTXOSmartContract) GetDetailOk() (*string, bool)`

GetDetailOk returns a tuple with the Detail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDetail

`func (o *UTXOSmartContract) SetDetail(v string)`

SetDetail sets Detail field to given value.

### HasDetail

`func (o *UTXOSmartContract) HasDetail() bool`

HasDetail returns a boolean if a field has been set.

### GetType

`func (o *UTXOSmartContract) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *UTXOSmartContract) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *UTXOSmartContract) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *UTXOSmartContract) HasType() bool`

HasType returns a boolean if a field has been set.

### GetExtraFields

`func (o *UTXOSmartContract) GetExtraFields() ExtraFields`

GetExtraFields returns the ExtraFields field if non-nil, zero value otherwise.

### GetExtraFieldsOk

`func (o *UTXOSmartContract) GetExtraFieldsOk() (*ExtraFields, bool)`

GetExtraFieldsOk returns a tuple with the ExtraFields field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraFields

`func (o *UTXOSmartContract) SetExtraFields(v ExtraFields)`

SetExtraFields sets ExtraFields field to given value.

### HasExtraFields

`func (o *UTXOSmartContract) HasExtraFields() bool`

HasExtraFields returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


