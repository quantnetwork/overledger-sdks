# ExecuteTransactionRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Signed** | Pointer to **string** | The raw data after transaction signing | [optional] 
**RequestId** | **string** | The ID assigned to a preparation request in Overledger | 

## Methods

### NewExecuteTransactionRequest

`func NewExecuteTransactionRequest(requestId string, ) *ExecuteTransactionRequest`

NewExecuteTransactionRequest instantiates a new ExecuteTransactionRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewExecuteTransactionRequestWithDefaults

`func NewExecuteTransactionRequestWithDefaults() *ExecuteTransactionRequest`

NewExecuteTransactionRequestWithDefaults instantiates a new ExecuteTransactionRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSigned

`func (o *ExecuteTransactionRequest) GetSigned() string`

GetSigned returns the Signed field if non-nil, zero value otherwise.

### GetSignedOk

`func (o *ExecuteTransactionRequest) GetSignedOk() (*string, bool)`

GetSignedOk returns a tuple with the Signed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSigned

`func (o *ExecuteTransactionRequest) SetSigned(v string)`

SetSigned sets Signed field to given value.

### HasSigned

`func (o *ExecuteTransactionRequest) HasSigned() bool`

HasSigned returns a boolean if a field has been set.

### GetRequestId

`func (o *ExecuteTransactionRequest) GetRequestId() string`

GetRequestId returns the RequestId field if non-nil, zero value otherwise.

### GetRequestIdOk

`func (o *ExecuteTransactionRequest) GetRequestIdOk() (*string, bool)`

GetRequestIdOk returns a tuple with the RequestId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestId

`func (o *ExecuteTransactionRequest) SetRequestId(v string)`

SetRequestId sets RequestId field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


