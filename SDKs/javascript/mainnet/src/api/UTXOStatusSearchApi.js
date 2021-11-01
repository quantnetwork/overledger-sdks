/**
 * Quant Overledger API
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
import ExecuteSearchUTXOResponseSchema from '../model/ExecuteSearchUTXOResponseSchema';
import InternalServerErrorSchema from '../model/InternalServerErrorSchema';
import PrepareSearchResponseSchema from '../model/PrepareSearchResponseSchema';
import PrepareSearchSchema from '../model/PrepareSearchSchema';

/**
* UTXOStatusSearch service.
* @module api/UTXOStatusSearchApi
* @version 2.0
*/
export default class UTXOStatusSearchApi {

    /**
    * Constructs a new UTXOStatusSearchApi. 
    * @alias module:api/UTXOStatusSearchApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the executeUTXOPreparedSearchRequest operation.
     * @callback module:api/UTXOStatusSearchApi~executeUTXOPreparedSearchRequestCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ExecuteSearchUTXOResponseSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Execute a search for UTXO state on a DLT
     * Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
     * @param {String} authorization 
     * @param {String} requestId 
     * @param {module:api/UTXOStatusSearchApi~executeUTXOPreparedSearchRequestCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ExecuteSearchUTXOResponseSchema}
     */
    executeUTXOPreparedSearchRequest(authorization, requestId, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling executeUTXOPreparedSearchRequest");
      }
      // verify the required parameter 'requestId' is set
      if (requestId === undefined || requestId === null) {
        throw new Error("Missing the required parameter 'requestId' when calling executeUTXOPreparedSearchRequest");
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
      let returnType = ExecuteSearchUTXOResponseSchema;
      return this.apiClient.callApi(
        '/v2/execution/search/utxo', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the prepareSearchUTXOState operation.
     * @callback module:api/UTXOStatusSearchApi~prepareSearchUTXOStateCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PrepareSearchResponseSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Prepare Search for a UTXO State.
     * Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
     * @param {String} authorization 
     * @param {String} utxoId 
     * @param {module:model/PrepareSearchSchema} prepareSearchSchema 
     * @param {module:api/UTXOStatusSearchApi~prepareSearchUTXOStateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PrepareSearchResponseSchema}
     */
    prepareSearchUTXOState(authorization, utxoId, prepareSearchSchema, callback) {
      let postBody = prepareSearchSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling prepareSearchUTXOState");
      }
      // verify the required parameter 'utxoId' is set
      if (utxoId === undefined || utxoId === null) {
        throw new Error("Missing the required parameter 'utxoId' when calling prepareSearchUTXOState");
      }
      // verify the required parameter 'prepareSearchSchema' is set
      if (prepareSearchSchema === undefined || prepareSearchSchema === null) {
        throw new Error("Missing the required parameter 'prepareSearchSchema' when calling prepareSearchUTXOState");
      }

      let pathParams = {
        'utxoId': utxoId
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
        '/v2/preparation/search/utxo/{utxoId}', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}