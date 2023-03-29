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
import PayeeCreditSchema from './PayeeCreditSchema';
import PayerCreditSchema from './PayerCreditSchema';

/**
 * The ApproveRequestDetailsSchema model module.
 * @module model/ApproveRequestDetailsSchema
 * @version 2.0
 */
class ApproveRequestDetailsSchema {
    /**
     * Constructs a new <code>ApproveRequestDetailsSchema</code>.
     * @alias module:model/ApproveRequestDetailsSchema
     */
    constructor() { 
        
        ApproveRequestDetailsSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>ApproveRequestDetailsSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ApproveRequestDetailsSchema} obj Optional instance to populate.
     * @return {module:model/ApproveRequestDetailsSchema} The populated <code>ApproveRequestDetailsSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ApproveRequestDetailsSchema();

            if (data.hasOwnProperty('payer')) {
                obj['payer'] = ApiClient.convertToType(data['payer'], [PayerCreditSchema]);
            }
            if (data.hasOwnProperty('mandate')) {
                obj['mandate'] = ApiClient.convertToType(data['mandate'], [PayeeCreditSchema]);
            }
            if (data.hasOwnProperty('overledgerSigningType')) {
                obj['overledgerSigningType'] = ApiClient.convertToType(data['overledgerSigningType'], 'String');
            }
        }
        return obj;
    }


}

/**
 * Who are the payers of this transaction
 * @member {Array.<module:model/PayerCreditSchema>} payer
 */
ApproveRequestDetailsSchema.prototype['payer'] = undefined;

/**
 * Who are the payees of this transaction
 * @member {Array.<module:model/PayeeCreditSchema>} mandate
 */
ApproveRequestDetailsSchema.prototype['mandate'] = undefined;

/**
 * @member {String} overledgerSigningType
 */
ApproveRequestDetailsSchema.prototype['overledgerSigningType'] = undefined;






export default ApproveRequestDetailsSchema;

