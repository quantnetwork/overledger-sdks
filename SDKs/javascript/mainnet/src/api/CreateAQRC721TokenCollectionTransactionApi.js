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
import InternalServerErrorSchema from '../model/InternalServerErrorSchema';
import PreparePaymentTransactionRequestSchema from '../model/PreparePaymentTransactionRequestSchema';
import PrepareTransactionResponse from '../model/PrepareTransactionResponse';

/**
* CreateAQRC721TokenCollectionTransaction service.
* @module api/CreateAQRC721TokenCollectionTransactionApi
* @version 2.0
*/
export default class CreateAQRC721TokenCollectionTransactionApi {

    /**
    * Constructs a new CreateAQRC721TokenCollectionTransactionApi. 
    * @alias module:api/CreateAQRC721TokenCollectionTransactionApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the prepareCollectRequest operation.
     * @callback module:api/CreateAQRC721TokenCollectionTransactionApi~prepareCollectRequestCallback
     * @param {String} error Error message, if any.
     * @param {module:model/PrepareTransactionResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Prepare a QRC721 token collection transaction for signing
     * Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction types are “Approve Asset Collect” and “Collect Asset”. The “Approve Asset Collect” transaction type will allow you to approve someone to subsequently make a transaction that takes the NFT from your address into their own. The “Collect Asset” transaction type will create the transaction to pull the approved NFT from an account into the receiving account. Successfully prepared transactions can then be executed using the /execution/transaction API.
     * @param {String} authorization 
     * @param {module:model/PreparePaymentTransactionRequestSchema} preparePaymentTransactionRequestSchema 
     * @param {module:api/CreateAQRC721TokenCollectionTransactionApi~prepareCollectRequestCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/PrepareTransactionResponse}
     */
    prepareCollectRequest(authorization, preparePaymentTransactionRequestSchema, callback) {
      let postBody = preparePaymentTransactionRequestSchema;
      // verify the required parameter 'authorization' is set
      if (authorization === undefined || authorization === null) {
        throw new Error("Missing the required parameter 'authorization' when calling prepareCollectRequest");
      }
      // verify the required parameter 'preparePaymentTransactionRequestSchema' is set
      if (preparePaymentTransactionRequestSchema === undefined || preparePaymentTransactionRequestSchema === null) {
        throw new Error("Missing the required parameter 'preparePaymentTransactionRequestSchema' when calling prepareCollectRequest");
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
        '/v2/tokenise/preparation/transaction/qrc721/collect', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
