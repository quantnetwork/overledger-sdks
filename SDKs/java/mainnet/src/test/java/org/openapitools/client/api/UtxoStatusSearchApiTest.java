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
import org.openapitools.client.model.AutoExecuteSearchUTXOResponseSchema;
import org.openapitools.client.model.ErrorDetails;
import org.openapitools.client.model.ErrorList;
import org.openapitools.client.model.ExecuteSearchUTXOResponseSchema;
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
 * API tests for UtxoStatusSearchApi
 */
@Ignore
public class UtxoStatusSearchApiTest {

    private final UtxoStatusSearchApi api = new UtxoStatusSearchApi();

    
    /**
     * Prepare and automatically execute a search for a UTXO on a DLT.
     *
     * Generates a request ID and automatically executes the utxo search on the requested DLT.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void autoExecuteSearchUtxoRequestTest() throws ApiException {
        String authorization = null;
        String utxoId = null;
        PrepareSearchSchema prepareSearchSchema = null;
                AutoExecuteSearchUTXOResponseSchema response = api.autoExecuteSearchUtxoRequest(authorization, utxoId, prepareSearchSchema);
        // TODO: test validations
    }
    
    /**
     * Execute a search for UTXO state on a DLT
     *
     * Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void executeUTXOPreparedSearchRequestTest() throws ApiException {
        String authorization = null;
        String requestId = null;
                ExecuteSearchUTXOResponseSchema response = api.executeUTXOPreparedSearchRequest(authorization, requestId);
        // TODO: test validations
    }
    
    /**
     * Prepare Search for a UTXO State.
     *
     * Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void prepareSearchUTXOStateTest() throws ApiException {
        String authorization = null;
        String utxoId = null;
        PrepareSearchSchema prepareSearchSchema = null;
                PrepareSearchResponseSchema response = api.prepareSearchUTXOState(authorization, utxoId, prepareSearchSchema);
        // TODO: test validations
    }
    
}
