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
import UTXODestination from './UTXODestination';
import UTXONativeData from './UTXONativeData';

/**
 * The ExecuteSearchUTXOResponseSchema model module.
 * @module model/ExecuteSearchUTXOResponseSchema
 * @version 2.0
 */
class ExecuteSearchUTXOResponseSchema {
    /**
     * Constructs a new <code>ExecuteSearchUTXOResponseSchema</code>.
     * @alias module:model/ExecuteSearchUTXOResponseSchema
     */
    constructor() { 
        
        ExecuteSearchUTXOResponseSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ExecuteSearchUTXOResponseSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ExecuteSearchUTXOResponseSchema} obj Optional instance to populate.
     * @return {module:model/ExecuteSearchUTXOResponseSchema} The populated <code>ExecuteSearchUTXOResponseSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ExecuteSearchUTXOResponseSchema();

            if (data.hasOwnProperty('utxoId')) {
                obj['utxoId'] = ApiClient.convertToType(data['utxoId'], 'String');
            }
            if (data.hasOwnProperty('destination')) {
                obj['destination'] = ApiClient.convertToType(data['destination'], [UTXODestination]);
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
                obj['nativeData'] = UTXONativeData.constructFromObject(data['nativeData']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} utxoId
 */
ExecuteSearchUTXOResponseSchema.prototype['utxoId'] = undefined;

/**
 * @member {Array.<module:model/UTXODestination>} destination
 */
ExecuteSearchUTXOResponseSchema.prototype['destination'] = undefined;

/**
 * @member {module:model/Location} location
 */
ExecuteSearchUTXOResponseSchema.prototype['location'] = undefined;

/**
 * @member {String} timestamp
 */
ExecuteSearchUTXOResponseSchema.prototype['timestamp'] = undefined;

/**
 * @member {module:model/Status} status
 */
ExecuteSearchUTXOResponseSchema.prototype['status'] = undefined;

/**
 * @member {module:model/UTXONativeData} nativeData
 */
ExecuteSearchUTXOResponseSchema.prototype['nativeData'] = undefined;






export default ExecuteSearchUTXOResponseSchema;

