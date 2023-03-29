# PrepareRequestDetails

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Mandate** | Pointer to [**[]Mandate**](Mandate.md) |  | [optional] 
**AliasDetails** | Pointer to [**AliasDetails**](AliasDetails.md) |  | [optional] 
**Pagination** | Pointer to [**Pagination**](Pagination.md) |  | [optional] 
**Origin** | Pointer to [**[]Origin**](Origin.md) |  | [optional] 
**Destination** | Pointer to [**[]Destination**](Destination.md) |  | [optional] 
**TokenName** | Pointer to **string** | Name of the token | [optional] 
**BlockSearchType** | Pointer to **string** |  | [optional] 
**Payer** | Pointer to [**[]Payer**](Payer.md) |  | [optional] 
**Collector** | Pointer to [**Collector**](Collector.md) |  | [optional] 
**Payee** | Pointer to [**[]Payee**](Payee.md) |  | [optional] 
**AdditionalOwner** | Pointer to [**AdditionalOwner**](AdditionalOwner.md) |  | [optional] 
**Owner** | Pointer to [**Owner**](Owner.md) |  | [optional] 
**Creator** | Pointer to [**Creator**](Creator.md) |  | [optional] 
**Receiver** | Pointer to [**[]Receiver**](Receiver.md) |  | [optional] 
**TokenId** | Pointer to **string** | Unique identifier for the specific token | [optional] 
**Message** | Pointer to **string** |  | [optional] 
**LockDetails** | Pointer to [**LockDetails**](LockDetails.md) |  | [optional] 
**BlockId** | Pointer to **string** |  | [optional] 
**AccountId** | Pointer to **string** | The unique identifiers of the account | [optional] 
**TokenUnit** | Pointer to **string** | The unit of this token | [optional] 
**Beneficiary** | Pointer to [**Beneficiary**](Beneficiary.md) |  | [optional] 
**Sender** | Pointer to [**[]Sender**](Sender.md) |  | [optional] 
**AccountDetails** | Pointer to [**AccountDetails**](AccountDetails.md) |  | [optional] 
**OverledgerSigningType** | Pointer to **string** |  | [optional] 
**TotalPaymentAmount** | Pointer to [**Payment**](Payment.md) |  | [optional] 
**SignerAccount** | Pointer to [**SignerAccount**](SignerAccount.md) |  | [optional] 

## Methods

### NewPrepareRequestDetails

`func NewPrepareRequestDetails() *PrepareRequestDetails`

NewPrepareRequestDetails instantiates a new PrepareRequestDetails object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewPrepareRequestDetailsWithDefaults

`func NewPrepareRequestDetailsWithDefaults() *PrepareRequestDetails`

NewPrepareRequestDetailsWithDefaults instantiates a new PrepareRequestDetails object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMandate

`func (o *PrepareRequestDetails) GetMandate() []Mandate`

GetMandate returns the Mandate field if non-nil, zero value otherwise.

### GetMandateOk

`func (o *PrepareRequestDetails) GetMandateOk() (*[]Mandate, bool)`

GetMandateOk returns a tuple with the Mandate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMandate

`func (o *PrepareRequestDetails) SetMandate(v []Mandate)`

SetMandate sets Mandate field to given value.

### HasMandate

`func (o *PrepareRequestDetails) HasMandate() bool`

HasMandate returns a boolean if a field has been set.

### GetAliasDetails

`func (o *PrepareRequestDetails) GetAliasDetails() AliasDetails`

GetAliasDetails returns the AliasDetails field if non-nil, zero value otherwise.

### GetAliasDetailsOk

`func (o *PrepareRequestDetails) GetAliasDetailsOk() (*AliasDetails, bool)`

GetAliasDetailsOk returns a tuple with the AliasDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAliasDetails

`func (o *PrepareRequestDetails) SetAliasDetails(v AliasDetails)`

SetAliasDetails sets AliasDetails field to given value.

### HasAliasDetails

`func (o *PrepareRequestDetails) HasAliasDetails() bool`

HasAliasDetails returns a boolean if a field has been set.

### GetPagination

`func (o *PrepareRequestDetails) GetPagination() Pagination`

GetPagination returns the Pagination field if non-nil, zero value otherwise.

### GetPaginationOk

`func (o *PrepareRequestDetails) GetPaginationOk() (*Pagination, bool)`

GetPaginationOk returns a tuple with the Pagination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPagination

`func (o *PrepareRequestDetails) SetPagination(v Pagination)`

SetPagination sets Pagination field to given value.

### HasPagination

`func (o *PrepareRequestDetails) HasPagination() bool`

HasPagination returns a boolean if a field has been set.

### GetOrigin

`func (o *PrepareRequestDetails) GetOrigin() []Origin`

