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
    ///  Class for testing ManageMonitoredResourcesApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class ManageMonitoredResourcesApiTests
    {
        private ManageMonitoredResourcesApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new ManageMonitoredResourcesApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of ManageMonitoredResourcesApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' ManageMonitoredResourcesApi
            //Assert.IsInstanceOf(typeof(ManageMonitoredResourcesApi), instance);
        }

        
        /// <summary>
        /// Test DeleteEventMonitoring
        /// </summary>
        [Test]
        public void DeleteEventMonitoringTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string resourceMonitoringId = null;
            //var response = instance.DeleteEventMonitoring(authorization, resourceMonitoringId);
            //Assert.IsInstanceOf(typeof(SmartContractMonitoringSchema), response, "response is SmartContractMonitoringSchema");
        }
        
        /// <summary>
        /// Test DeleteResourceMonitoringAddress
        /// </summary>
        [Test]
        public void DeleteResourceMonitoringAddressTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string resourceMonitoringId = null;
            //var response = instance.DeleteResourceMonitoringAddress(authorization, resourceMonitoringId);
            //Assert.IsInstanceOf(typeof(DeleteResourceMonitoringAddressSchema), response, "response is DeleteResourceMonitoringAddressSchema");
        }
        
        /// <summary>
        /// Test GetListOfAddresses
        /// </summary>
        [Test]
        public void GetListOfAddressesTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //var response = instance.GetListOfAddresses(authorization);
            //Assert.IsInstanceOf(typeof(List<ResourceMonitoringAddressSchema>), response, "response is List<ResourceMonitoringAddressSchema>");
        }
        
        /// <summary>
        /// Test GetListOfResources
        /// </summary>
        [Test]
        public void GetListOfResourcesTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //var response = instance.GetListOfResources(authorization);
            //Assert.IsInstanceOf(typeof(List<SmartContractMonitoringSchema>), response, "response is List<SmartContractMonitoringSchema>");
        }
        
        /// <summary>
        /// Test GetListOfSmartContractEvents
        /// </summary>
        [Test]
        public void GetListOfSmartContractEventsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //var response = instance.GetListOfSmartContractEvents(authorization);
            //Assert.IsInstanceOf(typeof(List<SmartContractMonitoringSchema>), response, "response is List<SmartContractMonitoringSchema>");
        }
        
        /// <summary>
        /// Test GetMonitoredAddress
        /// </summary>
        [Test]
        public void GetMonitoredAddressTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string resourceMonitoringId = null;
            //var response = instance.GetMonitoredAddress(authorization, resourceMonitoringId);
            //Assert.IsInstanceOf(typeof(AddressMonitoringDetailsSchema), response, "response is AddressMonitoringDetailsSchema");
        }
        
        /// <summary>
        /// Test GetMonitoredSmartContractEventDetails
        /// </summary>
        [Test]
        public void GetMonitoredSmartContractEventDetailsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string resourceMonitoringId = null;
            //var response = instance.GetMonitoredSmartContractEventDetails(authorization, resourceMonitoringId);
            //Assert.IsInstanceOf(typeof(SmartContractMonitoringDetailsSchema), response, "response is SmartContractMonitoringDetailsSchema");
        }
        
        /// <summary>
        /// Test UpdateEventMonitoring
        /// </summary>
        [Test]
        public void UpdateEventMonitoringTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string resourceMonitoringId = null;
            //StatusUpdateMonitoringRequestSchema statusUpdateMonitoringRequestSchema = null;
            //var response = instance.UpdateEventMonitoring(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema);
            //Assert.IsInstanceOf(typeof(SmartContractMonitoringSchema), response, "response is SmartContractMonitoringSchema");
        }
        
        /// <summary>
        /// Test UpdateResourceMonitoringAddress
        /// </summary>
        [Test]
        public void UpdateResourceMonitoringAddressTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string resourceMonitoringId = null;
            //StatusUpdateMonitoringRequestSchema statusUpdateMonitoringRequestSchema = null;
            //var response = instance.UpdateResourceMonitoringAddress(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema);
            //Assert.IsInstanceOf(typeof(UpdateAddressMonitoringSchema), response, "response is UpdateAddressMonitoringSchema");
        }
        
    }

}
