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
 * The InternalServerErrorSchema model module.
 * @module model/InternalServerErrorSchema
 * @version 2.0
 */
class InternalServerErrorSchema {
    /**
     * Constructs a new <code>InternalServerErrorSchema</code>.
     * @alias module:model/InternalServerErrorSchema
     */
    constructor() { 
        
        InternalServerErrorSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>InternalServerErrorSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/InternalServerErrorSchema} obj Optional instance to populate.
     * @return {module:model/InternalServerErrorSchema} The populated <code>InternalServerErrorSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new InternalServerErrorSchema();

            if (data.hasOwnProperty('path')) {
                obj['path'] = ApiClient.convertToType(data['path'], 'String');
            }
            if (data.hasOwnProperty('error')) {
                obj['error'] = ApiClient.convertToType(data['error'], 'String');
            }
            if (data.hasOwnProperty('message')) {
                obj['message'] = ApiClient.convertToType(data['message'], 'String');
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'Date');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], 'Number');
            }
        }
        return obj;
    }


}

/**
 * @member {String} path
 */
InternalServerErrorSchema.prototype['path'] = undefined;

/**
 * @member {String} error
 */
InternalServerErrorSchema.prototype['error'] = undefined;

/**
 * @member {String} message
 */
InternalServerErrorSchema.prototype['message'] = undefined;

/**
 * @member {Date} timestamp
 */
InternalServerErrorSchema.prototype['timestamp'] = undefined;

/**
 * @member {Number} status
 */
InternalServerErrorSchema.prototype['status'] = undefined;






export default InternalServerErrorSchema;

