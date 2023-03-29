# CreateATransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**executePreparedRequestNativeTransaction**](CreateATransactionApi.md#executePreparedRequestNativeTransaction) | **POST** /v2/execution/nativetransaction | Execute a native transaction on the DLT
[**executePreparedRequestTransaction**](CreateATransactionApi.md#executePreparedRequestTransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**prepareNativeTransaction**](CreateATransactionApi.md#prepareNativeTransaction) | **POST** /v2/preparation/nativetransaction | Prepare a DLT native transaction
[**prepareTransactionRequest1**](CreateATransactionApi.md#prepareTransactionRequest1) | **POST** /v2/preparation/transaction | Prepare a DLT transaction for signing


<a name="executePreparedRequestNativeTransaction"></a>
# **executePreparedRequestNativeTransaction**
> ExecuteTransactionResponse executePreparedRequestNativeTransaction(authorization, executeTransactionRequest)

Execute a native transaction on the DLT

Takes a request ID and submits a signed native transaction to the requested DLT

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateATransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val executeTransactionRequest : ExecuteTransactionRequest = {"signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5","requestId":"79763168-a4f9-42bf-9f10-2e08491136a7"} // ExecuteTransactionRequest | 
try {
    val result : ExecuteTransactionResponse = apiInstance.executePreparedRequestNativeTransaction(authorization, executeTransactionRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateATransactionApi#executePreparedRequestNativeTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateATransactionApi#executePreparedRequestNativeTransaction")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **executeTransactionRequest** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md)|  |

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="executePreparedRequestTransaction"></a>
# **executePreparedRequestTransaction**
> ExecuteTransactionResponse executePreparedRequestTransaction(authorization, executeTransactionRequest)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateATransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val executeTransactionRequest : ExecuteTransactionRequest = {"signed":"0xf8a9398501ef4f86e682a0c294f9cd6c86992fce1481dbc4bdb7e1b101c1e8cee280b844a9059cbb000000000000000000000000d8b31b65878a6b1a6caf9f4819c1a42d68a7a11600000000000000000000000000000000000000000000000000038d7ea4c6800029a088680bffd2eb74053e968ac8bcd1f76beaa61b353d8616a8cc559e57685080bea07a77b7591f09290fbb9cda5263471e8a9ca46f4c7b30d6a4885e583771d809f5","requestId":"79763168-a4f9-42bf-9f10-2e08491136a7"} // ExecuteTransactionRequest | 
try {
    val result : ExecuteTransactionResponse = apiInstance.executePreparedRequestTransaction(authorization, executeTransactionRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateATransactionApi#executePreparedRequestTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateATransactionApi#executePreparedRequestTransaction")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **executeTransactionRequest** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md)|  |

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="prepareNativeTransaction"></a>
# **prepareNativeTransaction**
> PrepareSearchResponseSchema prepareNativeTransaction(authorization, prepareNativeTransactionRequestSchema)

Prepare a DLT native transaction

Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateATransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val prepareNativeTransactionRequestSchema : PrepareNativeTransactionRequestSchema = {"type":"Native Transaction","location":{"technology":"Ethereum","network":"Ropsten Testnet"}} // PrepareNativeTransactionRequestSchema | 
try {
    val result : PrepareSearchResponseSchema = apiInstance.prepareNativeTransaction(authorization, prepareNativeTransactionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateATransactionApi#prepareNativeTransaction")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateATransactionApi#prepareNativeTransaction")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **prepareNativeTransactionRequestSchema** | [**PrepareNativeTransactionRequestSchema**](PrepareNativeTransactionRequestSchema.md)|  |

### Return type

[**PrepareSearchResponseSchema**](PrepareSearchResponseSchema.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="prepareTransactionRequest1"></a>
# **prepareTransactionRequest1**
> PrepareTransactionResponse prepareTransactionRequest1(authorization, preparePaymentTransactionRequestSchema)

Prepare a DLT transaction for signing

The first step of submitting a transaction to Overledger requires preparing the transaction for signing. This API transforms a transaction request into a payload that can be signed. It returns a request ID that is used to execute the transaction after it is signed.  There are three types of transactions supported: * Payment     * Send payments in the native token of the network     * Send payments with ERC20 fungible tokens supported by Overledger on Ethereum-compatible networks. To help you test ERC20 functionality we have deployed the QNT token on the Ethereum-based test networks we support. You can check the request samples to view an example of a Smart Contract Invoke which requests test QNT from our faucet contracts. Please note that the faucet Smart Contract ID is different for all the test networks. Here is a list of faucet ids per network:         * Ethereum Goerli Testnet: 0x8cFCC46A00d6E9e86aacFa74AC5f74e90Fb6994c  * Transfer     * Transfer ownership of ERC721 non-fungible tokens supported by Overledger on Ethereum * Contract Invoke     * Call any function on any contract deployed on Ethereum, Polygon, XDC Network or our Hyperledger Fabric Sandbox

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = CreateATransactionApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val preparePaymentTransactionRequestSchema : PreparePaymentTransactionRequestSchema = {"location":{"technology":"Substrate","network":"Polkadot Westend Testnet"},"type":"PAYMENT","urgency":"normal","requestDetails":{"destination":[{"destinationId":"5FLSigC9HGRKVhB9FiEo4Y3koPsNmBmLJbpXg2mp1hXcS59Y","payment":{"amount":"0.0000000001","unit":"WND"}}],"message":"OVL Transaction Message","overledgerSigningType":"overledger-javascript-library","origin":[{"originId":"5GrwvaEF5zXb26Fz9rcQpDWS57CtERHpNehXCPcNoHGKutQY"}]}} // PreparePaymentTransactionRequestSchema | 
try {
    val result : PrepareTransactionResponse = apiInstance.prepareTransactionRequest1(authorization, preparePaymentTransactionRequestSchema)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CreateATransactionApi#prepareTransactionRequest1")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CreateATransactionApi#prepareTransactionRequest1")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **preparePaymentTransactionRequestSchema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md)|  |

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

