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
    public interface IUTXOStatusSearchApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Execute a search for UTXO state on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <returns>ExecuteSearchUTXOResponseSchema</returns>
        ExecuteSearchUTXOResponseSchema ExecuteUTXOPreparedSearchRequest (string authorization, string requestId);

        /// <summary>
        /// Execute a search for UTXO state on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <returns>ApiResponse of ExecuteSearchUTXOResponseSchema</returns>
        ApiResponse<ExecuteSearchUTXOResponseSchema> ExecuteUTXOPreparedSearchRequestWithHttpInfo (string authorization, string requestId);
        /// <summary>
        /// Prepare Search for a UTXO State.
        /// </summary>
        /// <remarks>
        /// Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="utxoId"></param>
        /// <param name="prepareSearchSchema"></param>
        /// <returns>PrepareSearchResponseSchema</returns>
        PrepareSearchResponseSchema PrepareSearchUTXOState (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema);

        /// <summary>
        /// Prepare Search for a UTXO State.
        /// </summary>
        /// <remarks>
        /// Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="utxoId"></param>
        /// <param name="prepareSearchSchema"></param>
        /// <returns>ApiResponse of PrepareSearchResponseSchema</returns>
        ApiResponse<PrepareSearchResponseSchema> PrepareSearchUTXOStateWithHttpInfo (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Execute a search for UTXO state on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ExecuteSearchUTXOResponseSchema</returns>
        System.Threading.Tasks.Task<ExecuteSearchUTXOResponseSchema> ExecuteUTXOPreparedSearchRequestAsync (string authorization, string requestId, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Execute a search for UTXO state on a DLT
        /// </summary>
        /// <remarks>
        /// Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (ExecuteSearchUTXOResponseSchema)</returns>
        System.Threading.Tasks.Task<ApiResponse<ExecuteSearchUTXOResponseSchema>> ExecuteUTXOPreparedSearchRequestWithHttpInfoAsync (string authorization, string requestId, CancellationToken cancellationToken = default(CancellationToken));
        /// <summary>
        /// Prepare Search for a UTXO State.
        /// </summary>
        /// <remarks>
        /// Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="utxoId"></param>
        /// <param name="prepareSearchSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareSearchResponseSchema</returns>
        System.Threading.Tasks.Task<PrepareSearchResponseSchema> PrepareSearchUTXOStateAsync (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Prepare Search for a UTXO State.
        /// </summary>
        /// <remarks>
        /// Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="utxoId"></param>
        /// <param name="prepareSearchSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareSearchResponseSchema)</returns>
        System.Threading.Tasks.Task<ApiResponse<PrepareSearchResponseSchema>> PrepareSearchUTXOStateWithHttpInfoAsync (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema, CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class UTXOStatusSearchApi : IUTXOStatusSearchApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="UTXOStatusSearchApi"/> class.
        /// </summary>
        /// <returns></returns>
        public UTXOStatusSearchApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="UTXOStatusSearchApi"/> class
        /// </summary>
        /// <returns></returns>
        public UTXOStatusSearchApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="UTXOStatusSearchApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public UTXOStatusSearchApi(Org.OpenAPITools.Client.Configuration configuration = null)
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
        /// Execute a search for UTXO state on a DLT Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <returns>ExecuteSearchUTXOResponseSchema</returns>
        public ExecuteSearchUTXOResponseSchema ExecuteUTXOPreparedSearchRequest (string authorization, string requestId)
        {
             ApiResponse<ExecuteSearchUTXOResponseSchema> localVarResponse = ExecuteUTXOPreparedSearchRequestWithHttpInfo(authorization, requestId);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Execute a search for UTXO state on a DLT Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <returns>ApiResponse of ExecuteSearchUTXOResponseSchema</returns>
        public ApiResponse<ExecuteSearchUTXOResponseSchema> ExecuteUTXOPreparedSearchRequestWithHttpInfo (string authorization, string requestId)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling UTXOStatusSearchApi->ExecuteUTXOPreparedSearchRequest");
            // verify the required parameter 'requestId' is set
            if (requestId == null)
                throw new ApiException(400, "Missing required parameter 'requestId' when calling UTXOStatusSearchApi->ExecuteUTXOPreparedSearchRequest");

            var localVarPath = "/v2/execution/search/utxo";
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
                Exception exception = ExceptionFactory("ExecuteUTXOPreparedSearchRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<ExecuteSearchUTXOResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (ExecuteSearchUTXOResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(ExecuteSearchUTXOResponseSchema)));
        }

        /// <summary>
        /// Execute a search for UTXO state on a DLT Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ExecuteSearchUTXOResponseSchema</returns>
        public async System.Threading.Tasks.Task<ExecuteSearchUTXOResponseSchema> ExecuteUTXOPreparedSearchRequestAsync (string authorization, string requestId, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<ExecuteSearchUTXOResponseSchema> localVarResponse = await ExecuteUTXOPreparedSearchRequestWithHttpInfoAsync(authorization, requestId, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Execute a search for UTXO state on a DLT Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="requestId"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (ExecuteSearchUTXOResponseSchema)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<ExecuteSearchUTXOResponseSchema>> ExecuteUTXOPreparedSearchRequestWithHttpInfoAsync (string authorization, string requestId, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling UTXOStatusSearchApi->ExecuteUTXOPreparedSearchRequest");
            // verify the required parameter 'requestId' is set
            if (requestId == null)
                throw new ApiException(400, "Missing required parameter 'requestId' when calling UTXOStatusSearchApi->ExecuteUTXOPreparedSearchRequest");

            var localVarPath = "/v2/execution/search/utxo";
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
                Exception exception = ExceptionFactory("ExecuteUTXOPreparedSearchRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<ExecuteSearchUTXOResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (ExecuteSearchUTXOResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(ExecuteSearchUTXOResponseSchema)));
        }

        /// <summary>
        /// Prepare Search for a UTXO State. Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="utxoId"></param>
        /// <param name="prepareSearchSchema"></param>
        /// <returns>PrepareSearchResponseSchema</returns>
        public PrepareSearchResponseSchema PrepareSearchUTXOState (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema)
        {
             ApiResponse<PrepareSearchResponseSchema> localVarResponse = PrepareSearchUTXOStateWithHttpInfo(authorization, utxoId, prepareSearchSchema);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Prepare Search for a UTXO State. Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="utxoId"></param>
        /// <param name="prepareSearchSchema"></param>
        /// <returns>ApiResponse of PrepareSearchResponseSchema</returns>
        public ApiResponse<PrepareSearchResponseSchema> PrepareSearchUTXOStateWithHttpInfo (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling UTXOStatusSearchApi->PrepareSearchUTXOState");
            // verify the required parameter 'utxoId' is set
            if (utxoId == null)
                throw new ApiException(400, "Missing required parameter 'utxoId' when calling UTXOStatusSearchApi->PrepareSearchUTXOState");
            // verify the required parameter 'prepareSearchSchema' is set
            if (prepareSearchSchema == null)
                throw new ApiException(400, "Missing required parameter 'prepareSearchSchema' when calling UTXOStatusSearchApi->PrepareSearchUTXOState");

            var localVarPath = "/v2/preparation/search/utxo/{utxoId}";
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

            if (utxoId != null) localVarPathParams.Add("utxoId", this.Configuration.ApiClient.ParameterToString(utxoId)); // path parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter
            if (prepareSearchSchema != null && prepareSearchSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareSearchSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareSearchSchema; // byte array
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
                Exception exception = ExceptionFactory("PrepareSearchUTXOState", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareSearchResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareSearchResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareSearchResponseSchema)));
        }

        /// <summary>
        /// Prepare Search for a UTXO State. Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="utxoId"></param>
        /// <param name="prepareSearchSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareSearchResponseSchema</returns>
        public async System.Threading.Tasks.Task<PrepareSearchResponseSchema> PrepareSearchUTXOStateAsync (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<PrepareSearchResponseSchema> localVarResponse = await PrepareSearchUTXOStateWithHttpInfoAsync(authorization, utxoId, prepareSearchSchema, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Prepare Search for a UTXO State. Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="utxoId"></param>
        /// <param name="prepareSearchSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareSearchResponseSchema)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<PrepareSearchResponseSchema>> PrepareSearchUTXOStateWithHttpInfoAsync (string authorization, string utxoId, PrepareSearchSchema prepareSearchSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling UTXOStatusSearchApi->PrepareSearchUTXOState");
            // verify the required parameter 'utxoId' is set
            if (utxoId == null)
                throw new ApiException(400, "Missing required parameter 'utxoId' when calling UTXOStatusSearchApi->PrepareSearchUTXOState");
            // verify the required parameter 'prepareSearchSchema' is set
            if (prepareSearchSchema == null)
                throw new ApiException(400, "Missing required parameter 'prepareSearchSchema' when calling UTXOStatusSearchApi->PrepareSearchUTXOState");

            var localVarPath = "/v2/preparation/search/utxo/{utxoId}";
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

            if (utxoId != null) localVarPathParams.Add("utxoId", this.Configuration.ApiClient.ParameterToString(utxoId)); // path parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter
            if (prepareSearchSchema != null && prepareSearchSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareSearchSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareSearchSchema; // byte array
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
                Exception exception = ExceptionFactory("PrepareSearchUTXOState", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareSearchResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareSearchResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareSearchResponseSchema)));
        }

    }
}