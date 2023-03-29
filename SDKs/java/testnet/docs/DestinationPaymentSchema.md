

# DestinationPaymentSchema

List of the recipients of this transaction.  **Warning:** Bitcoin transaction fees will be deducted from the last destination provided in the transaction payment request. If the last destination payment value is not enough to cover the fees, your Bitcoin payment transaction will fail

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**destinationId** | **String** | Unique identifier of the destination/recipient | 
**payment** | [**PaymentSchema**](PaymentSchema.md) |  | 



