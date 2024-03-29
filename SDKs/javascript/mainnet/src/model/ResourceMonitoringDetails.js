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
import Location from './Location';
import Status from './Status';

/**
 * The ResourceMonitoringDetails model module.
 * @module model/ResourceMonitoringDetails
 * @version 2.0
 */
class ResourceMonitoringDetails {
    /**
     * Constructs a new <code>ResourceMonitoringDetails</code>.
     * @alias module:model/ResourceMonitoringDetails
     */
    constructor() { 
        
        ResourceMonitoringDetails.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ResourceMonitoringDetails</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResourceMonitoringDetails} obj Optional instance to populate.
     * @return {module:model/ResourceMonitoringDetails} The populated <code>ResourceMonitoringDetails</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResourceMonitoringDetails();

            if (data.hasOwnProperty('resourceMonitoringId')) {
                obj['resourceMonitoringId'] = ApiClient.convertToType(data['resourceMonitoringId'], 'String');
            }
            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = Status.constructFromObject(data['status']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} resourceMonitoringId
 */
ResourceMonitoringDetails.prototype['resourceMonitoringId'] = undefined;

/**
 * @member {module:model/Location} location
 */
ResourceMonitoringDetails.prototype['location'] = undefined;

/**
 * @member {String} type
 */
ResourceMonitoringDetails.prototype['type'] = undefined;

/**
 * @member {String} timestamp
 */
ResourceMonitoringDetails.prototype['timestamp'] = undefined;

/**
 * @member {module:model/Status} status
 */
ResourceMonitoringDetails.prototype['status'] = undefined;






export default ResourceMonitoringDetails;

