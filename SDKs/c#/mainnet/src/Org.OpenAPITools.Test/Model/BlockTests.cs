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
    ///  Class for testing Block
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the model.
    /// </remarks>
    public class BlockTests
    {
        // TODO uncomment below to declare an instance variable for Block
        //private Block instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of Block
            //instance = new Block();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of Block
        /// </summary>
        [Test]
        public void BlockInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOf" Block
            //Assert.IsInstanceOf(typeof(Block), instance);
        }


        /// <summary>
        /// Test the property 'BlockId'
        /// </summary>
        [Test]
        public void BlockIdTest()
        {
            // TODO unit test for the property 'BlockId'
        }
        /// <summary>
        /// Test the property 'Number'
        /// </summary>
        [Test]
        public void NumberTest()
        {
            // TODO unit test for the property 'Number'
        }
        /// <summary>
        /// Test the property 'TransactionIds'
        /// </summary>
        [Test]
        public void TransactionIdsTest()
        {
            // TODO unit test for the property 'TransactionIds'
        }
        /// <summary>
        /// Test the property 'Size'
        /// </summary>
        [Test]
        public void SizeTest()
        {
            // TODO unit test for the property 'Size'
        }
        /// <summary>
        /// Test the property 'Hashes'
        /// </summary>
        [Test]
        public void HashesTest()
        {
            // TODO unit test for the property 'Hashes'
        }
        /// <summary>
        /// Test the property 'LinkedBlocks'
        /// </summary>
        [Test]
        public void LinkedBlocksTest()
        {
            // TODO unit test for the property 'LinkedBlocks'
        }
        /// <summary>
        /// Test the property 'NumberOfTransactions'
        /// </summary>
        [Test]
        public void NumberOfTransactionsTest()
        {
            // TODO unit test for the property 'NumberOfTransactions'
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
        /// Test the property 'Timestamp'
        /// </summary>
        [Test]
        public void TimestampTest()
        {
            // TODO unit test for the property 'Timestamp'
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
