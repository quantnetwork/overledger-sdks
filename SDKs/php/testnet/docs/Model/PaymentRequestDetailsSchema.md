# # PaymentRequestDetailsSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destination** | [**\OpenAPI\Client\Model\DestinationPaymentSchema[]**](DestinationPaymentSchema.md) | List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail |
**message** | **string** | Any text-based element of the data payload | [optional]
**overledger_signing_type** | **string** | The method of signing used to submit the transaction | [optional]
**origin** | [**\OpenAPI\Client\Model\OriginPaymentSchema[]**](OriginPaymentSchema.md) | List of where this transaction is coming from |

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
