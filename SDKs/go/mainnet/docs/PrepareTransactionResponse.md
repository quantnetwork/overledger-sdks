# PrepareTransactionResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**GatewayFee** | Pointer to [**Fee**](Fee.md) |  | [optional] 
**RequestId** | Pointer to **string** | The ID assigned to a preparation request in Overledger | [optional] 
**DltFee** | Pointer to [**Fee**](Fee.md) |  | [optional] 
**NativeData** | Pointer to **map[string]interface{}** |  | [optional] 

## Methods

### NewPrepareTransactionResponse

`func NewPrepareTransactionResponse() *PrepareTransactionResponse`

NewPrepareTransactionResponse instantiates a new PrepareTransactionResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPrepareTransactionResponseWithDefaults

`func NewPrepareTransactionResponseWithDefaults() *PrepareTransactionResponse`

NewPrepareTransactionResponseWithDefaults instantiates a new PrepareTransactionResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetGatewayFee

`func (o *PrepareTransactionResponse) GetGatewayFee() Fee`

GetGatewayFee returns the GatewayFee field if non-nil, zero value otherwise.

### GetGatewayFeeOk

`func (o *PrepareTransactionResponse) GetGatewayFeeOk() (*Fee, bool)`

GetGatewayFeeOk returns a tuple with the GatewayFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGatewayFee

`func (o *PrepareTransactionResponse) SetGatewayFee(v Fee)`

SetGatewayFee sets GatewayFee field to given value.

### HasGatewayFee

`func (o *PrepareTransactionResponse) HasGatewayFee() bool`

HasGatewayFee returns a boolean if a field has been set.

### GetRequestId

`func (o *PrepareTransactionResponse) GetRequestId() string`

GetRequestId returns the RequestId field if non-nil, zero value otherwise.

### GetRequestIdOk

`func (o *PrepareTransactionResponse) GetRequestIdOk() (*string, bool)`

GetRequestIdOk returns a tuple with the RequestId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestId

`func (o *PrepareTransactionResponse) SetRequestId(v string)`

SetRequestId sets RequestId field to given value.

### HasRequestId

`func (o *PrepareTransactionResponse) HasRequestId() bool`

HasRequestId returns a boolean if a field has been set.

### GetDltFee

`func (o *PrepareTransactionResponse) GetDltFee() Fee`

GetDltFee returns the DltFee field if non-nil, zero value otherwise.

### GetDltFeeOk

`func (o *PrepareTransactionResponse) GetDltFeeOk() (*Fee, bool)`

GetDltFeeOk returns a tuple with the DltFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDltFee

`func (o *PrepareTransactionResponse) SetDltFee(v Fee)`

SetDltFee sets DltFee field to given value.

### HasDltFee

`func (o *PrepareTransactionResponse) HasDltFee() bool`

HasDltFee returns a boolean if a field has been set.

### GetNativeData

`func (o *PrepareTransactionResponse) GetNativeData() map[string]interface{}`

GetNativeData returns the NativeData field if non-nil, zero value otherwise.

### GetNativeDataOk

`func (o *PrepareTransactionResponse) GetNativeDataOk() (*map[string]interface{}, bool)`

GetNativeDataOk returns a tuple with the NativeData field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNativeData

`func (o *PrepareTransactionResponse) SetNativeData(v map[string]interface{})`

SetNativeData sets NativeData field to given value.

### HasNativeData

`func (o *PrepareTransactionResponse) HasNativeData() bool`

HasNativeData returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


