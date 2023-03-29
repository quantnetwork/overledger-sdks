# UTXODestination

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**DestinationId** | Pointer to **string** |  | [optional] 
**SmartContract** | Pointer to [**UTXOSmartContract**](UTXOSmartContract.md) |  | [optional] 
**Payment** | Pointer to [**Payment**](Payment.md) |  | [optional] 

## Methods

### NewUTXODestination

`func NewUTXODestination() *UTXODestination`

NewUTXODestination instantiates a new UTXODestination object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewUTXODestinationWithDefaults

`func NewUTXODestinationWithDefaults() *UTXODestination`

NewUTXODestinationWithDefaults instantiates a new UTXODestination object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDestinationId

`func (o *UTXODestination) GetDestinationId() string`

GetDestinationId returns the DestinationId field if non-nil, zero value otherwise.

### GetDestinationIdOk

`func (o *UTXODestination) GetDestinationIdOk() (*string, bool)`

GetDestinationIdOk returns a tuple with the DestinationId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestinationId

`func (o *UTXODestination) SetDestinationId(v string)`

SetDestinationId sets DestinationId field to given value.

### HasDestinationId

`func (o *UTXODestination) HasDestinationId() bool`

HasDestinationId returns a boolean if a field has been set.

### GetSmartContract

`func (o *UTXODestination) GetSmartContract() UTXOSmartContract`

GetSmartContract returns the SmartContract field if non-nil, zero value otherwise.

### GetSmartContractOk

`func (o *UTXODestination) GetSmartContractOk() (*UTXOSmartContract, bool)`

GetSmartContractOk returns a tuple with the SmartContract field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContract

`func (o *UTXODestination) SetSmartContract(v UTXOSmartContract)`

SetSmartContract sets SmartContract field to given value.

### HasSmartContract

`func (o *UTXODestination) HasSmartContract() bool`

HasSmartContract returns a boolean if a field has been set.

### GetPayment

`func (o *UTXODestination) GetPayment() Payment`

GetPayment returns the Payment field if non-nil, zero value otherwise.

### GetPaymentOk

`func (o *UTXODestination) GetPaymentOk() (*Payment, bool)`

GetPaymentOk returns a tuple with the Payment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayment

`func (o *UTXODestination) SetPayment(v Payment)`

SetPayment sets Payment field to given value.

### HasPayment

`func (o *UTXODestination) HasPayment() bool`

HasPayment returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


