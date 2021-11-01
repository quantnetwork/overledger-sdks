/*
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
 *
 * The version of the OpenAPI document: 2.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.Destination;
import org.openapitools.client.model.Fee;
import org.openapitools.client.model.Origin;
import org.openapitools.client.model.Payment;
import org.junit.Assert;
import org.junit.Ignore;
import org.junit.Test;


/**
 * Model tests for Transaction
 */
public class TransactionTest {
    private final Transaction model = new Transaction();

    /**
     * Model tests for Transaction
     */
    @Test
    public void testTransaction() {
        // TODO: test Transaction
    }

    /**
     * Test the property 'signature'
     */
    @Test
    public void signatureTest() {
        // TODO: test signature
    }

    /**
     * Test the property 'origin'
     */
    @Test
    public void originTest() {
        // TODO: test origin
    }

    /**
     * Test the property 'fee'
     */
    @Test
    public void feeTest() {
        // TODO: test fee
    }

    /**
     * Test the property 'destination'
     */
    @Test
    public void destinationTest() {
        // TODO: test destination
    }

    /**
     * Test the property 'signed'
     */
    @Test
    public void signedTest() {
        // TODO: test signed
    }

    /**
     * Test the property 'totalPaymentAmount'
     */
    @Test
    public void totalPaymentAmountTest() {
        // TODO: test totalPaymentAmount
    }

    /**
     * Test the property 'message'
     */
    @Test
    public void messageTest() {
        // TODO: test message
    }

    /**
     * Test the property 'transactionId'
     */
    @Test
    public void transactionIdTest() {
        // TODO: test transactionId
    }

    /**
     * Test the property 'encoded'
     */
    @Test
    public void encodedTest() {
        // TODO: test encoded
    }

    /**
     * Test the property 'nativeData'
     */
    @Test
    public void nativeDataTest() {
        // TODO: test nativeData
    }

    /**
     * Test the property 'extraFields'
     */
    @Test
    public void extraFieldsTest() {
        // TODO: test extraFields
    }

}