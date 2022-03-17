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
import Status from './Status';

/**
 * The ExecuteTransactionResponse model module.
 * @module model/ExecuteTransactionResponse
 * @version 2.0
 */
class ExecuteTransactionResponse {
    /**
     * Constructs a new <code>ExecuteTransactionResponse</code>.
     * @alias module:model/ExecuteTransactionResponse
     */
    constructor() { 
        
        ExecuteTransactionResponse.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ExecuteTransactionResponse</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ExecuteTransactionResponse} obj Optional instance to populate.
     * @return {module:model/ExecuteTransactionResponse} The populated <code>ExecuteTransactionResponse</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ExecuteTransactionResponse();

            if (data.hasOwnProperty('urgency')) {
                obj['urgency'] = ApiClient.convertToType(data['urgency'], 'String');
            }
            if (data.hasOwnProperty('requestId')) {
                obj['requestId'] = ApiClient.convertToType(data['requestId'], 'String');
            }
            if (data.hasOwnProperty('overledgerTransactionId')) {
                obj['overledgerTransactionId'] = ApiClient.convertToType(data['overledgerTransactionId'], 'String');
            }
            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('transactionId')) {
                obj['transactionId'] = ApiClient.convertToType(data['transactionId'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = Status.constructFromObject(data['status']);
            }
        }
        return obj;
    }


}

/**
 * @member {String} urgency
 */
ExecuteTransactionResponse.prototype['urgency'] = undefined;

/**
 * The ID assigned to a preparation request in Overledger
 * @member {String} requestId
 */
ExecuteTransactionResponse.prototype['requestId'] = undefined;

/**
 * @member {String} overledgerTransactionId
 */
ExecuteTransactionResponse.prototype['overledgerTransactionId'] = undefined;

/**
 * @member {module:model/Location} location
 */
ExecuteTransactionResponse.prototype['location'] = undefined;

/**
 * The type of the transaction executed
 * @member {String} type
 */
ExecuteTransactionResponse.prototype['type'] = undefined;

/**
 * The ID assigned by Overledger to a transaction submitted to a DLT via Overledger
 * @member {String} transactionId
 */
ExecuteTransactionResponse.prototype['transactionId'] = undefined;

/**
 * @member {module:model/Status} status
 */
ExecuteTransactionResponse.prototype['status'] = undefined;






export default ExecuteTransactionResponse;

