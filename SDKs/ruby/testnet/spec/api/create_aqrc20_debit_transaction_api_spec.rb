=begin
#Quant Overledger API

#Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::CreateAQRC20DebitTransactionApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'CreateAQRC20DebitTransactionApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::CreateAQRC20DebitTransactionApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of CreateAQRC20DebitTransactionApi' do
    it 'should create an instance of CreateAQRC20DebitTransactionApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::CreateAQRC20DebitTransactionApi)
    end
  end

  # unit tests for prepare_debit_request
  # Prepare a QRC20 token debit transaction for signing
  # Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are \&quot;Approve Debit\&quot; and \&quot;Create Debit\&quot;. The &#39;Approve Debit&#39; transaction type will allow you to approve someone to make a pull payment from your account and the \&quot;Create Debit\&quot; transaction type will create the payment to pull the approved amount from an account.
  # @param authorization 
  # @param prepare_credit_transaction_request_schema 
  # @param [Hash] opts the optional parameters
  # @return [PrepareTransactionResponse]
  describe 'prepare_debit_request test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
