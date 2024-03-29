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
 * The TokenReadResponseDetails model module.
 * @module model/TokenReadResponseDetails
 * @version 2.0
 */
class TokenReadResponseDetails {
    /**
     * Constructs a new <code>TokenReadResponseDetails</code>.
     * @alias module:model/TokenReadResponseDetails
     */
    constructor() { 
        
        TokenReadResponseDetails.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TokenReadResponseDetails</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TokenReadResponseDetails} obj Optional instance to populate.
     * @return {module:model/TokenReadResponseDetails} The populated <code>TokenReadResponseDetails</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TokenReadResponseDetails();

            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('value')) {
                obj['value'] = ApiClient.convertToType(data['value'], Object);
            }
        }
        return obj;
    }


}

/**
 * @member {String} name
 */
TokenReadResponseDetails.prototype['name'] = undefined;

/**
 * @member {String} type
 */
TokenReadResponseDetails.prototype['type'] = undefined;

/**
 * @member {Object} value
 */
TokenReadResponseDetails.prototype['value'] = undefined;






export default TokenReadResponseDetails;

