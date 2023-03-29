

# PaymentRequestDetailsSchema

The payload request

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destination** | [**List&lt;DestinationPaymentSchema&gt;**](DestinationPaymentSchema.md) | List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail | 
**message** | **String** | Any text-based element of the data payload |  [optional]
**overledgerSigningType** | [**OverledgerSigningTypeEnum**](#OverledgerSigningTypeEnum) | The method of signing used to submit the transaction |  [optional]
**origin** | [**List&lt;OriginPaymentSchema&gt;**](OriginPaymentSchema.md) | List of where this transaction is coming from | 



## Enum: OverledgerSigningTypeEnum

Name | Value
---- | -----
OVERLEDGER_JAVASCRIPT_LIBRARY | &quot;overledger-javascript-library&quot;



