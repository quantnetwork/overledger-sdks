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
    ///  Class for testing CreateTransactionApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class CreateTransactionApiTests
    {
        private CreateTransactionApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new CreateTransactionApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of CreateTransactionApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' CreateTransactionApi
            //Assert.IsInstanceOf(typeof(CreateTransactionApi), instance);
        }

        
        /// <summary>
        /// Test ExecutePreparedRequestNativeTransaction
        /// </summary>
        [Test]
        public void ExecutePreparedRequestNativeTransactionTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //ExecuteTransactionRequest executeTransactionRequest = null;
            //var response = instance.ExecutePreparedRequestNativeTransaction(authorization, executeTransactionRequest);
            //Assert.IsInstanceOf(typeof(ExecuteTransactionResponse), response, "response is ExecuteTransactionResponse");
        }
        
        /// <summary>
        /// Test ExecutePreparedRequestTransaction
        /// </summary>
        [Test]
        public void ExecutePreparedRequestTransactionTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //ExecuteTransactionRequest executeTransactionRequest = null;
            //var response = instance.ExecutePreparedRequestTransaction(authorization, executeTransactionRequest);
            //Assert.IsInstanceOf(typeof(ExecuteTransactionResponse), response, "response is ExecuteTransactionResponse");
        }
        
        /// <summary>
        /// Test PrepareNativeTransaction
        /// </summary>
        [Test]
        public void PrepareNativeTransactionTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //PrepareNativeTransactionRequestSchema prepareNativeTransactionRequestSchema = null;
            //var response = instance.PrepareNativeTransaction(authorization, prepareNativeTransactionRequestSchema);
            //Assert.IsInstanceOf(typeof(PrepareSearchResponseSchema), response, "response is PrepareSearchResponseSchema");
        }
        
        /// <summary>
        /// Test PrepareTransactionRequest
        /// </summary>
        [Test]
        public void PrepareTransactionRequestTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string authorization = null;
            //UNKNOWN_BASE_TYPE UNKNOWN_BASE_TYPE = null;
            //var response = instance.PrepareTransactionRequest(authorization, UNKNOWN_BASE_TYPE);
            //Assert.IsInstanceOf(typeof(PrepareTransactionResponse), response, "response is PrepareTransactionResponse");
        }
        
    }

}