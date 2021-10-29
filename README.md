# overledger-sdks

This github repository provides different language SDKs, which can be found in the [SDK folder](https://github.com/quantnetwork/overledger-sdks/tree/main/SDKs), for the Overledger API.

## Generation Process

The SDKs are automatically generated from the [Overledger OpenAPI3 Document](https://github.com/quantnetwork/overledger-sdks/blob/main/overledger-openAPI3/swagger.json) via:

```
npm run generate-sdk-<selectedLanguage>
```

For a full set of language options see the scripts of [this package.json](https://github.com/quantnetwork/overledger-sdks/blob/main/package.json)
