

# PrepareCreditTransactionRequestSchema


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**location** | [**Location**](Location.md) |  | 
**type** | [**TypeEnum**](#TypeEnum) | The type of the transaction | 
**urgency** | [**UrgencyEnum**](#UrgencyEnum) | This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal | 
**requestDetails** | [**CreditRequestDetailsSchema**](CreditRequestDetailsSchema.md) |  |  [optional]



## Enum: TypeEnum

Name | Value
---- | -----
PAYMENT | &quot;Payment&quot;
TRANSFER | &quot;Transfer&quot;
CONTRACT_INVOKE | &quot;Contract Invoke&quot;



## Enum: UrgencyEnum

Name | Value
---- | -----
NORMAL | &quot;Normal&quot;
FAST | &quot;Fast&quot;
URGENT | &quot;Urgent&quot;



