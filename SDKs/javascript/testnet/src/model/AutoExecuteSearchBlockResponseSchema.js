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
import ExecuteSearchBlockResponse from './ExecuteSearchBlockResponse';
import PrepareAndExecuteOverledgerErrorResponse from './PrepareAndExecuteOverledgerErrorResponse';
import PrepareSearchResponseSchema from './PrepareSearchResponseSchema';

/**
 * The AutoExecuteSearchBlockResponseSchema model module.
 * @module model/AutoExecuteSearchBlockResponseSchema
 * @version 2.0
 */
class AutoExecuteSearchBlockResponseSchema {
    /**
     * Constructs a new <code>AutoExecuteSearchBlockResponseSchema</code>.
     * @alias module:model/AutoExecuteSearchBlockResponseSchema
     */
    constructor() { 
        
        AutoExecuteSearchBlockResponseSchema.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>AutoExecuteSearchBlockResponseSchema</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AutoExecuteSearchBlockResponseSchema} obj Optional instance to populate.
     * @return {module:model/AutoExecuteSearchBlockResponseSchema} The populated <code>AutoExecuteSearchBlockResponseSchema</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AutoExecuteSearchBlockResponseSchema();

            if (data.hasOwnProperty('prepareAndExecuteOverledgerErrorResponse')) {
                obj['prepareAndExecuteOverledgerErrorResponse'] = PrepareAndExecuteOverledgerErrorResponse.constructFromObject(data['prepareAndExecuteOverledgerErrorResponse']);
            }
            if (data.hasOwnProperty('executionBlockSearchResponse')) {
                obj['executionBlockSearchResponse'] = ExecuteSearchBlockResponse.constructFromObject(data['executionBlockSearchResponse']);
            }
            if (data.hasOwnProperty('preparationBlockSearchResponse')) {
                obj['preparationBlockSearchResponse'] = PrepareSearchResponseSchema.constructFromObject(data['preparationBlockSearchResponse']);
            }
        }
        return obj;
    }


}

/**
 * @member {module:model/PrepareAndExecuteOverledgerErrorResponse} prepareAndExecuteOverledgerErrorResponse
 */
AutoExecuteSearchBlockResponseSchema.prototype['prepareAndExecuteOverledgerErrorResponse'] = undefined;

/**
 * @member {module:model/ExecuteSearchBlockResponse} executionBlockSearchResponse
 */
AutoExecuteSearchBlockResponseSchema.prototype['executionBlockSearchResponse'] = undefined;

/**
 * @member {module:model/PrepareSearchResponseSchema} preparationBlockSearchResponse
 */
AutoExecuteSearchBlockResponseSchema.prototype['preparationBlockSearchResponse'] = undefined;






export default AutoExecuteSearchBlockResponseSchema;

