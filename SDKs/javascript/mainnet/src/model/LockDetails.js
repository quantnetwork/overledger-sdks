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

/**
 * The LockDetails model module.
 * @module model/LockDetails
 * @version 2.0
 */
class LockDetails {
    /**
     * Constructs a new <code>LockDetails</code>.
     * Lock Details of the tokens
     * @alias module:model/LockDetails
     */
    constructor() { 
        
        LockDetails.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>LockDetails</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/LockDetails} obj Optional instance to populate.
     * @return {module:model/LockDetails} The populated <code>LockDetails</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new LockDetails();

            if (data.hasOwnProperty('expiryDate')) {
                obj['expiryDate'] = ApiClient.convertToType(data['expiryDate'], 'String');
            }
            if (data.hasOwnProperty('lockId')) {
                obj['lockId'] = ApiClient.convertToType(data['lockId'], 'String');
            }
            if (data.hasOwnProperty('accountId')) {
                obj['accountId'] = ApiClient.convertToType(data['accountId'], 'String');
            }
            if (data.hasOwnProperty('amount')) {
                obj['amount'] = ApiClient.convertToType(data['amount'], 'String');
            }
            if (data.hasOwnProperty('unit')) {
                obj['unit'] = ApiClient.convertToType(data['unit'], 'String');
            }
            if (data.hasOwnProperty('accountOwningInstitutionId')) {
                obj['accountOwningInstitutionId'] = ApiClient.convertToType(data['accountOwningInstitutionId'], 'String');
            }
            if (data.hasOwnProperty('lockDescription')) {
                obj['lockDescription'] = ApiClient.convertToType(data['lockDescription'], 'String');
            }
            if (data.hasOwnProperty('payeeId')) {
                obj['payeeId'] = ApiClient.convertToType(data['payeeId'], 'String');
            }
            if (data.hasOwnProperty('secret')) {
                obj['secret'] = ApiClient.convertToType(data['secret'], 'String');
            }
            if (data.hasOwnProperty('hash')) {
                obj['hash'] = ApiClient.convertToType(data['hash'], 'String');
            }
            if (data.hasOwnProperty('payeeOwningInstitutionId')) {
                obj['payeeOwningInstitutionId'] = ApiClient.convertToType(data['payeeOwningInstitutionId'], 'String');
            }
            if (data.hasOwnProperty('lockOwningInstitutionId')) {
                obj['lockOwningInstitutionId'] = ApiClient.convertToType(data['lockOwningInstitutionId'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} expiryDate
 */
LockDetails.prototype['expiryDate'] = undefined;

/**
 * @member {String} lockId
 */
LockDetails.prototype['lockId'] = undefined;

/**
 * @member {String} accountId
 */
LockDetails.prototype['accountId'] = undefined;

/**
 * @member {String} amount
 */
LockDetails.prototype['amount'] = undefined;

/**
 * @member {String} unit
 */
LockDetails.prototype['unit'] = undefined;

/**
 * @member {String} accountOwningInstitutionId
 */
LockDetails.prototype['accountOwningInstitutionId'] = undefined;

/**
 * @member {String} lockDescription
 */
LockDetails.prototype['lockDescription'] = undefined;

/**
 * @member {String} payeeId
 */
LockDetails.prototype['payeeId'] = undefined;

/**
 * @member {String} secret
 */
LockDetails.prototype['secret'] = undefined;

/**
 * @member {String} hash
 */
LockDetails.prototype['hash'] = undefined;

/**
 * @member {String} payeeOwningInstitutionId
 */
LockDetails.prototype['payeeOwningInstitutionId'] = undefined;

/**
 * @member {String} lockOwningInstitutionId
 */
LockDetails.prototype['lockOwningInstitutionId'] = undefined;






export default LockDetails;
