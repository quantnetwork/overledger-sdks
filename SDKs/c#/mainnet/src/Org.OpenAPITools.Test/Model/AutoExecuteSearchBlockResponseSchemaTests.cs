/*
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
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
    ///  Class for testing AutoExecuteSearchBlockResponseSchema
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class AutoExecuteSearchBlockResponseSchemaTests
    {
        // TODO uncomment below to declare an instance variable for AutoExecuteSearchBlockResponseSchema
        //private AutoExecuteSearchBlockResponseSchema instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of AutoExecuteSearchBlockResponseSchema
            //instance = new AutoExecuteSearchBlockResponseSchema();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of AutoExecuteSearchBlockResponseSchema
        /// </summary>
        [Test]
        public void AutoExecuteSearchBlockResponseSchemaInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOf" AutoExecuteSearchBlockResponseSchema
            //Assert.IsInstanceOf(typeof(AutoExecuteSearchBlockResponseSchema), instance);
        }


        /// <summary>
        /// Test the property 'PrepareAndExecuteOverledgerErrorResponse'
        /// </summary>
        [Test]
        public void PrepareAndExecuteOverledgerErrorResponseTest()
        {
            // TODO unit test for the property 'PrepareAndExecuteOverledgerErrorResponse'
        }
        /// <summary>
        /// Test the property 'ExecutionBlockSearchResponse'
        /// </summary>
        [Test]
        public void ExecutionBlockSearchResponseTest()
        {
            // TODO unit test for the property 'ExecutionBlockSearchResponse'
        }
        /// <summary>
        /// Test the property 'PreparationBlockSearchResponse'
        /// </summary>
        [Test]
        public void PreparationBlockSearchResponseTest()
        {
            // TODO unit test for the property 'PreparationBlockSearchResponse'
        }

    }

}
