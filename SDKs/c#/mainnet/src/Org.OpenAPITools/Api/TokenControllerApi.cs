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
    public interface ITokenControllerApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tokenName"></param>
        /// <param name="technology"></param>
        /// <param name="network"></param>
        /// <returns>NonFungibleTokenDTO</returns>
        NonFungibleTokenDTO GetNonFungibleToken (string tokenName, string technology, string network);

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tokenName"></param>
        /// <param name="technology"></param>
        /// <param name="network"></param>
        /// <returns>ApiResponse of NonFungibleTokenDTO</returns>
        ApiResponse<NonFungibleTokenDTO> GetNonFungibleTokenWithHttpInfo (string tokenName, string technology, string network);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tokenName"></param>
        /// <param name="technology"></param>
        /// <param name="network"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of NonFungibleTokenDTO</returns>
        System.Threading.Tasks.Task<NonFungibleTokenDTO> GetNonFungibleTokenAsync (string tokenName, string technology, string network, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tokenName"></param>
        /// <param name="technology"></param>
        /// <param name="network"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (NonFungibleTokenDTO)</returns>
        System.Threading.Tasks.Task<ApiResponse<NonFungibleTokenDTO>> GetNonFungibleTokenWithHttpInfoAsync (string tokenName, string technology, string network, CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class TokenControllerApi : ITokenControllerApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="TokenControllerApi"/> class.
        /// </summary>
        /// <returns></returns>
        public TokenControllerApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="TokenControllerApi"/> class
        /// </summary>
        /// <returns></returns>
        public TokenControllerApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="TokenControllerApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public TokenControllerApi(Org.OpenAPITools.Client.Configuration configuration = null)
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
        ///  
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tokenName"></param>
        /// <param name="technology"></param>
        /// <param name="network"></param>
        /// <returns>NonFungibleTokenDTO</returns>
        public NonFungibleTokenDTO GetNonFungibleToken (string tokenName, string technology, string network)
        {
             ApiResponse<NonFungibleTokenDTO> localVarResponse = GetNonFungibleTokenWithHttpInfo(tokenName, technology, network);
             return localVarResponse.Data;
        }

        /// <summary>
        ///  
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tokenName"></param>
        /// <param name="technology"></param>
        /// <param name="network"></param>
        /// <returns>ApiResponse of NonFungibleTokenDTO</returns>
        public ApiResponse<NonFungibleTokenDTO> GetNonFungibleTokenWithHttpInfo (string tokenName, string technology, string network)
        {
            // verify the required parameter 'tokenName' is set
            if (tokenName == null)
                throw new ApiException(400, "Missing required parameter 'tokenName' when calling TokenControllerApi->GetNonFungibleToken");
            // verify the required parameter 'technology' is set
            if (technology == null)
                throw new ApiException(400, "Missing required parameter 'technology' when calling TokenControllerApi->GetNonFungibleToken");
            // verify the required parameter 'network' is set
            if (network == null)
                throw new ApiException(400, "Missing required parameter 'network' when calling TokenControllerApi->GetNonFungibleToken");

            var localVarPath = "/v2/nonfungibletoken";
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
                "*/*"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            if (tokenName != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "tokenName", tokenName)); // query parameter
            if (technology != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "technology", technology)); // query parameter
            if (network != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "network", network)); // query parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) this.Configuration.ApiClient.CallApi(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetNonFungibleToken", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<NonFungibleTokenDTO>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (NonFungibleTokenDTO) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(NonFungibleTokenDTO)));
        }

        /// <summary>
        ///  
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tokenName"></param>
        /// <param name="technology"></param>
        /// <param name="network"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of NonFungibleTokenDTO</returns>
        public async System.Threading.Tasks.Task<NonFungibleTokenDTO> GetNonFungibleTokenAsync (string tokenName, string technology, string network, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<NonFungibleTokenDTO> localVarResponse = await GetNonFungibleTokenWithHttpInfoAsync(tokenName, technology, network, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        ///  
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="tokenName"></param>
        /// <param name="technology"></param>
        /// <param name="network"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (NonFungibleTokenDTO)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<NonFungibleTokenDTO>> GetNonFungibleTokenWithHttpInfoAsync (string tokenName, string technology, string network, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'tokenName' is set
            if (tokenName == null)
                throw new ApiException(400, "Missing required parameter 'tokenName' when calling TokenControllerApi->GetNonFungibleToken");
            // verify the required parameter 'technology' is set
            if (technology == null)
                throw new ApiException(400, "Missing required parameter 'technology' when calling TokenControllerApi->GetNonFungibleToken");
            // verify the required parameter 'network' is set
            if (network == null)
                throw new ApiException(400, "Missing required parameter 'network' when calling TokenControllerApi->GetNonFungibleToken");

            var localVarPath = "/v2/nonfungibletoken";
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
                "*/*"
            };
            String localVarHttpHeaderAccept = this.Configuration.ApiClient.SelectHeaderAccept(localVarHttpHeaderAccepts);
            if (localVarHttpHeaderAccept != null)
                localVarHeaderParams.Add("Accept", localVarHttpHeaderAccept);

            if (tokenName != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "tokenName", tokenName)); // query parameter
            if (technology != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "technology", technology)); // query parameter
            if (network != null) localVarQueryParams.AddRange(this.Configuration.ApiClient.ParameterToKeyValuePairs("", "network", network)); // query parameter


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await this.Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.GET, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType, cancellationToken);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("GetNonFungibleToken", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<NonFungibleTokenDTO>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (NonFungibleTokenDTO) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(NonFungibleTokenDTO)));
        }

    }
}
