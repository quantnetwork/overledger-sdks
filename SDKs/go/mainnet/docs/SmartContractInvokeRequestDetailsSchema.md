# SmartContractInvokeRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Destination** | Pointer to [**[]SmartContractDestinationSchema**](SmartContractDestinationSchema.md) |  | [optional] 
**Origin** | Pointer to [**[]SmartContractRequestDetailsOrigin**](SmartContractRequestDetailsOrigin.md) |  | [optional] 

## Methods

### NewSmartContractInvokeRequestDetailsSchema

`func NewSmartContractInvokeRequestDetailsSchema() *SmartContractInvokeRequestDetailsSchema`

NewSmartContractInvokeRequestDetailsSchema instantiates a new SmartContractInvokeRequestDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSmartContractInvokeRequestDetailsSchemaWithDefaults

`func NewSmartContractInvokeRequestDetailsSchemaWithDefaults() *SmartContractInvokeRequestDetailsSchema`

NewSmartContractInvokeRequestDetailsSchemaWithDefaults instantiates a new SmartContractInvokeRequestDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetDestination

`func (o *SmartContractInvokeRequestDetailsSchema) GetDestination() []SmartContractDestinationSchema`

GetDestination returns the Destination field if non-nil, zero value otherwise.

### GetDestinationOk

`func (o *SmartContractInvokeRequestDetailsSchema) GetDestinationOk() (*[]SmartContractDestinationSchema, bool)`

GetDestinationOk returns a tuple with the Destination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestination

`func (o *SmartContractInvokeRequestDetailsSchema) SetDestination(v []SmartContractDestinationSchema)`

SetDestination sets Destination field to given value.

### HasDestination

`func (o *SmartContractInvokeRequestDetailsSchema) HasDestination() bool`

HasDestination returns a boolean if a field has been set.

### GetOrigin

`func (o *SmartContractInvokeRequestDetailsSchema) GetOrigin() []SmartContractRequestDetailsOrigin`

GetOrigin returns the Origin field if non-nil, zero value otherwise.

### GetOriginOk

`func (o *SmartContractInvokeRequestDetailsSchema) GetOriginOk() (*[]SmartContractRequestDetailsOrigin, bool)`

GetOriginOk returns a tuple with the Origin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrigin

`func (o *SmartContractInvokeRequestDetailsSchema) SetOrigin(v []SmartContractRequestDetailsOrigin)`

SetOrigin sets Origin field to given value.

### HasOrigin

`func (o *SmartContractInvokeRequestDetailsSchema) HasOrigin() bool`

HasOrigin returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


