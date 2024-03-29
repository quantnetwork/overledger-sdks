=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::RetrieveSupplyInformationForAQRCTokenApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'RetrieveSupplyInformationForAQRCTokenApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::RetrieveSupplyInformationForAQRCTokenApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of RetrieveSupplyInformationForAQRCTokenApi' do
    it 'should create an instance of RetrieveSupplyInformationForAQRCTokenApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::RetrieveSupplyInformationForAQRCTokenApi)
    end
  end

  # unit tests for read_qrc721_smart_contract_current_supply
  # Retrieve how many QRC tokens are currently in supply
  # Submits a query to the Blockchain Network and returns the number of QRC tokens that are currently in circulation after tokens have been minted and burned.
  # @param authorization 
  # @param flow_type 
  # @param prepare_request 
  # @param [Hash] opts the optional parameters
  # @return [TokenReadQRC721Response]
  describe 'read_qrc721_smart_contract_current_supply test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
