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
 * API tests for SubscribeToQrc20AccountDebitPaymentsApi
 */
@Ignore
public class SubscribeToQrc20AccountDebitPaymentsApiTest {

    private final SubscribeToQrc20AccountDebitPaymentsApi api = new SubscribeToQrc20AccountDebitPaymentsApi();

    
    /**
     * Receive updates each time there is a debit transaction on QRC20 token or a QRC20 debit is approved
     *
     * Set up a subscription to receive updates to a callback URL each time there is a debit on a QRC20 token or a QRC20 debit is approved. Use the type \&quot;Create Debit\&quot; to get an update when there is a debit payment on your account or \&quot;Approve Debit\&quot; to receive an update each time a token has been approved for debit.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void subscribeQRC20DebitEventTest() throws ApiException {
        String authorization = null;
        Object body = null;
                EventSubscriptionResponse response = api.subscribeQRC20DebitEvent(authorization, body);
        // TODO: test validations
    }
    
}
