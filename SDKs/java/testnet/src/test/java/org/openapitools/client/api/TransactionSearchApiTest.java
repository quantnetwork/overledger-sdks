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


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.openapitools.client.model.ErrorDetails;
import org.openapitools.client.model.ErrorList;
import org.openapitools.client.model.ExecuteSearchTransactionResponse;
import org.openapitools.client.model.InternalServerErrorSchema;
import org.openapitools.client.model.PrepareSearchResponseSchema;
import org.openapitools.client.model.PrepareSearchSchema;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for TransactionSearchApi
 */
@Ignore
public class TransactionSearchApiTest {

    private final TransactionSearchApi api = new TransactionSearchApi();

    
    /**
     * Execute a search for a transaction on a DLT
     *
     * Takes a request ID and searches for the transaction on the requested DLT
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void executePreparedSearchRequestTransactionTest() throws ApiException {
        String authorization = null;
        String requestId = null;
                ExecuteSearchTransactionResponse response = api.executePreparedSearchRequestTransaction(authorization, requestId);
        // TODO: test validations
    }
    
    /**
     * Prepare a search for a transaction on a DLT
     *
     * Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void prepareSearchRequestTest() throws ApiException {
        String authorization = null;
        String transactionId = null;
        PrepareSearchSchema prepareSearchSchema = null;
                PrepareSearchResponseSchema response = api.prepareSearchRequest(authorization, transactionId, prepareSearchSchema);
        // TODO: test validations
    }
    
}