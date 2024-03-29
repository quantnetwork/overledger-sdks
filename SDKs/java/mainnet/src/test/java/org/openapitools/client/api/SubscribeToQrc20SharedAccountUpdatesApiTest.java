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


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.ErrorList;
import org.openapitools.client.model.ErrorResponseMessage;
import org.openapitools.client.model.EventSubscriptionResponse;
import org.openapitools.client.model.InternalServerErrorSchema;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for SubscribeToQrc20SharedAccountUpdatesApi
 */
@Ignore
public class SubscribeToQrc20SharedAccountUpdatesApiTest {

    private final SubscribeToQrc20SharedAccountUpdatesApi api = new SubscribeToQrc20SharedAccountUpdatesApi();

    
    /**
     * Receive updates for a shared account
     *
     * Set up a subscription to receive updates to a callback URL each time a secondary account owner is added or removed using the \&quot;Add Account\&quot; &amp; \&quot;Remove Account\&quot; Request Types. Also sends update when a shared account creates a QRC20 credit payment using the \&quot;Create Credit\&quot; Request Type.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void subscribeSecondaryOwnerEventTest() throws ApiException {
        String authorization = null;
        Object body = null;
                EventSubscriptionResponse response = api.subscribeSecondaryOwnerEvent(authorization, body);
        // TODO: test validations
    }
    
}
