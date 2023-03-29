=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::MDAppTransactionQueryApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'MDAppTransactionQueryApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::MDAppTransactionQueryApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of MDAppTransactionQueryApi' do
    it 'should create an instance of MDAppTransactionQueryApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::MDAppTransactionQueryApi)
    end
  end

  # unit tests for get_ovl_transaction_by_tx_id
  # Retrieve information about a specific transaction created by your application in Overledger
  # Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
  # @param authorization 
  # @param overledgertransactionid 
  # @param [Hash] opts the optional parameters
  # @return [OverledgerTransactionResponseSchema]
  describe 'get_ovl_transaction_by_tx_id test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for get_ovl_transactions_by_client_id
  # Retrieve a list of transactions created by your application in Overledger
  # Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
  # @param authorization 
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :offset 
  # @option opts [Integer] :length 
  # @return [Array<OverledgerTransactionResponseSchema>]
  describe 'get_ovl_transactions_by_client_id test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end