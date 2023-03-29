# Origin

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Sequence** | Pointer to **string** |  | [optional] 
**SmartContract** | Pointer to [**SmartContract**](SmartContract.md) |  | [optional] 
**OriginId** | Pointer to **string** | The unique identifier of the origin | [optional] 

## Methods

### NewOrigin

`func NewOrigin() *Origin`

NewOrigin instantiates a new Origin object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOriginWithDefaults

`func NewOriginWithDefaults() *Origin`

NewOriginWithDefaults instantiates a new Origin object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSequence

`func (o *Origin) GetSequence() string`

GetSequence returns the Sequence field if non-nil, zero value otherwise.

### GetSequenceOk

`func (o *Origin) GetSequenceOk() (*string, bool)`

GetSequenceOk returns a tuple with the Sequence field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSequence

`func (o *Origin) SetSequence(v string)`

SetSequence sets Sequence field to given value.

### HasSequence

`func (o *Origin) HasSequence() bool`

HasSequence returns a boolean if a field has been set.

### GetSmartContract

`func (o *Origin) GetSmartContract() SmartContract`

GetSmartContract returns the SmartContract field if non-nil, zero value otherwise.

### GetSmartContractOk

`func (o *Origin) GetSmartContractOk() (*SmartContract, bool)`

GetSmartContractOk returns a tuple with the SmartContract field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContract

`func (o *Origin) SetSmartContract(v SmartContract)`

SetSmartContract sets SmartContract field to given value.

### HasSmartContract

`func (o *Origin) HasSmartContract() bool`

HasSmartContract returns a boolean if a field has been set.

### GetOriginId

`func (o *Origin) GetOriginId() string`

GetOriginId returns the OriginId field if non-nil, zero value otherwise.

### GetOriginIdOk

`func (o *Origin) GetOriginIdOk() (*string, bool)`

GetOriginIdOk returns a tuple with the OriginId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOriginId

`func (o *Origin) SetOriginId(v string)`

SetOriginId sets OriginId field to given value.

### HasOriginId

`func (o *Origin) HasOriginId() bool`

HasOriginId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


