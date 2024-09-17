> ❗**IMPORTANT**❗
>
> This repository, including the SDKs within it, has been archived and will no longer be maintained.
>
> For up-to-date multi-language examples to interact with each Overledger API, please visit Quant’s Developer Hub API reference pages, beginning [here](https://developers.quant.network/reference).
>
> ❗**IMPORTANT**❗

# overledger-sdks

This github repository provides different language SDKs, which can be found in the [SDK folder](https://github.com/quantnetwork/overledger-sdks/tree/main/SDKs), for the Overledger DLT API Gateway.

## How To Use

The SDK packages provide functions for interacting with Overledger according to the manner detailed in the OpenAPI3 documents in [this folder](https://github.com/quantnetwork/overledger-sdks/tree/main/overledger-openAPI3). A UI version of these documents can be found [here](https://docs.overledger.io/).

To use the SDKs with Overledger, you will need an Overledger client ID and client secret, which are generated via the [Overledger Developer Portal](https://developer.quant.network/).

## SDK Regeneration Process

When Overledger's APIs are extended, the SDKs will need to be regenerated to make use of the new Overledger features. Before regeneration, make sure that your openAPI3 documents are updated in [this folder](https://github.com/quantnetwork/overledger-sdks/tree/main/overledger-openAPI3). Pay particular attention to the token url in the security scheme section and the url in the servers section, to make sure that they point to the correct mainnet or testnet instance of Overledger.

Firstly git clone this repo. Then run `npm install`.

Now the SDKs are automatically generated from the Overledger OpenAPI3 Document via:

```
npm run generate-{mainnet,testnet}-sdk-{c#,c,go,haskell,java,javascript,kotlin,perl,php,ruby,rust,typescript-axios}
```

**Note that the openAPI3 doc cannot contain OneOf or AllOf options**

For a full set of available scripts see [this package.json](https://github.com/quantnetwork/overledger-sdks/blob/main/package.json).

