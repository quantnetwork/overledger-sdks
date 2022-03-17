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
import Location from './Location';
import ResourceMonitoredAddressDetails from './ResourceMonitoredAddressDetails';

/**
 * The AddressMonitoringDetailsSchema model module.
 * @module model/AddressMonitoringDetailsSchema
 * @version 2.0
 */
class AddressMonitoringDetailsSchema {
    /**
     * Constructs a new <code>AddressMonitoringDetailsSchema</code>.
     * @alias module:model/AddressMonitoringDetailsSchema
     */
    constructor() { 
        
        AddressMonitoringDetailsSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>AddressMonitoringDetailsSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AddressMonitoringDetailsSchema} obj Optional instance to populate.
     * @return {module:model/AddressMonitoringDetailsSchema} The populated <code>AddressMonitoringDetailsSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AddressMonitoringDetailsSchema();

            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('addressDetails')) {
                obj['addressDetails'] = ResourceMonitoredAddressDetails.constructFromObject(data['addressDetails']);
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'Date');
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/Location} location
 */
AddressMonitoringDetailsSchema.prototype['location'] = undefined;

/**
 * @member {module:model/ResourceMonitoredAddressDetails} addressDetails
 */
AddressMonitoringDetailsSchema.prototype['addressDetails'] = undefined;

/**
 * @member {String} type
 */
AddressMonitoringDetailsSchema.prototype['type'] = undefined;

/**
 * @member {Date} timestamp
 */
AddressMonitoringDetailsSchema.prototype['timestamp'] = undefined;






export default AddressMonitoringDetailsSchema;

