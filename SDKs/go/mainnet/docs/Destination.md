# Destination

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Payment** | Pointer to [**Payment**](Payment.md) |  | [optional] 
**Transfer** | Pointer to [**Transfer**](Transfer.md) |  | [optional] 
**DestinationId** | Pointer to **string** | The unique identifier of the destination | [optional] 
**SmartContract** | Pointer to [**SmartContract**](SmartContract.md) |  | [optional] 

## Methods

### NewDestination

`func NewDestination() *Destination`

NewDestination instantiates a new Destination object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewDestinationWithDefaults

`func NewDestinationWithDefaults() *Destination`

NewDestinationWithDefaults instantiates a new Destination object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPayment

`func (o *Destination) GetPayment() Payment`

GetPayment returns the Payment field if non-nil, zero value otherwise.

### GetPaymentOk

`func (o *Destination) GetPaymentOk() (*Payment, bool)`

GetPaymentOk returns a tuple with the Payment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayment

`func (o *Destination) SetPayment(v Payment)`

SetPayment sets Payment field to given value.

### HasPayment

`func (o *Destination) HasPayment() bool`

HasPayment returns a boolean if a field has been set.

### GetTransfer

`func (o *Destination) GetTransfer() Transfer`

GetTransfer returns the Transfer field if non-nil, zero value otherwise.

### GetTransferOk

`func (o *Destination) GetTransferOk() (*Transfer, bool)`

GetTransferOk returns a tuple with the Transfer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransfer

`func (o *Destination) SetTransfer(v Transfer)`

SetTransfer sets Transfer field to given value.

### HasTransfer

`func (o *Destination) HasTransfer() bool`

HasTransfer returns a boolean if a field has been set.

### GetDestinationId

`func (o *Destination) GetDestinationId() string`

GetDestinationId returns the DestinationId field if non-nil, zero value otherwise.

### GetDestinationIdOk

`func (o *Destination) GetDestinationIdOk() (*string, bool)`

GetDestinationIdOk returns a tuple with the DestinationId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestinationId

`func (o *Destination) SetDestinationId(v string)`

SetDestinationId sets DestinationId field to given value.

### HasDestinationId

`func (o *Destination) HasDestinationId() bool`

HasDestinationId returns a boolean if a field has been set.

### GetSmartContract

`func (o *Destination) GetSmartContract() SmartContract`

GetSmartContract returns the SmartContract field if non-nil, zero value otherwise.

### GetSmartContractOk

`func (o *Destination) GetSmartContractOk() (*SmartContract, bool)`

GetSmartContractOk returns a tuple with the SmartContract field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContract

`func (o *Destination) SetSmartContract(v SmartContract)`

SetSmartContract sets SmartContract field to given value.

### HasSmartContract

`func (o *Destination) HasSmartContract() bool`

HasSmartContract returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


