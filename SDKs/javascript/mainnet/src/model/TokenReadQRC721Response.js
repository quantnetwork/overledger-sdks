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
import TokenReadResponseDetails from './TokenReadResponseDetails';

/**
 * The TokenReadQRC721Response model module.
 * @module model/TokenReadQRC721Response
 * @version 2.0
 */
class TokenReadQRC721Response {
    /**
     * Constructs a new <code>TokenReadQRC721Response</code>.
     * @alias module:model/TokenReadQRC721Response
     */
    constructor() { 
        
        TokenReadQRC721Response.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>TokenReadQRC721Response</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/TokenReadQRC721Response} obj Optional instance to populate.
     * @return {module:model/TokenReadQRC721Response} The populated <code>TokenReadQRC721Response</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new TokenReadQRC721Response();

            if (data.hasOwnProperty('tokenName')) {
                obj['tokenName'] = ApiClient.convertToType(data['tokenName'], 'String');
            }
            if (data.hasOwnProperty('responseDetails')) {
                obj['responseDetails'] = TokenReadResponseDetails.constructFromObject(data['responseDetails']);
            }
            if (data.hasOwnProperty('location')) {
                obj['location'] = Location.constructFromObject(data['location']);
            }
            if (data.hasOwnProperty('requestId')) {
                obj['requestId'] = ApiClient.convertToType(data['requestId'], 'String');
            }
        }
        return obj;
    }


}

/**
 * Name of the token
 * @member {String} tokenName
 */
TokenReadQRC721Response.prototype['tokenName'] = undefined;

/**
 * @member {module:model/TokenReadResponseDetails} responseDetails
 */
TokenReadQRC721Response.prototype['responseDetails'] = undefined;

/**
 * @member {module:model/Location} location
 */
TokenReadQRC721Response.prototype['location'] = undefined;

/**
 * The ID assigned to a preparation request in Overledger
 * @member {String} requestId
 */
TokenReadQRC721Response.prototype['requestId'] = undefined;






export default TokenReadQRC721Response;
