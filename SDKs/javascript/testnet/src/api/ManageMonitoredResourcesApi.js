/**
 * Quant Overledger API
 * Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
import AddressMonitoringDetailsSchema from '../model/AddressMonitoringDetailsSchema';
import DeleteResourceMonitoringAddressSchema from '../model/DeleteResourceMonitoringAddressSchema';
import ErrorList from '../model/ErrorList';
import InternalServerErrorSchema from '../model/InternalServerErrorSchema';
import ResourceMonitoringAddressSchema from '../model/ResourceMonitoringAddressSchema';
import SmartContractMonitoringDetailsSchema from '../model/SmartContractMonitoringDetailsSchema';
import SmartContractMonitoringSchema from '../model/SmartContractMonitoringSchema';
import StatusUpdateMonitoringRequestSchema from '../model/StatusUpdateMonitoringRequestSchema';
import UpdateAddressMonitoringSchema from '../model/UpdateAddressMonitoringSchema';

/**
* ManageMonitoredResources service.
* @module api/ManageMonitoredResourcesApi
* @version 2.0
*/
export default class ManageMonitoredResourcesApi {

    /**
    * Constructs a new ManageMonitoredResourcesApi. 
    * @alias module:api/ManageMonitoredResourcesApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the deleteEventMonitoring operation.
     * @callback module:api/ManageMonitoredResourcesApi~deleteEventMonitoringCallback
     * @param {String} error Error message, if any.
     * @param {module:model/SmartContractMonitoringSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Stop monitoring a smart contract
     * Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID
     * @param {String} authorization 
     * @param {String} resourceMonitoringId 
     * @param {module:api/ManageMonitoredResourcesApi~deleteEventMonitoringCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/SmartContractMonitoringSchema}
     */
    deleteEventMonitoring(authorization, resourceMonitoringId, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling deleteEventMonitoring");
      }
      // verify the required parameter 'resourceMonitoringId' is set
      if (resourceMonitoringId === undefined || resourceMonitoringId === null) {
        throw new Error("Missing the required parameter 'resourceMonitoringId' when calling deleteEventMonitoring");
      }

      let pathParams = {
        'resourceMonitoringId': resourceMonitoringId
      };
      let queryParams = {
      };
      let headerParams = {
        'Authorization': authorization
      };
      let formParams = {
      };

