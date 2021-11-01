=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'cgi'

module OpenapiClient
  class MDappTransactionQueryApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Retrieve information about a specific transaction created by your application in Overledger
    # Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
    # @param authorization [String] 
    # @param overledgertransactionid [String] 
    # @param [Hash] opts the optional parameters
    # @return [OverledgerTransactionResponseSchema]
    def get_ovl_transaction_by_tx_id(authorization, overledgertransactionid, opts = {})
      data, _status_code, _headers = get_ovl_transaction_by_tx_id_with_http_info(authorization, overledgertransactionid, opts)
      data
    end

    # Retrieve information about a specific transaction created by your application in Overledger
    # Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
    # @param authorization [String] 
    # @param overledgertransactionid [String] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(OverledgerTransactionResponseSchema, Integer, Hash)>] OverledgerTransactionResponseSchema data, response status code and response headers
    def get_ovl_transaction_by_tx_id_with_http_info(authorization, overledgertransactionid, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: MDappTransactionQueryApi.get_ovl_transaction_by_tx_id ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling MDappTransactionQueryApi.get_ovl_transaction_by_tx_id"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 4096
        fail ArgumentError, 'invalid value for "authorization" when calling MDappTransactionQueryApi.get_ovl_transaction_by_tx_id, the character length must be smaller than or equal to 4096.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling MDappTransactionQueryApi.get_ovl_transaction_by_tx_id, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,4096}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling MDappTransactionQueryApi.get_ovl_transaction_by_tx_id, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'overledgertransactionid' is set
      if @api_client.config.client_side_validation && overledgertransactionid.nil?
        fail ArgumentError, "Missing the required parameter 'overledgertransactionid' when calling MDappTransactionQueryApi.get_ovl_transaction_by_tx_id"
      end
      if @api_client.config.client_side_validation && overledgertransactionid.to_s.length > 36
        fail ArgumentError, 'invalid value for "overledgertransactionid" when calling MDappTransactionQueryApi.get_ovl_transaction_by_tx_id, the character length must be smaller than or equal to 36.'
      end

      if @api_client.config.client_side_validation && overledgertransactionid.to_s.length < 0
        fail ArgumentError, 'invalid value for "overledgertransactionid" when calling MDappTransactionQueryApi.get_ovl_transaction_by_tx_id, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^[a-zA-Z0-9\-]{1,36}$/)
      if @api_client.config.client_side_validation && overledgertransactionid !~ pattern
        fail ArgumentError, "invalid value for 'overledgertransactionid' when calling MDappTransactionQueryApi.get_ovl_transaction_by_tx_id, must conform to the pattern #{pattern}."
      end

      # resource path
      local_var_path = '/v2/mdapptransaction/{overledgertransactionid}'.sub('{' + 'overledgertransactionid' + '}', CGI.escape(overledgertransactionid.to_s))

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
      return_type = opts[:debug_return_type] || 'OverledgerTransactionResponseSchema'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"MDappTransactionQueryApi.get_ovl_transaction_by_tx_id",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: MDappTransactionQueryApi#get_ovl_transaction_by_tx_id\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Retrieve a list of transactions created by your application in Overledger
    # Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
    # @param authorization [String] 
    # @param [Hash] opts the optional parameters
    # @option opts [Integer] :offset  (default to 0)
    # @option opts [Integer] :length  (default to 25)
    # @return [Array<OverledgerTransactionResponseSchema>]
    def get_ovl_transactions_by_client_id(authorization, opts = {})
      data, _status_code, _headers = get_ovl_transactions_by_client_id_with_http_info(authorization, opts)
      data
    end

    # Retrieve a list of transactions created by your application in Overledger
    # Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
    # @param authorization [String] 
    # @param [Hash] opts the optional parameters
    # @option opts [Integer] :offset 
    # @option opts [Integer] :length 
    # @return [Array<(Array<OverledgerTransactionResponseSchema>, Integer, Hash)>] Array<OverledgerTransactionResponseSchema> data, response status code and response headers
    def get_ovl_transactions_by_client_id_with_http_info(authorization, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: MDappTransactionQueryApi.get_ovl_transactions_by_client_id ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling MDappTransactionQueryApi.get_ovl_transactions_by_client_id"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 4096
        fail ArgumentError, 'invalid value for "authorization" when calling MDappTransactionQueryApi.get_ovl_transactions_by_client_id, the character length must be smaller than or equal to 4096.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling MDappTransactionQueryApi.get_ovl_transactions_by_client_id, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,4096}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling MDappTransactionQueryApi.get_ovl_transactions_by_client_id, must conform to the pattern #{pattern}."
      end

      # resource path
      local_var_path = '/v2/mdapptransactions'

      # query parameters
      query_params = opts[:query_params] || {}
      query_params[:'offset'] = opts[:'offset'] if !opts[:'offset'].nil?
      query_params[:'length'] = opts[:'length'] if !opts[:'length'].nil?

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
      return_type = opts[:debug_return_type] || 'Array<OverledgerTransactionResponseSchema>'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"MDappTransactionQueryApi.get_ovl_transactions_by_client_id",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:GET, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: MDappTransactionQueryApi#get_ovl_transactions_by_client_id\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
