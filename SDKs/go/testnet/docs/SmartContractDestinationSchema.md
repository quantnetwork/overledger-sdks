# SmartContractDestinationSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SmartContract** | Pointer to [**SmartContractSchema**](SmartContractSchema.md) |  | [optional] 
**Payment** | Pointer to [**SmartContractPaymentSchema**](SmartContractPaymentSchema.md) |  | [optional] 
**DestinationId** | Pointer to **string** |  | [optional] 

## Methods

### NewSmartContractDestinationSchema

`func NewSmartContractDestinationSchema() *SmartContractDestinationSchema`

NewSmartContractDestinationSchema instantiates a new SmartContractDestinationSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSmartContractDestinationSchemaWithDefaults

`func NewSmartContractDestinationSchemaWithDefaults() *SmartContractDestinationSchema`

NewSmartContractDestinationSchemaWithDefaults instantiates a new SmartContractDestinationSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSmartContract

`func (o *SmartContractDestinationSchema) GetSmartContract() SmartContractSchema`

GetSmartContract returns the SmartContract field if non-nil, zero value otherwise.

### GetSmartContractOk

`func (o *SmartContractDestinationSchema) GetSmartContractOk() (*SmartContractSchema, bool)`

GetSmartContractOk returns a tuple with the SmartContract field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContract

`func (o *SmartContractDestinationSchema) SetSmartContract(v SmartContractSchema)`

SetSmartContract sets SmartContract field to given value.

### HasSmartContract

`func (o *SmartContractDestinationSchema) HasSmartContract() bool`

HasSmartContract returns a boolean if a field has been set.

### GetPayment

`func (o *SmartContractDestinationSchema) GetPayment() SmartContractPaymentSchema`

GetPayment returns the Payment field if non-nil, zero value otherwise.

### GetPaymentOk

`func (o *SmartContractDestinationSchema) GetPaymentOk() (*SmartContractPaymentSchema, bool)`

GetPaymentOk returns a tuple with the Payment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayment

`func (o *SmartContractDestinationSchema) SetPayment(v SmartContractPaymentSchema)`

SetPayment sets Payment field to given value.

### HasPayment

`func (o *SmartContractDestinationSchema) HasPayment() bool`

HasPayment returns a boolean if a field has been set.

### GetDestinationId

`func (o *SmartContractDestinationSchema) GetDestinationId() string`

GetDestinationId returns the DestinationId field if non-nil, zero value otherwise.

### GetDestinationIdOk

`func (o *SmartContractDestinationSchema) GetDestinationIdOk() (*string, bool)`

GetDestinationIdOk returns a tuple with the DestinationId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestinationId

`func (o *SmartContractDestinationSchema) SetDestinationId(v string)`

SetDestinationId sets DestinationId field to given value.

### HasDestinationId

`func (o *SmartContractDestinationSchema) HasDestinationId() bool`

HasDestinationId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


