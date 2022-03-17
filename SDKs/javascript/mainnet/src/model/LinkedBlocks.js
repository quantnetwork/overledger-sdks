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

import ApiClient from '../ApiClient';

/**
 * The LinkedBlocks model module.
 * @module model/LinkedBlocks
 * @version 2.0
 */
class LinkedBlocks {
    /**
     * Constructs a new <code>LinkedBlocks</code>.
     * @alias module:model/LinkedBlocks
     */
    constructor() { 
        
        LinkedBlocks.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>LinkedBlocks</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/LinkedBlocks} obj Optional instance to populate.
     * @return {module:model/LinkedBlocks} The populated <code>LinkedBlocks</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new LinkedBlocks();

            if (data.hasOwnProperty('parent')) {
                obj['parent'] = ApiClient.convertToType(data['parent'], 'String');
            }
            if (data.hasOwnProperty('child')) {
                obj['child'] = ApiClient.convertToType(data['child'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} parent
 */
LinkedBlocks.prototype['parent'] = undefined;

/**
 * @member {String} child
 */
LinkedBlocks.prototype['child'] = undefined;






export default LinkedBlocks;

