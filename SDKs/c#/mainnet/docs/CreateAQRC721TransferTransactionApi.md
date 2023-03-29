# Org.OpenAPITools.Api.CreateAQRC721TransferTransactionApi

All URIs are relative to *https://api.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PrepareTransactionRequest**](CreateAQRC721TransferTransactionApi.md#preparetransactionrequest) | **POST** /v2/tokenise/preparation/transaction/qrc721/transfer | Prepare a QRC721 token transfer transaction for signing



## PrepareTransactionRequest

> PrepareTransactionResponse PrepareTransactionRequest (string authorization, PreparePaymentTransactionRequestSchema preparePaymentTransactionRequestSchema)

Prepare a QRC721 token transfer transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Transfer” which will allow you to transfer a QRC721 token to another specified account. Successfully prepared transactions can then be executed using the /execution/transaction API.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class PrepareTransactionRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new CreateAQRC721TransferTransactionApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var preparePaymentTransactionRequestSchema = new PreparePaymentTransactionRequestSchema(); // PreparePaymentTransactionRequestSchema | 

            try
            {
                // Prepare a QRC721 token transfer transaction for signing
                PrepareTransactionResponse result = apiInstance.PrepareTransactionRequest(authorization, preparePaymentTransactionRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling CreateAQRC721TransferTransactionApi.PrepareTransactionRequest: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **authorization** | **string**|  | 
 **preparePaymentTransactionRequestSchema** | [**PreparePaymentTransactionRequestSchema**](PreparePaymentTransactionRequestSchema.md)|  | 

### Return type

[**PrepareTransactionResponse**](PrepareTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | All good! |  -  |
| **400** | Bad Request |  -  |
| **401** | Unauthorised |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

