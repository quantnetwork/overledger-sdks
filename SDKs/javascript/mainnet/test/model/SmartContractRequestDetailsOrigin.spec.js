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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.QuantOverledgerApi);
  }
}(this, function(expect, QuantOverledgerApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new QuantOverledgerApi.SmartContractRequestDetailsOrigin();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('SmartContractRequestDetailsOrigin', function() {
    it('should create an instance of SmartContractRequestDetailsOrigin', function() {
      // uncomment below and update the code to test SmartContractRequestDetailsOrigin
      //var instance = new QuantOverledgerApi.SmartContractRequestDetailsOrigin();
      //expect(instance).to.be.a(QuantOverledgerApi.SmartContractRequestDetailsOrigin);
    });

    it('should have the property originId (base name: "originId")', function() {
      // uncomment below and update the code to test the property originId
      //var instance = new QuantOverledgerApi.SmartContractRequestDetailsOrigin();
      //expect(instance).to.be();
    });

  });

}));
