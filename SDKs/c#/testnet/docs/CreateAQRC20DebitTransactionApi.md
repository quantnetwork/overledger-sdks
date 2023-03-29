# Org.OpenAPITools.Api.CreateAQRC20DebitTransactionApi

All URIs are relative to *https://api.sandbox.overledger.io*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExecutePreparedRequestTransaction**](CreateAQRC20DebitTransactionApi.md#executepreparedrequesttransaction) | **POST** /v2/execution/transaction | Execute a transaction on a DLT
[**PrepareDebitRequest**](CreateAQRC20DebitTransactionApi.md#preparedebitrequest) | **POST** /v2/preparation/debit | Prepare a QRC20 token debit transaction for signing



## ExecutePreparedRequestTransaction

> ExecuteTransactionResponse ExecutePreparedRequestTransaction (string authorization, ExecuteTransactionRequest executeTransactionRequest)

Execute a transaction on a DLT

Takes a request ID and submits a signed transaction to the requested DLT.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ExecutePreparedRequestTransactionExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new CreateAQRC20DebitTransactionApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var executeTransactionRequest = new ExecuteTransactionRequest(); // ExecuteTransactionRequest | 

            try
            {
                // Execute a transaction on a DLT
                ExecuteTransactionResponse result = apiInstance.ExecutePreparedRequestTransaction(authorization, executeTransactionRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling CreateAQRC20DebitTransactionApi.ExecutePreparedRequestTransaction: " + e.Message );
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
 **executeTransactionRequest** | [**ExecuteTransactionRequest**](ExecuteTransactionRequest.md)|  | 

### Return type

[**ExecuteTransactionResponse**](ExecuteTransactionResponse.md)

### Authorization

[OAuth2_Security_Scheme](../README.md#OAuth2_Security_Scheme)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | All good! |  -  |
| **401** | Unauthorised |  -  |
| **404** | Not Found |  -  |
| **500** | Something went wrong on our side |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## PrepareDebitRequest

> PrepareTransactionResponse PrepareDebitRequest (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema)

Prepare a QRC20 token debit transaction for signing

Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Debit” and “Create Debit”. The ‘Approve Debit’ transaction type will allow you to approve someone to make a pull payment from your account and the “Create Debit” transaction type will create the payment to pull the approved amount from an account.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class PrepareDebitRequestExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.sandbox.overledger.io";
            // Configure OAuth2 access token for authorization: OAuth2_Security_Scheme
            Configuration.Default.AccessToken = "YOUR_ACCESS_TOKEN";

            var apiInstance = new CreateAQRC20DebitTransactionApi(Configuration.Default);
            var authorization = authorization_example;  // string | 
            var prepareCreditTransactionRequestSchema = new PrepareCreditTransactionRequestSchema(); // PrepareCreditTransactionRequestSchema | 

            try
            {
                // Prepare a QRC20 token debit transaction for signing
                PrepareTransactionResponse result = apiInstance.PrepareDebitRequest(authorization, prepareCreditTransactionRequestSchema);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling CreateAQRC20DebitTransactionApi.PrepareDebitRequest: " + e.Message );
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
 **prepareCreditTransactionRequestSchema** | [**PrepareCreditTransactionRequestSchema**](PrepareCreditTransactionRequestSchema.md)|  | 

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

