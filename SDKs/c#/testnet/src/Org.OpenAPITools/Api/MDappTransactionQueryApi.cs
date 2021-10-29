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
    public interface IMDappTransactionQueryApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Retrieve information about a specific transaction created by your application in Overledger
        /// </summary>
        /// <remarks>
        /// Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="overledgertransactionid"></param>
        /// <returns>OverledgerTransactionResponseSchema</returns>
        OverledgerTransactionResponseSchema GetOvlTransactionByTxId (string authorization, string overledgertransactionid);

        /// <summary>
        /// Retrieve information about a specific transaction created by your application in Overledger
        /// </summary>
        /// <remarks>
        /// Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="overledgertransactionid"></param>
        /// <returns>ApiResponse of OverledgerTransactionResponseSchema</returns>
        ApiResponse<OverledgerTransactionResponseSchema> GetOvlTransactionByTxIdWithHttpInfo (string authorization, string overledgertransactionid);
        /// <summary>
        /// Retrieve a list of transactions created by your application in Overledger
        /// </summary>
        /// <remarks>
        /// Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="offset"> (optional, default to 0)</param>
        /// <param name="length"> (optional, default to 25)</param>
        /// <returns>List&lt;OverledgerTransactionResponseSchema&gt;</returns>
        List<OverledgerTransactionResponseSchema> GetOvlTransactionsByClientId (string authorization, int? offset = default(int?), int? length = default(int?));

        /// <summary>
        /// Retrieve a list of transactions created by your application in Overledger
        /// </summary>
        /// <remarks>
        /// Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="offset"> (optional, default to 0)</param>
        /// <param name="length"> (optional, default to 25)</param>
        /// <returns>ApiResponse of List&lt;OverledgerTransactionResponseSchema&gt;</returns>
        ApiResponse<List<OverledgerTransactionResponseSchema>> GetOvlTransactionsByClientIdWithHttpInfo (string authorization, int? offset = default(int?), int? length = default(int?));
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Retrieve information about a specific transaction created by your application in Overledger
        /// </summary>
        /// <remarks>
        /// Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="overledgertransactionid"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of OverledgerTransactionResponseSchema</returns>
        System.Threading.Tasks.Task<OverledgerTransactionResponseSchema> GetOvlTransactionByTxIdAsync (string authorization, string overledgertransactionid, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Retrieve information about a specific transaction created by your application in Overledger
        /// </summary>
        /// <remarks>
        /// Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="overledgertransactionid"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (OverledgerTransactionResponseSchema)</returns>
        System.Threading.Tasks.Task<ApiResponse<OverledgerTransactionResponseSchema>> GetOvlTransactionByTxIdWithHttpInfoAsync (string authorization, string overledgertransactionid, CancellationToken cancellationToken = default(CancellationToken));
        /// <summary>
        /// Retrieve a list of transactions created by your application in Overledger
        /// </summary>
        /// <remarks>
        /// Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="offset"> (optional, default to 0)</param>
        /// <param name="length"> (optional, default to 25)</param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of List&lt;OverledgerTransactionResponseSchema&gt;</returns>
        System.Threading.Tasks.Task<List<OverledgerTransactionResponseSchema>> GetOvlTransactionsByClientIdAsync (string authorization, int? offset = default(int?), int? length = default(int?), CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Retrieve a list of transactions created by your application in Overledger
        /// </summary>
        /// <remarks>
        /// Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="offset"> (optional, default to 0)</param>
        /// <param name="length"> (optional, default to 25)</param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (List&lt;OverledgerTransactionResponseSchema&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<OverledgerTransactionResponseSchema>>> GetOvlTransactionsByClientIdWithHttpInfoAsync (string authorization, int? offset = default(int?), int? length = default(int?), CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class MDappTransactionQueryApi : IMDappTransactionQueryApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="MDappTransactionQueryApi"/> class.
        /// </summary>
        /// <returns></returns>
        public MDappTransactionQueryApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="MDappTransactionQueryApi"/> class
        /// </summary>
        /// <returns></returns>
        public MDappTransactionQueryApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="MDappTransactionQueryApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public MDappTransactionQueryApi(Org.OpenAPITools.Client.Configuration configuration = null)
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
        /// Retrieve information about a specific transaction created by your application in Overledger Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="overledgertransactionid"></param>
        /// <returns>OverledgerTransactionResponseSchema</returns>
        public OverledgerTransactionResponseSchema GetOvlTransactionByTxId (string authorization, string overledgertransactionid)
        {
             ApiResponse<OverledgerTransactionResponseSchema> localVarResponse = GetOvlTransactionByTxIdWithHttpInfo(authorization, overledgertransactionid);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Retrieve information about a specific transaction created by your application in Overledger Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="overledgertransactionid"></param>
        /// <returns>ApiResponse of OverledgerTransactionResponseSchema</returns>
        public ApiResponse<OverledgerTransactionResponseSchema> GetOvlTransactionByTxIdWithHttpInfo (string authorization, string overledgertransactionid)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling MDappTransactionQueryApi->GetOvlTransactionByTxId");
            // verify the required parameter 'overledgertransactionid' is set
            if (overledgertransactionid == null)
                throw new ApiException(400, "Missing required parameter 'overledgertransactionid' when calling MDappTransactionQueryApi->GetOvlTransactionByTxId");

            var localVarPath = "/v2/mdapptransaction/{overledgertransactionid}";
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

            if (overledgertransactionid != null) localVarPathParams.Add("overledgertransactionid", this.Configuration.ApiClient.ParameterToString(overledgertransactionid)); // path parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter

            // authentication (OAuth2_Security_Scheme) required
            // oauth required
            if (!String.IsNullOrEmpty(this.Configuration.AccessToken))
            {
                localVarHeaderParams["Authorization"] = "Bearer " + this.Configuration.AccessToken;
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) this.Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetOvlTransactionByTxId", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<OverledgerTransactionResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (OverledgerTransactionResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(OverledgerTransactionResponseSchema)));
        }

        /// <summary>
        /// Retrieve information about a specific transaction created by your application in Overledger Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="overledgertransactionid"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of OverledgerTransactionResponseSchema</returns>
        public async System.Threading.Tasks.Task<OverledgerTransactionResponseSchema> GetOvlTransactionByTxIdAsync (string authorization, string overledgertransactionid, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<OverledgerTransactionResponseSchema> localVarResponse = await GetOvlTransactionByTxIdWithHttpInfoAsync(authorization, overledgertransactionid, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Retrieve information about a specific transaction created by your application in Overledger Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="overledgertransactionid"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (OverledgerTransactionResponseSchema)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<OverledgerTransactionResponseSchema>> GetOvlTransactionByTxIdWithHttpInfoAsync (string authorization, string overledgertransactionid, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling MDappTransactionQueryApi->GetOvlTransactionByTxId");
            // verify the required parameter 'overledgertransactionid' is set
            if (overledgertransactionid == null)
                throw new ApiException(400, "Missing required parameter 'overledgertransactionid' when calling MDappTransactionQueryApi->GetOvlTransactionByTxId");

            var localVarPath = "/v2/mdapptransaction/{overledgertransactionid}";
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

            if (overledgertransactionid != null) localVarPathParams.Add("overledgertransactionid", this.Configuration.ApiClient.ParameterToString(overledgertransactionid)); // path parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter

            // authentication (OAuth2_Security_Scheme) required
            // oauth required
            if (!String.IsNullOrEmpty(this.Configuration.AccessToken))
            {
                localVarHeaderParams["Authorization"] = "Bearer " + this.Configuration.AccessToken;
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await this.Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType, cancellationToken);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetOvlTransactionByTxId", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<OverledgerTransactionResponseSchema>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (OverledgerTransactionResponseSchema) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(OverledgerTransactionResponseSchema)));
        }

        /// <summary>
        /// Retrieve a list of transactions created by your application in Overledger Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="offset"> (optional, default to 0)</param>
        /// <param name="length"> (optional, default to 25)</param>
        /// <returns>List&lt;OverledgerTransactionResponseSchema&gt;</returns>
        public List<OverledgerTransactionResponseSchema> GetOvlTransactionsByClientId (string authorization, int? offset = default(int?), int? length = default(int?))
        {
             ApiResponse<List<OverledgerTransactionResponseSchema>> localVarResponse = GetOvlTransactionsByClientIdWithHttpInfo(authorization, offset, length);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Retrieve a list of transactions created by your application in Overledger Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="offset"> (optional, default to 0)</param>
        /// <param name="length"> (optional, default to 25)</param>
        /// <returns>ApiResponse of List&lt;OverledgerTransactionResponseSchema&gt;</returns>
        public ApiResponse<List<OverledgerTransactionResponseSchema>> GetOvlTransactionsByClientIdWithHttpInfo (string authorization, int? offset = default(int?), int? length = default(int?))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling MDappTransactionQueryApi->GetOvlTransactionsByClientId");

            var localVarPath = "/v2/mdapptransactions";
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

            if (offset != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "offset", offset)); // query parameter
            if (length != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "length", length)); // query parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter

            // authentication (OAuth2_Security_Scheme) required
            // oauth required
            if (!String.IsNullOrEmpty(this.Configuration.AccessToken))
            {
                localVarHeaderParams["Authorization"] = "Bearer " + this.Configuration.AccessToken;
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) this.Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetOvlTransactionsByClientId", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<List<OverledgerTransactionResponseSchema>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (List<OverledgerTransactionResponseSchema>) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<OverledgerTransactionResponseSchema>)));
        }

        /// <summary>
        /// Retrieve a list of transactions created by your application in Overledger Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="offset"> (optional, default to 0)</param>
        /// <param name="length"> (optional, default to 25)</param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of List&lt;OverledgerTransactionResponseSchema&gt;</returns>
        public async System.Threading.Tasks.Task<List<OverledgerTransactionResponseSchema>> GetOvlTransactionsByClientIdAsync (string authorization, int? offset = default(int?), int? length = default(int?), CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<List<OverledgerTransactionResponseSchema>> localVarResponse = await GetOvlTransactionsByClientIdWithHttpInfoAsync(authorization, offset, length, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Retrieve a list of transactions created by your application in Overledger Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="offset"> (optional, default to 0)</param>
        /// <param name="length"> (optional, default to 25)</param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (List&lt;OverledgerTransactionResponseSchema&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<OverledgerTransactionResponseSchema>>> GetOvlTransactionsByClientIdWithHttpInfoAsync (string authorization, int? offset = default(int?), int? length = default(int?), CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling MDappTransactionQueryApi->GetOvlTransactionsByClientId");

            var localVarPath = "/v2/mdapptransactions";
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

            if (offset != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "offset", offset)); // query parameter
            if (length != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "length", length)); // query parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter

            // authentication (OAuth2_Security_Scheme) required
            // oauth required
            if (!String.IsNullOrEmpty(this.Configuration.AccessToken))
            {
                localVarHeaderParams["Authorization"] = "Bearer " + this.Configuration.AccessToken;
            }

            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await this.Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType, cancellationToken);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetOvlTransactionsByClientId", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<List<OverledgerTransactionResponseSchema>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (List<OverledgerTransactionResponseSchema>) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<OverledgerTransactionResponseSchema>)));
        }

    }
}
