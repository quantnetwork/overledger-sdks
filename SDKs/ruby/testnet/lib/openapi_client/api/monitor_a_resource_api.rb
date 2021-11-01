=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'cgi'

module OpenapiClient
  class MonitorAResourceApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Monitor an address for incoming and outgoing transactions
    # Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT
    # @param authorization [String] 
    # @param address_monitoring_request_schema [AddressMonitoringRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [AddressMonitoringResponseSchema]
    def resource_monitoring_address(authorization, address_monitoring_request_schema, opts = {})
      data, _status_code, _headers = resource_monitoring_address_with_http_info(authorization, address_monitoring_request_schema, opts)
      data
    end

    # Monitor an address for incoming and outgoing transactions
    # Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT
    # @param authorization [String] 
    # @param address_monitoring_request_schema [AddressMonitoringRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(AddressMonitoringResponseSchema, Integer, Hash)>] AddressMonitoringResponseSchema data, response status code and response headers
    def resource_monitoring_address_with_http_info(authorization, address_monitoring_request_schema, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: MonitorAResourceApi.resource_monitoring_address ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling MonitorAResourceApi.resource_monitoring_address"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 1024
        fail ArgumentError, 'invalid value for "authorization" when calling MonitorAResourceApi.resource_monitoring_address, the character length must be smaller than or equal to 1024.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling MonitorAResourceApi.resource_monitoring_address, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,1024}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling MonitorAResourceApi.resource_monitoring_address, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'address_monitoring_request_schema' is set
      if @api_client.config.client_side_validation && address_monitoring_request_schema.nil?
        fail ArgumentError, "Missing the required parameter 'address_monitoring_request_schema' when calling MonitorAResourceApi.resource_monitoring_address"
      end
      # resource path
      local_var_path = '/v2/resourcemonitoring/address'

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
      post_body = opts[:debug_body] || @api_client.object_to_http_body(address_monitoring_request_schema)

      # return_type
      return_type = opts[:debug_return_type] || 'AddressMonitoringResponseSchema'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"MonitorAResourceApi.resource_monitoring_address",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: MonitorAResourceApi#resource_monitoring_address\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # Monitor a smart contract for an event
    # Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event
    # @param authorization [String] 
    # @param monitor_smart_contract_request_schema [MonitorSmartContractRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [CreateSmartContractMonitoringSchema]
    def track_and_subscribe_event(authorization, monitor_smart_contract_request_schema, opts = {})
      data, _status_code, _headers = track_and_subscribe_event_with_http_info(authorization, monitor_smart_contract_request_schema, opts)
      data
    end

    # Monitor a smart contract for an event
    # Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event
    # @param authorization [String] 
    # @param monitor_smart_contract_request_schema [MonitorSmartContractRequestSchema] 
    # @param [Hash] opts the optional parameters
    # @return [Array<(CreateSmartContractMonitoringSchema, Integer, Hash)>] CreateSmartContractMonitoringSchema data, response status code and response headers
    def track_and_subscribe_event_with_http_info(authorization, monitor_smart_contract_request_schema, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: MonitorAResourceApi.track_and_subscribe_event ...'
      end
      # verify the required parameter 'authorization' is set
      if @api_client.config.client_side_validation && authorization.nil?
        fail ArgumentError, "Missing the required parameter 'authorization' when calling MonitorAResourceApi.track_and_subscribe_event"
      end
      if @api_client.config.client_side_validation && authorization.to_s.length > 1024
        fail ArgumentError, 'invalid value for "authorization" when calling MonitorAResourceApi.track_and_subscribe_event, the character length must be smaller than or equal to 1024.'
      end

      if @api_client.config.client_side_validation && authorization.to_s.length < 0
        fail ArgumentError, 'invalid value for "authorization" when calling MonitorAResourceApi.track_and_subscribe_event, the character length must be great than or equal to 0.'
      end

      pattern = Regexp.new(/^Bearer [A-Za-z0-9\-_. ]{1,1024}$/)
      if @api_client.config.client_side_validation && authorization !~ pattern
        fail ArgumentError, "invalid value for 'authorization' when calling MonitorAResourceApi.track_and_subscribe_event, must conform to the pattern #{pattern}."
      end

      # verify the required parameter 'monitor_smart_contract_request_schema' is set
      if @api_client.config.client_side_validation && monitor_smart_contract_request_schema.nil?
        fail ArgumentError, "Missing the required parameter 'monitor_smart_contract_request_schema' when calling MonitorAResourceApi.track_and_subscribe_event"
      end
      # resource path
      local_var_path = '/v2/resourcemonitoring/smartcontractevent'

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
      post_body = opts[:debug_body] || @api_client.object_to_http_body(monitor_smart_contract_request_schema)

      # return_type
      return_type = opts[:debug_return_type] || 'CreateSmartContractMonitoringSchema'

      # auth_names
      auth_names = opts[:debug_auth_names] || ['OAuth2_Security_Scheme']

      new_options = opts.merge(
        :operation => :"MonitorAResourceApi.track_and_subscribe_event",
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => return_type
      )

      data, status_code, headers = @api_client.call_api(:POST, local_var_path, new_options)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: MonitorAResourceApi#track_and_subscribe_event\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end