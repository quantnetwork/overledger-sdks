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
 * The CreateSubscriptionRequestSchema model module.
 * @module model/CreateSubscriptionRequestSchema
 * @version 2.0
 */
class CreateSubscriptionRequestSchema {
    /**
     * Constructs a new <code>CreateSubscriptionRequestSchema</code>.
     * @alias module:model/CreateSubscriptionRequestSchema
     */
    constructor() { 
        
        CreateSubscriptionRequestSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CreateSubscriptionRequestSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CreateSubscriptionRequestSchema} obj Optional instance to populate.
     * @return {module:model/CreateSubscriptionRequestSchema} The populated <code>CreateSubscriptionRequestSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CreateSubscriptionRequestSchema();

            if (data.hasOwnProperty('ids')) {
                obj['ids'] = ApiClient.convertToType(data['ids'], ['String']);
            }
            if (data.hasOwnProperty('callbackUrl')) {
                obj['callbackUrl'] = ApiClient.convertToType(data['callbackUrl'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<String>} ids
 */
CreateSubscriptionRequestSchema.prototype['ids'] = undefined;

/**
 * @member {String} callbackUrl
 */
CreateSubscriptionRequestSchema.prototype['callbackUrl'] = undefined;

/**
 * @member {String} type
 */
CreateSubscriptionRequestSchema.prototype['type'] = undefined;






export default CreateSubscriptionRequestSchema;