GetOrigin returns the Origin field if non-nil, zero value otherwise.

### GetOriginOk

`func (o *PrepareRequestDetails) GetOriginOk() (*[]Origin, bool)`

GetOriginOk returns a tuple with the Origin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOrigin

`func (o *PrepareRequestDetails) SetOrigin(v []Origin)`

SetOrigin sets Origin field to given value.

### HasOrigin

`func (o *PrepareRequestDetails) HasOrigin() bool`

HasOrigin returns a boolean if a field has been set.

### GetDestination

`func (o *PrepareRequestDetails) GetDestination() []Destination`

GetDestination returns the Destination field if non-nil, zero value otherwise.

### GetDestinationOk

`func (o *PrepareRequestDetails) GetDestinationOk() (*[]Destination, bool)`

GetDestinationOk returns a tuple with the Destination field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDestination

`func (o *PrepareRequestDetails) SetDestination(v []Destination)`

SetDestination sets Destination field to given value.

### HasDestination

`func (o *PrepareRequestDetails) HasDestination() bool`

HasDestination returns a boolean if a field has been set.

### GetTokenName

`func (o *PrepareRequestDetails) GetTokenName() string`

GetTokenName returns the TokenName field if non-nil, zero value otherwise.

### GetTokenNameOk

`func (o *PrepareRequestDetails) GetTokenNameOk() (*string, bool)`

GetTokenNameOk returns a tuple with the TokenName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTokenName

`func (o *PrepareRequestDetails) SetTokenName(v string)`

SetTokenName sets TokenName field to given value.

### HasTokenName

`func (o *PrepareRequestDetails) HasTokenName() bool`

HasTokenName returns a boolean if a field has been set.

### GetBlockSearchType

`func (o *PrepareRequestDetails) GetBlockSearchType() string`

GetBlockSearchType returns the BlockSearchType field if non-nil, zero value otherwise.

### GetBlockSearchTypeOk

`func (o *PrepareRequestDetails) GetBlockSearchTypeOk() (*string, bool)`

GetBlockSearchTypeOk returns a tuple with the BlockSearchType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlockSearchType

`func (o *PrepareRequestDetails) SetBlockSearchType(v string)`

SetBlockSearchType sets BlockSearchType field to given value.

### HasBlockSearchType

`func (o *PrepareRequestDetails) HasBlockSearchType() bool`

HasBlockSearchType returns a boolean if a field has been set.

### GetPayer

`func (o *PrepareRequestDetails) GetPayer() []Payer`

GetPayer returns the Payer field if non-nil, zero value otherwise.

### GetPayerOk

`func (o *PrepareRequestDetails) GetPayerOk() (*[]Payer, bool)`

GetPayerOk returns a tuple with the Payer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayer

`func (o *PrepareRequestDetails) SetPayer(v []Payer)`

SetPayer sets Payer field to given value.

### HasPayer

`func (o *PrepareRequestDetails) HasPayer() bool`

HasPayer returns a boolean if a field has been set.

### GetCollector

`func (o *PrepareRequestDetails) GetCollector() Collector`

GetCollector returns the Collector field if non-nil, zero value otherwise.

### GetCollectorOk

`func (o *PrepareRequestDetails) GetCollectorOk() (*Collector, bool)`

GetCollectorOk returns a tuple with the Collector field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCollector

`func (o *PrepareRequestDetails) SetCollector(v Collector)`

SetCollector sets Collector field to given value.

### HasCollector

`func (o *PrepareRequestDetails) HasCollector() bool`

HasCollector returns a boolean if a field has been set.

### GetPayee

`func (o *PrepareRequestDetails) GetPayee() []Payee`

GetPayee returns the Payee field if non-nil, zero value otherwise.

### GetPayeeOk

`func (o *PrepareRequestDetails) GetPayeeOk() (*[]Payee, bool)`

GetPayeeOk returns a tuple with the Payee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayee

`func (o *PrepareRequestDetails) SetPayee(v []Payee)`

SetPayee sets Payee field to given value.

### HasPayee

`func (o *PrepareRequestDetails) HasPayee() bool`

HasPayee returns a boolean if a field has been set.

### GetAdditionalOwner

`func (o *PrepareRequestDetails) GetAdditionalOwner() AdditionalOwner`

GetAdditionalOwner returns the AdditionalOwner field if non-nil, zero value otherwise.

### GetAdditionalOwnerOk

`func (o *PrepareRequestDetails) GetAdditionalOwnerOk() (*AdditionalOwner, bool)`

GetAdditionalOwnerOk returns a tuple with the AdditionalOwner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAdditionalOwner

`func (o *PrepareRequestDetails) SetAdditionalOwner(v AdditionalOwner)`

SetAdditionalOwner sets AdditionalOwner field to given value.

