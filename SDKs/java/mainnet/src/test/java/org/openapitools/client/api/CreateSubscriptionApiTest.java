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


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.CreateSubscriptionRequestSchema;
import org.openapitools.client.model.CreateSubscriptionResponseSchema;
import org.openapitools.client.model.ErrorList;
import org.openapitools.client.model.InternalServerErrorSchema;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for CreateSubscriptionApi
 */
@Ignore
public class CreateSubscriptionApiTest {

    private final CreateSubscriptionApi api = new CreateSubscriptionApi();

    
    /**
     * Create a subscription for a transaction or monitored resource 
     *
     * Creates a subscription to receive status updates for a transaction created in Overledger, or to receive updates each time a transaction happens on the requested DLT for a resource (e.g. address) being monitored, to the requested callback URL.  Subscriptions are created using an Overledger Transaction ID or Resource Monitoring ID
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void subscriptionTest() throws ApiException {
        String authorization = null;
        CreateSubscriptionRequestSchema createSubscriptionRequestSchema = null;
                List<CreateSubscriptionResponseSchema> response = api.subscription(authorization, createSubscriptionRequestSchema);
        // TODO: test validations
    }
    
}
