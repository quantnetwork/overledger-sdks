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
import SubscriptionDetails from './SubscriptionDetails';

/**
 * The SubscriptionUpdateResponse model module.
 * @module model/SubscriptionUpdateResponse
 * @version 2.0
 */
class SubscriptionUpdateResponse {
    /**
     * Constructs a new <code>SubscriptionUpdateResponse</code>.
     * @alias module:model/SubscriptionUpdateResponse
     */
    constructor() { 
        
        SubscriptionUpdateResponse.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SubscriptionUpdateResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SubscriptionUpdateResponse} obj Optional instance to populate.
     * @return {module:model/SubscriptionUpdateResponse} The populated <code>SubscriptionUpdateResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SubscriptionUpdateResponse();

            if (data.hasOwnProperty('subscriptionDetails')) {
                obj['subscriptionDetails'] = SubscriptionDetails.constructFromObject(data['subscriptionDetails']);
            }
            if (data.hasOwnProperty('callbackUrl')) {
                obj['callbackUrl'] = ApiClient.convertToType(data['callbackUrl'], 'String');
            }
            if (data.hasOwnProperty('subscriptionId')) {
                obj['subscriptionId'] = ApiClient.convertToType(data['subscriptionId'], 'String');
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/SubscriptionDetails} subscriptionDetails
 */
SubscriptionUpdateResponse.prototype['subscriptionDetails'] = undefined;

/**
 * @member {String} callbackUrl
 */
SubscriptionUpdateResponse.prototype['callbackUrl'] = undefined;

/**
 * @member {String} subscriptionId
 */
SubscriptionUpdateResponse.prototype['subscriptionId'] = undefined;

/**
 * @member {String} type
 */
SubscriptionUpdateResponse.prototype['type'] = undefined;






export default SubscriptionUpdateResponse;