### HasAdditionalOwner

`func (o *PrepareRequestDetails) HasAdditionalOwner() bool`

HasAdditionalOwner returns a boolean if a field has been set.

### GetOwner

`func (o *PrepareRequestDetails) GetOwner() Owner`

GetOwner returns the Owner field if non-nil, zero value otherwise.

### GetOwnerOk

`func (o *PrepareRequestDetails) GetOwnerOk() (*Owner, bool)`

GetOwnerOk returns a tuple with the Owner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOwner

`func (o *PrepareRequestDetails) SetOwner(v Owner)`

SetOwner sets Owner field to given value.

### HasOwner

`func (o *PrepareRequestDetails) HasOwner() bool`

HasOwner returns a boolean if a field has been set.

### GetCreator

`func (o *PrepareRequestDetails) GetCreator() Creator`

GetCreator returns the Creator field if non-nil, zero value otherwise.

### GetCreatorOk

`func (o *PrepareRequestDetails) GetCreatorOk() (*Creator, bool)`

GetCreatorOk returns a tuple with the Creator field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCreator

`func (o *PrepareRequestDetails) SetCreator(v Creator)`

SetCreator sets Creator field to given value.

### HasCreator

`func (o *PrepareRequestDetails) HasCreator() bool`

HasCreator returns a boolean if a field has been set.

### GetReceiver

`func (o *PrepareRequestDetails) GetReceiver() []Receiver`

GetReceiver returns the Receiver field if non-nil, zero value otherwise.

### GetReceiverOk

`func (o *PrepareRequestDetails) GetReceiverOk() (*[]Receiver, bool)`

GetReceiverOk returns a tuple with the Receiver field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReceiver

`func (o *PrepareRequestDetails) SetReceiver(v []Receiver)`

SetReceiver sets Receiver field to given value.

### HasReceiver

`func (o *PrepareRequestDetails) HasReceiver() bool`

HasReceiver returns a boolean if a field has been set.

### GetTokenId

`func (o *PrepareRequestDetails) GetTokenId() string`

GetTokenId returns the TokenId field if non-nil, zero value otherwise.

### GetTokenIdOk

`func (o *PrepareRequestDetails) GetTokenIdOk() (*string, bool)`

GetTokenIdOk returns a tuple with the TokenId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTokenId

`func (o *PrepareRequestDetails) SetTokenId(v string)`

SetTokenId sets TokenId field to given value.

### HasTokenId

`func (o *PrepareRequestDetails) HasTokenId() bool`

HasTokenId returns a boolean if a field has been set.

### GetMessage

