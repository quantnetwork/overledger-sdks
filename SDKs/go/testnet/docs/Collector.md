# Collector

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AccountId** | Pointer to **string** |  | [optional] 
**Transfer** | Pointer to [**Transfer**](Transfer.md) |  | [optional] 

## Methods

### NewCollector

`func NewCollector() *Collector`

NewCollector instantiates a new Collector object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCollectorWithDefaults

`func NewCollectorWithDefaults() *Collector`

NewCollectorWithDefaults instantiates a new Collector object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAccountId

`func (o *Collector) GetAccountId() string`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *Collector) GetAccountIdOk() (*string, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *Collector) SetAccountId(v string)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *Collector) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetTransfer

`func (o *Collector) GetTransfer() Transfer`

GetTransfer returns the Transfer field if non-nil, zero value otherwise.

### GetTransferOk

`func (o *Collector) GetTransferOk() (*Transfer, bool)`

GetTransferOk returns a tuple with the Transfer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransfer

`func (o *Collector) SetTransfer(v Transfer)`

SetTransfer sets Transfer field to given value.

### HasTransfer

`func (o *Collector) HasTransfer() bool`

HasTransfer returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


