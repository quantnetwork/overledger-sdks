=begin
#Quant Overledger API

#Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::ResourceMonitoringSubscriptionDetails
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe OpenapiClient::ResourceMonitoringSubscriptionDetails do
  let(:instance) { OpenapiClient::ResourceMonitoringSubscriptionDetails.new }

  describe 'test an instance of ResourceMonitoringSubscriptionDetails' do
    it 'should create an instance of ResourceMonitoringSubscriptionDetails' do
      expect(instance).to be_instance_of(OpenapiClient::ResourceMonitoringSubscriptionDetails)
    end
  end
  describe 'test attribute "ids"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "status"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
