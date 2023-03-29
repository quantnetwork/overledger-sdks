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
 * API tests for SubscribeToQrc721SupplyChangeUpdatesApi
 */
@Ignore
public class SubscribeToQrc721SupplyChangeUpdatesApiTest {

    private final SubscribeToQrc721SupplyChangeUpdatesApi api = new SubscribeToQrc721SupplyChangeUpdatesApi();

    
    /**
     * Receive updates each time a supply changes for a QRC721 or QRC20 token
     *
     * Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \&quot;Mint Tokens\&quot; to receive an update each time a new token is created, or use the type \&quot;Burn Tokens\&quot; to receive an update each time a token is destroyed.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void subscribeSupplyEventTest() throws ApiException {
        String authorization = null;
        String flowtype = null;
        Object body = null;
                EventSubscriptionResponse response = api.subscribeSupplyEvent(authorization, flowtype, body);
        // TODO: test validations
    }
    
}
