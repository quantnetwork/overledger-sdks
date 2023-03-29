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
import EventSubscriptionResponse from '../model/EventSubscriptionResponse';
import InternalServerErrorSchema from '../model/InternalServerErrorSchema';

/**
* SubscribeToQRC721SupplyChangeUpdates service.
* @module api/SubscribeToQRC721SupplyChangeUpdatesApi
* @version 2.0
*/
export default class SubscribeToQRC721SupplyChangeUpdatesApi {

    /**
    * Constructs a new SubscribeToQRC721SupplyChangeUpdatesApi. 
    * @alias module:api/SubscribeToQRC721SupplyChangeUpdatesApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the subscribeSupplyEvent operation.
     * @callback module:api/SubscribeToQRC721SupplyChangeUpdatesApi~subscribeSupplyEventCallback
     * @param {String} error Error message, if any.
     * @param {module:model/EventSubscriptionResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Receive updates each time a supply changes for a QRC721 or QRC20 token
     * Set up a subscription to receive updates to a callback URL each time a change in QRC721 or QRC20 token supply occurs. Use the type \"Mint Tokens\" to receive an update each time a new token is created, or use the type \"Burn Tokens\" to receive an update each time a token is destroyed.
     * @param {String} authorization 
     * @param {String} flowtype 
     * @param {Object.<String, Object>} body 
     * @param {module:api/SubscribeToQRC721SupplyChangeUpdatesApi~subscribeSupplyEventCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/EventSubscriptionResponse}
     */
    subscribeSupplyEvent(authorization, flowtype, body, callback) {
      let postBody = body;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling subscribeSupplyEvent");
      }
      // verify the required parameter 'flowtype' is set
      if (flowtype === undefined || flowtype === null) {
        throw new Error("Missing the required parameter 'flowtype' when calling subscribeSupplyEvent");
      }
      // verify the required parameter 'body' is set
      if (body === undefined || body === null) {
        throw new Error("Missing the required parameter 'body' when calling subscribeSupplyEvent");
      }

      let pathParams = {
        'flowtype': flowtype
      };
      let queryParams = {
      };
      let headerParams = {
        'Authorization': authorization
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = EventSubscriptionResponse;
      return this.apiClient.callApi(
        '/v2/tokenise/tokens/subscription/{flowtype}/supply', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
