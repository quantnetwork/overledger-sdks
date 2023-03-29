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
import org.openapitools.client.model.PrepareRequestDetails;
import org.openapitools.client.model.SmartContractTag;
import org.junit.Assert;
import org.junit.Ignore;
import org.junit.Test;


/**
 * Model tests for PrepareRequest
 */
public class PrepareRequestTest {
    private final PrepareRequest model = new PrepareRequest();

    /**
     * Model tests for PrepareRequest
     */
    @Test
    public void testPrepareRequest() {
        // TODO: test PrepareRequest
    }

    /**
     * Test the property 'apiLookupPath'
     */
    @Test
    public void apiLookupPathTest() {
        // TODO: test apiLookupPath
    }

    /**
     * Test the property 'smartContractTag'
     */
    @Test
    public void smartContractTagTest() {
        // TODO: test smartContractTag
    }

    /**
     * Test the property 'urgency'
     */
    @Test
    public void urgencyTest() {
        // TODO: test urgency
    }

    /**
     * Test the property 'requestDetails'
     */
    @Test
    public void requestDetailsTest() {
        // TODO: test requestDetails
    }

    /**
     * Test the property 'smartContractAddress'
     */
    @Test
    public void smartContractAddressTest() {
        // TODO: test smartContractAddress
    }

    /**
     * Test the property 'location'
     */
    @Test
    public void locationTest() {
        // TODO: test location
    }

    /**
     * Test the property 'type'
     */
    @Test
    public void typeTest() {
        // TODO: test type
    }

}
