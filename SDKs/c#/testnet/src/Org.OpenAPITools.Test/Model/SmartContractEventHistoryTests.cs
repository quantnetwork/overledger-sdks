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
    ///  Class for testing SmartContractEventHistory
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class SmartContractEventHistoryTests
    {
        // TODO uncomment below to declare an instance variable for SmartContractEventHistory
        //private SmartContractEventHistory instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of SmartContractEventHistory
            //instance = new SmartContractEventHistory();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of SmartContractEventHistory
        /// </summary>
        [Test]
        public void SmartContractEventHistoryInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOf" SmartContractEventHistory
            //Assert.IsInstanceOf(typeof(SmartContractEventHistory), instance);
        }


        /// <summary>
        /// Test the property 'EventId'
        /// </summary>
        [Test]
        public void EventIdTest()
        {
            // TODO unit test for the property 'EventId'
        }
        /// <summary>
        /// Test the property 'EventName'
        /// </summary>
        [Test]
        public void EventNameTest()
        {
            // TODO unit test for the property 'EventName'
        }
        /// <summary>
        /// Test the property 'EventParameters'
        /// </summary>
        [Test]
        public void EventParametersTest()
        {
            // TODO unit test for the property 'EventParameters'
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
        /// Test the property 'Timestamp'
        /// </summary>
        [Test]
        public void TimestampTest()
        {
            // TODO unit test for the property 'Timestamp'
        }

    }

}