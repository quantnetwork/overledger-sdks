
# PaymentRequestDetailsSchema

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destination** | [**kotlin.collections.List&lt;DestinationPaymentSchema&gt;**](DestinationPaymentSchema.md) | List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail | 
**origin** | [**kotlin.collections.List&lt;OriginPaymentSchema&gt;**](OriginPaymentSchema.md) | List of where this transaction is coming from | 
**message** | **kotlin.String** | Any text-based element of the data payload |  [optional]
**overledgerSigningType** | [**inline**](#OverledgerSigningType) | The method of signing used to submit the transaction |  [optional]


<a name="OverledgerSigningType"></a>
## Enum: overledgerSigningType
Name | Value
---- | -----
overledgerSigningType | overledger-javascript-library



