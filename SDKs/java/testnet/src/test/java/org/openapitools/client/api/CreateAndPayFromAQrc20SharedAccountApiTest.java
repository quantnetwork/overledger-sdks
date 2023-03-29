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
import org.openapitools.client.model.ErrorDetails;
import org.openapitools.client.model.ErrorList;
import org.openapitools.client.model.ExecuteTransactionRequest;
import org.openapitools.client.model.ExecuteTransactionResponse;
import org.openapitools.client.model.InternalServerErrorSchema;
import org.openapitools.client.model.PrepareAddSecondaryAccountRequestSchema;
import org.openapitools.client.model.PrepareTransactionResponse;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for CreateAndPayFromAQrc20SharedAccountApi
 */
@Ignore
public class CreateAndPayFromAQrc20SharedAccountApiTest {

    private final CreateAndPayFromAQrc20SharedAccountApi api = new CreateAndPayFromAQrc20SharedAccountApi();

    
    /**
     * Execute a transaction on a DLT
     *
     * Takes a request ID and submits a signed transaction to the requested DLT.
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void executePreparedRequestTransactionTest() throws ApiException {
        String authorization = null;
        ExecuteTransactionRequest executeTransactionRequest = null;
                ExecuteTransactionResponse response = api.executePreparedRequestTransaction(authorization, executeTransactionRequest);
        // TODO: test validations
    }
    
    /**
     * Prepare a request for a QRC20 shared account
     *
     * Transforms a transaction request for a QRC20 shared account to be signed and returns a request ID for executing. The supported types for this API are “Add Account”, which will add someone as an operator of your account so that they can make payments on your behalf, \&quot;Remove Account\&quot; which will remove someone as an operator of your account so that they can no longer make payments on your behalf and “Create Credit” for account operators to make a QRC20 token payment on behalf of the account owner. Successfully prepared transactions can then be executed using the /execution/transaction API
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void prepareSecondaryOwnerRequestTest() throws ApiException {
        String authorization = null;
        PrepareAddSecondaryAccountRequestSchema prepareAddSecondaryAccountRequestSchema = null;
                PrepareTransactionResponse response = api.prepareSecondaryOwnerRequest(authorization, prepareAddSecondaryAccountRequestSchema);
        // TODO: test validations
    }
    
}