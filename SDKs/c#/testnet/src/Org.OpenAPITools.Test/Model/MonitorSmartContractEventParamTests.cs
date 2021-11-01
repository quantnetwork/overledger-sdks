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
    ///  Class for testing MonitorSmartContractEventParam
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class MonitorSmartContractEventParamTests
    {
        // TODO uncomment below to declare an instance variable for MonitorSmartContractEventParam
        //private MonitorSmartContractEventParam instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of MonitorSmartContractEventParam
            //instance = new MonitorSmartContractEventParam();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of MonitorSmartContractEventParam
        /// </summary>
        [Test]
        public void MonitorSmartContractEventParamInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOf" MonitorSmartContractEventParam
            //Assert.IsInstanceOf(typeof(MonitorSmartContractEventParam), instance);
        }


        /// <summary>
        /// Test the property 'SelectedIntegerLength'
        /// </summary>
        [Test]
        public void SelectedIntegerLengthTest()
        {
            // TODO unit test for the property 'SelectedIntegerLength'
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
        /// Test the property 'Value'
        /// </summary>
        [Test]
        public void ValueTest()
        {
            // TODO unit test for the property 'Value'
        }

    }

}