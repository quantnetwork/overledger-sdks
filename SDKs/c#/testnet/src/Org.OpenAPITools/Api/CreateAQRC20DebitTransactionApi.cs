/*
 * Quant Overledger API
 *
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!- - ReDoc-Inject: <security-definitions> - ->
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Threading;
using RestSharp;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Api
{
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public interface ICreateAQRC20DebitTransactionApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Prepare a QRC20 token debit transaction for signing
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareCreditTransactionRequestSchema"></param>
        /// <returns>PrepareTransactionResponse</returns>
        PrepareTransactionResponse PrepareDebitRequest (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema);

        /// <summary>
        /// Prepare a QRC20 token debit transaction for signing
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareCreditTransactionRequestSchema"></param>
        /// <returns>ApiResponse of PrepareTransactionResponse</returns>
        ApiResponse<PrepareTransactionResponse> PrepareDebitRequestWithHttpInfo (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Prepare a QRC20 token debit transaction for signing
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareCreditTransactionRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareTransactionResponse</returns>
        System.Threading.Tasks.Task<PrepareTransactionResponse> PrepareDebitRequestAsync (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Prepare a QRC20 token debit transaction for signing
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareCreditTransactionRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareTransactionResponse)</returns>
        System.Threading.Tasks.Task<ApiResponse<PrepareTransactionResponse>> PrepareDebitRequestWithHttpInfoAsync (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema, CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class CreateAQRC20DebitTransactionApi : ICreateAQRC20DebitTransactionApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateAQRC20DebitTransactionApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CreateAQRC20DebitTransactionApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateAQRC20DebitTransactionApi"/> class
        /// </summary>
        /// <returns></returns>
        public CreateAQRC20DebitTransactionApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateAQRC20DebitTransactionApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CreateAQRC20DebitTransactionApi(Org.OpenAPITools.Client.Configuration configuration = null)
        {
            if (configuration == null) // use the default one in Configuration
                this.Configuration = Org.OpenAPITools.Client.Configuration.Default;
            else
                this.Configuration = configuration;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Gets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        public String GetBasePath()
        {
            return this.Configuration.ApiClient.RestClient.BaseUrl.ToString();
        }

        /// <summary>
        /// Sets the base path of the API client.
        /// </summary>
        /// <value>The base path</value>
        [Obsolete("SetBasePath is deprecated, please do 'Configuration.ApiClient = new ApiClient(\"http://new-path\")' instead.")]
        public void SetBasePath(String basePath)
        {
            // do nothing
        }

        /// <summary>
        /// Gets or sets the configuration object
        /// </summary>
        /// <value>An instance of the Configuration</value>
        public Org.OpenAPITools.Client.Configuration Configuration {get; set;}

        /// <summary>
        /// Provides a factory method hook for the creation of exceptions.
        /// </summary>
        public Org.OpenAPITools.Client.ExceptionFactory ExceptionFactory
        {
            get
            {
                if (_exceptionFactory != null && _exceptionFactory.GetInvocationList().Length > 1)
                {
                    throw new InvalidOperationException("Multicast delegate for ExceptionFactory is unsupported.");
                }
                return _exceptionFactory;
            }
            set { _exceptionFactory = value; }
        }

        /// <summary>
        /// Gets the default header.
        /// </summary>
        /// <returns>Dictionary of HTTP header</returns>
        [Obsolete("DefaultHeader is deprecated, please use Configuration.DefaultHeader instead.")]
        public IDictionary<String, String> DefaultHeader()
        {
            return new ReadOnlyDictionary<string, string>(this.Configuration.DefaultHeader);
        }

        /// <summary>
        /// Add default header.
        /// </summary>
        /// <param name="key">Header field name.</param>
        /// <param name="value">Header field value.</param>
        /// <returns></returns>
        [Obsolete("AddDefaultHeader is deprecated, please use Configuration.AddDefaultHeader instead.")]
        public void AddDefaultHeader(string key, string value)
        {
            this.Configuration.AddDefaultHeader(key, value);
        }

        /// <summary>
        /// Prepare a QRC20 token debit transaction for signing Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareCreditTransactionRequestSchema"></param>
        /// <returns>PrepareTransactionResponse</returns>
        public PrepareTransactionResponse PrepareDebitRequest (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema)
        {
             ApiResponse<PrepareTransactionResponse> localVarResponse = PrepareDebitRequestWithHttpInfo(authorization, prepareCreditTransactionRequestSchema);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Prepare a QRC20 token debit transaction for signing Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareCreditTransactionRequestSchema"></param>
        /// <returns>ApiResponse of PrepareTransactionResponse</returns>
        public ApiResponse<PrepareTransactionResponse> PrepareDebitRequestWithHttpInfo (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling CreateAQRC20DebitTransactionApi->PrepareDebitRequest");
            // verify the required parameter 'prepareCreditTransactionRequestSchema' is set
            if (prepareCreditTransactionRequestSchema == null)
                throw new ApiException(400, "Missing required parameter 'prepareCreditTransactionRequestSchema' when calling CreateAQRC20DebitTransactionApi->PrepareDebitRequest");

            var localVarPath = "/v2/preparation/debit";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new List<KeyValuePair<String, String>>();
            var localVarHeaderParams = new Dictionary<String, String>(this.Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = this.Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter
            if (prepareCreditTransactionRequestSchema != null && prepareCreditTransactionRequestSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareCreditTransactionRequestSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareCreditTransactionRequestSchema; // byte array
            }

            // authentication (OAuth2_Security_Scheme) required
            // oauth required
            if (!String.IsNullOrEmpty(this.Configuration.AccessToken))
            {
                localVarHeaderParams["Authorization"] = "Bearer " + this.Configuration.AccessToken;
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) this.Configuration.ApiClient.CallApi(localVarPath,
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("PrepareDebitRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareTransactionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareTransactionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareTransactionResponse)));
        }

        /// <summary>
        /// Prepare a QRC20 token debit transaction for signing Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareCreditTransactionRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareTransactionResponse</returns>
        public async System.Threading.Tasks.Task<PrepareTransactionResponse> PrepareDebitRequestAsync (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<PrepareTransactionResponse> localVarResponse = await PrepareDebitRequestWithHttpInfoAsync(authorization, prepareCreditTransactionRequestSchema, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Prepare a QRC20 token debit transaction for signing Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareCreditTransactionRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareTransactionResponse)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<PrepareTransactionResponse>> PrepareDebitRequestWithHttpInfoAsync (string authorization, PrepareCreditTransactionRequestSchema prepareCreditTransactionRequestSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling CreateAQRC20DebitTransactionApi->PrepareDebitRequest");
            // verify the required parameter 'prepareCreditTransactionRequestSchema' is set
            if (prepareCreditTransactionRequestSchema == null)
                throw new ApiException(400, "Missing required parameter 'prepareCreditTransactionRequestSchema' when calling CreateAQRC20DebitTransactionApi->PrepareDebitRequest");

            var localVarPath = "/v2/preparation/debit";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new List<KeyValuePair<String, String>>();
            var localVarHeaderParams = new Dictionary<String, String>(this.Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
                "application/json"
            };
            String localVarHttpContentType = this.Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter
            if (prepareCreditTransactionRequestSchema != null && prepareCreditTransactionRequestSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareCreditTransactionRequestSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareCreditTransactionRequestSchema; // byte array
            }

            // authentication (OAuth2_Security_Scheme) required
            // oauth required
            if (!String.IsNullOrEmpty(this.Configuration.AccessToken))
            {
                localVarHeaderParams["Authorization"] = "Bearer " + this.Configuration.AccessToken;
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await this.Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType, cancellationToken);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("PrepareDebitRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareTransactionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareTransactionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareTransactionResponse)));
        }

    }
}
