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
import PrepareMintTransactionRequestSchemaQrc20 from '../model/PrepareMintTransactionRequestSchemaQrc20';
import PrepareTransactionResponse from '../model/PrepareTransactionResponse';

/**
* ManageQRC20TokenSupply service.
* @module api/ManageQRC20TokenSupplyApi
* @version 2.0
*/
export default class ManageQRC20TokenSupplyApi {

    /**
    * Constructs a new ManageQRC20TokenSupplyApi. 
    * @alias module:api/ManageQRC20TokenSupplyApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the executePreparedRequestTransaction operation.
     * @callback module:api/ManageQRC20TokenSupplyApi~executePreparedRequestTransactionCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ExecuteTransactionResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Execute a transaction on a DLT
     * Takes a request ID and submits a signed transaction to the requested DLT.
     * @param {String} authorization 
     * @param {module:model/ExecuteTransactionRequest} executeTransactionRequest 
     * @param {module:api/ManageQRC20TokenSupplyApi~executePreparedRequestTransactionCallback} callback The callback function, accepting three arguments: error, data, response
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
     * Callback function to receive the result of the prepareSupplyRequest1 operation.
     * @callback module:api/ManageQRC20TokenSupplyApi~prepareSupplyRequest1Callback
     * @param {String} error Error message, if any.
     * @param {module:model/PrepareTransactionResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Prepare a request to manage QRC20 token supply
     * Transforms a transaction request to manage QRC20 token supply ready to be signed and returns a request ID for executing. The supported types for this API are “Mint Tokens”, which will allow you to issue more tokens for your QRC20 token, and \"Burn Tokens\" which will allow you to destroy your QRC20 tokens. Successfully prepared transactions can then be executed using the /execution/transaction API.
     * @param {String} authorization 
     * @param {module:model/PrepareMintTransactionRequestSchemaQrc20} prepareMintTransactionRequestSchemaQrc20 
     * @param {module:api/ManageQRC20TokenSupplyApi~prepareSupplyRequest1Callback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PrepareTransactionResponse}
     */
    prepareSupplyRequest1(authorization, prepareMintTransactionRequestSchemaQrc20, callback) {
      let postBody = prepareMintTransactionRequestSchemaQrc20;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling prepareSupplyRequest1");
      }
      // verify the required parameter 'prepareMintTransactionRequestSchemaQrc20' is set
      if (prepareMintTransactionRequestSchemaQrc20 === undefined || prepareMintTransactionRequestSchemaQrc20 === null) {
        throw new Error("Missing the required parameter 'prepareMintTransactionRequestSchemaQrc20' when calling prepareSupplyRequest1");
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
        '/v2/preparation/supply', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}