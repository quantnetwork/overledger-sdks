/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!- - ReDoc-Inject: <security-definitions> - ->
 *
 * The version of the OpenAPI document: 2.0
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using NUnit.Framework;

using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Model;
using Org.OpenAPITools.Client;
using System.Reflection;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Test
{
    /// <summary>
    ///  Class for testing CreateSmartContractMonitoringSchema
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class CreateSmartContractMonitoringSchemaTests
    {
        // TODO uncomment below to declare an instance variable for CreateSmartContractMonitoringSchema
        //private CreateSmartContractMonitoringSchema instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of CreateSmartContractMonitoringSchema
            //instance = new CreateSmartContractMonitoringSchema();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of CreateSmartContractMonitoringSchema
        /// </summary>
        [Test]
        public void CreateSmartContractMonitoringSchemaInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOf" CreateSmartContractMonitoringSchema
            //Assert.IsInstanceOf(typeof(CreateSmartContractMonitoringSchema), instance);
        }


        /// <summary>
        /// Test the property 'SubscriptionDetails'
        /// </summary>
        [Test]
        public void SubscriptionDetailsTest()
        {
            // TODO unit test for the property 'SubscriptionDetails'
        }
        /// <summary>
        /// Test the property 'ResourceMonitoring'
        /// </summary>
        [Test]
        public void ResourceMonitoringTest()
        {
            // TODO unit test for the property 'ResourceMonitoring'
        }
        /// <summary>
        /// Test the property 'Subscription'
        /// </summary>
        [Test]
        public void SubscriptionTest()
        {
            // TODO unit test for the property 'Subscription'
        }

    }

}