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
import CreditRequestDetailsSchema from './CreditRequestDetailsSchema';
import Location from './Location';

/**
 * The PrepareCreditTransactionRequestSchema model module.
 * @module model/PrepareCreditTransactionRequestSchema
 * @version 2.0
 */
class PrepareCreditTransactionRequestSchema {
    /**
     * Constructs a new <code>PrepareCreditTransactionRequestSchema</code>.
     * @alias module:model/PrepareCreditTransactionRequestSchema
     */
    constructor() { 
        
        PrepareCreditTransactionRequestSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>PrepareCreditTransactionRequestSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/PrepareCreditTransactionRequestSchema} obj Optional instance to populate.
     * @return {module:model/PrepareCreditTransactionRequestSchema} The populated <code>PrepareCreditTransactionRequestSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new PrepareCreditTransactionRequestSchema();

            if (data.hasOwnProperty('urgency')) {
                obj['urgency'] = ApiClient.convertToType(data['urgency'], 'String');
            }
            if (data.hasOwnProperty('requestDetails')) {
                obj['requestDetails'] = CreditRequestDetailsSchema.constructFromObject(data['requestDetails']);
            }
            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} urgency
 */
PrepareCreditTransactionRequestSchema.prototype['urgency'] = undefined;

/**
 * @member {module:model/CreditRequestDetailsSchema} requestDetails
 */
PrepareCreditTransactionRequestSchema.prototype['requestDetails'] = undefined;

/**
 * @member {module:model/Location} location
 */
PrepareCreditTransactionRequestSchema.prototype['location'] = undefined;

/**
 * @member {String} type
 */
PrepareCreditTransactionRequestSchema.prototype['type'] = undefined;






export default PrepareCreditTransactionRequestSchema;

