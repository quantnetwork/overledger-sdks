=begin
#Quant Overledger API

#Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::UTXOStatusSearchApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'UTXOStatusSearchApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::UTXOStatusSearchApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of UTXOStatusSearchApi' do
    it 'should create an instance of UTXOStatusSearchApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::UTXOStatusSearchApi)
    end
  end

  # unit tests for auto_execute_search_utxo_request
  # Prepare and automatically execute a search for a UTXO on a DLT.
  # Generates a request ID and automatically executes the utxo search on the requested DLT.
  # @param authorization 
  # @param utxo_id 
  # @param prepare_search_schema 
  # @param [Hash] opts the optional parameters
  # @return [AutoExecuteSearchUTXOResponseSchema]
  describe 'auto_execute_search_utxo_request test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for execute_utxo_prepared_search_request
  # Execute a search for UTXO state on a DLT
  # Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
  # @param authorization 
  # @param request_id 
  # @param [Hash] opts the optional parameters
  # @return [ExecuteSearchUTXOResponseSchema]
  describe 'execute_utxo_prepared_search_request test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for prepare_search_utxo_state
  # Prepare Search for a UTXO State.
  # Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT&#39;s
  # @param authorization 
  # @param utxo_id 
  # @param prepare_search_schema 
  # @param [Hash] opts the optional parameters
  # @return [PrepareSearchResponseSchema]
  describe 'prepare_search_utxo_state test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
