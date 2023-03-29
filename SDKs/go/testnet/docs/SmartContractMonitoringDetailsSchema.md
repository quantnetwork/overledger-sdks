# SmartContractMonitoringDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**SmartContractEventDetails** | Pointer to [**ResourceMonitoringSmartContractEventDetails**](ResourceMonitoringSmartContractEventDetails.md) |  | [optional] 
**Location** | Pointer to [**Location**](Location.md) |  | [optional] 
**SmartContractEventHistory** | Pointer to [**[]SmartContractEventHistory**](SmartContractEventHistory.md) |  | [optional] 
**Type** | Pointer to **string** |  | [optional] 
**Status** | Pointer to [**Status**](Status.md) |  | [optional] 
**Timestamp** | Pointer to **string** |  | [optional] 

## Methods

### NewSmartContractMonitoringDetailsSchema

`func NewSmartContractMonitoringDetailsSchema() *SmartContractMonitoringDetailsSchema`

NewSmartContractMonitoringDetailsSchema instantiates a new SmartContractMonitoringDetailsSchema object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewSmartContractMonitoringDetailsSchemaWithDefaults

`func NewSmartContractMonitoringDetailsSchemaWithDefaults() *SmartContractMonitoringDetailsSchema`

NewSmartContractMonitoringDetailsSchemaWithDefaults instantiates a new SmartContractMonitoringDetailsSchema object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSmartContractEventDetails

`func (o *SmartContractMonitoringDetailsSchema) GetSmartContractEventDetails() ResourceMonitoringSmartContractEventDetails`

GetSmartContractEventDetails returns the SmartContractEventDetails field if non-nil, zero value otherwise.

### GetSmartContractEventDetailsOk

`func (o *SmartContractMonitoringDetailsSchema) GetSmartContractEventDetailsOk() (*ResourceMonitoringSmartContractEventDetails, bool)`

GetSmartContractEventDetailsOk returns a tuple with the SmartContractEventDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContractEventDetails

`func (o *SmartContractMonitoringDetailsSchema) SetSmartContractEventDetails(v ResourceMonitoringSmartContractEventDetails)`

SetSmartContractEventDetails sets SmartContractEventDetails field to given value.

### HasSmartContractEventDetails

`func (o *SmartContractMonitoringDetailsSchema) HasSmartContractEventDetails() bool`

HasSmartContractEventDetails returns a boolean if a field has been set.

### GetLocation

`func (o *SmartContractMonitoringDetailsSchema) GetLocation() Location`

GetLocation returns the Location field if non-nil, zero value otherwise.

### GetLocationOk

`func (o *SmartContractMonitoringDetailsSchema) GetLocationOk() (*Location, bool)`

GetLocationOk returns a tuple with the Location field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocation

`func (o *SmartContractMonitoringDetailsSchema) SetLocation(v Location)`

SetLocation sets Location field to given value.

### HasLocation

`func (o *SmartContractMonitoringDetailsSchema) HasLocation() bool`

HasLocation returns a boolean if a field has been set.

### GetSmartContractEventHistory

`func (o *SmartContractMonitoringDetailsSchema) GetSmartContractEventHistory() []SmartContractEventHistory`

GetSmartContractEventHistory returns the SmartContractEventHistory field if non-nil, zero value otherwise.

### GetSmartContractEventHistoryOk

`func (o *SmartContractMonitoringDetailsSchema) GetSmartContractEventHistoryOk() (*[]SmartContractEventHistory, bool)`

GetSmartContractEventHistoryOk returns a tuple with the SmartContractEventHistory field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSmartContractEventHistory

`func (o *SmartContractMonitoringDetailsSchema) SetSmartContractEventHistory(v []SmartContractEventHistory)`

SetSmartContractEventHistory sets SmartContractEventHistory field to given value.

### HasSmartContractEventHistory

`func (o *SmartContractMonitoringDetailsSchema) HasSmartContractEventHistory() bool`

HasSmartContractEventHistory returns a boolean if a field has been set.

### GetType

`func (o *SmartContractMonitoringDetailsSchema) GetType() string`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *SmartContractMonitoringDetailsSchema) GetTypeOk() (*string, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *SmartContractMonitoringDetailsSchema) SetType(v string)`

SetType sets Type field to given value.

### HasType

`func (o *SmartContractMonitoringDetailsSchema) HasType() bool`

HasType returns a boolean if a field has been set.

### GetStatus

`func (o *SmartContractMonitoringDetailsSchema) GetStatus() Status`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *SmartContractMonitoringDetailsSchema) GetStatusOk() (*Status, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *SmartContractMonitoringDetailsSchema) SetStatus(v Status)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *SmartContractMonitoringDetailsSchema) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetTimestamp

`func (o *SmartContractMonitoringDetailsSchema) GetTimestamp() string`

GetTimestamp returns the Timestamp field if non-nil, zero value otherwise.

### GetTimestampOk

`func (o *SmartContractMonitoringDetailsSchema) GetTimestampOk() (*string, bool)`

GetTimestampOk returns a tuple with the Timestamp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimestamp

`func (o *SmartContractMonitoringDetailsSchema) SetTimestamp(v string)`

SetTimestamp sets Timestamp field to given value.

### HasTimestamp

`func (o *SmartContractMonitoringDetailsSchema) HasTimestamp() bool`

HasTimestamp returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


