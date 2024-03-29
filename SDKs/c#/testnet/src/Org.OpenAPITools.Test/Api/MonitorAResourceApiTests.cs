/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
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
    ///  Class for testing MonitorAResourceApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class MonitorAResourceApiTests
    {
        private MonitorAResourceApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new MonitorAResourceApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of MonitorAResourceApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' MonitorAResourceApi
            //Assert.IsInstanceOf(typeof(MonitorAResourceApi), instance);
        }

        
        /// <summary>
        /// Test ResourceMonitoringAddress
        /// </summary>
        [Test]
        public void ResourceMonitoringAddressTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //AddressMonitoringRequestSchema addressMonitoringRequestSchema = null;
            //var response = instance.ResourceMonitoringAddress(authorization, addressMonitoringRequestSchema);
            //Assert.IsInstanceOf(typeof(AddressMonitoringResponseSchema), response, "response is AddressMonitoringResponseSchema");
        }
        
        /// <summary>
        /// Test TrackAndSubscribeEvent
        /// </summary>
        [Test]
        public void TrackAndSubscribeEventTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //MonitorSmartContractRequestSchema monitorSmartContractRequestSchema = null;
            //var response = instance.TrackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema);
            //Assert.IsInstanceOf(typeof(CreateSmartContractMonitoringSchema), response, "response is CreateSmartContractMonitoringSchema");
        }
        
    }

}
