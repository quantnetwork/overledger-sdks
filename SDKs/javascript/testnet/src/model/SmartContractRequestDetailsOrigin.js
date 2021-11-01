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

/**
 * The SmartContractRequestDetailsOrigin model module.
 * @module model/SmartContractRequestDetailsOrigin
 * @version 2.0
 */
class SmartContractRequestDetailsOrigin {
    /**
     * Constructs a new <code>SmartContractRequestDetailsOrigin</code>.
     * @alias module:model/SmartContractRequestDetailsOrigin
     */
    constructor() { 
        
        SmartContractRequestDetailsOrigin.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SmartContractRequestDetailsOrigin</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SmartContractRequestDetailsOrigin} obj Optional instance to populate.
     * @return {module:model/SmartContractRequestDetailsOrigin} The populated <code>SmartContractRequestDetailsOrigin</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SmartContractRequestDetailsOrigin();

            if (data.hasOwnProperty('originId')) {
                obj['originId'] = ApiClient.convertToType(data['originId'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} originId
 */
SmartContractRequestDetailsOrigin.prototype['originId'] = undefined;






export default SmartContractRequestDetailsOrigin;
