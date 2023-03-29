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
    ///  Class for testing BlockSearchApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class BlockSearchApiTests
    {
        private BlockSearchApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new BlockSearchApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of BlockSearchApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' BlockSearchApi
            //Assert.IsInstanceOf(typeof(BlockSearchApi), instance);
        }

        
        /// <summary>
        /// Test AutoExecuteSearchBlockRequest
        /// </summary>
        [Test]
        public void AutoExecuteSearchBlockRequestTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string blockId = null;
            //PrepareSearchSchema prepareSearchSchema = null;
            //var response = instance.AutoExecuteSearchBlockRequest(authorization, blockId, prepareSearchSchema);
            //Assert.IsInstanceOf(typeof(AutoExecuteSearchBlockResponseSchema), response, "response is AutoExecuteSearchBlockResponseSchema");
        }
        
        /// <summary>
        /// Test ExecutePreparedSearchRequestBlock
        /// </summary>
        [Test]
        public void ExecutePreparedSearchRequestBlockTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string requestId = null;
            //var response = instance.ExecutePreparedSearchRequestBlock(authorization, requestId);
            //Assert.IsInstanceOf(typeof(ExecuteSearchBlockResponse), response, "response is ExecuteSearchBlockResponse");
        }
        
        /// <summary>
        /// Test PrepareSearchBlockByBlockId
        /// </summary>
        [Test]
        public void PrepareSearchBlockByBlockIdTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //string blockId = null;
            //PrepareSearchSchema prepareSearchSchema = null;
            //var response = instance.PrepareSearchBlockByBlockId(authorization, blockId, prepareSearchSchema);
            //Assert.IsInstanceOf(typeof(PrepareSearchResponseSchema), response, "response is PrepareSearchResponseSchema");
        }
        
    }

}
