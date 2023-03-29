# QuantOverledgerApi.PaymentRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destination** | [**[DestinationPaymentSchema]**](DestinationPaymentSchema.md) | List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail | 
**message** | **String** | Any text-based element of the data payload | [optional] 
**overledgerSigningType** | **String** | The method of signing used to submit the transaction | [optional] 
**origin** | [**[OriginPaymentSchema]**](OriginPaymentSchema.md) | List of where this transaction is coming from | 



## Enum: OverledgerSigningTypeEnum


* `overledger-javascript-library` (value: `"overledger-javascript-library"`)




