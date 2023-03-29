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
import AddressMonitoringRequestSchema from '../model/AddressMonitoringRequestSchema';
import AddressMonitoringResponseSchema from '../model/AddressMonitoringResponseSchema';
import CreateSmartContractMonitoringSchema from '../model/CreateSmartContractMonitoringSchema';
import ErrorList from '../model/ErrorList';
import InternalServerErrorSchema from '../model/InternalServerErrorSchema';
import MonitorSmartContractRequestSchema from '../model/MonitorSmartContractRequestSchema';

/**
* MonitorAResource service.
* @module api/MonitorAResourceApi
* @version 2.0
*/
export default class MonitorAResourceApi {

    /**
    * Constructs a new MonitorAResourceApi. 
    * @alias module:api/MonitorAResourceApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the resourceMonitoringAddress operation.
     * @callback module:api/MonitorAResourceApi~resourceMonitoringAddressCallback
     * @param {String} error Error message, if any.
     * @param {module:model/AddressMonitoringResponseSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Monitor an address for incoming and outgoing transactions
     * Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT
     * @param {String} authorization 
     * @param {module:model/AddressMonitoringRequestSchema} addressMonitoringRequestSchema 
     * @param {module:api/MonitorAResourceApi~resourceMonitoringAddressCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/AddressMonitoringResponseSchema}
     */
    resourceMonitoringAddress(authorization, addressMonitoringRequestSchema, callback) {
      let postBody = addressMonitoringRequestSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling resourceMonitoringAddress");
      }
      // verify the required parameter 'addressMonitoringRequestSchema' is set
      if (addressMonitoringRequestSchema === undefined || addressMonitoringRequestSchema === null) {
        throw new Error("Missing the required parameter 'addressMonitoringRequestSchema' when calling resourceMonitoringAddress");
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
      let returnType = AddressMonitoringResponseSchema;
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/address', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the trackAndSubscribeEvent operation.
     * @callback module:api/MonitorAResourceApi~trackAndSubscribeEventCallback
     * @param {String} error Error message, if any.
     * @param {module:model/CreateSmartContractMonitoringSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Monitor a smart contract for an event
     * Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event
     * @param {String} authorization 
     * @param {module:model/MonitorSmartContractRequestSchema} monitorSmartContractRequestSchema 
     * @param {module:api/MonitorAResourceApi~trackAndSubscribeEventCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/CreateSmartContractMonitoringSchema}
     */
    trackAndSubscribeEvent(authorization, monitorSmartContractRequestSchema, callback) {
      let postBody = monitorSmartContractRequestSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling trackAndSubscribeEvent");
      }
      // verify the required parameter 'monitorSmartContractRequestSchema' is set
      if (monitorSmartContractRequestSchema === undefined || monitorSmartContractRequestSchema === null) {
        throw new Error("Missing the required parameter 'monitorSmartContractRequestSchema' when calling trackAndSubscribeEvent");
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
      let returnType = CreateSmartContractMonitoringSchema;
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/smartcontractevent', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