`func (o *PrepareRequestDetails) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *PrepareRequestDetails) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *PrepareRequestDetails) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *PrepareRequestDetails) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetLockDetails

`func (o *PrepareRequestDetails) GetLockDetails() LockDetails`

GetLockDetails returns the LockDetails field if non-nil, zero value otherwise.

### GetLockDetailsOk

`func (o *PrepareRequestDetails) GetLockDetailsOk() (*LockDetails, bool)`

GetLockDetailsOk returns a tuple with the LockDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLockDetails

`func (o *PrepareRequestDetails) SetLockDetails(v LockDetails)`

SetLockDetails sets LockDetails field to given value.

### HasLockDetails

`func (o *PrepareRequestDetails) HasLockDetails() bool`

HasLockDetails returns a boolean if a field has been set.

### GetBlockId

`func (o *PrepareRequestDetails) GetBlockId() string`

GetBlockId returns the BlockId field if non-nil, zero value otherwise.

### GetBlockIdOk

`func (o *PrepareRequestDetails) GetBlockIdOk() (*string, bool)`

GetBlockIdOk returns a tuple with the BlockId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBlockId

`func (o *PrepareRequestDetails) SetBlockId(v string)`

SetBlockId sets BlockId field to given value.

### HasBlockId

`func (o *PrepareRequestDetails) HasBlockId() bool`

HasBlockId returns a boolean if a field has been set.

### GetAccountId

`func (o *PrepareRequestDetails) GetAccountId() string`

GetAccountId returns the AccountId field if non-nil, zero value otherwise.

### GetAccountIdOk

`func (o *PrepareRequestDetails) GetAccountIdOk() (*string, bool)`

GetAccountIdOk returns a tuple with the AccountId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountId

`func (o *PrepareRequestDetails) SetAccountId(v string)`

SetAccountId sets AccountId field to given value.

### HasAccountId

`func (o *PrepareRequestDetails) HasAccountId() bool`

HasAccountId returns a boolean if a field has been set.

### GetTokenUnit

`func (o *PrepareRequestDetails) GetTokenUnit() string`

GetTokenUnit returns the TokenUnit field if non-nil, zero value otherwise.

### GetTokenUnitOk

`func (o *PrepareRequestDetails) GetTokenUnitOk() (*string, bool)`

GetTokenUnitOk returns a tuple with the TokenUnit field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTokenUnit

`func (o *PrepareRequestDetails) SetTokenUnit(v string)`

SetTokenUnit sets TokenUnit field to given value.

### HasTokenUnit

`func (o *PrepareRequestDetails) HasTokenUnit() bool`

HasTokenUnit returns a boolean if a field has been set.

### GetBeneficiary

`func (o *PrepareRequestDetails) GetBeneficiary() Beneficiary`

GetBeneficiary returns the Beneficiary field if non-nil, zero value otherwise.

### GetBeneficiaryOk

`func (o *PrepareRequestDetails) GetBeneficiaryOk() (*Beneficiary, bool)`

GetBeneficiaryOk returns a tuple with the Beneficiary field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBeneficiary

`func (o *PrepareRequestDetails) SetBeneficiary(v Beneficiary)`

SetBeneficiary sets Beneficiary field to given value.

### HasBeneficiary

`func (o *PrepareRequestDetails) HasBeneficiary() bool`

HasBeneficiary returns a boolean if a field has been set.

### GetSender

`func (o *PrepareRequestDetails) GetSender() []Sender`

GetSender returns the Sender field if non-nil, zero value otherwise.

### GetSenderOk

`func (o *PrepareRequestDetails) GetSenderOk() (*[]Sender, bool)`

GetSenderOk returns a tuple with the Sender field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSender

`func (o *PrepareRequestDetails) SetSender(v []Sender)`

SetSender sets Sender field to given value.

### HasSender

`func (o *PrepareRequestDetails) HasSender() bool`

HasSender returns a boolean if a field has been set.

### GetAccountDetails

`func (o *PrepareRequestDetails) GetAccountDetails() AccountDetails`

GetAccountDetails returns the AccountDetails field if non-nil, zero value otherwise.

### GetAccountDetailsOk

`func (o *PrepareRequestDetails) GetAccountDetailsOk() (*AccountDetails, bool)`

GetAccountDetailsOk returns a tuple with the AccountDetails field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAccountDetails

`func (o *PrepareRequestDetails) SetAccountDetails(v AccountDetails)`

SetAccountDetails sets AccountDetails field to given value.

### HasAccountDetails

`func (o *PrepareRequestDetails) HasAccountDetails() bool`

HasAccountDetails returns a boolean if a field has been set.

### GetOverledgerSigningType

`func (o *PrepareRequestDetails) GetOverledgerSigningType() string`

GetOverledgerSigningType returns the OverledgerSigningType field if non-nil, zero value otherwise.

### GetOverledgerSigningTypeOk

`func (o *PrepareRequestDetails) GetOverledgerSigningTypeOk() (*string, bool)`

GetOverledgerSigningTypeOk returns a tuple with the OverledgerSigningType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOverledgerSigningType

`func (o *PrepareRequestDetails) SetOverledgerSigningType(v string)`

SetOverledgerSigningType sets OverledgerSigningType field to given value.

### HasOverledgerSigningType

`func (o *PrepareRequestDetails) HasOverledgerSigningType() bool`

HasOverledgerSigningType returns a boolean if a field has been set.

### GetTotalPaymentAmount

`func (o *PrepareRequestDetails) GetTotalPaymentAmount() Payment`

GetTotalPaymentAmount returns the TotalPaymentAmount field if non-nil, zero value otherwise.

### GetTotalPaymentAmountOk

`func (o *PrepareRequestDetails) GetTotalPaymentAmountOk() (*Payment, bool)`

GetTotalPaymentAmountOk returns a tuple with the TotalPaymentAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalPaymentAmount

`func (o *PrepareRequestDetails) SetTotalPaymentAmount(v Payment)`

SetTotalPaymentAmount sets TotalPaymentAmount field to given value.

### HasTotalPaymentAmount

`func (o *PrepareRequestDetails) HasTotalPaymentAmount() bool`

HasTotalPaymentAmount returns a boolean if a field has been set.

### GetSignerAccount

`func (o *PrepareRequestDetails) GetSignerAccount() SignerAccount`

GetSignerAccount returns the SignerAccount field if non-nil, zero value otherwise.

### GetSignerAccountOk

`func (o *PrepareRequestDetails) GetSignerAccountOk() (*SignerAccount, bool)`

GetSignerAccountOk returns a tuple with the SignerAccount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSignerAccount

`func (o *PrepareRequestDetails) SetSignerAccount(v SignerAccount)`

SetSignerAccount sets SignerAccount field to given value.

### HasSignerAccount

`func (o *PrepareRequestDetails) HasSignerAccount() bool`

HasSignerAccount returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


