=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'cgi'

module OpenapiClient
  class RetrieveURIInformationForAQRC721TokenApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Retrieve the URI for a specific QRC721 token
    # Submits a query to the DLN and returns the URI that is assigned to a particular QRC721 token
    # @param authorization [String] 
    # @param read_approved_account_request_schema [ReadApprovedAccountRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [TokenReadQRC721Response]
    def read_qrc721_smart_contract_uri(authorization, read_approved_account_request_schema, opts = {})
      data, _status_code, _headers = read_qrc721_smart_contract_uri_with_http_info(authorization, read_approved_account_request_schema, opts)
      data
    end

    # Retrieve the URI for a specific QRC721 token
    # Submits a query to the DLN and returns the URI that is assigned to a particular QRC721 token
    # @param authorization [String] 
    # @param read_approved_account_request_schema [ReadApprovedAccountRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(TokenReadQRC721Response, Integer, Hash)>] TokenReadQRC721Response data, response status code and response headers
    def read_qrc721_smart_contract_uri_with_http_info(authorization, read_approved_account_request_schema, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: RetrieveURIInformationForAQRC721TokenApi.read_qrc721_smart_contract_uri ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling RetrieveURIInformationForAQRC721TokenApi.read_qrc721_smart_contract_uri"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 5010
        fail ArgumentError, 'invalid value for "authorization" when calling RetrieveURIInformationForAQRC721TokenApi.read_qrc721_smart_contract_uri, the character length must be smaller than or equal to 5010.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling RetrieveURIInformationForAQRC721TokenApi.read_qrc721_smart_contract_uri, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,5010}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling RetrieveURIInformationForAQRC721TokenApi.read_qrc721_smart_contract_uri, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'read_approved_account_request_schema' is set
      if @api_client.config.client_side_validation && read_approved_account_request_schema.nil?
        fail ArgumentError, "Missing the required parameter 'read_approved_account_request_schema' when calling RetrieveURIInformationForAQRC721TokenApi.read_qrc721_smart_contract_uri"
      end
      # resource path
      local_var_path = '/v2/tokenise/tokens/qrc721/token-uri'

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
      post_body = opts[:debug_body] || @api_client.object_to_http_body(read_approved_account_request_schema)

      # return_type
      return_type = opts[:debug_return_type] || 'TokenReadQRC721Response'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"RetrieveURIInformationForAQRC721TokenApi.read_qrc721_smart_contract_uri",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: RetrieveURIInformationForAQRC721TokenApi#read_qrc721_smart_contract_uri\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
