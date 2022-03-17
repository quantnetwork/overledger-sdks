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
import ResourceMonitoringSmartContractEventDetails from './ResourceMonitoringSmartContractEventDetails';
import SmartContractEventHistory from './SmartContractEventHistory';
import Status from './Status';

/**
 * The SmartContractMonitoringDetailsSchema model module.
 * @module model/SmartContractMonitoringDetailsSchema
 * @version 2.0
 */
class SmartContractMonitoringDetailsSchema {
    /**
     * Constructs a new <code>SmartContractMonitoringDetailsSchema</code>.
     * @alias module:model/SmartContractMonitoringDetailsSchema
     */
    constructor() { 
        
        SmartContractMonitoringDetailsSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SmartContractMonitoringDetailsSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SmartContractMonitoringDetailsSchema} obj Optional instance to populate.
     * @return {module:model/SmartContractMonitoringDetailsSchema} The populated <code>SmartContractMonitoringDetailsSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SmartContractMonitoringDetailsSchema();

            if (data.hasOwnProperty('smartContractEventHistory')) {
                obj['smartContractEventHistory'] = ApiClient.convertToType(data['smartContractEventHistory'], [SmartContractEventHistory]);
            }
            if (data.hasOwnProperty('smartContractEventDetails')) {
                obj['smartContractEventDetails'] = ResourceMonitoringSmartContractEventDetails.constructFromObject(data['smartContractEventDetails']);
            }
            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = Status.constructFromObject(data['status']);
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'Date');
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/SmartContractEventHistory>} smartContractEventHistory
 */
SmartContractMonitoringDetailsSchema.prototype['smartContractEventHistory'] = undefined;

/**
 * @member {module:model/ResourceMonitoringSmartContractEventDetails} smartContractEventDetails
 */
SmartContractMonitoringDetailsSchema.prototype['smartContractEventDetails'] = undefined;

/**
 * @member {module:model/Location} location
 */
SmartContractMonitoringDetailsSchema.prototype['location'] = undefined;

/**
 * @member {String} type
 */
SmartContractMonitoringDetailsSchema.prototype['type'] = undefined;

/**
 * @member {module:model/Status} status
 */
SmartContractMonitoringDetailsSchema.prototype['status'] = undefined;

/**
 * @member {Date} timestamp
 */
SmartContractMonitoringDetailsSchema.prototype['timestamp'] = undefined;






export default SmartContractMonitoringDetailsSchema;

