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
    ///  Class for testing AdditionalOwner
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class AdditionalOwnerTests
    {
        // TODO uncomment below to declare an instance variable for AdditionalOwner
        //private AdditionalOwner instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of AdditionalOwner
            //instance = new AdditionalOwner();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of AdditionalOwner
        /// </summary>
        [Test]
        public void AdditionalOwnerInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOf" AdditionalOwner
            //Assert.IsInstanceOf(typeof(AdditionalOwner), instance);
        }


        /// <summary>
        /// Test the property 'AccountId'
        /// </summary>
        [Test]
        public void AccountIdTest()
        {
            // TODO unit test for the property 'AccountId'
        }

    }

}
