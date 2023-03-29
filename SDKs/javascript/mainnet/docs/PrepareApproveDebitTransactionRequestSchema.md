# QuantOverledgerApi.PrepareApproveDebitTransactionRequestSchema

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**location** | [**Location**](Location.md) |  | 
**type** | **String** | The type of the transaction | 
**urgency** | **String** | This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal | 
**requestDetails** | [**ApproveRequestDetailsSchema**](ApproveRequestDetailsSchema.md) |  | [optional] 



## Enum: TypeEnum


* `Payment` (value: `"Payment"`)

* `Transfer` (value: `"Transfer"`)

* `Contract Invoke` (value: `"Contract Invoke"`)





## Enum: UrgencyEnum


* `Normal` (value: `"Normal"`)

* `Fast` (value: `"Fast"`)

* `Urgent` (value: `"Urgent"`)




