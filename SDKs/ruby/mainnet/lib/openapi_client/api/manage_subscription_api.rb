=begin
#Quant Overledger API

#Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'cgi'

module OpenapiClient
  class ManageSubscriptionApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Remove a subscription created by your application
    # Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
    # @param authorization [String] 
    # @param subscription_id [String] 
    # @param [Hash] opts the optional parameters
    # @return [SubscriptionDeletionResponse]
    def delete_subscription(authorization, subscription_id, opts = {})
      data, _status_code, _headers = delete_subscription_with_http_info(authorization, subscription_id, opts)
      data
    end

    # Remove a subscription created by your application
    # Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
    # @param authorization [String] 
    # @param subscription_id [String] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(SubscriptionDeletionResponse, Integer, Hash)>] SubscriptionDeletionResponse data, response status code and response headers
    def delete_subscription_with_http_info(authorization, subscription_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: ManageSubscriptionApi.delete_subscription ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling ManageSubscriptionApi.delete_subscription"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 5010
        fail ArgumentError, 'invalid value for "authorization" when calling ManageSubscriptionApi.delete_subscription, the character length must be smaller than or equal to 5010.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling ManageSubscriptionApi.delete_subscription, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,5010}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling ManageSubscriptionApi.delete_subscription, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'subscription_id' is set
      if @api_client.config.client_side_validation && subscription_id.nil?
        fail ArgumentError, "Missing the required parameter 'subscription_id' when calling ManageSubscriptionApi.delete_subscription"
      end
      if @api_client.config.client_side_validation && subscription_id.to_s.length > 24
        fail ArgumentError, 'invalid value for "subscription_id" when calling ManageSubscriptionApi.delete_subscription, the character length must be smaller than or equal to 24.'
      end

      if @api_client.config.client_side_validation && subscription_id.to_s.length < 0
        fail ArgumentError, 'invalid value for "subscription_id" when calling ManageSubscriptionApi.delete_subscription, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[a-z0-9-]{1,24}$/)
      if @api_client.config.client_side_validation && subscription_id !~ pattern
        fail ArgumentError, "invalid value for 'subscription_id' when calling ManageSubscriptionApi.delete_subscription, must conform to the pattern #{pattern}."
      end

      # resource path
      local_var_path = '/v2/webhook/subscription/{subscriptionId}'.sub('{' + 'subscriptionId' + '}', CGI.escape(subscription_id.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      header_params[:'Authorization'] = authorization

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'SubscriptionDeletionResponse'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"ManageSubscriptionApi.delete_subscription",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:DELETE, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ManageSubscriptionApi#delete_subscription\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Retrieve a list of subscriptions created by your application
    # Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
    # @param authorization [String] 
    # @param [Hash] opts the optional parameters
    # @return [Array<ListSubscriptionResponseSchema>]
    def list_subscriptions(authorization, opts = {})
      data, _status_code, _headers = list_subscriptions_with_http_info(authorization, opts)
      data
    end

    # Retrieve a list of subscriptions created by your application
    # Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
    # @param authorization [String] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(Array<ListSubscriptionResponseSchema>, Integer, Hash)>] Array<ListSubscriptionResponseSchema> data, response status code and response headers
    def list_subscriptions_with_http_info(authorization, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: ManageSubscriptionApi.list_subscriptions ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling ManageSubscriptionApi.list_subscriptions"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 5010
        fail ArgumentError, 'invalid value for "authorization" when calling ManageSubscriptionApi.list_subscriptions, the character length must be smaller than or equal to 5010.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling ManageSubscriptionApi.list_subscriptions, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,5010}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling ManageSubscriptionApi.list_subscriptions, must conform to the pattern #{pattern}."
      end

      # resource path
      local_var_path = '/v2/webhook/subscriptions'

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      header_params[:'Authorization'] = authorization

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body]

      # return_type
      return_type = opts[:debug_return_type] || 'Array<ListSubscriptionResponseSchema>'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"ManageSubscriptionApi.list_subscriptions",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ManageSubscriptionApi#list_subscriptions\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Update a specific subscription created by your application
    # Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
    # @param authorization [String] 
    # @param subscription_id [String] 
    # @param update_subscription_request_schema [UpdateSubscriptionRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [SubscriptionUpdateResponse]
    def update_subscription(authorization, subscription_id, update_subscription_request_schema, opts = {})
      data, _status_code, _headers = update_subscription_with_http_info(authorization, subscription_id, update_subscription_request_schema, opts)
      data
    end

    # Update a specific subscription created by your application
    # Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
    # @param authorization [String] 
    # @param subscription_id [String] 
    # @param update_subscription_request_schema [UpdateSubscriptionRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(SubscriptionUpdateResponse, Integer, Hash)>] SubscriptionUpdateResponse data, response status code and response headers
    def update_subscription_with_http_info(authorization, subscription_id, update_subscription_request_schema, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: ManageSubscriptionApi.update_subscription ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling ManageSubscriptionApi.update_subscription"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 5010
        fail ArgumentError, 'invalid value for "authorization" when calling ManageSubscriptionApi.update_subscription, the character length must be smaller than or equal to 5010.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling ManageSubscriptionApi.update_subscription, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,5010}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling ManageSubscriptionApi.update_subscription, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'subscription_id' is set
      if @api_client.config.client_side_validation && subscription_id.nil?
        fail ArgumentError, "Missing the required parameter 'subscription_id' when calling ManageSubscriptionApi.update_subscription"
      end
      if @api_client.config.client_side_validation && subscription_id.to_s.length > 24
        fail ArgumentError, 'invalid value for "subscription_id" when calling ManageSubscriptionApi.update_subscription, the character length must be smaller than or equal to 24.'
      end

      if @api_client.config.client_side_validation && subscription_id.to_s.length < 0
        fail ArgumentError, 'invalid value for "subscription_id" when calling ManageSubscriptionApi.update_subscription, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[a-z0-9-]{1,24}$/)
      if @api_client.config.client_side_validation && subscription_id !~ pattern
        fail ArgumentError, "invalid value for 'subscription_id' when calling ManageSubscriptionApi.update_subscription, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'update_subscription_request_schema' is set
      if @api_client.config.client_side_validation && update_subscription_request_schema.nil?
        fail ArgumentError, "Missing the required parameter 'update_subscription_request_schema' when calling ManageSubscriptionApi.update_subscription"
      end
      # resource path
      local_var_path = '/v2/webhook/subscription/{subscriptionId}'.sub('{' + 'subscriptionId' + '}', CGI.escape(subscription_id.to_s))

      # query parameters
      query_params = opts[:query_params] || {}

      # header parameters
      header_params = opts[:header_params] || {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])
      # HTTP header 'Content-Type'
      content_type = @api_client.select_header_content_type(['application/json'])
      if !content_type.nil?
          header_params['Content-Type'] = content_type
      end
      header_params[:'Authorization'] = authorization

      # form parameters
      form_params = opts[:form_params] || {}

      # http body (model)
      post_body = opts[:debug_body] || @api_client.object_to_http_body(update_subscription_request_schema)

      # return_type
      return_type = opts[:debug_return_type] || 'SubscriptionUpdateResponse'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"ManageSubscriptionApi.update_subscription",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:PATCH, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ManageSubscriptionApi#update_subscription\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
