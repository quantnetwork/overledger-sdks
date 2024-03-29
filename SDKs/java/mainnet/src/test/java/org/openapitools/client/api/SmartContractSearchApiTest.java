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
import org.openapitools.client.model.AutoExecuteSearchAddressBalanceResponseSchema;
import org.openapitools.client.model.ErrorDetails;
import org.openapitools.client.model.ErrorList;
import org.openapitools.client.model.ExecuteSmartContractReadResponseSchema;
import org.openapitools.client.model.InternalServerErrorSchema;
import org.openapitools.client.model.PrepareSearchResponseSchema;
import org.openapitools.client.model.PrepareSearchSchema;
import org.openapitools.client.model.PrepareSearchSmartContractRequestSchema;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for SmartContractSearchApi
 */
@Ignore
public class SmartContractSearchApiTest {

    private final SmartContractSearchApi api = new SmartContractSearchApi();

    
    /**
     * Prepare and automatically execute a search for a smart contract query on a DLT.
     *
     * Generates a request ID and automatically executes the smart contract query search on the requested DLT.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void autoExecuteSearchSmartContractQueryRequestTest() throws ApiException {
        String authorization = null;
        PrepareSearchSchema prepareSearchSchema = null;
                AutoExecuteSearchAddressBalanceResponseSchema response = api.autoExecuteSearchSmartContractQueryRequest(authorization, prepareSearchSchema);
        // TODO: test validations
    }
    
    /**
     * Execute a read of a smart contract on a DLT
     *
     * Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void executePreparedSearchRequestTest() throws ApiException {
        String authorization = null;
        String requestId = null;
                ExecuteSmartContractReadResponseSchema response = api.executePreparedSearchRequest(authorization, requestId);
        // TODO: test validations
    }
    
    /**
     * Prepare a read of a smart contract on a DLT
     *
     * Returns a request ID for executing a smart contract read on Ethereum.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void prepareSmartContractQueryRequestTest() throws ApiException {
        String authorization = null;
        PrepareSearchSmartContractRequestSchema prepareSearchSmartContractRequestSchema = null;
                PrepareSearchResponseSchema response = api.prepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema);
        // TODO: test validations
    }
    
}
