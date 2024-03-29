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
import org.openapitools.client.model.WebhookSubscriptionDetailsSchema;
import org.threeten.bp.OffsetDateTime;
import org.junit.Assert;
import org.junit.Ignore;
import org.junit.Test;


/**
 * Model tests for ListWebhookSubscriptionResponseSchema
 */
public class ListWebhookSubscriptionResponseSchemaTest {
    private final ListWebhookSubscriptionResponseSchema model = new ListWebhookSubscriptionResponseSchema();

    /**
     * Model tests for ListWebhookSubscriptionResponseSchema
     */
    @Test
    public void testListWebhookSubscriptionResponseSchema() {
        // TODO: test ListWebhookSubscriptionResponseSchema
    }

    /**
     * Test the property 'subscriptionDetails'
     */
    @Test
    public void subscriptionDetailsTest() {
        // TODO: test subscriptionDetails
    }

    /**
     * Test the property 'lastUpdatedTime'
     */
    @Test
    public void lastUpdatedTimeTest() {
        // TODO: test lastUpdatedTime
    }

    /**
     * Test the property 'callbackUrl'
     */
    @Test
    public void callbackUrlTest() {
        // TODO: test callbackUrl
    }

    /**
     * Test the property 'subscriptionId'
     */
    @Test
    public void subscriptionIdTest() {
        // TODO: test subscriptionId
    }

    /**
     * Test the property 'type'
     */
    @Test
    public void typeTest() {
        // TODO: test type
    }

    /**
     * Test the property 'subscribedTime'
     */
    @Test
    public void subscribedTimeTest() {
        // TODO: test subscribedTime
    }

}
