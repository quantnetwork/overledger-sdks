# RetrieveContractOwnerInformationOfAQRCTokenApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**readQRCSmartContractOwner**](RetrieveContractOwnerInformationOfAQRCTokenApi.md#readQRCSmartContractOwner) | **POST** /v2/tokenise/tokens/{flowType}/contract-owner | Retrieve which account has contract owner permissions for a QRC token


<a name="readQRCSmartContractOwner"></a>
# **readQRCSmartContractOwner**
> TokenReadQRC721Response readQRCSmartContractOwner(authorization, flowType, prepareRequest)

Retrieve which account has contract owner permissions for a QRC token

Submits a query to the Blockchain Network and returns the address that currently has contract owner permissions for a particular QRC token.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import org.openapitools.client.models.*

val apiInstance = RetrieveContractOwnerInformationOfAQRCTokenApi()
val authorization : kotlin.String = authorization_example // kotlin.String | 
val flowType : kotlin.String = flowType_example // kotlin.String | 
val prepareRequest : PrepareRequest =  // PrepareRequest | 
try {
    val result : TokenReadQRC721Response = apiInstance.readQRCSmartContractOwner(authorization, flowType, prepareRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling RetrieveContractOwnerInformationOfAQRCTokenApi#readQRCSmartContractOwner")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling RetrieveContractOwnerInformationOfAQRCTokenApi#readQRCSmartContractOwner")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **kotlin.String**|  |
 **flowType** | **kotlin.String**|  |
 **prepareRequest** | [**PrepareRequest**](PrepareRequest.md)|  |

### Return type

[**TokenReadQRC721Response**](TokenReadQRC721Response.md)

### Authorization


Configure OAuth2_Security_Scheme:
    ApiClient.accessToken = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

