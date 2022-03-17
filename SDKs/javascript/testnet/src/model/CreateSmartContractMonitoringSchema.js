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
import ResourceMonitoringDetails from './ResourceMonitoringDetails';
import ResourceMonitoringSubscription from './ResourceMonitoringSubscription';
import ResourceMonitoringSubscriptionDetails from './ResourceMonitoringSubscriptionDetails';

/**
 * The CreateSmartContractMonitoringSchema model module.
 * @module model/CreateSmartContractMonitoringSchema
 * @version 2.0
 */
class CreateSmartContractMonitoringSchema {
    /**
     * Constructs a new <code>CreateSmartContractMonitoringSchema</code>.
     * @alias module:model/CreateSmartContractMonitoringSchema
     */
    constructor() { 
        
        CreateSmartContractMonitoringSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CreateSmartContractMonitoringSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CreateSmartContractMonitoringSchema} obj Optional instance to populate.
     * @return {module:model/CreateSmartContractMonitoringSchema} The populated <code>CreateSmartContractMonitoringSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CreateSmartContractMonitoringSchema();

            if (data.hasOwnProperty('subscriptionDetails')) {
                obj['subscriptionDetails'] = ResourceMonitoringSubscriptionDetails.constructFromObject(data['subscriptionDetails']);
            }
            if (data.hasOwnProperty('resourceMonitoring')) {
                obj['resourceMonitoring'] = ResourceMonitoringDetails.constructFromObject(data['resourceMonitoring']);
            }
            if (data.hasOwnProperty('subscription')) {
                obj['subscription'] = ResourceMonitoringSubscription.constructFromObject(data['subscription']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ResourceMonitoringSubscriptionDetails} subscriptionDetails
 */
CreateSmartContractMonitoringSchema.prototype['subscriptionDetails'] = undefined;

/**
 * @member {module:model/ResourceMonitoringDetails} resourceMonitoring
 */
CreateSmartContractMonitoringSchema.prototype['resourceMonitoring'] = undefined;

/**
 * @member {module:model/ResourceMonitoringSubscription} subscription
 */
CreateSmartContractMonitoringSchema.prototype['subscription'] = undefined;






export default CreateSmartContractMonitoringSchema;

