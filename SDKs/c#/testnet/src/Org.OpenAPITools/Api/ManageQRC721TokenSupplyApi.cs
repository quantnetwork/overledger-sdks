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
    public interface IManageQRC721TokenSupplyApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Prepare a transaction to manage QRC721 token supply
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareMintTransactionRequestSchemaQrc721"></param>
        /// <returns>PrepareTransactionResponse</returns>
        PrepareTransactionResponse PrepareSupplyRequest (string authorization, PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721);

        /// <summary>
        /// Prepare a transaction to manage QRC721 token supply
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareMintTransactionRequestSchemaQrc721"></param>
        /// <returns>ApiResponse of PrepareTransactionResponse</returns>
        ApiResponse<PrepareTransactionResponse> PrepareSupplyRequestWithHttpInfo (string authorization, PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Prepare a transaction to manage QRC721 token supply
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareMintTransactionRequestSchemaQrc721"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareTransactionResponse</returns>
        System.Threading.Tasks.Task<PrepareTransactionResponse> PrepareSupplyRequestAsync (string authorization, PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Prepare a transaction to manage QRC721 token supply
        /// </summary>
        /// <remarks>
        /// Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareMintTransactionRequestSchemaQrc721"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareTransactionResponse)</returns>
        System.Threading.Tasks.Task<ApiResponse<PrepareTransactionResponse>> PrepareSupplyRequestWithHttpInfoAsync (string authorization, PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721, CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class ManageQRC721TokenSupplyApi : IManageQRC721TokenSupplyApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="ManageQRC721TokenSupplyApi"/> class.
        /// </summary>
        /// <returns></returns>
        public ManageQRC721TokenSupplyApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="ManageQRC721TokenSupplyApi"/> class
        /// </summary>
        /// <returns></returns>
        public ManageQRC721TokenSupplyApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="ManageQRC721TokenSupplyApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public ManageQRC721TokenSupplyApi(Org.OpenAPITools.Client.Configuration configuration = null)
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
        /// Prepare a transaction to manage QRC721 token supply Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareMintTransactionRequestSchemaQrc721"></param>
        /// <returns>PrepareTransactionResponse</returns>
        public PrepareTransactionResponse PrepareSupplyRequest (string authorization, PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721)
        {
             ApiResponse<PrepareTransactionResponse> localVarResponse = PrepareSupplyRequestWithHttpInfo(authorization, prepareMintTransactionRequestSchemaQrc721);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Prepare a transaction to manage QRC721 token supply Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareMintTransactionRequestSchemaQrc721"></param>
        /// <returns>ApiResponse of PrepareTransactionResponse</returns>
        public ApiResponse<PrepareTransactionResponse> PrepareSupplyRequestWithHttpInfo (string authorization, PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling ManageQRC721TokenSupplyApi->PrepareSupplyRequest");
            // verify the required parameter 'prepareMintTransactionRequestSchemaQrc721' is set
            if (prepareMintTransactionRequestSchemaQrc721 == null)
                throw new ApiException(400, "Missing required parameter 'prepareMintTransactionRequestSchemaQrc721' when calling ManageQRC721TokenSupplyApi->PrepareSupplyRequest");

            var localVarPath = "/v2/tokenise/preparation/transaction/qrc721/supply";
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
            if (prepareMintTransactionRequestSchemaQrc721 != null && prepareMintTransactionRequestSchemaQrc721.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareMintTransactionRequestSchemaQrc721); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareMintTransactionRequestSchemaQrc721; // byte array
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
                Exception exception = ExceptionFactory("PrepareSupplyRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareTransactionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareTransactionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareTransactionResponse)));
        }

        /// <summary>
        /// Prepare a transaction to manage QRC721 token supply Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareMintTransactionRequestSchemaQrc721"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of PrepareTransactionResponse</returns>
        public async System.Threading.Tasks.Task<PrepareTransactionResponse> PrepareSupplyRequestAsync (string authorization, PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<PrepareTransactionResponse> localVarResponse = await PrepareSupplyRequestWithHttpInfoAsync(authorization, prepareMintTransactionRequestSchemaQrc721, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Prepare a transaction to manage QRC721 token supply Transforms a transaction request to manage QRC721 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue an new NFT for your QRC721 token, and \&quot;Burn Tokens\&quot; which will allow you to destroy your QRC721 token. Successfully prepared transactions can then be executed using the /execution/transaction API
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="prepareMintTransactionRequestSchemaQrc721"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (PrepareTransactionResponse)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<PrepareTransactionResponse>> PrepareSupplyRequestWithHttpInfoAsync (string authorization, PrepareMintTransactionRequestSchemaQrc721 prepareMintTransactionRequestSchemaQrc721, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling ManageQRC721TokenSupplyApi->PrepareSupplyRequest");
            // verify the required parameter 'prepareMintTransactionRequestSchemaQrc721' is set
            if (prepareMintTransactionRequestSchemaQrc721 == null)
                throw new ApiException(400, "Missing required parameter 'prepareMintTransactionRequestSchemaQrc721' when calling ManageQRC721TokenSupplyApi->PrepareSupplyRequest");

            var localVarPath = "/v2/tokenise/preparation/transaction/qrc721/supply";
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
            if (prepareMintTransactionRequestSchemaQrc721 != null && prepareMintTransactionRequestSchemaQrc721.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(prepareMintTransactionRequestSchemaQrc721); // http body (model) parameter
            }
            else
            {
                localVarPostBody = prepareMintTransactionRequestSchemaQrc721; // byte array
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
                Exception exception = ExceptionFactory("PrepareSupplyRequest", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<PrepareTransactionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (PrepareTransactionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(PrepareTransactionResponse)));
        }

    }
}
