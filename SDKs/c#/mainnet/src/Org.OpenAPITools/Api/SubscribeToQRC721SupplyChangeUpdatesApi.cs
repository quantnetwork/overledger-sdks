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
    public interface ISubscribeToQRC721SupplyChangeUpdatesApi : IApiAccessor
    {
        #region Synchronous Operations
        /// <summary>
        /// Receive updates each time a supply changes for a QRC721 or QRC20 token
        /// </summary>
        /// <remarks>
        /// Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="flowtype"></param>
        /// <param name="body"></param>
        /// <returns>EventSubscriptionResponse</returns>
        EventSubscriptionResponse SubscribeSupplyEvent (string authorization, string flowtype, Object body);

        /// <summary>
        /// Receive updates each time a supply changes for a QRC721 or QRC20 token
        /// </summary>
        /// <remarks>
        /// Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="flowtype"></param>
        /// <param name="body"></param>
        /// <returns>ApiResponse of EventSubscriptionResponse</returns>
        ApiResponse<EventSubscriptionResponse> SubscribeSupplyEventWithHttpInfo (string authorization, string flowtype, Object body);
        #endregion Synchronous Operations
        #region Asynchronous Operations
        /// <summary>
        /// Receive updates each time a supply changes for a QRC721 or QRC20 token
        /// </summary>
        /// <remarks>
        /// Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="flowtype"></param>
        /// <param name="body"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of EventSubscriptionResponse</returns>
        System.Threading.Tasks.Task<EventSubscriptionResponse> SubscribeSupplyEventAsync (string authorization, string flowtype, Object body, CancellationToken cancellationToken = default(CancellationToken));

        /// <summary>
        /// Receive updates each time a supply changes for a QRC721 or QRC20 token
        /// </summary>
        /// <remarks>
        /// Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
        /// </remarks>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="flowtype"></param>
        /// <param name="body"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (EventSubscriptionResponse)</returns>
        System.Threading.Tasks.Task<ApiResponse<EventSubscriptionResponse>> SubscribeSupplyEventWithHttpInfoAsync (string authorization, string flowtype, Object body, CancellationToken cancellationToken = default(CancellationToken));
        #endregion Asynchronous Operations
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public partial class SubscribeToQRC721SupplyChangeUpdatesApi : ISubscribeToQRC721SupplyChangeUpdatesApi
    {
        private Org.OpenAPITools.Client.ExceptionFactory _exceptionFactory = (name, response) => null;

        /// <summary>
        /// Initializes a new instance of the <see cref="SubscribeToQRC721SupplyChangeUpdatesApi"/> class.
        /// </summary>
        /// <returns></returns>
        public SubscribeToQRC721SupplyChangeUpdatesApi(String basePath)
        {
            this.Configuration = new Org.OpenAPITools.Client.Configuration { BasePath = basePath };

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="SubscribeToQRC721SupplyChangeUpdatesApi"/> class
        /// </summary>
        /// <returns></returns>
        public SubscribeToQRC721SupplyChangeUpdatesApi()
        {
            this.Configuration = Org.OpenAPITools.Client.Configuration.Default;

            ExceptionFactory = Org.OpenAPITools.Client.Configuration.DefaultExceptionFactory;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="SubscribeToQRC721SupplyChangeUpdatesApi"/> class
        /// using Configuration object
        /// </summary>
        /// <param name="configuration">An instance of Configuration</param>
        /// <returns></returns>
        public SubscribeToQRC721SupplyChangeUpdatesApi(Org.OpenAPITools.Client.Configuration configuration = null)
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
        /// Receive updates each time a supply changes for a QRC721 or QRC20 token Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="flowtype"></param>
        /// <param name="body"></param>
        /// <returns>EventSubscriptionResponse</returns>
        public EventSubscriptionResponse SubscribeSupplyEvent (string authorization, string flowtype, Object body)
        {
             ApiResponse<EventSubscriptionResponse> localVarResponse = SubscribeSupplyEventWithHttpInfo(authorization, flowtype, body);
             return localVarResponse.Data;
        }

        /// <summary>
        /// Receive updates each time a supply changes for a QRC721 or QRC20 token Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="flowtype"></param>
        /// <param name="body"></param>
        /// <returns>ApiResponse of EventSubscriptionResponse</returns>
        public ApiResponse<EventSubscriptionResponse> SubscribeSupplyEventWithHttpInfo (string authorization, string flowtype, Object body)
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling SubscribeToQRC721SupplyChangeUpdatesApi->SubscribeSupplyEvent");
            // verify the required parameter 'flowtype' is set
            if (flowtype == null)
                throw new ApiException(400, "Missing required parameter 'flowtype' when calling SubscribeToQRC721SupplyChangeUpdatesApi->SubscribeSupplyEvent");
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling SubscribeToQRC721SupplyChangeUpdatesApi->SubscribeSupplyEvent");

            var localVarPath = "/v2/tokenise/tokens/subscription/{flowtype}/supply";
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

            if (flowtype != null) localVarPathParams.Add("flowtype", this.Configuration.ApiClient.ParameterToString(flowtype)); // path parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter
            if (body != null && body.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) this.Configuration.ApiClient.CallApi(localVarPath,
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("SubscribeSupplyEvent", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<EventSubscriptionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (EventSubscriptionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(EventSubscriptionResponse)));
        }

        /// <summary>
        /// Receive updates each time a supply changes for a QRC721 or QRC20 token Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="flowtype"></param>
        /// <param name="body"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of EventSubscriptionResponse</returns>
        public async System.Threading.Tasks.Task<EventSubscriptionResponse> SubscribeSupplyEventAsync (string authorization, string flowtype, Object body, CancellationToken cancellationToken = default(CancellationToken))
        {
             ApiResponse<EventSubscriptionResponse> localVarResponse = await SubscribeSupplyEventWithHttpInfoAsync(authorization, flowtype, body, cancellationToken);
             return localVarResponse.Data;

        }

        /// <summary>
        /// Receive updates each time a supply changes for a QRC721 or QRC20 token Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
        /// </summary>
        /// <exception cref="Org.OpenAPITools.Client.ApiException">Thrown when fails to make API call</exception>
        /// <param name="authorization"></param>
        /// <param name="flowtype"></param>
        /// <param name="body"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel request (optional) </param>
        /// <returns>Task of ApiResponse (EventSubscriptionResponse)</returns>
        public async System.Threading.Tasks.Task<ApiResponse<EventSubscriptionResponse>> SubscribeSupplyEventWithHttpInfoAsync (string authorization, string flowtype, Object body, CancellationToken cancellationToken = default(CancellationToken))
        {
            // verify the required parameter 'authorization' is set
            if (authorization == null)
                throw new ApiException(400, "Missing required parameter 'authorization' when calling SubscribeToQRC721SupplyChangeUpdatesApi->SubscribeSupplyEvent");
            // verify the required parameter 'flowtype' is set
            if (flowtype == null)
                throw new ApiException(400, "Missing required parameter 'flowtype' when calling SubscribeToQRC721SupplyChangeUpdatesApi->SubscribeSupplyEvent");
            // verify the required parameter 'body' is set
            if (body == null)
                throw new ApiException(400, "Missing required parameter 'body' when calling SubscribeToQRC721SupplyChangeUpdatesApi->SubscribeSupplyEvent");

            var localVarPath = "/v2/tokenise/tokens/subscription/{flowtype}/supply";
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

            if (flowtype != null) localVarPathParams.Add("flowtype", this.Configuration.ApiClient.ParameterToString(flowtype)); // path parameter
            if (authorization != null) localVarHeaderParams.Add("Authorization", this.Configuration.ApiClient.ParameterToString(authorization)); // header parameter
            if (body != null && body.GetType() != typeof(byte[]))
            {
                localVarPostBody = this.Configuration.ApiClient.Serialize(body); // http body (model) parameter
            }
            else
            {
                localVarPostBody = body; // byte array
            }


            // make the HTTP request
            IRestResponse localVarResponse = (IRestResponse) await this.Configuration.ApiClient.CallApiAsync(localVarPath,
                Method.POST, localVarQueryParams, localVarPostBody, localVarHeaderParams, localVarFormParams, localVarFileParams,
                localVarPathParams, localVarHttpContentType, cancellationToken);

            int localVarStatusCode = (int) localVarResponse.StatusCode;

            if (ExceptionFactory != null)
            {
                Exception exception = ExceptionFactory("SubscribeSupplyEvent", localVarResponse);
                if (exception != null) throw exception;
            }

            return new ApiResponse<EventSubscriptionResponse>(localVarStatusCode,
                localVarResponse.Headers.ToDictionary(x => x.Name, x => string.Join(",", x.Value)),
                (EventSubscriptionResponse) this.Configuration.ApiClient.Deserialize(localVarResponse, typeof(EventSubscriptionResponse)));
        }

    }
}
