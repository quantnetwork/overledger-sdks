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
 * The Mint model module.
 * @module model/Mint
 * @version 2.0
 */
class Mint {
    /**
     * Constructs a new <code>Mint</code>.
     * @alias module:model/Mint
     */
    constructor() { 
        
        Mint.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Mint</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Mint} obj Optional instance to populate.
     * @return {module:model/Mint} The populated <code>Mint</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Mint();

            if (data.hasOwnProperty('tokenName')) {
                obj['tokenName'] = ApiClient.convertToType(data['tokenName'], 'String');
            }
            if (data.hasOwnProperty('amount')) {
                obj['amount'] = ApiClient.convertToType(data['amount'], 'String');
            }
            if (data.hasOwnProperty('unit')) {
                obj['unit'] = ApiClient.convertToType(data['unit'], 'String');
            }
            if (data.hasOwnProperty('metadata')) {
                obj['metadata'] = ApiClient.convertToType(data['metadata'], 'String');
            }
            if (data.hasOwnProperty('tokenId')) {
                obj['tokenId'] = ApiClient.convertToType(data['tokenId'], 'String');
            }
        }
        return obj;
    }


}

/**
 * Name of the token
 * @member {String} tokenName
 */
Mint.prototype['tokenName'] = undefined;

/**
 * The amount of a currency
 * @member {String} amount
 */
Mint.prototype['amount'] = undefined;

/**
 * The unit of this currency/token
 * @member {String} unit
 */
Mint.prototype['unit'] = undefined;

/**
 * (Optional) String of metadata
 * @member {String} metadata
 */
Mint.prototype['metadata'] = undefined;

/**
 * Unique identifier for the specific token
 * @member {String} tokenId
 */
Mint.prototype['tokenId'] = undefined;






export default Mint;

