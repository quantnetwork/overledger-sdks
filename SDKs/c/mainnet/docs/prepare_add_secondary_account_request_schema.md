# prepare_add_secondary_account_request_schema_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**location** | [**location_t**](location.md) \* |  | 
**type** | **quant_overledger_api_prepare_add_secondary_account_request_schema_TYPE_e** | The type of the transaction | 
**urgency** | **quant_overledger_api_prepare_add_secondary_account_request_schema_URGENCY_e** | This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal | 
**request_details** | [**add_secondary_account_request_details_schema_t**](add_secondary_account_request_details_schema.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


