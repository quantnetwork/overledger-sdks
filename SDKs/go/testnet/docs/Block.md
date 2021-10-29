# Block

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**BlockId** | Pointer to **string** |  | [optional] 
**Number** | Pointer to **int32** |  | [optional] 
**TransactionIds** | Pointer to **[]string** |  | [optional] 
**Size** | Pointer to [**[]BlockSize**](BlockSize.md) |  | [optional] 
**Hashes** | Pointer to [**[]BlockHash**](BlockHash.md) |  | [optional] 
**LinkedBlocks** | Pointer to [**LinkedBlocks**](LinkedBlocks.md) |  | [optional] 
**NumberOfTransactions** | Pointer to **int32** |  | [optional] 
**Message** | Pointer to **string** |  | [optional] 
**Timestamp** | Pointer to **int32** |  | [optional] 
**NativeData** | Pointer to **map[string]interface{}** |  | [optional] 

## Methods

### NewBlock

`func NewBlock() *Block`

NewBlock instantiates a new Block object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewBlockWithDefaults

`func NewBlockWithDefaults() *Block`

NewBlockWithDefaults instantiates a new Block object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetBlockId

`func (o *Block) GetBlockId() string`

GetBlockId returns the BlockId field if non-nil, zero value otherwise.

### GetBlockIdOk

`func (o *Block) GetBlockIdOk() (*string, bool)`

GetBlockIdOk returns a tuple with the BlockId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlockId

`func (o *Block) SetBlockId(v string)`

SetBlockId sets BlockId field to given value.

### HasBlockId

`func (o *Block) HasBlockId() bool`

HasBlockId returns a boolean if a field has been set.

### GetNumber

`func (o *Block) GetNumber() int32`

GetNumber returns the Number field if non-nil, zero value otherwise.

### GetNumberOk

`func (o *Block) GetNumberOk() (*int32, bool)`

GetNumberOk returns a tuple with the Number field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumber

`func (o *Block) SetNumber(v int32)`

SetNumber sets Number field to given value.

### HasNumber

`func (o *Block) HasNumber() bool`

HasNumber returns a boolean if a field has been set.

### GetTransactionIds

`func (o *Block) GetTransactionIds() []string`

GetTransactionIds returns the TransactionIds field if non-nil, zero value otherwise.

### GetTransactionIdsOk

`func (o *Block) GetTransactionIdsOk() (*[]string, bool)`

GetTransactionIdsOk returns a tuple with the TransactionIds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransactionIds

`func (o *Block) SetTransactionIds(v []string)`

SetTransactionIds sets TransactionIds field to given value.

### HasTransactionIds

`func (o *Block) HasTransactionIds() bool`

HasTransactionIds returns a boolean if a field has been set.

### GetSize

`func (o *Block) GetSize() []BlockSize`

GetSize returns the Size field if non-nil, zero value otherwise.

### GetSizeOk

`func (o *Block) GetSizeOk() (*[]BlockSize, bool)`

GetSizeOk returns a tuple with the Size field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSize

`func (o *Block) SetSize(v []BlockSize)`

SetSize sets Size field to given value.

### HasSize

`func (o *Block) HasSize() bool`

HasSize returns a boolean if a field has been set.

### GetHashes

`func (o *Block) GetHashes() []BlockHash`

GetHashes returns the Hashes field if non-nil, zero value otherwise.

### GetHashesOk

`func (o *Block) GetHashesOk() (*[]BlockHash, bool)`

GetHashesOk returns a tuple with the Hashes field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHashes

`func (o *Block) SetHashes(v []BlockHash)`

SetHashes sets Hashes field to given value.

### HasHashes

`func (o *Block) HasHashes() bool`

HasHashes returns a boolean if a field has been set.

### GetLinkedBlocks

`func (o *Block) GetLinkedBlocks() LinkedBlocks`

GetLinkedBlocks returns the LinkedBlocks field if non-nil, zero value otherwise.

### GetLinkedBlocksOk

`func (o *Block) GetLinkedBlocksOk() (*LinkedBlocks, bool)`

GetLinkedBlocksOk returns a tuple with the LinkedBlocks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLinkedBlocks

`func (o *Block) SetLinkedBlocks(v LinkedBlocks)`

SetLinkedBlocks sets LinkedBlocks field to given value.

### HasLinkedBlocks

`func (o *Block) HasLinkedBlocks() bool`

HasLinkedBlocks returns a boolean if a field has been set.

### GetNumberOfTransactions

`func (o *Block) GetNumberOfTransactions() int32`

GetNumberOfTransactions returns the NumberOfTransactions field if non-nil, zero value otherwise.

### GetNumberOfTransactionsOk

`func (o *Block) GetNumberOfTransactionsOk() (*int32, bool)`

GetNumberOfTransactionsOk returns a tuple with the NumberOfTransactions field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumberOfTransactions

`func (o *Block) SetNumberOfTransactions(v int32)`

SetNumberOfTransactions sets NumberOfTransactions field to given value.

### HasNumberOfTransactions

`func (o *Block) HasNumberOfTransactions() bool`

HasNumberOfTransactions returns a boolean if a field has been set.

### GetMessage

`func (o *Block) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *Block) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *Block) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *Block) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetTimestamp

`func (o *Block) GetTimestamp() int32`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *Block) GetTimestampOk() (*int32, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *Block) SetTimestamp(v int32)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *Block) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.

### GetNativeData

`func (o *Block) GetNativeData() map[string]interface{}`

GetNativeData returns the NativeData field if non-nil, zero value otherwise.

### GetNativeDataOk

`func (o *Block) GetNativeDataOk() (*map[string]interface{}, bool)`

GetNativeDataOk returns a tuple with the NativeData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNativeData

`func (o *Block) SetNativeData(v map[string]interface{})`

SetNativeData sets NativeData field to given value.

### HasNativeData

`func (o *Block) HasNativeData() bool`

HasNativeData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


