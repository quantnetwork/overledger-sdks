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
import Destination from './Destination';
import Location from './Location';
import Status from './Status';

/**
 * The ExecuteSearchUTXOResponse model module.
 * @module model/ExecuteSearchUTXOResponse
 * @version 2.0
 */
class ExecuteSearchUTXOResponse {
    /**
     * Constructs a new <code>ExecuteSearchUTXOResponse</code>.
     * @alias module:model/ExecuteSearchUTXOResponse
     */
    constructor() { 
        
        ExecuteSearchUTXOResponse.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ExecuteSearchUTXOResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ExecuteSearchUTXOResponse} obj Optional instance to populate.
     * @return {module:model/ExecuteSearchUTXOResponse} The populated <code>ExecuteSearchUTXOResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ExecuteSearchUTXOResponse();

            if (data.hasOwnProperty('utxoId')) {
                obj['utxoId'] = ApiClient.convertToType(data['utxoId'], 'String');
            }
            if (data.hasOwnProperty('destination')) {
                obj['destination'] = ApiClient.convertToType(data['destination'], [Destination]);
            }
            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = Status.constructFromObject(data['status']);
            }
            if (data.hasOwnProperty('nativeData')) {
                obj['nativeData'] = ApiClient.convertToType(data['nativeData'], Object);
            }
        }
        return obj;
    }


}

/**
 * @member {String} utxoId
 */
ExecuteSearchUTXOResponse.prototype['utxoId'] = undefined;

/**
 * @member {Array.<module:model/Destination>} destination
 */
ExecuteSearchUTXOResponse.prototype['destination'] = undefined;

/**
 * @member {module:model/Location} location
 */
ExecuteSearchUTXOResponse.prototype['location'] = undefined;

/**
 * @member {String} timestamp
 */
ExecuteSearchUTXOResponse.prototype['timestamp'] = undefined;

/**
 * @member {module:model/Status} status
 */
ExecuteSearchUTXOResponse.prototype['status'] = undefined;

/**
 * @member {Object} nativeData
 */
ExecuteSearchUTXOResponse.prototype['nativeData'] = undefined;






export default ExecuteSearchUTXOResponse;

