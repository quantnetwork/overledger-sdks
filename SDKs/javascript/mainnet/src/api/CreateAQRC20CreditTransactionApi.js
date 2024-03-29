/**
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */


import ApiClient from "../ApiClient";
import ErrorDetails from '../model/ErrorDetails';
import ErrorList from '../model/ErrorList';
import ExecuteTransactionRequest from '../model/ExecuteTransactionRequest';
import ExecuteTransactionResponse from '../model/ExecuteTransactionResponse';
import InternalServerErrorSchema from '../model/InternalServerErrorSchema';
import PrepareCreditTransactionRequestSchema from '../model/PrepareCreditTransactionRequestSchema';
import PrepareTransactionResponse from '../model/PrepareTransactionResponse';

/**
* CreateAQRC20CreditTransaction service.
* @module api/CreateAQRC20CreditTransactionApi
* @version 2.0
*/
export default class CreateAQRC20CreditTransactionApi {

    /**
    * Constructs a new CreateAQRC20CreditTransactionApi. 
    * @alias module:api/CreateAQRC20CreditTransactionApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the executePreparedRequestTransaction operation.
     * @callback module:api/CreateAQRC20CreditTransactionApi~executePreparedRequestTransactionCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ExecuteTransactionResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Execute a transaction on a DLT
     * Takes a request ID and submits a signed transaction to the requested DLT.
     * @param {String} authorization 
     * @param {module:model/ExecuteTransactionRequest} executeTransactionRequest 
     * @param {module:api/CreateAQRC20CreditTransactionApi~executePreparedRequestTransactionCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ExecuteTransactionResponse}
     */
    executePreparedRequestTransaction(authorization, executeTransactionRequest, callback) {
      let postBody = executeTransactionRequest;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling executePreparedRequestTransaction");
      }
      // verify the required parameter 'executeTransactionRequest' is set
      if (executeTransactionRequest === undefined || executeTransactionRequest === null) {
        throw new Error("Missing the required parameter 'executeTransactionRequest' when calling executePreparedRequestTransaction");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
        'Authorization': authorization
      };
      let formParams = {
      };

      let authNames = ['OAuth2_Security_Scheme'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = ExecuteTransactionResponse;
      return this.apiClient.callApi(
        '/v2/execution/transaction', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the prepareCreditRequest operation.
     * @callback module:api/CreateAQRC20CreditTransactionApi~prepareCreditRequestCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PrepareTransactionResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Prepare a QRC20 token credit transaction for signing
     * Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Credit” which will allow you to make a payment to another specified account.
     * @param {String} authorization 
     * @param {module:model/PrepareCreditTransactionRequestSchema} prepareCreditTransactionRequestSchema 
     * @param {module:api/CreateAQRC20CreditTransactionApi~prepareCreditRequestCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PrepareTransactionResponse}
     */
    prepareCreditRequest(authorization, prepareCreditTransactionRequestSchema, callback) {
      let postBody = prepareCreditTransactionRequestSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling prepareCreditRequest");
      }
      // verify the required parameter 'prepareCreditTransactionRequestSchema' is set
      if (prepareCreditTransactionRequestSchema === undefined || prepareCreditTransactionRequestSchema === null) {
        throw new Error("Missing the required parameter 'prepareCreditTransactionRequestSchema' when calling prepareCreditRequest");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
        'Authorization': authorization
      };
      let formParams = {
      };

      let authNames = ['OAuth2_Security_Scheme'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = PrepareTransactionResponse;
      return this.apiClient.callApi(
        '/v2/preparation/credit', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
