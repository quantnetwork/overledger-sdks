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
import org.threeten.bp.OffsetDateTime;
import org.junit.Assert;
import org.junit.Ignore;
import org.junit.Test;


/**
 * Model tests for SmartContractEventHistory
 */
public class SmartContractEventHistoryTest {
    private final SmartContractEventHistory model = new SmartContractEventHistory();

    /**
     * Model tests for SmartContractEventHistory
     */
    @Test
    public void testSmartContractEventHistory() {
        // TODO: test SmartContractEventHistory
    }

    /**
     * Test the property 'eventId'
     */
    @Test
    public void eventIdTest() {
        // TODO: test eventId
    }

    /**
     * Test the property 'eventName'
     */
    @Test
    public void eventNameTest() {
        // TODO: test eventName
    }

    /**
     * Test the property 'eventParameters'
     */
    @Test
    public void eventParametersTest() {
        // TODO: test eventParameters
    }

    /**
     * Test the property 'transactionId'
     */
    @Test
    public void transactionIdTest() {
        // TODO: test transactionId
    }

    /**
     * Test the property 'timestamp'
     */
    @Test
    public void timestampTest() {
        // TODO: test timestamp
    }

}
