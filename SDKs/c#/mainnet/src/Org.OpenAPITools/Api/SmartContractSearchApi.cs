/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!- - ReDoc-Inject: <security-definitions> - ->
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
    public interface ISmartContractSearchApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Execute a read of a smart contract on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <returns>ExecuteSmartContractReadResponseSchema</returns>
        ExecuteSmartContractReadResponseSchema ExecutePreparedSearchRequest (string authorization, string requestId);

        /// <summary>
        /// Execute a read of a smart contract on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <returns>ApiResponse of ExecuteSmartContractReadResponseSchema</returns>
        ApiResponse<ExecuteSmartContractReadResponseSchema> ExecutePreparedSearchRequestWithHttpInfo (string authorization, string requestId);
        /// <summary>
        /// Prepare a read of a smart contract on a DLT
        /// </summary>
        /// <remarks>
        /// Returns a request ID for executing a smart contract read on Ethereum.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareSearchSmartContractRequestSchema"></param>
        /// <returns>PrepareSearchResponseSchema</returns>
        PrepareSearchResponseSchema PrepareSmartContractQueryRequest (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema);

        /// <summary>
        /// Prepare a read of a smart contract on a DLT
        /// </summary>
        /// <remarks>
        /// Returns a request ID for executing a smart contract read on Ethereum.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareSearchSmartContractRequestSchema"></param>
        /// <returns>ApiResponse of PrepareSearchResponseSchema</returns>
        ApiResponse<PrepareSearchResponseSchema> PrepareSmartContractQueryRequestWithHttpInfo (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Execute a read of a smart contract on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ExecuteSmartContractReadResponseSchema</returns>
        System.Threading.Tasks.Task<ExecuteSmartContractReadResponseSchema> ExecutePreparedSearchRequestAsync (string authorization, string requestId, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Execute a read of a smart contract on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (ExecuteSmartContractReadResponseSchema)</returns>
        System.Threading.Tasks.Task<ApiResponse<ExecuteSmartContractReadResponseSchema>> ExecutePreparedSearchRequestWithHttpInfoAsync (string authorization, string requestId, CancellationToken cancellationToken = default(CancellationToken));
        /// <summary>
        /// Prepare a read of a smart contract on a DLT
        /// </summary>
        /// <remarks>
        /// Returns a request ID for executing a smart contract read on Ethereum.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareSearchSmartContractRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareSearchResponseSchema</returns>
        System.Threading.Tasks.Task<PrepareSearchResponseSchema> PrepareSmartContractQueryRequestAsync (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Prepare a read of a smart contract on a DLT
        /// </summary>
        /// <remarks>
        /// Returns a request ID for executing a smart contract read on Ethereum.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareSearchSmartContractRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareSearchResponseSchema)</returns>
        System.Threading.Tasks.Task<ApiResponse<PrepareSearchResponseSchema>> PrepareSmartContractQueryRequestWithHttpInfoAsync (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema, CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class SmartContractSearchApi : ISmartContractSearchApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="SmartContractSearchApi"/> class.
        /// </summary>
        /// <returns></returns>
        public SmartContractSearchApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="SmartContractSearchApi"/> class
        /// </summary>
        /// <returns></returns>
        public SmartContractSearchApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="SmartContractSearchApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public SmartContractSearchApi(Org.OpenAPITools.Client.Configuration configuration = null)
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
        /// Execute a read of a smart contract on a DLT Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <returns>ExecuteSmartContractReadResponseSchema</returns>
        public ExecuteSmartContractReadResponseSchema ExecutePreparedSearchRequest (string authorization, string requestId)
        {
             ApiResponse<ExecuteSmartContractReadResponseSchema> localVarResponse = ExecutePreparedSearchRequestWithHttpInfo(authorization, requestId);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Execute a read of a smart contract on a DLT Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <returns>ApiResponse of ExecuteSmartContractReadResponseSchema</returns>
        public ApiResponse<ExecuteSmartContractReadResponseSchema> ExecutePreparedSearchRequestWithHttpInfo (string authorization, string requestId)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling SmartContractSearchApi->ExecutePreparedSearchRequest");
            // verify the required parameter 'requestId' is set
            if (requestId == null)
                throw new ApiException(400, "Missing required parameter 'requestId' when calling SmartContractSearchApi->ExecutePreparedSearchRequest");

            var localVarPath = "/v2/execution/search/smartcontract";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new List<KeyValuePair<String, String>>();
            var localVarHeaderParams = new Dictionary<String, String>(this.Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
            };
            String localVarHttpContentType = this.Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            if (requestId != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "requestId", requestId)); // query parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter

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
                Exception exception = ExceptionFactory("ExecutePreparedSearchRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<ExecuteSmartContractReadResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (ExecuteSmartContractReadResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(ExecuteSmartContractReadResponseSchema)));
        }

        /// <summary>
        /// Execute a read of a smart contract on a DLT Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ExecuteSmartContractReadResponseSchema</returns>
        public async System.Threading.Tasks.Task<ExecuteSmartContractReadResponseSchema> ExecutePreparedSearchRequestAsync (string authorization, string requestId, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<ExecuteSmartContractReadResponseSchema> localVarResponse = await ExecutePreparedSearchRequestWithHttpInfoAsync(authorization, requestId, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Execute a read of a smart contract on a DLT Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (ExecuteSmartContractReadResponseSchema)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<ExecuteSmartContractReadResponseSchema>> ExecutePreparedSearchRequestWithHttpInfoAsync (string authorization, string requestId, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling SmartContractSearchApi->ExecutePreparedSearchRequest");
            // verify the required parameter 'requestId' is set
            if (requestId == null)
                throw new ApiException(400, "Missing required parameter 'requestId' when calling SmartContractSearchApi->ExecutePreparedSearchRequest");

            var localVarPath = "/v2/execution/search/smartcontract";
            var localVarPathParams = new Dictionary<String, String>();
            var localVarQueryParams = new List<KeyValuePair<String, String>>();
            var localVarHeaderParams = new Dictionary<String, String>(this.Configuration.DefaultHeader);
            var localVarFormParams = new Dictionary<String, String>();
            var localVarFileParams = new Dictionary<String, FileParameter>();
            Object localVarPostBody = null;

            // to determine the Content-Type header
            String[] localVarHttpContentTypes = new String[] {
            };
            String localVarHttpContentType = this.Configuration.ApiClient.SelectHeaderContentType(localVarHttpContentTypes);

            // to determine the Accept header
            String[] localVarHttpHeaderAccepts = new String[] {
                "application/json"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            if (requestId != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "requestId", requestId)); // query parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter

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
                Exception exception = ExceptionFactory("ExecutePreparedSearchRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<ExecuteSmartContractReadResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (ExecuteSmartContractReadResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(ExecuteSmartContractReadResponseSchema)));
        }

        /// <summary>
        /// Prepare a read of a smart contract on a DLT Returns a request ID for executing a smart contract read on Ethereum.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareSearchSmartContractRequestSchema"></param>
        /// <returns>PrepareSearchResponseSchema</returns>
        public PrepareSearchResponseSchema PrepareSmartContractQueryRequest (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema)
        {
             ApiResponse<PrepareSearchResponseSchema> localVarResponse = PrepareSmartContractQueryRequestWithHttpInfo(authorization, prepareSearchSmartContractRequestSchema);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Prepare a read of a smart contract on a DLT Returns a request ID for executing a smart contract read on Ethereum.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareSearchSmartContractRequestSchema"></param>
        /// <returns>ApiResponse of PrepareSearchResponseSchema</returns>
        public ApiResponse<PrepareSearchResponseSchema> PrepareSmartContractQueryRequestWithHttpInfo (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling SmartContractSearchApi->PrepareSmartContractQueryRequest");
            // verify the required parameter 'prepareSearchSmartContractRequestSchema' is set
            if (prepareSearchSmartContractRequestSchema == null)
                throw new ApiException(400, "Missing required parameter 'prepareSearchSmartContractRequestSchema' when calling SmartContractSearchApi->PrepareSmartContractQueryRequest");

            var localVarPath = "/v2/preparation/search/smartcontract";
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
            if (prepareSearchSmartContractRequestSchema != null && prepareSearchSmartContractRequestSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareSearchSmartContractRequestSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareSearchSmartContractRequestSchema; // byte array
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
                Exception exception = ExceptionFactory("PrepareSmartContractQueryRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareSearchResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareSearchResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareSearchResponseSchema)));
        }

        /// <summary>
        /// Prepare a read of a smart contract on a DLT Returns a request ID for executing a smart contract read on Ethereum.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareSearchSmartContractRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareSearchResponseSchema</returns>
        public async System.Threading.Tasks.Task<PrepareSearchResponseSchema> PrepareSmartContractQueryRequestAsync (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<PrepareSearchResponseSchema> localVarResponse = await PrepareSmartContractQueryRequestWithHttpInfoAsync(authorization, prepareSearchSmartContractRequestSchema, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Prepare a read of a smart contract on a DLT Returns a request ID for executing a smart contract read on Ethereum.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareSearchSmartContractRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareSearchResponseSchema)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<PrepareSearchResponseSchema>> PrepareSmartContractQueryRequestWithHttpInfoAsync (string authorization, PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling SmartContractSearchApi->PrepareSmartContractQueryRequest");
            // verify the required parameter 'prepareSearchSmartContractRequestSchema' is set
            if (prepareSearchSmartContractRequestSchema == null)
                throw new ApiException(400, "Missing required parameter 'prepareSearchSmartContractRequestSchema' when calling SmartContractSearchApi->PrepareSmartContractQueryRequest");

            var localVarPath = "/v2/preparation/search/smartcontract";
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
            if (prepareSearchSmartContractRequestSchema != null && prepareSearchSmartContractRequestSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareSearchSmartContractRequestSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareSearchSmartContractRequestSchema; // byte array
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
                Exception exception = ExceptionFactory("PrepareSmartContractQueryRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareSearchResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareSearchResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareSearchResponseSchema)));
        }

    }
}