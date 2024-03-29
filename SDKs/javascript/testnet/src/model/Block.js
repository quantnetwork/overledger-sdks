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
import BlockHash from './BlockHash';
import BlockSize from './BlockSize';
import LinkedBlocks from './LinkedBlocks';

/**
 * The Block model module.
 * @module model/Block
 * @version 2.0
 */
class Block {
    /**
     * Constructs a new <code>Block</code>.
     * @alias module:model/Block
     */
    constructor() { 
        
        Block.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Block</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Block} obj Optional instance to populate.
     * @return {module:model/Block} The populated <code>Block</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Block();

            if (data.hasOwnProperty('blockId')) {
                obj['blockId'] = ApiClient.convertToType(data['blockId'], 'String');
            }
            if (data.hasOwnProperty('number')) {
                obj['number'] = ApiClient.convertToType(data['number'], 'Number');
            }
            if (data.hasOwnProperty('transactionIds')) {
                obj['transactionIds'] = ApiClient.convertToType(data['transactionIds'], ['String']);
            }
            if (data.hasOwnProperty('size')) {
                obj['size'] = ApiClient.convertToType(data['size'], [BlockSize]);
            }
            if (data.hasOwnProperty('hashes')) {
                obj['hashes'] = ApiClient.convertToType(data['hashes'], [BlockHash]);
            }
            if (data.hasOwnProperty('linkedBlocks')) {
                obj['linkedBlocks'] = LinkedBlocks.constructFromObject(data['linkedBlocks']);
            }
            if (data.hasOwnProperty('numberOfTransactions')) {
                obj['numberOfTransactions'] = ApiClient.convertToType(data['numberOfTransactions'], 'Number');
            }
            if (data.hasOwnProperty('message')) {
                obj['message'] = ApiClient.convertToType(data['message'], 'String');
            }
            if (data.hasOwnProperty('timestamp')) {
                obj['timestamp'] = ApiClient.convertToType(data['timestamp'], 'String');
            }
            if (data.hasOwnProperty('nativeData')) {
                obj['nativeData'] = ApiClient.convertToType(data['nativeData'], Object);
            }
        }
        return obj;
    }


}

/**
 * @member {String} blockId
 */
Block.prototype['blockId'] = undefined;

/**
 * @member {Number} number
 */
Block.prototype['number'] = undefined;

/**
 * @member {Array.<String>} transactionIds
 */
Block.prototype['transactionIds'] = undefined;

/**
 * @member {Array.<module:model/BlockSize>} size
 */
Block.prototype['size'] = undefined;

/**
 * @member {Array.<module:model/BlockHash>} hashes
 */
Block.prototype['hashes'] = undefined;

/**
 * @member {module:model/LinkedBlocks} linkedBlocks
 */
Block.prototype['linkedBlocks'] = undefined;

/**
 * @member {Number} numberOfTransactions
 */
Block.prototype['numberOfTransactions'] = undefined;

/**
 * @member {String} message
 */
Block.prototype['message'] = undefined;

/**
 * @member {String} timestamp
 */
Block.prototype['timestamp'] = undefined;

/**
 * @member {Object} nativeData
 */
Block.prototype['nativeData'] = undefined;






export default Block;

