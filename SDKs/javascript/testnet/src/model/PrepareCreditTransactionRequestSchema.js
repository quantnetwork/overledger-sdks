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
     * @param location {module:model/Location} 
     * @param type {module:model/PrepareCreditTransactionRequestSchema.TypeEnum} The type of the transaction
     * @param urgency {module:model/PrepareCreditTransactionRequestSchema.UrgencyEnum} This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
     */
    constructor(location, type, urgency) { 
        
        PrepareCreditTransactionRequestSchema.initialize(this, location, type, urgency);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, location, type, urgency) { 
        obj['location'] = location;
        obj['type'] = type;
        obj['urgency'] = urgency;
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

            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('urgency')) {
                obj['urgency'] = ApiClient.convertToType(data['urgency'], 'String');
            }
            if (data.hasOwnProperty('requestDetails')) {
                obj['requestDetails'] = CreditRequestDetailsSchema.constructFromObject(data['requestDetails']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/Location} location
 */
PrepareCreditTransactionRequestSchema.prototype['location'] = undefined;

/**
 * The type of the transaction
 * @member {module:model/PrepareCreditTransactionRequestSchema.TypeEnum} type
 */
PrepareCreditTransactionRequestSchema.prototype['type'] = undefined;

/**
 * This value defines how fast a transaction is processed on a network. A faster processing requirement will result in higher fees. If the urgency field is not provided, the default setting is normal
 * @member {module:model/PrepareCreditTransactionRequestSchema.UrgencyEnum} urgency
 */
PrepareCreditTransactionRequestSchema.prototype['urgency'] = undefined;

/**
 * @member {module:model/CreditRequestDetailsSchema} requestDetails
 */
PrepareCreditTransactionRequestSchema.prototype['requestDetails'] = undefined;





/**
 * Allowed values for the <code>type</code> property.
 * @enum {String}
 * @readonly
 */
PrepareCreditTransactionRequestSchema['TypeEnum'] = {

    /**
     * value: "Payment"
     * @const
     */
    "Payment": "Payment",

    /**
     * value: "Transfer"
     * @const
     */
    "Transfer": "Transfer",

    /**
     * value: "Contract Invoke"
     * @const
     */
    "Contract Invoke": "Contract Invoke"
};


/**
 * Allowed values for the <code>urgency</code> property.
 * @enum {String}
 * @readonly
 */
PrepareCreditTransactionRequestSchema['UrgencyEnum'] = {

    /**
     * value: "Normal"
     * @const
     */
    "Normal": "Normal",

    /**
     * value: "Fast"
     * @const
     */
    "Fast": "Fast",

    /**
     * value: "Urgent"
     * @const
     */
    "Urgent": "Urgent"
};



export default PrepareCreditTransactionRequestSchema;

