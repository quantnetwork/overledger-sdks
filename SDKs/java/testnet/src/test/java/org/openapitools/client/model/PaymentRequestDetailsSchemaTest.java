/*
 * Quant Overledger API
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
import org.openapitools.client.model.DestinationPaymentSchema;
import org.openapitools.client.model.OriginPaymentSchema;
import org.junit.Assert;
import org.junit.Ignore;
import org.junit.Test;


/**
 * Model tests for PaymentRequestDetailsSchema
 */
public class PaymentRequestDetailsSchemaTest {
    private final PaymentRequestDetailsSchema model = new PaymentRequestDetailsSchema();

    /**
     * Model tests for PaymentRequestDetailsSchema
     */
    @Test
    public void testPaymentRequestDetailsSchema() {
        // TODO: test PaymentRequestDetailsSchema
    }

    /**
     * Test the property 'overledgerSigningType'
     */
    @Test
    public void overledgerSigningTypeTest() {
        // TODO: test overledgerSigningType
    }

    /**
     * Test the property 'origin'
     */
    @Test
    public void originTest() {
        // TODO: test origin
    }

    /**
     * Test the property 'destination'
     */
    @Test
    public void destinationTest() {
        // TODO: test destination
    }

    /**
     * Test the property 'message'
     */
    @Test
    public void messageTest() {
        // TODO: test message
    }

}
