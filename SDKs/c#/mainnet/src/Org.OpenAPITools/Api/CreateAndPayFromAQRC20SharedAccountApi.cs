/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
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
    public interface ICreateAndPayFromAQRC20SharedAccountApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Execute a transaction on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID and submits a signed transaction to the requested DLT.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="executeTransactionRequest"></param>
        /// <returns>ExecuteTransactionResponse</returns>
        ExecuteTransactionResponse ExecutePreparedRequestTransaction (string authorization, ExecuteTransactionRequest executeTransactionRequest);

        /// <summary>
        /// Execute a transaction on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID and submits a signed transaction to the requested DLT.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="executeTransactionRequest"></param>
        /// <returns>ApiResponse of ExecuteTransactionResponse</returns>
        ApiResponse<ExecuteTransactionResponse> ExecutePreparedRequestTransactionWithHttpInfo (string authorization, ExecuteTransactionRequest executeTransactionRequest);
        /// <summary>
        /// Prepare a request for a QRC20 shared account
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareAddSecondaryAccountRequestSchema"></param>
        /// <returns>PrepareTransactionResponse</returns>
        PrepareTransactionResponse PrepareSecondaryOwnerRequest (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema);

        /// <summary>
        /// Prepare a request for a QRC20 shared account
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareAddSecondaryAccountRequestSchema"></param>
        /// <returns>ApiResponse of PrepareTransactionResponse</returns>
        ApiResponse<PrepareTransactionResponse> PrepareSecondaryOwnerRequestWithHttpInfo (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Execute a transaction on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID and submits a signed transaction to the requested DLT.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="executeTransactionRequest"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ExecuteTransactionResponse</returns>
        System.Threading.Tasks.Task<ExecuteTransactionResponse> ExecutePreparedRequestTransactionAsync (string authorization, ExecuteTransactionRequest executeTransactionRequest, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Execute a transaction on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID and submits a signed transaction to the requested DLT.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="executeTransactionRequest"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (ExecuteTransactionResponse)</returns>
        System.Threading.Tasks.Task<ApiResponse<ExecuteTransactionResponse>> ExecutePreparedRequestTransactionWithHttpInfoAsync (string authorization, ExecuteTransactionRequest executeTransactionRequest, CancellationToken cancellationToken = default(CancellationToken));
        /// <summary>
        /// Prepare a request for a QRC20 shared account
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareAddSecondaryAccountRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareTransactionResponse</returns>
        System.Threading.Tasks.Task<PrepareTransactionResponse> PrepareSecondaryOwnerRequestAsync (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Prepare a request for a QRC20 shared account
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareAddSecondaryAccountRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareTransactionResponse)</returns>
        System.Threading.Tasks.Task<ApiResponse<PrepareTransactionResponse>> PrepareSecondaryOwnerRequestWithHttpInfoAsync (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema, CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class CreateAndPayFromAQRC20SharedAccountApi : ICreateAndPayFromAQRC20SharedAccountApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateAndPayFromAQRC20SharedAccountApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CreateAndPayFromAQRC20SharedAccountApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateAndPayFromAQRC20SharedAccountApi"/> class
        /// </summary>
        /// <returns></returns>
        public CreateAndPayFromAQRC20SharedAccountApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateAndPayFromAQRC20SharedAccountApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CreateAndPayFromAQRC20SharedAccountApi(Org.OpenAPITools.Client.Configuration configuration = null)
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
        /// Execute a transaction on a DLT Takes a request ID and submits a signed transaction to the requested DLT.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="executeTransactionRequest"></param>
        /// <returns>ExecuteTransactionResponse</returns>
        public ExecuteTransactionResponse ExecutePreparedRequestTransaction (string authorization, ExecuteTransactionRequest executeTransactionRequest)
        {
             ApiResponse<ExecuteTransactionResponse> localVarResponse = ExecutePreparedRequestTransactionWithHttpInfo(authorization, executeTransactionRequest);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Execute a transaction on a DLT Takes a request ID and submits a signed transaction to the requested DLT.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="executeTransactionRequest"></param>
        /// <returns>ApiResponse of ExecuteTransactionResponse</returns>
        public ApiResponse<ExecuteTransactionResponse> ExecutePreparedRequestTransactionWithHttpInfo (string authorization, ExecuteTransactionRequest executeTransactionRequest)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling CreateAndPayFromAQRC20SharedAccountApi->ExecutePreparedRequestTransaction");
            // verify the required parameter 'executeTransactionRequest' is set
            if (executeTransactionRequest == null)
                throw new ApiException(400, "Missing required parameter 'executeTransactionRequest' when calling CreateAndPayFromAQRC20SharedAccountApi->ExecutePreparedRequestTransaction");

            var localVarPath = "/v2/execution/transaction";
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
            if (executeTransactionRequest != null && executeTransactionRequest.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(executeTransactionRequest); // http body (model) parameter
            }
            else
            {
                localVarPostBody = executeTransactionRequest; // byte array
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
                Exception exception = ExceptionFactory("ExecutePreparedRequestTransaction", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<ExecuteTransactionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (ExecuteTransactionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(ExecuteTransactionResponse)));
        }

        /// <summary>
        /// Execute a transaction on a DLT Takes a request ID and submits a signed transaction to the requested DLT.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="executeTransactionRequest"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ExecuteTransactionResponse</returns>
        public async System.Threading.Tasks.Task<ExecuteTransactionResponse> ExecutePreparedRequestTransactionAsync (string authorization, ExecuteTransactionRequest executeTransactionRequest, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<ExecuteTransactionResponse> localVarResponse = await ExecutePreparedRequestTransactionWithHttpInfoAsync(authorization, executeTransactionRequest, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Execute a transaction on a DLT Takes a request ID and submits a signed transaction to the requested DLT.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="executeTransactionRequest"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (ExecuteTransactionResponse)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<ExecuteTransactionResponse>> ExecutePreparedRequestTransactionWithHttpInfoAsync (string authorization, ExecuteTransactionRequest executeTransactionRequest, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling CreateAndPayFromAQRC20SharedAccountApi->ExecutePreparedRequestTransaction");
            // verify the required parameter 'executeTransactionRequest' is set
            if (executeTransactionRequest == null)
                throw new ApiException(400, "Missing required parameter 'executeTransactionRequest' when calling CreateAndPayFromAQRC20SharedAccountApi->ExecutePreparedRequestTransaction");

            var localVarPath = "/v2/execution/transaction";
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
            if (executeTransactionRequest != null && executeTransactionRequest.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(executeTransactionRequest); // http body (model) parameter
            }
            else
            {
                localVarPostBody = executeTransactionRequest; // byte array
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
                Exception exception = ExceptionFactory("ExecutePreparedRequestTransaction", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<ExecuteTransactionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (ExecuteTransactionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(ExecuteTransactionResponse)));
        }

        /// <summary>
        /// Prepare a request for a QRC20 shared account Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareAddSecondaryAccountRequestSchema"></param>
        /// <returns>PrepareTransactionResponse</returns>
        public PrepareTransactionResponse PrepareSecondaryOwnerRequest (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema)
        {
             ApiResponse<PrepareTransactionResponse> localVarResponse = PrepareSecondaryOwnerRequestWithHttpInfo(authorization, prepareAddSecondaryAccountRequestSchema);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Prepare a request for a QRC20 shared account Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareAddSecondaryAccountRequestSchema"></param>
        /// <returns>ApiResponse of PrepareTransactionResponse</returns>
        public ApiResponse<PrepareTransactionResponse> PrepareSecondaryOwnerRequestWithHttpInfo (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling CreateAndPayFromAQRC20SharedAccountApi->PrepareSecondaryOwnerRequest");
            // verify the required parameter 'prepareAddSecondaryAccountRequestSchema' is set
            if (prepareAddSecondaryAccountRequestSchema == null)
                throw new ApiException(400, "Missing required parameter 'prepareAddSecondaryAccountRequestSchema' when calling CreateAndPayFromAQRC20SharedAccountApi->PrepareSecondaryOwnerRequest");

            var localVarPath = "/v2/preparation/secondaryaccountowner";
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
            if (prepareAddSecondaryAccountRequestSchema != null && prepareAddSecondaryAccountRequestSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareAddSecondaryAccountRequestSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareAddSecondaryAccountRequestSchema; // byte array
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
                Exception exception = ExceptionFactory("PrepareSecondaryOwnerRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareTransactionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareTransactionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareTransactionResponse)));
        }

        /// <summary>
        /// Prepare a request for a QRC20 shared account Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareAddSecondaryAccountRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareTransactionResponse</returns>
        public async System.Threading.Tasks.Task<PrepareTransactionResponse> PrepareSecondaryOwnerRequestAsync (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<PrepareTransactionResponse> localVarResponse = await PrepareSecondaryOwnerRequestWithHttpInfoAsync(authorization, prepareAddSecondaryAccountRequestSchema, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Prepare a request for a QRC20 shared account Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareAddSecondaryAccountRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareTransactionResponse)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<PrepareTransactionResponse>> PrepareSecondaryOwnerRequestWithHttpInfoAsync (string authorization, PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling CreateAndPayFromAQRC20SharedAccountApi->PrepareSecondaryOwnerRequest");
            // verify the required parameter 'prepareAddSecondaryAccountRequestSchema' is set
            if (prepareAddSecondaryAccountRequestSchema == null)
                throw new ApiException(400, "Missing required parameter 'prepareAddSecondaryAccountRequestSchema' when calling CreateAndPayFromAQRC20SharedAccountApi->PrepareSecondaryOwnerRequest");

            var localVarPath = "/v2/preparation/secondaryaccountowner";
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
            if (prepareAddSecondaryAccountRequestSchema != null && prepareAddSecondaryAccountRequestSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareAddSecondaryAccountRequestSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareAddSecondaryAccountRequestSchema; // byte array
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
                Exception exception = ExceptionFactory("PrepareSecondaryOwnerRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareTransactionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareTransactionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareTransactionResponse)));
        }

    }
}
