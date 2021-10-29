# UTXOTimestampSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Nano** | Pointer to **string** |  | [optional] 
**EpochSecond** | Pointer to **string** |  | [optional] 

## Methods

### NewUTXOTimestampSchema

`func NewUTXOTimestampSchema() *UTXOTimestampSchema`

NewUTXOTimestampSchema instantiates a new UTXOTimestampSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewUTXOTimestampSchemaWithDefaults

`func NewUTXOTimestampSchemaWithDefaults() *UTXOTimestampSchema`

NewUTXOTimestampSchemaWithDefaults instantiates a new UTXOTimestampSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetNano

`func (o *UTXOTimestampSchema) GetNano() string`

GetNano returns the Nano field if non-nil, zero value otherwise.

### GetNanoOk

`func (o *UTXOTimestampSchema) GetNanoOk() (*string, bool)`

GetNanoOk returns a tuple with the Nano field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNano

`func (o *UTXOTimestampSchema) SetNano(v string)`

SetNano sets Nano field to given value.

### HasNano

`func (o *UTXOTimestampSchema) HasNano() bool`

HasNano returns a boolean if a field has been set.

### GetEpochSecond

`func (o *UTXOTimestampSchema) GetEpochSecond() string`

GetEpochSecond returns the EpochSecond field if non-nil, zero value otherwise.

### GetEpochSecondOk

`func (o *UTXOTimestampSchema) GetEpochSecondOk() (*string, bool)`

GetEpochSecondOk returns a tuple with the EpochSecond field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEpochSecond

`func (o *UTXOTimestampSchema) SetEpochSecond(v string)`

SetEpochSecond sets EpochSecond field to given value.

### HasEpochSecond

`func (o *UTXOTimestampSchema) HasEpochSecond() bool`

HasEpochSecond returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


