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

import ApiClient from '../ApiClient';
import Fee from './Fee';

/**
 * The PrepareTransactionResponse model module.
 * @module model/PrepareTransactionResponse
 * @version 2.0
 */
class PrepareTransactionResponse {
    /**
     * Constructs a new <code>PrepareTransactionResponse</code>.
     * @alias module:model/PrepareTransactionResponse
     */
    constructor() { 
        
        PrepareTransactionResponse.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>PrepareTransactionResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PrepareTransactionResponse} obj Optional instance to populate.
     * @return {module:model/PrepareTransactionResponse} The populated <code>PrepareTransactionResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PrepareTransactionResponse();

            if (data.hasOwnProperty('gatewayFee')) {
                obj['gatewayFee'] = Fee.constructFromObject(data['gatewayFee']);
            }
            if (data.hasOwnProperty('requestId')) {
                obj['requestId'] = ApiClient.convertToType(data['requestId'], 'String');
            }
            if (data.hasOwnProperty('dltFee')) {
                obj['dltFee'] = Fee.constructFromObject(data['dltFee']);
            }
            if (data.hasOwnProperty('nativeData')) {
                obj['nativeData'] = ApiClient.convertToType(data['nativeData'], Object);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/Fee} gatewayFee
 */
PrepareTransactionResponse.prototype['gatewayFee'] = undefined;

/**
 * The ID assigned to a preparation request in Overledger
 * @member {String} requestId
 */
PrepareTransactionResponse.prototype['requestId'] = undefined;

/**
 * @member {module:model/Fee} dltFee
 */
PrepareTransactionResponse.prototype['dltFee'] = undefined;

/**
 * @member {Object} nativeData
 */
PrepareTransactionResponse.prototype['nativeData'] = undefined;






export default PrepareTransactionResponse;
