# Transaction

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Signature** | Pointer to **[]string** | The signatures of this transaction | [optional] 
**Origin** | Pointer to [**[]Origin**](Origin.md) |  | [optional] 
**Fee** | Pointer to [**Fee**](Fee.md) |  | [optional] 
**Destination** | Pointer to [**[]Destination**](Destination.md) |  | [optional] 
**Signed** | Pointer to **string** |  | [optional] 
**TotalPaymentAmount** | Pointer to [**[]Payment**](Payment.md) |  | [optional] 
**Message** | Pointer to **string** | Any text-based element of the data payload | [optional] 
**TransactionId** | Pointer to **string** | The unique identifier of the transaction on this DLN | [optional] 
**Encoded** | Pointer to **[]string** |  | [optional] 
**ExtraFields** | Pointer to **map[string]interface{}** |  | [optional] 
**NativeData** | Pointer to **map[string]interface{}** |  | [optional] 

## Methods

### NewTransaction

`func NewTransaction() *Transaction`

NewTransaction instantiates a new Transaction object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransactionWithDefaults

`func NewTransactionWithDefaults() *Transaction`

NewTransactionWithDefaults instantiates a new Transaction object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSignature

`func (o *Transaction) GetSignature() []string`

GetSignature returns the Signature field if non-nil, zero value otherwise.

### GetSignatureOk

`func (o *Transaction) GetSignatureOk() (*[]string, bool)`

GetSignatureOk returns a tuple with the Signature field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSignature

`func (o *Transaction) SetSignature(v []string)`

SetSignature sets Signature field to given value.

### HasSignature

`func (o *Transaction) HasSignature() bool`

HasSignature returns a boolean if a field has been set.

### GetOrigin

`func (o *Transaction) GetOrigin() []Origin`

GetOrigin returns the Origin field if non-nil, zero value otherwise.

### GetOriginOk

`func (o *Transaction) GetOriginOk() (*[]Origin, bool)`

GetOriginOk returns a tuple with the Origin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrigin

`func (o *Transaction) SetOrigin(v []Origin)`

SetOrigin sets Origin field to given value.

### HasOrigin

`func (o *Transaction) HasOrigin() bool`

HasOrigin returns a boolean if a field has been set.

### GetFee

`func (o *Transaction) GetFee() Fee`

GetFee returns the Fee field if non-nil, zero value otherwise.

### GetFeeOk

`func (o *Transaction) GetFeeOk() (*Fee, bool)`

GetFeeOk returns a tuple with the Fee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFee

`func (o *Transaction) SetFee(v Fee)`

SetFee sets Fee field to given value.

### HasFee

`func (o *Transaction) HasFee() bool`

HasFee returns a boolean if a field has been set.

### GetDestination

`func (o *Transaction) GetDestination() []Destination`

GetDestination returns the Destination field if non-nil, zero value otherwise.

### GetDestinationOk

`func (o *Transaction) GetDestinationOk() (*[]Destination, bool)`

GetDestinationOk returns a tuple with the Destination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestination

`func (o *Transaction) SetDestination(v []Destination)`

SetDestination sets Destination field to given value.

### HasDestination

`func (o *Transaction) HasDestination() bool`

HasDestination returns a boolean if a field has been set.

### GetSigned

`func (o *Transaction) GetSigned() string`

GetSigned returns the Signed field if non-nil, zero value otherwise.

### GetSignedOk

`func (o *Transaction) GetSignedOk() (*string, bool)`

GetSignedOk returns a tuple with the Signed field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSigned

`func (o *Transaction) SetSigned(v string)`

SetSigned sets Signed field to given value.

### HasSigned

`func (o *Transaction) HasSigned() bool`

HasSigned returns a boolean if a field has been set.

### GetTotalPaymentAmount

`func (o *Transaction) GetTotalPaymentAmount() []Payment`

GetTotalPaymentAmount returns the TotalPaymentAmount field if non-nil, zero value otherwise.

### GetTotalPaymentAmountOk

`func (o *Transaction) GetTotalPaymentAmountOk() (*[]Payment, bool)`

GetTotalPaymentAmountOk returns a tuple with the TotalPaymentAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalPaymentAmount

`func (o *Transaction) SetTotalPaymentAmount(v []Payment)`

SetTotalPaymentAmount sets TotalPaymentAmount field to given value.

### HasTotalPaymentAmount

`func (o *Transaction) HasTotalPaymentAmount() bool`

HasTotalPaymentAmount returns a boolean if a field has been set.

### GetMessage

`func (o *Transaction) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *Transaction) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *Transaction) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *Transaction) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetTransactionId

`func (o *Transaction) GetTransactionId() string`

GetTransactionId returns the TransactionId field if non-nil, zero value otherwise.

### GetTransactionIdOk

`func (o *Transaction) GetTransactionIdOk() (*string, bool)`

GetTransactionIdOk returns a tuple with the TransactionId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransactionId

`func (o *Transaction) SetTransactionId(v string)`

SetTransactionId sets TransactionId field to given value.

### HasTransactionId

`func (o *Transaction) HasTransactionId() bool`

HasTransactionId returns a boolean if a field has been set.

### GetEncoded

`func (o *Transaction) GetEncoded() []string`

GetEncoded returns the Encoded field if non-nil, zero value otherwise.

### GetEncodedOk

`func (o *Transaction) GetEncodedOk() (*[]string, bool)`

GetEncodedOk returns a tuple with the Encoded field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEncoded

`func (o *Transaction) SetEncoded(v []string)`

SetEncoded sets Encoded field to given value.

### HasEncoded

`func (o *Transaction) HasEncoded() bool`

HasEncoded returns a boolean if a field has been set.

### GetExtraFields

`func (o *Transaction) GetExtraFields() map[string]interface{}`

GetExtraFields returns the ExtraFields field if non-nil, zero value otherwise.

### GetExtraFieldsOk

`func (o *Transaction) GetExtraFieldsOk() (*map[string]interface{}, bool)`

GetExtraFieldsOk returns a tuple with the ExtraFields field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtraFields

`func (o *Transaction) SetExtraFields(v map[string]interface{})`

SetExtraFields sets ExtraFields field to given value.

### HasExtraFields

`func (o *Transaction) HasExtraFields() bool`

HasExtraFields returns a boolean if a field has been set.

### GetNativeData

`func (o *Transaction) GetNativeData() map[string]interface{}`

GetNativeData returns the NativeData field if non-nil, zero value otherwise.

### GetNativeDataOk

`func (o *Transaction) GetNativeDataOk() (*map[string]interface{}, bool)`

GetNativeDataOk returns a tuple with the NativeData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNativeData

`func (o *Transaction) SetNativeData(v map[string]interface{})`

SetNativeData sets NativeData field to given value.

### HasNativeData

`func (o *Transaction) HasNativeData() bool`

HasNativeData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


