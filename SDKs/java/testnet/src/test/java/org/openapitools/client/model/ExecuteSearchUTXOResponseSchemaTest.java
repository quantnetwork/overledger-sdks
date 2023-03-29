/*
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
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
import org.openapitools.client.model.Location;
import org.openapitools.client.model.Status;
import org.openapitools.client.model.UTXODestination;
import org.openapitools.client.model.UTXONativeData;
import org.junit.Assert;
import org.junit.Ignore;
import org.junit.Test;


/**
 * Model tests for ExecuteSearchUTXOResponseSchema
 */
public class ExecuteSearchUTXOResponseSchemaTest {
    private final ExecuteSearchUTXOResponseSchema model = new ExecuteSearchUTXOResponseSchema();

    /**
     * Model tests for ExecuteSearchUTXOResponseSchema
     */
    @Test
    public void testExecuteSearchUTXOResponseSchema() {
        // TODO: test ExecuteSearchUTXOResponseSchema
    }

    /**
     * Test the property 'utxoId'
     */
    @Test
    public void utxoIdTest() {
        // TODO: test utxoId
    }

    /**
     * Test the property 'destination'
     */
    @Test
    public void destinationTest() {
        // TODO: test destination
    }

    /**
     * Test the property 'location'
     */
    @Test
    public void locationTest() {
        // TODO: test location
    }

    /**
     * Test the property 'timestamp'
     */
    @Test
    public void timestampTest() {
        // TODO: test timestamp
    }

    /**
     * Test the property 'status'
     */
    @Test
    public void statusTest() {
        // TODO: test status
    }

    /**
     * Test the property 'nativeData'
     */
    @Test
    public void nativeDataTest() {
        // TODO: test nativeData
    }

}
