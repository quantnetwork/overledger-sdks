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
import StatusUpdateSchema from './StatusUpdateSchema';

/**
 * The UpdateSubscriptionRequestSchema model module.
 * @module model/UpdateSubscriptionRequestSchema
 * @version 2.0
 */
class UpdateSubscriptionRequestSchema {
    /**
     * Constructs a new <code>UpdateSubscriptionRequestSchema</code>.
     * @alias module:model/UpdateSubscriptionRequestSchema
     */
    constructor() { 
        
        UpdateSubscriptionRequestSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>UpdateSubscriptionRequestSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/UpdateSubscriptionRequestSchema} obj Optional instance to populate.
     * @return {module:model/UpdateSubscriptionRequestSchema} The populated <code>UpdateSubscriptionRequestSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new UpdateSubscriptionRequestSchema();

            if (data.hasOwnProperty('statusUpdate')) {
                obj['statusUpdate'] = StatusUpdateSchema.constructFromObject(data['statusUpdate']);
            }
            if (data.hasOwnProperty('callbackUrl')) {
                obj['callbackUrl'] = ApiClient.convertToType(data['callbackUrl'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/StatusUpdateSchema} statusUpdate
 */
UpdateSubscriptionRequestSchema.prototype['statusUpdate'] = undefined;

/**
 * @member {String} callbackUrl
 */
UpdateSubscriptionRequestSchema.prototype['callbackUrl'] = undefined;






export default UpdateSubscriptionRequestSchema;

