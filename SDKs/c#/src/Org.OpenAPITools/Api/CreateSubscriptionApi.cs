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
    public interface ICreateSubscriptionApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Create a subscription for a transaction or monitored resource 
        /// </summary>
        /// <remarks>
        /// Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="createSubscriptionRequestSchema"></param>
        /// <returns>List&lt;CreateSubscriptionResponseSchema&gt;</returns>
        List<CreateSubscriptionResponseSchema> Subscription (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema);

        /// <summary>
        /// Create a subscription for a transaction or monitored resource 
        /// </summary>
        /// <remarks>
        /// Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="createSubscriptionRequestSchema"></param>
        /// <returns>ApiResponse of List&lt;CreateSubscriptionResponseSchema&gt;</returns>
        ApiResponse<List<CreateSubscriptionResponseSchema>> SubscriptionWithHttpInfo (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Create a subscription for a transaction or monitored resource 
        /// </summary>
        /// <remarks>
        /// Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="createSubscriptionRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of List&lt;CreateSubscriptionResponseSchema&gt;</returns>
        System.Threading.Tasks.Task<List<CreateSubscriptionResponseSchema>> SubscriptionAsync (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Create a subscription for a transaction or monitored resource 
        /// </summary>
        /// <remarks>
        /// Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="createSubscriptionRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (List&lt;CreateSubscriptionResponseSchema&gt;)</returns>
        System.Threading.Tasks.Task<ApiResponse<List<CreateSubscriptionResponseSchema>>> SubscriptionWithHttpInfoAsync (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema, CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class CreateSubscriptionApi : ICreateSubscriptionApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateSubscriptionApi"/> class.
        /// </summary>
        /// <returns></returns>
        public CreateSubscriptionApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateSubscriptionApi"/> class
        /// </summary>
        /// <returns></returns>
        public CreateSubscriptionApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="CreateSubscriptionApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public CreateSubscriptionApi(Org.OpenAPITools.Client.Configuration configuration = null)
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
        /// Create a subscription for a transaction or monitored resource  Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="createSubscriptionRequestSchema"></param>
        /// <returns>List&lt;CreateSubscriptionResponseSchema&gt;</returns>
        public List<CreateSubscriptionResponseSchema> Subscription (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema)
        {
             ApiResponse<List<CreateSubscriptionResponseSchema>> localVarResponse = SubscriptionWithHttpInfo(authorization, createSubscriptionRequestSchema);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Create a subscription for a transaction or monitored resource  Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="createSubscriptionRequestSchema"></param>
        /// <returns>ApiResponse of List&lt;CreateSubscriptionResponseSchema&gt;</returns>
        public ApiResponse<List<CreateSubscriptionResponseSchema>> SubscriptionWithHttpInfo (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling CreateSubscriptionApi->Subscription");
            // verify the required parameter 'createSubscriptionRequestSchema' is set
            if (createSubscriptionRequestSchema == null)
                throw new ApiException(400, "Missing required parameter 'createSubscriptionRequestSchema' when calling CreateSubscriptionApi->Subscription");

            var localVarPath = "/v2/webhook/subscription";
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
            if (createSubscriptionRequestSchema != null && createSubscriptionRequestSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(createSubscriptionRequestSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = createSubscriptionRequestSchema; // byte array
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
                Exception exception = ExceptionFactory("Subscription", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<List<CreateSubscriptionResponseSchema>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (List<CreateSubscriptionResponseSchema>) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CreateSubscriptionResponseSchema>)));
        }

        /// <summary>
        /// Create a subscription for a transaction or monitored resource  Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="createSubscriptionRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of List&lt;CreateSubscriptionResponseSchema&gt;</returns>
        public async System.Threading.Tasks.Task<List<CreateSubscriptionResponseSchema>> SubscriptionAsync (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<List<CreateSubscriptionResponseSchema>> localVarResponse = await SubscriptionWithHttpInfoAsync(authorization, createSubscriptionRequestSchema, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Create a subscription for a transaction or monitored resource  Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="createSubscriptionRequestSchema"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (List&lt;CreateSubscriptionResponseSchema&gt;)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<List<CreateSubscriptionResponseSchema>>> SubscriptionWithHttpInfoAsync (string authorization, CreateSubscriptionRequestSchema createSubscriptionRequestSchema, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling CreateSubscriptionApi->Subscription");
            // verify the required parameter 'createSubscriptionRequestSchema' is set
            if (createSubscriptionRequestSchema == null)
                throw new ApiException(400, "Missing required parameter 'createSubscriptionRequestSchema' when calling CreateSubscriptionApi->Subscription");

            var localVarPath = "/v2/webhook/subscription";
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
            if (createSubscriptionRequestSchema != null && createSubscriptionRequestSchema.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(createSubscriptionRequestSchema); // http body (model) parameter
            }
            else
            {
                localVarPostBody = createSubscriptionRequestSchema; // byte array
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
                Exception exception = ExceptionFactory("Subscription", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<List<CreateSubscriptionResponseSchema>>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (List<CreateSubscriptionResponseSchema>) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(List<CreateSubscriptionResponseSchema>)));
        }

    }
}
