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

/**
 * The ExecuteSearchSequenceResponse model module.
 * @module model/ExecuteSearchSequenceResponse
 * @version 2.0
 */
class ExecuteSearchSequenceResponse {
    /**
     * Constructs a new <code>ExecuteSearchSequenceResponse</code>.
     * @alias module:model/ExecuteSearchSequenceResponse
     */
    constructor() { 
        
        ExecuteSearchSequenceResponse.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ExecuteSearchSequenceResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ExecuteSearchSequenceResponse} obj Optional instance to populate.
     * @return {module:model/ExecuteSearchSequenceResponse} The populated <code>ExecuteSearchSequenceResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ExecuteSearchSequenceResponse();

            if (data.hasOwnProperty('sequence')) {
                obj['sequence'] = ApiClient.convertToType(data['sequence'], 'String');
            }
            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'String');
            }
            if (data.hasOwnProperty('addressId')) {
                obj['addressId'] = ApiClient.convertToType(data['addressId'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} sequence
 */
ExecuteSearchSequenceResponse.prototype['sequence'] = undefined;

/**
 * @member {module:model/Location} location
 */
ExecuteSearchSequenceResponse.prototype['location'] = undefined;

/**
 * @member {String} timestamp
 */
ExecuteSearchSequenceResponse.prototype['timestamp'] = undefined;

/**
 * @member {String} addressId
 */
ExecuteSearchSequenceResponse.prototype['addressId'] = undefined;






export default ExecuteSearchSequenceResponse;

