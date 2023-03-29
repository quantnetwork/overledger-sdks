=begin
#Quant Overledger API

#Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::PrepareBurnTransactionRequestSchemaQrc721
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::PrepareBurnTransactionRequestSchemaQrc721 do
  let(:instance) { OpenapiClient::PrepareBurnTransactionRequestSchemaQrc721.new }

  describe 'test an instance of PrepareBurnTransactionRequestSchemaQrc721' do
    it 'should create an instance of PrepareBurnTransactionRequestSchemaQrc721' do
      expect(instance).to be_instance_of(OpenapiClient::PrepareBurnTransactionRequestSchemaQrc721)
    end
  end
  describe 'test attribute "location"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "type"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["Payment", "Transfer", "Contract Invoke"])
      # validator.allowable_values.each do |value|
      #   expect { instance.type = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "urgency"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["Normal", "Fast", "Urgent"])
      # validator.allowable_values.each do |value|
      #   expect { instance.urgency = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "request_details"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
