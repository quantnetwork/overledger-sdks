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
import ResourceMonitoringAddressDetails from './ResourceMonitoringAddressDetails';
import ResourceMonitoringDetails from './ResourceMonitoringDetails';

/**
 * The UpdateAddressMonitoringSchema model module.
 * @module model/UpdateAddressMonitoringSchema
 * @version 2.0
 */
class UpdateAddressMonitoringSchema {
    /**
     * Constructs a new <code>UpdateAddressMonitoringSchema</code>.
     * @alias module:model/UpdateAddressMonitoringSchema
     */
    constructor() { 
        
        UpdateAddressMonitoringSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>UpdateAddressMonitoringSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/UpdateAddressMonitoringSchema} obj Optional instance to populate.
     * @return {module:model/UpdateAddressMonitoringSchema} The populated <code>UpdateAddressMonitoringSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new UpdateAddressMonitoringSchema();

            if (data.hasOwnProperty('addressMonitoringDetails')) {
                obj['addressMonitoringDetails'] = ResourceMonitoringAddressDetails.constructFromObject(data['addressMonitoringDetails']);
            }
            if (data.hasOwnProperty('resourceMonitoring')) {
                obj['resourceMonitoring'] = ResourceMonitoringDetails.constructFromObject(data['resourceMonitoring']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/ResourceMonitoringAddressDetails} addressMonitoringDetails
 */
UpdateAddressMonitoringSchema.prototype['addressMonitoringDetails'] = undefined;

/**
 * @member {module:model/ResourceMonitoringDetails} resourceMonitoring
 */
UpdateAddressMonitoringSchema.prototype['resourceMonitoring'] = undefined;






export default UpdateAddressMonitoringSchema;

