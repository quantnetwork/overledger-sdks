/*
 * Quant Overledger API
 *
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!- - ReDoc-Inject: <security-definitions> - ->
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
    ///  Class for testing Transaction
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class TransactionTests
    {
        // TODO uncomment below to declare an instance variable for Transaction
        //private Transaction instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of Transaction
            //instance = new Transaction();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of Transaction
        /// </summary>
        [Test]
        public void TransactionInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOf" Transaction
            //Assert.IsInstanceOf(typeof(Transaction), instance);
        }


        /// <summary>
        /// Test the property 'Signature'
        /// </summary>
        [Test]
        public void SignatureTest()
        {
            // TODO unit test for the property 'Signature'
        }
        /// <summary>
        /// Test the property 'Origin'
        /// </summary>
        [Test]
        public void OriginTest()
        {
            // TODO unit test for the property 'Origin'
        }
        /// <summary>
        /// Test the property 'Fee'
        /// </summary>
        [Test]
        public void FeeTest()
        {
            // TODO unit test for the property 'Fee'
        }
        /// <summary>
        /// Test the property 'Destination'
        /// </summary>
        [Test]
        public void DestinationTest()
        {
            // TODO unit test for the property 'Destination'
        }
        /// <summary>
        /// Test the property 'Signed'
        /// </summary>
        [Test]
        public void SignedTest()
        {
            // TODO unit test for the property 'Signed'
        }
        /// <summary>
        /// Test the property 'TotalPaymentAmount'
        /// </summary>
        [Test]
        public void TotalPaymentAmountTest()
        {
            // TODO unit test for the property 'TotalPaymentAmount'
        }
        /// <summary>
        /// Test the property 'Message'
        /// </summary>
        [Test]
        public void MessageTest()
        {
            // TODO unit test for the property 'Message'
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
        /// Test the property 'Encoded'
        /// </summary>
        [Test]
        public void EncodedTest()
        {
            // TODO unit test for the property 'Encoded'
        }
        /// <summary>
        /// Test the property 'ExtraFields'
        /// </summary>
        [Test]
        public void ExtraFieldsTest()
        {
            // TODO unit test for the property 'ExtraFields'
        }
        /// <summary>
        /// Test the property 'NativeData'
        /// </summary>
        [Test]
        public void NativeDataTest()
        {
            // TODO unit test for the property 'NativeData'
        }

    }

}
