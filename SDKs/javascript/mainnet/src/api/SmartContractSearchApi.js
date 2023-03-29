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
import AutoExecuteSearchAddressBalanceResponseSchema from '../model/AutoExecuteSearchAddressBalanceResponseSchema';
import ErrorDetails from '../model/ErrorDetails';
import ErrorList from '../model/ErrorList';
import ExecuteSmartContractReadResponseSchema from '../model/ExecuteSmartContractReadResponseSchema';
import InternalServerErrorSchema from '../model/InternalServerErrorSchema';
import PrepareSearchResponseSchema from '../model/PrepareSearchResponseSchema';
import PrepareSearchSchema from '../model/PrepareSearchSchema';
import PrepareSearchSmartContractRequestSchema from '../model/PrepareSearchSmartContractRequestSchema';

/**
* SmartContractSearch service.
* @module api/SmartContractSearchApi
* @version 2.0
*/
export default class SmartContractSearchApi {

    /**
    * Constructs a new SmartContractSearchApi. 
    * @alias module:api/SmartContractSearchApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the autoExecuteSearchSmartContractQueryRequest operation.
     * @callback module:api/SmartContractSearchApi~autoExecuteSearchSmartContractQueryRequestCallback
     * @param {String} error Error message, if any.
     * @param {module:model/AutoExecuteSearchAddressBalanceResponseSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Prepare and automatically execute a search for a smart contract query on a DLT.
     * Generates a request ID and automatically executes the smart contract query search on the requested DLT.
     * @param {String} authorization 
     * @param {module:model/PrepareSearchSchema} prepareSearchSchema 
     * @param {module:api/SmartContractSearchApi~autoExecuteSearchSmartContractQueryRequestCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/AutoExecuteSearchAddressBalanceResponseSchema}
     */
    autoExecuteSearchSmartContractQueryRequest(authorization, prepareSearchSchema, callback) {
      let postBody = prepareSearchSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling autoExecuteSearchSmartContractQueryRequest");
      }
      // verify the required parameter 'prepareSearchSchema' is set
      if (prepareSearchSchema === undefined || prepareSearchSchema === null) {
        throw new Error("Missing the required parameter 'prepareSearchSchema' when calling autoExecuteSearchSmartContractQueryRequest");
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
      let returnType = AutoExecuteSearchAddressBalanceResponseSchema;
      return this.apiClient.callApi(
        '/v2/autoexecution/search/smartcontract', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the executePreparedSearchRequest operation.
     * @callback module:api/SmartContractSearchApi~executePreparedSearchRequestCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ExecuteSmartContractReadResponseSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Execute a read of a smart contract on a DLT
     * Takes a request ID and reads the smart contract on Ethereum based on the parameters specified in the prepare request.
     * @param {String} authorization 
     * @param {String} requestId 
     * @param {module:api/SmartContractSearchApi~executePreparedSearchRequestCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ExecuteSmartContractReadResponseSchema}
     */
    executePreparedSearchRequest(authorization, requestId, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling executePreparedSearchRequest");
      }
      // verify the required parameter 'requestId' is set
      if (requestId === undefined || requestId === null) {
        throw new Error("Missing the required parameter 'requestId' when calling executePreparedSearchRequest");
      }

      let pathParams = {
      };
      let queryParams = {
        'requestId': requestId
      };
      let headerParams = {
        'Authorization': authorization
      };
      let formParams = {
      };

      let authNames = ['OAuth2_Security_Scheme'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ExecuteSmartContractReadResponseSchema;
      return this.apiClient.callApi(
        '/v2/execution/search/smartcontract', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the prepareSmartContractQueryRequest operation.
     * @callback module:api/SmartContractSearchApi~prepareSmartContractQueryRequestCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PrepareSearchResponseSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Prepare a read of a smart contract on a DLT
     * Returns a request ID for executing a smart contract read on Ethereum.
     * @param {String} authorization 
     * @param {module:model/PrepareSearchSmartContractRequestSchema} prepareSearchSmartContractRequestSchema 
     * @param {module:api/SmartContractSearchApi~prepareSmartContractQueryRequestCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PrepareSearchResponseSchema}
     */
    prepareSmartContractQueryRequest(authorization, prepareSearchSmartContractRequestSchema, callback) {
      let postBody = prepareSearchSmartContractRequestSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling prepareSmartContractQueryRequest");
      }
      // verify the required parameter 'prepareSearchSmartContractRequestSchema' is set
      if (prepareSearchSmartContractRequestSchema === undefined || prepareSearchSmartContractRequestSchema === null) {
        throw new Error("Missing the required parameter 'prepareSearchSmartContractRequestSchema' when calling prepareSmartContractQueryRequest");
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
      let returnType = PrepareSearchResponseSchema;
      return this.apiClient.callApi(
        '/v2/preparation/search/smartcontract', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
