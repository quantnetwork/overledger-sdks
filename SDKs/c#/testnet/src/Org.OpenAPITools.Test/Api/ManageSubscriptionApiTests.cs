/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!- - ReDoc-Inject: <security-definitions> - ->
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Test
{
    /// <summary>
    ///  Class for testing ManageSubscriptionApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class ManageSubscriptionApiTests
    {
        private ManageSubscriptionApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new ManageSubscriptionApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of ManageSubscriptionApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' ManageSubscriptionApi
            //Assert.IsInstanceOf(typeof(ManageSubscriptionApi), instance);
        }

        
        /// <summary>
        /// Test DeleteSubscription
        /// </summary>
        [Test]
        public void DeleteSubscriptionTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string subscriptionId = null;
            //var response = instance.DeleteSubscription(authorization, subscriptionId);
            //Assert.IsInstanceOf(typeof(SubscriptionDeletionResponse), response, "response is SubscriptionDeletionResponse");
        }
        
        /// <summary>
        /// Test ListSubscriptions
        /// </summary>
        [Test]
        public void ListSubscriptionsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //var response = instance.ListSubscriptions(authorization);
            //Assert.IsInstanceOf(typeof(List<ListSubscriptionResponseSchema>), response, "response is List<ListSubscriptionResponseSchema>");
        }
        
        /// <summary>
        /// Test UpdateSubscription
        /// </summary>
        [Test]
        public void UpdateSubscriptionTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string subscriptionId = null;
            //UpdateSubscriptionRequestSchema updateSubscriptionRequestSchema = null;
            //var response = instance.UpdateSubscription(authorization, subscriptionId, updateSubscriptionRequestSchema);
            //Assert.IsInstanceOf(typeof(SubscriptionUpdateResponse), response, "response is SubscriptionUpdateResponse");
        }
        
    }

}
