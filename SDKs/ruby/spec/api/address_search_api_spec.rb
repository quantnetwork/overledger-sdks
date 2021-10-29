=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::AddressSearchApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'AddressSearchApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::AddressSearchApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of AddressSearchApi' do
    it 'should create an instance of AddressSearchApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::AddressSearchApi)
    end
  end

  # unit tests for execute_prepared_search_request_address_balance
  # Execute a search for an address balance on a DLT
  # Takes a request ID, searches for the address and retrieves the balance on the requested DLT. This API is only applicable for account based DLTs
  # @param authorization 
  # @param request_id 
  # @param [Hash] opts the optional parameters
  # @return [ExecuteSearchBalanceResponse]
  describe 'execute_prepared_search_request_address_balance test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for execute_prepared_search_request_address_sequence
  # Execute a search for an address sequence on a DLT
  # Takes a request ID, searches for the address and retrieves the sequence on the requested DLT. This API is only applicable for account based DLT’s
  # @param authorization 
  # @param request_id 
  # @param [Hash] opts the optional parameters
  # @return [ExecuteSearchSequenceResponse]
  describe 'execute_prepared_search_request_address_sequence test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for prepare_address_balance_search_request
  # Prepare Search for an Address Balance.
  # Perform an address balance search on the requested DLT. Returns a request ID to execute
  # @param authorization 
  # @param address_id 
  # @param prepare_search_schema 
  # @param [Hash] opts the optional parameters
  # @return [PrepareSearchResponseSchema]
  describe 'prepare_address_balance_search_request test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for prepare_address_sequence_search_request
  # Prepare Search for an Address Sequence.
  # Perform an address sequence search on the requested DLT.Returns a request ID to execute
  # @param authorization 
  # @param address_id 
  # @param prepare_search_schema 
  # @param [Hash] opts the optional parameters
  # @return [PrepareSearchResponseSchema]
  describe 'prepare_address_sequence_search_request test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
