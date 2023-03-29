
# PrepareApproveDebitTransactionRequestSchema

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**location** | [**Location**](Location.md) |  | 
**type** | [**inline**](#Type) | The type of the transaction | 
**urgency** | [**inline**](#Urgency) | This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal | 
**requestDetails** | [**ApproveRequestDetailsSchema**](ApproveRequestDetailsSchema.md) |  |  [optional]


<a name="Type"></a>
## Enum: type
Name | Value
---- | -----
type | Payment, Transfer, Contract Invoke


<a name="Urgency"></a>
## Enum: urgency
Name | Value
---- | -----
urgency | Normal, Fast, Urgent