      let authNames = ['OAuth2_Security_Scheme'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = SmartContractMonitoringSchema;
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the deleteResourceMonitoringAddress operation.
     * @callback module:api/ManageMonitoredResourcesApi~deleteResourceMonitoringAddressCallback
     * @param {String} error Error message, if any.
     * @param {module:model/DeleteResourceMonitoringAddressSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Stop monitoring an address
     * Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID
     * @param {String} authorization 
     * @param {String} resourceMonitoringId 
     * @param {module:api/ManageMonitoredResourcesApi~deleteResourceMonitoringAddressCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/DeleteResourceMonitoringAddressSchema}
     */
    deleteResourceMonitoringAddress(authorization, resourceMonitoringId, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling deleteResourceMonitoringAddress");
      }
      // verify the required parameter 'resourceMonitoringId' is set
      if (resourceMonitoringId === undefined || resourceMonitoringId === null) {
        throw new Error("Missing the required parameter 'resourceMonitoringId' when calling deleteResourceMonitoringAddress");
      }

      let pathParams = {
        'resourceMonitoringId': resourceMonitoringId
      };
      let queryParams = {
      };
      let headerParams = {
        'Authorization': authorization
      };
      let formParams = {
      };

      let authNames = ['OAuth2_Security_Scheme'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = DeleteResourceMonitoringAddressSchema;
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/address/{resourceMonitoringId}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the getListOfAddresses operation.
     * @callback module:api/ManageMonitoredResourcesApi~getListOfAddressesCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/ResourceMonitoringAddressSchema>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Retrieve a list of addresses being monitored
     * Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID
     * @param {String} authorization 
     * @param {module:api/ManageMonitoredResourcesApi~getListOfAddressesCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/ResourceMonitoringAddressSchema>}
     */
    getListOfAddresses(authorization, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling getListOfAddresses");
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
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [ResourceMonitoringAddressSchema];
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/addresses', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the getListOfResources operation.
     * @callback module:api/ManageMonitoredResourcesApi~getListOfResourcesCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/SmartContractMonitoringSchema>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Retrieve a list of all resources being monitored
     * Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID
     * @param {String} authorization 
     * @param {module:api/ManageMonitoredResourcesApi~getListOfResourcesCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/SmartContractMonitoringSchema>}
     */
    getListOfResources(authorization, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling getListOfResources");
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
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [SmartContractMonitoringSchema];
      return this.apiClient.callApi(
        '/v2/resourcemonitoring', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the getListOfSmartContractEvents operation.
     * @callback module:api/ManageMonitoredResourcesApi~getListOfSmartContractEventsCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/SmartContractMonitoringSchema>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Retrieve a list of smart contracts being monitored
     * Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID
     * @param {String} authorization 
     * @param {module:api/ManageMonitoredResourcesApi~getListOfSmartContractEventsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/SmartContractMonitoringSchema>}
     */
    getListOfSmartContractEvents(authorization, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling getListOfSmartContractEvents");
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
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [SmartContractMonitoringSchema];
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/smartcontractevents', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the getMonitoredAddress operation.
     * @callback module:api/ManageMonitoredResourcesApi~getMonitoredAddressCallback
     * @param {String} error Error message, if any.
     * @param {module:model/AddressMonitoringDetailsSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Retrieve recorded updates for a specific monitored address
     * Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID
     * @param {String} authorization 
     * @param {String} resourceMonitoringId 
     * @param {module:api/ManageMonitoredResourcesApi~getMonitoredAddressCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/AddressMonitoringDetailsSchema}
     */
    getMonitoredAddress(authorization, resourceMonitoringId, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling getMonitoredAddress");
      }
      // verify the required parameter 'resourceMonitoringId' is set
      if (resourceMonitoringId === undefined || resourceMonitoringId === null) {
        throw new Error("Missing the required parameter 'resourceMonitoringId' when calling getMonitoredAddress");
      }

      let pathParams = {
        'resourceMonitoringId': resourceMonitoringId
      };
      let queryParams = {
      };
      let headerParams = {
        'Authorization': authorization
      };
      let formParams = {
      };

      let authNames = ['OAuth2_Security_Scheme'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = AddressMonitoringDetailsSchema;
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/address/{resourceMonitoringId}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the getMonitoredSmartContractEventDetails operation.
     * @callback module:api/ManageMonitoredResourcesApi~getMonitoredSmartContractEventDetailsCallback
     * @param {String} error Error message, if any.
     * @param {module:model/SmartContractMonitoringDetailsSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Retrieve recorded updates for a specific monitored smart contract
     * Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID
     * @param {String} authorization 
     * @param {String} resourceMonitoringId 
     * @param {module:api/ManageMonitoredResourcesApi~getMonitoredSmartContractEventDetailsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/SmartContractMonitoringDetailsSchema}
     */
    getMonitoredSmartContractEventDetails(authorization, resourceMonitoringId, callback) {
      let postBody = null;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling getMonitoredSmartContractEventDetails");
      }
      // verify the required parameter 'resourceMonitoringId' is set
      if (resourceMonitoringId === undefined || resourceMonitoringId === null) {
        throw new Error("Missing the required parameter 'resourceMonitoringId' when calling getMonitoredSmartContractEventDetails");
      }

      let pathParams = {
        'resourceMonitoringId': resourceMonitoringId
      };
      let queryParams = {
      };
      let headerParams = {
        'Authorization': authorization
      };
      let formParams = {
      };

      let authNames = ['OAuth2_Security_Scheme'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = SmartContractMonitoringDetailsSchema;
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the updateEventMonitoring operation.
     * @callback module:api/ManageMonitoredResourcesApi~updateEventMonitoringCallback
     * @param {String} error Error message, if any.
     * @param {module:model/SmartContractMonitoringSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update the monitoring status of a smart contract
     * Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract
     * @param {String} authorization 
     * @param {String} resourceMonitoringId 
     * @param {module:model/StatusUpdateMonitoringRequestSchema} statusUpdateMonitoringRequestSchema 
     * @param {module:api/ManageMonitoredResourcesApi~updateEventMonitoringCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/SmartContractMonitoringSchema}
     */
    updateEventMonitoring(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema, callback) {
      let postBody = statusUpdateMonitoringRequestSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling updateEventMonitoring");
      }
      // verify the required parameter 'resourceMonitoringId' is set
      if (resourceMonitoringId === undefined || resourceMonitoringId === null) {
        throw new Error("Missing the required parameter 'resourceMonitoringId' when calling updateEventMonitoring");
      }
      // verify the required parameter 'statusUpdateMonitoringRequestSchema' is set
      if (statusUpdateMonitoringRequestSchema === undefined || statusUpdateMonitoringRequestSchema === null) {
        throw new Error("Missing the required parameter 'statusUpdateMonitoringRequestSchema' when calling updateEventMonitoring");
      }

      let pathParams = {
        'resourceMonitoringId': resourceMonitoringId
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
      let returnType = SmartContractMonitoringSchema;
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/smartcontractevent/{resourceMonitoringId}', 'PATCH',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the updateResourceMonitoringAddress operation.
     * @callback module:api/ManageMonitoredResourcesApi~updateResourceMonitoringAddressCallback
     * @param {String} error Error message, if any.
     * @param {module:model/UpdateAddressMonitoringSchema} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update the monitoring status of an address
     * Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address
     * @param {String} authorization 
     * @param {String} resourceMonitoringId 
     * @param {module:model/StatusUpdateMonitoringRequestSchema} statusUpdateMonitoringRequestSchema 
     * @param {module:api/ManageMonitoredResourcesApi~updateResourceMonitoringAddressCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/UpdateAddressMonitoringSchema}
     */
    updateResourceMonitoringAddress(authorization, resourceMonitoringId, statusUpdateMonitoringRequestSchema, callback) {
      let postBody = statusUpdateMonitoringRequestSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling updateResourceMonitoringAddress");
      }
      // verify the required parameter 'resourceMonitoringId' is set
      if (resourceMonitoringId === undefined || resourceMonitoringId === null) {
        throw new Error("Missing the required parameter 'resourceMonitoringId' when calling updateResourceMonitoringAddress");
      }
      // verify the required parameter 'statusUpdateMonitoringRequestSchema' is set
      if (statusUpdateMonitoringRequestSchema === undefined || statusUpdateMonitoringRequestSchema === null) {
        throw new Error("Missing the required parameter 'statusUpdateMonitoringRequestSchema' when calling updateResourceMonitoringAddress");
      }

      let pathParams = {
        'resourceMonitoringId': resourceMonitoringId
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
      let returnType = UpdateAddressMonitoringSchema;
      return this.apiClient.callApi(
        '/v2/resourcemonitoring/address/{resourceMonitoringId}', 'PATCH',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
