
# Org.OpenAPITools.Model.PaymentRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Destination** | [**List&lt;DestinationPaymentSchema&gt;**](DestinationPaymentSchema.md) | List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail | 
**Message** | **string** | Any text-based element of the data payload | [optional] 
**OverledgerSigningType** | **string** | The method of signing used to submit the transaction | [optional] 
**Origin** | [**List&lt;OriginPaymentSchema&gt;**](OriginPaymentSchema.md) | List of where this transaction is coming from | 

[[Back to Model list]](../README.md#documentation-for-models)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to README]](../README.md)

