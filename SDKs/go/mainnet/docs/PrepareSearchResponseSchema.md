# PrepareSearchResponseSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**GatewayFee** | Pointer to [**Fee**](Fee.md) |  | [optional] 
**RequestId** | Pointer to **string** | The ID assigned to a preparation request in Overledger | [optional] 

## Methods

### NewPrepareSearchResponseSchema

`func NewPrepareSearchResponseSchema() *PrepareSearchResponseSchema`

NewPrepareSearchResponseSchema instantiates a new PrepareSearchResponseSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPrepareSearchResponseSchemaWithDefaults

`func NewPrepareSearchResponseSchemaWithDefaults() *PrepareSearchResponseSchema`

NewPrepareSearchResponseSchemaWithDefaults instantiates a new PrepareSearchResponseSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetGatewayFee

`func (o *PrepareSearchResponseSchema) GetGatewayFee() Fee`

GetGatewayFee returns the GatewayFee field if non-nil, zero value otherwise.

### GetGatewayFeeOk

`func (o *PrepareSearchResponseSchema) GetGatewayFeeOk() (*Fee, bool)`

GetGatewayFeeOk returns a tuple with the GatewayFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetGatewayFee

`func (o *PrepareSearchResponseSchema) SetGatewayFee(v Fee)`

SetGatewayFee sets GatewayFee field to given value.

### HasGatewayFee

`func (o *PrepareSearchResponseSchema) HasGatewayFee() bool`

HasGatewayFee returns a boolean if a field has been set.

### GetRequestId

`func (o *PrepareSearchResponseSchema) GetRequestId() string`

GetRequestId returns the RequestId field if non-nil, zero value otherwise.

### GetRequestIdOk

`func (o *PrepareSearchResponseSchema) GetRequestIdOk() (*string, bool)`

GetRequestIdOk returns a tuple with the RequestId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRequestId

`func (o *PrepareSearchResponseSchema) SetRequestId(v string)`

SetRequestId sets RequestId field to given value.

### HasRequestId

`func (o *PrepareSearchResponseSchema) HasRequestId() bool`

HasRequestId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


