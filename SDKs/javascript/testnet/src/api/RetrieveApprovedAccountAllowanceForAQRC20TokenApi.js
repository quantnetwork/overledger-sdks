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
import ErrorList from '../model/ErrorList';
import ErrorResponseMessage from '../model/ErrorResponseMessage';
import InternalServerErrorSchema from '../model/InternalServerErrorSchema';
import ReadApprovedAccountAllowanceRequestSchema from '../model/ReadApprovedAccountAllowanceRequestSchema';
import TokenReadQRC20Response from '../model/TokenReadQRC20Response';

/**
* RetrieveApprovedAccountAllowanceForAQRC20Token service.
* @module api/RetrieveApprovedAccountAllowanceForAQRC20TokenApi
* @version 2.0
*/
export default class RetrieveApprovedAccountAllowanceForAQRC20TokenApi {

    /**
    * Constructs a new RetrieveApprovedAccountAllowanceForAQRC20TokenApi. 
    * @alias module:api/RetrieveApprovedAccountAllowanceForAQRC20TokenApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the readApprovedDebitAmount operation.
     * @callback module:api/RetrieveApprovedAccountAllowanceForAQRC20TokenApi~readApprovedDebitAmountCallback
     * @param {String} error Error message, if any.
     * @param {module:model/TokenReadQRC20Response} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Retrieve how many QRC20 tokens an address is allowed to debit
     * Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account
     * @param {String} authorization 
     * @param {module:model/ReadApprovedAccountAllowanceRequestSchema} readApprovedAccountAllowanceRequestSchema 
     * @param {module:api/RetrieveApprovedAccountAllowanceForAQRC20TokenApi~readApprovedDebitAmountCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/TokenReadQRC20Response}
     */
    readApprovedDebitAmount(authorization, readApprovedAccountAllowanceRequestSchema, callback) {
      let postBody = readApprovedAccountAllowanceRequestSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling readApprovedDebitAmount");
      }
      // verify the required parameter 'readApprovedAccountAllowanceRequestSchema' is set
      if (readApprovedAccountAllowanceRequestSchema === undefined || readApprovedAccountAllowanceRequestSchema === null) {
        throw new Error("Missing the required parameter 'readApprovedAccountAllowanceRequestSchema' when calling readApprovedDebitAmount");
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
      let returnType = TokenReadQRC20Response;
      return this.apiClient.callApi(
        '/v2/tokenise/tokens/qrc20/approved-debit-amount', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
