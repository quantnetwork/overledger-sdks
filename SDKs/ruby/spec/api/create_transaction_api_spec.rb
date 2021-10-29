=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::CreateTransactionApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'CreateTransactionApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::CreateTransactionApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of CreateTransactionApi' do
    it 'should create an instance of CreateTransactionApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::CreateTransactionApi)
    end
  end

  # unit tests for execute_prepared_request_native_transaction
  # Execute a native transaction on the DLT
  # Takes a request ID and submits a signed native transaction to the requested DLT
  # @param authorization 
  # @param execute_transaction_request 
  # @param [Hash] opts the optional parameters
  # @return [ExecuteTransactionResponse]
  describe 'execute_prepared_request_native_transaction test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for execute_prepared_request_transaction
  # Execute a transaction on the DLT
  # Takes a request ID and submits a signed transaction to the requested DLT.
  # @param authorization 
  # @param execute_transaction_request 
  # @param [Hash] opts the optional parameters
  # @return [ExecuteTransactionResponse]
  describe 'execute_prepared_request_transaction test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for prepare_native_transaction
  # Prepare a DLT native transaction
  # Allows advanced developers to submit their own DLT native transactions via Overledger. Returns a request ID for executing a DLT native transaction on the requested DLT
  # @param authorization 
  # @param prepare_native_transaction_request_schema 
  # @param [Hash] opts the optional parameters
  # @return [PrepareSearchResponseSchema]
  describe 'prepare_native_transaction test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for prepare_transaction_request
  # Prepare a DLT transaction for signing
  # Transforms a transaction request into a payload ready for signing for the requested DLT and returns a request ID for executing. Supported transaction types in this release are “Payment” (to send payments) and “Smart Contract Invoke” (to invoke arbitrary smart contract functions)
  # @param authorization 
  # @param unknown_base_type 
  # @param [Hash] opts the optional parameters
  # @return [PrepareTransactionResponse]
  describe 'prepare_transaction_request test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
