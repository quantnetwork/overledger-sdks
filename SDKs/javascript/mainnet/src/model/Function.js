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
import Parameter from './Parameter';

/**
 * The Function model module.
 * @module model/Function
 * @version 2.0
 */
class Function {
    /**
     * Constructs a new <code>Function</code>.
     * @alias module:model/Function
     */
    constructor() { 
        
        Function.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Function</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Function} obj Optional instance to populate.
     * @return {module:model/Function} The populated <code>Function</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Function();

            if (data.hasOwnProperty('functionId')) {
                obj['functionId'] = ApiClient.convertToType(data['functionId'], 'String');
            }
            if (data.hasOwnProperty('code')) {
                obj['code'] = ApiClient.convertToType(data['code'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('inputParameters')) {
                obj['inputParameters'] = ApiClient.convertToType(data['inputParameters'], [Parameter]);
            }
            if (data.hasOwnProperty('outputParameters')) {
                obj['outputParameters'] = ApiClient.convertToType(data['outputParameters'], [Parameter]);
            }
        }
        return obj;
    }


}

/**
 * @member {String} functionId
 */
Function.prototype['functionId'] = undefined;

/**
 * @member {String} code
 */
Function.prototype['code'] = undefined;

/**
 * @member {String} name
 */
Function.prototype['name'] = undefined;

/**
 * @member {Array.<module:model/Parameter>} inputParameters
 */
Function.prototype['inputParameters'] = undefined;

/**
 * @member {Array.<module:model/Parameter>} outputParameters
 */
Function.prototype['outputParameters'] = undefined;






export default Function;

