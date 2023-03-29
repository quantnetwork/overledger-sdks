# MonitorSmartContractRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**EventParams** | Pointer to [**[]MonitorSmartContractEventParam**](MonitorSmartContractEventParam.md) |  | [optional] 
**EventName** | Pointer to **string** |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**CallBackURL** | Pointer to **string** |  | [optional] 
**SmartContractId** | Pointer to **string** |  | [optional] 

## Methods

### NewMonitorSmartContractRequestSchema

`func NewMonitorSmartContractRequestSchema() *MonitorSmartContractRequestSchema`

NewMonitorSmartContractRequestSchema instantiates a new MonitorSmartContractRequestSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMonitorSmartContractRequestSchemaWithDefaults

`func NewMonitorSmartContractRequestSchemaWithDefaults() *MonitorSmartContractRequestSchema`

NewMonitorSmartContractRequestSchemaWithDefaults instantiates a new MonitorSmartContractRequestSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetEventParams

`func (o *MonitorSmartContractRequestSchema) GetEventParams() []MonitorSmartContractEventParam`

GetEventParams returns the EventParams field if non-nil, zero value otherwise.

### GetEventParamsOk

`func (o *MonitorSmartContractRequestSchema) GetEventParamsOk() (*[]MonitorSmartContractEventParam, bool)`

GetEventParamsOk returns a tuple with the EventParams field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEventParams

`func (o *MonitorSmartContractRequestSchema) SetEventParams(v []MonitorSmartContractEventParam)`

SetEventParams sets EventParams field to given value.

### HasEventParams

`func (o *MonitorSmartContractRequestSchema) HasEventParams() bool`

HasEventParams returns a boolean if a field has been set.

### GetEventName

`func (o *MonitorSmartContractRequestSchema) GetEventName() string`

GetEventName returns the EventName field if non-nil, zero value otherwise.

### GetEventNameOk

`func (o *MonitorSmartContractRequestSchema) GetEventNameOk() (*string, bool)`

GetEventNameOk returns a tuple with the EventName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEventName

`func (o *MonitorSmartContractRequestSchema) SetEventName(v string)`

SetEventName sets EventName field to given value.

### HasEventName

`func (o *MonitorSmartContractRequestSchema) HasEventName() bool`

HasEventName returns a boolean if a field has been set.

### GetLocation

`func (o *MonitorSmartContractRequestSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *MonitorSmartContractRequestSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *MonitorSmartContractRequestSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *MonitorSmartContractRequestSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetCallBackURL

`func (o *MonitorSmartContractRequestSchema) GetCallBackURL() string`

GetCallBackURL returns the CallBackURL field if non-nil, zero value otherwise.

### GetCallBackURLOk

`func (o *MonitorSmartContractRequestSchema) GetCallBackURLOk() (*string, bool)`

GetCallBackURLOk returns a tuple with the CallBackURL field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCallBackURL

`func (o *MonitorSmartContractRequestSchema) SetCallBackURL(v string)`

SetCallBackURL sets CallBackURL field to given value.

### HasCallBackURL

`func (o *MonitorSmartContractRequestSchema) HasCallBackURL() bool`

HasCallBackURL returns a boolean if a field has been set.

### GetSmartContractId

`func (o *MonitorSmartContractRequestSchema) GetSmartContractId() string`

GetSmartContractId returns the SmartContractId field if non-nil, zero value otherwise.

### GetSmartContractIdOk

`func (o *MonitorSmartContractRequestSchema) GetSmartContractIdOk() (*string, bool)`

GetSmartContractIdOk returns a tuple with the SmartContractId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContractId

`func (o *MonitorSmartContractRequestSchema) SetSmartContractId(v string)`

SetSmartContractId sets SmartContractId field to given value.

### HasSmartContractId

`func (o *MonitorSmartContractRequestSchema) HasSmartContractId() bool`

HasSmartContractId returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


