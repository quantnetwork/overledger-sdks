# payment_request_details_schema_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destination** | [**list_t**](destination_payment_schema.md) \* | List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail | 
**message** | **char \*** | Any text-based element of the data payload | [optional] 
**overledger_signing_type** | **quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_e** | The method of signing used to submit the transaction | [optional] 
**origin** | [**list_t**](origin_payment_schema.md) \* | List of where this transaction is coming from | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


