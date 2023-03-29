# Receiver

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AccountId** | Pointer to **string** |  | [optional] 
**Transfer** | Pointer to [**Transfer**](Transfer.md) |  | [optional] 

## Methods

### NewReceiver

`func NewReceiver() *Receiver`

NewReceiver instantiates a new Receiver object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewReceiverWithDefaults

`func NewReceiverWithDefaults() *Receiver`

NewReceiverWithDefaults instantiates a new Receiver object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAccountId

`func (o *Receiver) GetAccountId() string`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *Receiver) GetAccountIdOk() (*string, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *Receiver) SetAccountId(v string)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *Receiver) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetTransfer

`func (o *Receiver) GetTransfer() Transfer`

GetTransfer returns the Transfer field if non-nil, zero value otherwise.

### GetTransferOk

`func (o *Receiver) GetTransferOk() (*Transfer, bool)`

GetTransferOk returns a tuple with the Transfer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransfer

`func (o *Receiver) SetTransfer(v Transfer)`

SetTransfer sets Transfer field to given value.

### HasTransfer

`func (o *Receiver) HasTransfer() bool`

HasTransfer returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


