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

/**
 * The ExecuteTransactionRequest model module.
 * @module model/ExecuteTransactionRequest
 * @version 2.0
 */
class ExecuteTransactionRequest {
    /**
     * Constructs a new <code>ExecuteTransactionRequest</code>.
     * @alias module:model/ExecuteTransactionRequest
     * @param requestId {String} The ID assigned to a preparation request in Overledger
     * @param signed {String} The raw data after transaction signing
     */
    constructor(requestId, signed) { 
        
        ExecuteTransactionRequest.initialize(this, requestId, signed);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, requestId, signed) { 
        obj['requestId'] = requestId;
        obj['signed'] = signed;
    }

    /**
     * Constructs a <code>ExecuteTransactionRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ExecuteTransactionRequest} obj Optional instance to populate.
     * @return {module:model/ExecuteTransactionRequest} The populated <code>ExecuteTransactionRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ExecuteTransactionRequest();

            if (data.hasOwnProperty('requestId')) {
                obj['requestId'] = ApiClient.convertToType(data['requestId'], 'String');
            }
            if (data.hasOwnProperty('signed')) {
                obj['signed'] = ApiClient.convertToType(data['signed'], 'String');
            }
        }
        return obj;
    }


}

/**
 * The ID assigned to a preparation request in Overledger
 * @member {String} requestId
 */
ExecuteTransactionRequest.prototype['requestId'] = undefined;

/**
 * The raw data after transaction signing
 * @member {String} signed
 */
ExecuteTransactionRequest.prototype['signed'] = undefined;






export default ExecuteTransactionRequest;
