=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'RetrieveApprovedAccountAllowanceForAQRC20TokenApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of RetrieveApprovedAccountAllowanceForAQRC20TokenApi' do
    it 'should create an instance of RetrieveApprovedAccountAllowanceForAQRC20TokenApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi)
    end
  end

  # unit tests for read_approved_debit_amount
  # Retrieve how many QRC20 tokens an address is allowed to debit
  # Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account
  # @param authorization 
  # @param read_approved_account_allowance_request_schema 
  # @param [Hash] opts the optional parameters
  # @return [TokenReadQRC20Response]
  describe 'read_approved_debit_amount test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
