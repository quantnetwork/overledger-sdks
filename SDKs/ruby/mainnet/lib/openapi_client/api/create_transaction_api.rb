=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'cgi'

module OpenapiClient
  class CreateTransactionApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Execute a native transaction on the DLT
    # Takes a request ID and submits a signed native transaction to the requested DLT
    # @param authorization [String] 
    # @param execute_transaction_request [ExecuteTransactionRequest] 
    # @param [Hash] opts the optional parameters
    # @return [ExecuteTransactionResponse]
    def execute_prepared_request_native_transaction(authorization, execute_transaction_request, opts = {})
      data, _status_code, _headers = execute_prepared_request_native_transaction_with_http_info(authorization, execute_transaction_request, opts)
      data
    end

    # Execute a native transaction on the DLT
    # Takes a request ID and submits a signed native transaction to the requested DLT
    # @param authorization [String] 
    # @param execute_transaction_request [ExecuteTransactionRequest] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ExecuteTransactionResponse, Integer, Hash)>] ExecuteTransactionResponse data, response status code and response headers
    def execute_prepared_request_native_transaction_with_http_info(authorization, execute_transaction_request, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: CreateTransactionApi.execute_prepared_request_native_transaction ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling CreateTransactionApi.execute_prepared_request_native_transaction"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 4096
        fail ArgumentError, 'invalid value for "authorization" when calling CreateTransactionApi.execute_prepared_request_native_transaction, the character length must be smaller than or equal to 4096.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling CreateTransactionApi.execute_prepared_request_native_transaction, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,4096}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling CreateTransactionApi.execute_prepared_request_native_transaction, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'execute_transaction_request' is set
      if @api_client.config.client_side_validation && execute_transaction_request.nil?
        fail ArgumentError, "Missing the required parameter 'execute_transaction_request' when calling CreateTransactionApi.execute_prepared_request_native_transaction"
      end
      # resource path
      local_var_path = '/v2/execution/nativetransaction'

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
      post_body = opts[:debug_body] || @api_client.object_to_http_body(execute_transaction_request)

      # return_type
      return_type = opts[:debug_return_type] || 'ExecuteTransactionResponse'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"CreateTransactionApi.execute_prepared_request_native_transaction",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: CreateTransactionApi#execute_prepared_request_native_transaction\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Execute a transaction on the DLT
    # Takes a request ID and submits a signed transaction to the requested DLT.
    # @param authorization [String] 
    # @param execute_transaction_request [ExecuteTransactionRequest] 
    # @param [Hash] opts the optional parameters
    # @return [ExecuteTransactionResponse]
    def execute_prepared_request_transaction(authorization, execute_transaction_request, opts = {})
      data, _status_code, _headers = execute_prepared_request_transaction_with_http_info(authorization, execute_transaction_request, opts)
      data
    end

    # Execute a transaction on the DLT
    # Takes a request ID and submits a signed transaction to the requested DLT.
    # @param authorization [String] 
    # @param execute_transaction_request [ExecuteTransactionRequest] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(ExecuteTransactionResponse, Integer, Hash)>] ExecuteTransactionResponse data, response status code and response headers
    def execute_prepared_request_transaction_with_http_info(authorization, execute_transaction_request, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: CreateTransactionApi.execute_prepared_request_transaction ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling CreateTransactionApi.execute_prepared_request_transaction"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 4096
        fail ArgumentError, 'invalid value for "authorization" when calling CreateTransactionApi.execute_prepared_request_transaction, the character length must be smaller than or equal to 4096.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling CreateTransactionApi.execute_prepared_request_transaction, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,4096}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling CreateTransactionApi.execute_prepared_request_transaction, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'execute_transaction_request' is set
      if @api_client.config.client_side_validation && execute_transaction_request.nil?
        fail ArgumentError, "Missing the required parameter 'execute_transaction_request' when calling CreateTransactionApi.execute_prepared_request_transaction"
      end
      # resource path
      local_var_path = '/v2/execution/transaction'

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
      post_body = opts[:debug_body] || @api_client.object_to_http_body(execute_transaction_request)

      # return_type
      return_type = opts[:debug_return_type] || 'ExecuteTransactionResponse'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"CreateTransactionApi.execute_prepared_request_transaction",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: CreateTransactionApi#execute_prepared_request_transaction\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Prepare a DLT native transaction
    # Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
    # @param authorization [String] 
    # @param prepare_native_transaction_request_schema [PrepareNativeTransactionRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [PrepareSearchResponseSchema]
    def prepare_native_transaction(authorization, prepare_native_transaction_request_schema, opts = {})
      data, _status_code, _headers = prepare_native_transaction_with_http_info(authorization, prepare_native_transaction_request_schema, opts)
      data
    end

    # Prepare a DLT native transaction
    # Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
    # @param authorization [String] 
    # @param prepare_native_transaction_request_schema [PrepareNativeTransactionRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(PrepareSearchResponseSchema, Integer, Hash)>] PrepareSearchResponseSchema data, response status code and response headers
    def prepare_native_transaction_with_http_info(authorization, prepare_native_transaction_request_schema, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: CreateTransactionApi.prepare_native_transaction ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling CreateTransactionApi.prepare_native_transaction"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 4096
        fail ArgumentError, 'invalid value for "authorization" when calling CreateTransactionApi.prepare_native_transaction, the character length must be smaller than or equal to 4096.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling CreateTransactionApi.prepare_native_transaction, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,4096}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling CreateTransactionApi.prepare_native_transaction, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'prepare_native_transaction_request_schema' is set
      if @api_client.config.client_side_validation && prepare_native_transaction_request_schema.nil?
        fail ArgumentError, "Missing the required parameter 'prepare_native_transaction_request_schema' when calling CreateTransactionApi.prepare_native_transaction"
      end
      # resource path
      local_var_path = '/v2/preparation/nativetransaction'

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
      post_body = opts[:debug_body] || @api_client.object_to_http_body(prepare_native_transaction_request_schema)

      # return_type
      return_type = opts[:debug_return_type] || 'PrepareSearchResponseSchema'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"CreateTransactionApi.prepare_native_transaction",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: CreateTransactionApi#prepare_native_transaction\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Prepare a DLT transaction for signing
    # Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)
    # @param authorization [String] 
    # @param prepare_payment_transaction_request_schema [PreparePaymentTransactionRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [PrepareTransactionResponse]
    def prepare_transaction_request(authorization, prepare_payment_transaction_request_schema, opts = {})
      data, _status_code, _headers = prepare_transaction_request_with_http_info(authorization, prepare_payment_transaction_request_schema, opts)
      data
    end

    # Prepare a DLT transaction for signing
    # Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)
    # @param authorization [String] 
    # @param prepare_payment_transaction_request_schema [PreparePaymentTransactionRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(PrepareTransactionResponse, Integer, Hash)>] PrepareTransactionResponse data, response status code and response headers
    def prepare_transaction_request_with_http_info(authorization, prepare_payment_transaction_request_schema, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: CreateTransactionApi.prepare_transaction_request ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling CreateTransactionApi.prepare_transaction_request"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 4096
        fail ArgumentError, 'invalid value for "authorization" when calling CreateTransactionApi.prepare_transaction_request, the character length must be smaller than or equal to 4096.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling CreateTransactionApi.prepare_transaction_request, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,4096}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling CreateTransactionApi.prepare_transaction_request, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'prepare_payment_transaction_request_schema' is set
      if @api_client.config.client_side_validation && prepare_payment_transaction_request_schema.nil?
        fail ArgumentError, "Missing the required parameter 'prepare_payment_transaction_request_schema' when calling CreateTransactionApi.prepare_transaction_request"
      end
      # resource path
      local_var_path = '/v2/preparation/transaction'

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
      post_body = opts[:debug_body] || @api_client.object_to_http_body(prepare_payment_transaction_request_schema)

      # return_type
      return_type = opts[:debug_return_type] || 'PrepareTransactionResponse'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"CreateTransactionApi.prepare_transaction_request",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: CreateTransactionApi#prepare_transaction_request\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
