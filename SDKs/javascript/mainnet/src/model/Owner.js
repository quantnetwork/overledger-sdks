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
import Burn from './Burn';

/**
 * The Owner model module.
 * @module model/Owner
 * @version 2.0
 */
class Owner {
    /**
     * Constructs a new <code>Owner</code>.
     * Who is the owner of the tokens.
     * @alias module:model/Owner
     */
    constructor() { 
        
        Owner.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Owner</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Owner} obj Optional instance to populate.
     * @return {module:model/Owner} The populated <code>Owner</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Owner();

            if (data.hasOwnProperty('accountId')) {
                obj['accountId'] = ApiClient.convertToType(data['accountId'], 'String');
            }
            if (data.hasOwnProperty('burn')) {
                obj['burn'] = Burn.constructFromObject(data['burn']);
            }
            if (data.hasOwnProperty('unit')) {
                obj['unit'] = ApiClient.convertToType(data['unit'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} accountId
 */
Owner.prototype['accountId'] = undefined;

/**
 * @member {module:model/Burn} burn
 */
Owner.prototype['burn'] = undefined;

/**
 * @member {String} unit
 */
Owner.prototype['unit'] = undefined;






export default Owner;

