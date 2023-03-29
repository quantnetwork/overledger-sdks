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

import ApiClient from '../ApiClient';

/**
 * The TransferSchema model module.
 * @module model/TransferSchema
 * @version 2.0
 */
class TransferSchema {
    /**
     * Constructs a new <code>TransferSchema</code>.
     * @alias module:model/TransferSchema
     */
    constructor() { 
        
        TransferSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TransferSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TransferSchema} obj Optional instance to populate.
     * @return {module:model/TransferSchema} The populated <code>TransferSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TransferSchema();

            if (data.hasOwnProperty('tokenId')) {
                obj['tokenId'] = ApiClient.convertToType(data['tokenId'], 'String');
            }
            if (data.hasOwnProperty('tokenName')) {
                obj['tokenName'] = ApiClient.convertToType(data['tokenName'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} tokenId
 */
TransferSchema.prototype['tokenId'] = undefined;

/**
 * @member {String} tokenName
 */
TransferSchema.prototype['tokenName'] = undefined;






export default TransferSchema;

