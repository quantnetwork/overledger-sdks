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
    ///  Class for testing AddressSearchApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class AddressSearchApiTests
    {
        private AddressSearchApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new AddressSearchApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of AddressSearchApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' AddressSearchApi
            //Assert.IsInstanceOf(typeof(AddressSearchApi), instance);
        }

        
        /// <summary>
        /// Test AutoExecuteSearchAddressBalanceRequest
        /// </summary>
        [Test]
        public void AutoExecuteSearchAddressBalanceRequestTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string addressId = null;
            //PrepareSearchSchema prepareSearchSchema = null;
            //var response = instance.AutoExecuteSearchAddressBalanceRequest(authorization, addressId, prepareSearchSchema);
            //Assert.IsInstanceOf(typeof(AutoExecuteSearchAddressBalanceResponseSchema), response, "response is AutoExecuteSearchAddressBalanceResponseSchema");
        }
        
        /// <summary>
        /// Test ExecutePreparedSearchRequestAddressBalance
        /// </summary>
        [Test]
        public void ExecutePreparedSearchRequestAddressBalanceTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string requestId = null;
            //var response = instance.ExecutePreparedSearchRequestAddressBalance(authorization, requestId);
            //Assert.IsInstanceOf(typeof(ExecuteSearchBalanceResponse), response, "response is ExecuteSearchBalanceResponse");
        }
        
        /// <summary>
        /// Test ExecutePreparedSearchRequestAddressSequence
        /// </summary>
        [Test]
        public void ExecutePreparedSearchRequestAddressSequenceTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string requestId = null;
            //var response = instance.ExecutePreparedSearchRequestAddressSequence(authorization, requestId);
            //Assert.IsInstanceOf(typeof(ExecuteSearchSequenceResponse), response, "response is ExecuteSearchSequenceResponse");
        }
        
        /// <summary>
        /// Test PrepareAddressBalanceSearchRequest
        /// </summary>
        [Test]
        public void PrepareAddressBalanceSearchRequestTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string addressId = null;
            //PrepareSearchSchema prepareSearchSchema = null;
            //var response = instance.PrepareAddressBalanceSearchRequest(authorization, addressId, prepareSearchSchema);
            //Assert.IsInstanceOf(typeof(PrepareSearchResponseSchema), response, "response is PrepareSearchResponseSchema");
        }
        
        /// <summary>
        /// Test PrepareAddressSequenceSearchRequest
        /// </summary>
        [Test]
        public void PrepareAddressSequenceSearchRequestTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string addressId = null;
            //PrepareSearchSchema prepareSearchSchema = null;
            //var response = instance.PrepareAddressSequenceSearchRequest(authorization, addressId, prepareSearchSchema);
            //Assert.IsInstanceOf(typeof(PrepareSearchResponseSchema), response, "response is PrepareSearchResponseSchema");
        }
        
        /// <summary>
        /// Test PrepareAddressSequenceSearchRequest1
        /// </summary>
        [Test]
        public void PrepareAddressSequenceSearchRequest1Test()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string addressId = null;
            //PrepareSearchSchema prepareSearchSchema = null;
            //var response = instance.PrepareAddressSequenceSearchRequest1(authorization, addressId, prepareSearchSchema);
            //Assert.IsInstanceOf(typeof(AutoExecSearchAddressSequenceResponseSchema), response, "response is AutoExecSearchAddressSequenceResponseSchema");
        }
        
    }

}
