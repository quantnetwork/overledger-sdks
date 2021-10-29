# overledger-sdks

This github repository provides different language SDKs, which can be found in the [SDK folder](https://github.com/quantnetwork/overledger-sdks/tree/main/SDKs), for the Overledger API.

## Generation Process

Before generation, make sure that your openAPI3/swagger documents are updated in [this folder](https://github.com/quantnetwork/overledger-sdks/tree/main/overledger-openAPI3). Pay particular attention to the token url in the security scheme section and the url in the servers section, to make sure that they point to the correct mainnet or testnet instance of Overledger.


The SDKs are automatically generated from the [Overledger OpenAPI3 Document](https://github.com/quantnetwork/overledger-sdks/blob/main/overledger-openAPI3/swagger.json) via:

```
npm run generate-{mainnet,testnet}-sdk-{c#,c,go,haskell,java,javascript,kotlin,perl,php,ruby,rust,typescript-axios}
```

For a full set of available scripts see [this package.json](https://github.com/quantnetwork/overledger-sdks/blob/main/package.json)
