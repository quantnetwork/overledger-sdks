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
    ///  Class for testing OverledgerTransactionResponseSchema
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class OverledgerTransactionResponseSchemaTests
    {
        // TODO uncomment below to declare an instance variable for OverledgerTransactionResponseSchema
        //private OverledgerTransactionResponseSchema instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of OverledgerTransactionResponseSchema
            //instance = new OverledgerTransactionResponseSchema();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of OverledgerTransactionResponseSchema
        /// </summary>
        [Test]
        public void OverledgerTransactionResponseSchemaInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOf" OverledgerTransactionResponseSchema
            //Assert.IsInstanceOf(typeof(OverledgerTransactionResponseSchema), instance);
        }


        /// <summary>
        /// Test the property 'ClientId'
        /// </summary>
        [Test]
        public void ClientIdTest()
        {
            // TODO unit test for the property 'ClientId'
        }
        /// <summary>
        /// Test the property 'RequestId'
        /// </summary>
        [Test]
        public void RequestIdTest()
        {
            // TODO unit test for the property 'RequestId'
        }
        /// <summary>
        /// Test the property 'OverledgerTransactionId'
        /// </summary>
        [Test]
        public void OverledgerTransactionIdTest()
        {
            // TODO unit test for the property 'OverledgerTransactionId'
        }
        /// <summary>
        /// Test the property 'Location'
        /// </summary>
        [Test]
        public void LocationTest()
        {
            // TODO unit test for the property 'Location'
        }
        /// <summary>
        /// Test the property 'TransactionHistory'
        /// </summary>
        [Test]
        public void TransactionHistoryTest()
        {
            // TODO unit test for the property 'TransactionHistory'
        }
        /// <summary>
        /// Test the property 'Type'
        /// </summary>
        [Test]
        public void TypeTest()
        {
            // TODO unit test for the property 'Type'
        }
        /// <summary>
        /// Test the property 'TransactionId'
        /// </summary>
        [Test]
        public void TransactionIdTest()
        {
            // TODO unit test for the property 'TransactionId'
        }
        /// <summary>
        /// Test the property 'Status'
        /// </summary>
        [Test]
        public void StatusTest()
        {
            // TODO unit test for the property 'Status'
        }

    }

}