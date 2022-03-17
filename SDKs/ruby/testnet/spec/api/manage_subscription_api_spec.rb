=begin
#Quant Overledger API

#Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 5.3.0

=end

require 'spec_helper'
require 'json'

# Unit tests for OpenapiClient::ManageSubscriptionApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ManageSubscriptionApi' do
  before do
    # run before each test
    @api_instance = OpenapiClient::ManageSubscriptionApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ManageSubscriptionApi' do
    it 'should create an instance of ManageSubscriptionApi' do
      expect(@api_instance).to be_instance_of(OpenapiClient::ManageSubscriptionApi)
    end
  end

  # unit tests for delete_subscription
  # Remove a subscription created by your application
  # Deletes a subscription created by your application based onthe given Subscription ID. Deleting a subscription will stop updates being sent to the requested callback URL
  # @param authorization 
  # @param subscription_id 
  # @param [Hash] opts the optional parameters
  # @return [SubscriptionDeletionResponse]
  describe 'delete_subscription test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for list_subscriptions
  # Retrieve a list of subscriptions created by your application
  # Returns a list of active or paused subscriptions and the corresponding Subscription IDs that were created by your application
  # @param authorization 
  # @param [Hash] opts the optional parameters
  # @return [Array<ListSubscriptionResponseSchema>]
  describe 'list_subscriptions test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  # unit tests for update_subscription
  # Update a specific subscription created by your application
  # Updates the subscription callback URL and/or the subscription status to be either active or track only for the given Subscription ID. Updating the status to be track only will pause updates being sent to the requested callback URL
  # @param authorization 
  # @param subscription_id 
  # @param update_subscription_request_schema 
  # @param [Hash] opts the optional parameters
  # @return [SubscriptionUpdateResponse]
  describe 'update_subscription test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
