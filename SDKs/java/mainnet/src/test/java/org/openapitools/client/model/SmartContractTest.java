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
import org.openapitools.client.model.Function;
import org.junit.Assert;
import org.junit.Ignore;
import org.junit.Test;


/**
 * Model tests for SmartContract
 */
public class SmartContractTest {
    private final SmartContract model = new SmartContract();

    /**
     * Model tests for SmartContract
     */
    @Test
    public void testSmartContract() {
        // TODO: test SmartContract
    }

    /**
     * Test the property 'function'
     */
    @Test
    public void functionTest() {
        // TODO: test function
    }

    /**
     * Test the property 'detail'
     */
    @Test
    public void detailTest() {
        // TODO: test detail
    }

    /**
     * Test the property 'type'
     */
    @Test
    public void typeTest() {
        // TODO: test type
    }

    /**
     * Test the property 'smartContractId'
     */
    @Test
    public void smartContractIdTest() {
        // TODO: test smartContractId
    }

    /**
     * Test the property 'extraFields'
     */
    @Test
    public void extraFieldsTest() {
        // TODO: test extraFields
    }

}