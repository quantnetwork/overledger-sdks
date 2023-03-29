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
* SubscribeToQRC20AccountCreditPayments service.
* @module api/SubscribeToQRC20AccountCreditPaymentsApi
* @version 2.0
*/
export default class SubscribeToQRC20AccountCreditPaymentsApi {

    /**
    * Constructs a new SubscribeToQRC20AccountCreditPaymentsApi. 
    * @alias module:api/SubscribeToQRC20AccountCreditPaymentsApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the subscribeCreditEvent operation.
     * @callback module:api/SubscribeToQRC20AccountCreditPaymentsApi~subscribeCreditEventCallback
     * @param {String} error Error message, if any.
     * @param {module:model/EventSubscriptionResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Receive updates each time there is a credit payment on your account
     * Set up a subscription to receive updates to a callback URL each time there is a credit on a QRC20 token.
     * @param {String} authorization 
     * @param {Object.<String, Object>} body 
     * @param {module:api/SubscribeToQRC20AccountCreditPaymentsApi~subscribeCreditEventCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/EventSubscriptionResponse}
     */
    subscribeCreditEvent(authorization, body, callback) {
      let postBody = body;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling subscribeCreditEvent");
      }
      // verify the required parameter 'body' is set
      if (body === undefined || body === null) {
        throw new Error("Missing the required parameter 'body' when calling subscribeCreditEvent");
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

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = EventSubscriptionResponse;
      return this.apiClient.callApi(
        '/v2/tokenise/tokens/subscription/qrc20/credit', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
