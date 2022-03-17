# Transaction

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**signature** | Option<**Vec<String>**> | The signatures of this transaction | [optional]
**origin** | Option<[**Vec<crate::models::Origin>**](Origin.md)> |  | [optional]
**fee** | Option<[**crate::models::Fee**](Fee.md)> |  | [optional]
**destination** | Option<[**Vec<crate::models::Destination>**](Destination.md)> |  | [optional]
**signed** | Option<**String**> |  | [optional]
**total_payment_amount** | Option<[**Vec<crate::models::Payment>**](Payment.md)> |  | [optional]
**message** | Option<**String**> | Any text-based element of the data payload | [optional]
**transaction_id** | Option<**String**> | The unique identifier of the transaction on this DLN | [optional]
**encoded** | Option<**Vec<String>**> |  | [optional]
**extra_fields** | Option<[**serde_json::Value**](.md)> |  | [optional]
**native_data** | Option<[**serde_json::Value**](.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


