<?php
/**
 * CreateAndPayFromAQRC20SharedAccountApi
 * PHP version 7.3
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * Quant Overledger API
 *
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation
 *
 * The version of the OpenAPI document: 2.0
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 5.3.0
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Api;

use GuzzleHttp\Client;
use GuzzleHttp\ClientInterface;
use GuzzleHttp\Exception\RequestException;
use GuzzleHttp\Exception\ConnectException;
use GuzzleHttp\Psr7\MultipartStream;
use GuzzleHttp\Psr7\Request;
use GuzzleHttp\RequestOptions;
use OpenAPI\Client\ApiException;
use OpenAPI\Client\Configuration;
use OpenAPI\Client\HeaderSelector;
use OpenAPI\Client\ObjectSerializer;

/**
 * CreateAndPayFromAQRC20SharedAccountApi Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class CreateAndPayFromAQRC20SharedAccountApi
{
    /**
     * @var ClientInterface
     */
    protected $client;

    /**
     * @var Configuration
     */
    protected $config;

    /**
     * @var HeaderSelector
     */
    protected $headerSelector;

    /**
     * @var int Host index
     */
    protected $hostIndex;

    /**
     * @param ClientInterface $client
     * @param Configuration   $config
     * @param HeaderSelector  $selector
     * @param int             $hostIndex (Optional) host index to select the list of hosts if defined in the OpenAPI spec
     */
    public function __construct(
        ClientInterface $client = null,
        Configuration $config = null,
        HeaderSelector $selector = null,
        $hostIndex = 0
    ) {
        $this->client = $client ?: new Client();
        $this->config = $config ?: new Configuration();
        $this->headerSelector = $selector ?: new HeaderSelector();
        $this->hostIndex = $hostIndex;
    }

    /**
     * Set the host index
     *
     * @param int $hostIndex Host index (required)
     */
    public function setHostIndex($hostIndex): void
    {
        $this->hostIndex = $hostIndex;
    }

    /**
     * Get the host index
     *
     * @return int Host index
     */
    public function getHostIndex()
    {
        return $this->hostIndex;
    }

    /**
     * @return Configuration
     */
    public function getConfig()
    {
        return $this->config;
    }

    /**
     * Operation executePreparedRequestTransaction
     *
     * Execute a transaction on a DLT
     *
     * @param  string $authorization authorization (required)
     * @param  \OpenAPI\Client\Model\ExecuteTransactionRequest $execute_transaction_request execute_transaction_request (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return \OpenAPI\Client\Model\ExecuteTransactionResponse|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\ErrorDetails|\OpenAPI\Client\Model\InternalServerErrorSchema
     */
    public function executePreparedRequestTransaction($authorization, $execute_transaction_request)
    {
        list($response) = $this->executePreparedRequestTransactionWithHttpInfo($authorization, $execute_transaction_request);
        return $response;
    }

    /**
     * Operation executePreparedRequestTransactionWithHttpInfo
     *
     * Execute a transaction on a DLT
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\ExecuteTransactionRequest $execute_transaction_request (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return array of \OpenAPI\Client\Model\ExecuteTransactionResponse|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\ErrorDetails|\OpenAPI\Client\Model\InternalServerErrorSchema, HTTP status code, HTTP response headers (array of strings)
     */
    public function executePreparedRequestTransactionWithHttpInfo($authorization, $execute_transaction_request)
    {
        $request = $this->executePreparedRequestTransactionRequest($authorization, $execute_transaction_request);

        try {
            $options = $this->createHttpClientOption();
            try {
                $response = $this->client->send($request, $options);
            } catch (RequestException $e) {
                throw new ApiException(
                    "[{$e->getCode()}] {$e->getMessage()}",
                    (int) $e->getCode(),
                    $e->getResponse() ? $e->getResponse()->getHeaders() : null,
                    $e->getResponse() ? (string) $e->getResponse()->getBody() : null
                );
            } catch (ConnectException $e) {
                throw new ApiException(
                    "[{$e->getCode()}] {$e->getMessage()}",
                    (int) $e->getCode(),
                    null,
                    null
                );
            }

            $statusCode = $response->getStatusCode();

            if ($statusCode < 200 || $statusCode > 299) {
                throw new ApiException(
                    sprintf(
                        '[%d] Error connecting to the API (%s)',
                        $statusCode,
                        (string) $request->getUri()
                    ),
                    $statusCode,
                    $response->getHeaders(),
                    (string) $response->getBody()
                );
            }

            switch($statusCode) {
                case 200:
                    if ('\OpenAPI\Client\Model\ExecuteTransactionResponse' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\ExecuteTransactionResponse', []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
                case 401:
                    if ('\OpenAPI\Client\Model\ErrorList' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\ErrorList', []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
                case 404:
                    if ('\OpenAPI\Client\Model\ErrorDetails' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\ErrorDetails', []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
                case 500:
                    if ('\OpenAPI\Client\Model\InternalServerErrorSchema' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\InternalServerErrorSchema', []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
            }

            $returnType = '\OpenAPI\Client\Model\ExecuteTransactionResponse';
            if ($returnType === '\SplFileObject') {
                $content = $response->getBody(); //stream goes to serializer
            } else {
                $content = (string) $response->getBody();
            }

            return [
                ObjectSerializer::deserialize($content, $returnType, []),
                $response->getStatusCode(),
                $response->getHeaders()
            ];

        } catch (ApiException $e) {
            switch ($e->getCode()) {
                case 200:
                    $data = ObjectSerializer::deserialize(
                        $e->getResponseBody(),
                        '\OpenAPI\Client\Model\ExecuteTransactionResponse',
                        $e->getResponseHeaders()
                    );
                    $e->setResponseObject($data);
                    break;
                case 401:
                    $data = ObjectSerializer::deserialize(
                        $e->getResponseBody(),
                        '\OpenAPI\Client\Model\ErrorList',
                        $e->getResponseHeaders()
                    );
                    $e->setResponseObject($data);
                    break;
                case 404:
                    $data = ObjectSerializer::deserialize(
                        $e->getResponseBody(),
                        '\OpenAPI\Client\Model\ErrorDetails',
                        $e->getResponseHeaders()
                    );
                    $e->setResponseObject($data);
                    break;
                case 500:
                    $data = ObjectSerializer::deserialize(
                        $e->getResponseBody(),
                        '\OpenAPI\Client\Model\InternalServerErrorSchema',
                        $e->getResponseHeaders()
                    );
                    $e->setResponseObject($data);
                    break;
            }
            throw $e;
        }
    }

    /**
     * Operation executePreparedRequestTransactionAsync
     *
     * Execute a transaction on a DLT
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\ExecuteTransactionRequest $execute_transaction_request (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function executePreparedRequestTransactionAsync($authorization, $execute_transaction_request)
    {
        return $this->executePreparedRequestTransactionAsyncWithHttpInfo($authorization, $execute_transaction_request)
            ->then(
                function ($response) {
                    return $response[0];
                }
            );
    }

    /**
     * Operation executePreparedRequestTransactionAsyncWithHttpInfo
     *
     * Execute a transaction on a DLT
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\ExecuteTransactionRequest $execute_transaction_request (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function executePreparedRequestTransactionAsyncWithHttpInfo($authorization, $execute_transaction_request)
    {
        $returnType = '\OpenAPI\Client\Model\ExecuteTransactionResponse';
        $request = $this->executePreparedRequestTransactionRequest($authorization, $execute_transaction_request);

        return $this->client
            ->sendAsync($request, $this->createHttpClientOption())
            ->then(
                function ($response) use ($returnType) {
                    if ($returnType === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, $returnType, []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
                },
                function ($exception) {
                    $response = $exception->getResponse();
                    $statusCode = $response->getStatusCode();
                    throw new ApiException(
                        sprintf(
                            '[%d] Error connecting to the API (%s)',
                            $statusCode,
                            $exception->getRequest()->getUri()
                        ),
                        $statusCode,
                        $response->getHeaders(),
                        (string) $response->getBody()
                    );
                }
            );
    }

    /**
     * Create request for operation 'executePreparedRequestTransaction'
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\ExecuteTransactionRequest $execute_transaction_request (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Psr7\Request
     */
    public function executePreparedRequestTransactionRequest($authorization, $execute_transaction_request)
    {
        // verify the required parameter 'authorization' is set
        if ($authorization === null || (is_array($authorization) && count($authorization) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $authorization when calling executePreparedRequestTransaction'
            );
        }
        if (strlen($authorization) > 5010) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling CreateAndPayFromAQRC20SharedAccountApi.executePreparedRequestTransaction, must be smaller than or equal to 5010.');
        }
        if (strlen($authorization) < 0) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling CreateAndPayFromAQRC20SharedAccountApi.executePreparedRequestTransaction, must be bigger than or equal to 0.');
        }
        if (!preg_match("/^Bearer [A-Za-z0-9\\-_. ]{1,5010}$/", $authorization)) {
            throw new \InvalidArgumentException("invalid value for \"authorization\" when calling CreateAndPayFromAQRC20SharedAccountApi.executePreparedRequestTransaction, must conform to the pattern /^Bearer [A-Za-z0-9\\-_. ]{1,5010}$/.");
        }

        // verify the required parameter 'execute_transaction_request' is set
        if ($execute_transaction_request === null || (is_array($execute_transaction_request) && count($execute_transaction_request) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $execute_transaction_request when calling executePreparedRequestTransaction'
            );
        }

        $resourcePath = '/v2/execution/transaction';
        $formParams = [];
        $queryParams = [];
        $headerParams = [];
        $httpBody = '';
        $multipart = false;


        // header params
        if ($authorization !== null) {
            $headerParams['Authorization'] = ObjectSerializer::toHeaderValue($authorization);
        }



        if ($multipart) {
            $headers = $this->headerSelector->selectHeadersForMultipart(
                ['application/json']
            );
        } else {
            $headers = $this->headerSelector->selectHeaders(
                ['application/json'],
                ['application/json']
            );
        }

        // for model (json/xml)
        if (isset($execute_transaction_request)) {
            if ($headers['Content-Type'] === 'application/json') {
                $httpBody = \GuzzleHttp\json_encode(ObjectSerializer::sanitizeForSerialization($execute_transaction_request));
            } else {
                $httpBody = $execute_transaction_request;
            }
        } elseif (count($formParams) > 0) {
            if ($multipart) {
                $multipartContents = [];
                foreach ($formParams as $formParamName => $formParamValue) {
                    $formParamValueItems = is_array($formParamValue) ? $formParamValue : [$formParamValue];
                    foreach ($formParamValueItems as $formParamValueItem) {
                        $multipartContents[] = [
                            'name' => $formParamName,
                            'contents' => $formParamValueItem
                        ];
                    }
                }
                // for HTTP post (form)
                $httpBody = new MultipartStream($multipartContents);

            } elseif ($headers['Content-Type'] === 'application/json') {
                $httpBody = \GuzzleHttp\json_encode($formParams);

            } else {
                // for HTTP post (form)
                $httpBody = \GuzzleHttp\Psr7\Query::build($formParams);
            }
        }

        // this endpoint requires OAuth (access token)
        if ($this->config->getAccessToken() !== null) {
            $headers['Authorization'] = 'Bearer ' . $this->config->getAccessToken();
        }

        $defaultHeaders = [];
        if ($this->config->getUserAgent()) {
            $defaultHeaders['User-Agent'] = $this->config->getUserAgent();
        }

        $headers = array_merge(
            $defaultHeaders,
            $headerParams,
            $headers
        );

        $query = \GuzzleHttp\Psr7\Query::build($queryParams);
        return new Request(
            'POST',
            $this->config->getHost() . $resourcePath . ($query ? "?{$query}" : ''),
            $headers,
            $httpBody
        );
    }

    /**
     * Operation prepareSecondaryOwnerRequest
     *
     * Prepare a request for a QRC20 shared account
     *
     * @param  string $authorization authorization (required)
     * @param  \OpenAPI\Client\Model\PrepareAddSecondaryAccountRequestSchema $prepare_add_secondary_account_request_schema prepare_add_secondary_account_request_schema (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return \OpenAPI\Client\Model\PrepareTransactionResponse|\OpenAPI\Client\Model\ErrorDetails|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\InternalServerErrorSchema
     */
    public function prepareSecondaryOwnerRequest($authorization, $prepare_add_secondary_account_request_schema)
    {
        list($response) = $this->prepareSecondaryOwnerRequestWithHttpInfo($authorization, $prepare_add_secondary_account_request_schema);
        return $response;
    }

    /**
     * Operation prepareSecondaryOwnerRequestWithHttpInfo
     *
     * Prepare a request for a QRC20 shared account
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\PrepareAddSecondaryAccountRequestSchema $prepare_add_secondary_account_request_schema (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return array of \OpenAPI\Client\Model\PrepareTransactionResponse|\OpenAPI\Client\Model\ErrorDetails|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\InternalServerErrorSchema, HTTP status code, HTTP response headers (array of strings)
     */
    public function prepareSecondaryOwnerRequestWithHttpInfo($authorization, $prepare_add_secondary_account_request_schema)
    {
        $request = $this->prepareSecondaryOwnerRequestRequest($authorization, $prepare_add_secondary_account_request_schema);

        try {
            $options = $this->createHttpClientOption();
            try {
                $response = $this->client->send($request, $options);
            } catch (RequestException $e) {
                throw new ApiException(
                    "[{$e->getCode()}] {$e->getMessage()}",
                    (int) $e->getCode(),
                    $e->getResponse() ? $e->getResponse()->getHeaders() : null,
                    $e->getResponse() ? (string) $e->getResponse()->getBody() : null
                );
            } catch (ConnectException $e) {
                throw new ApiException(
                    "[{$e->getCode()}] {$e->getMessage()}",
                    (int) $e->getCode(),
                    null,
                    null
                );
            }

            $statusCode = $response->getStatusCode();

            if ($statusCode < 200 || $statusCode > 299) {
                throw new ApiException(
                    sprintf(
                        '[%d] Error connecting to the API (%s)',
                        $statusCode,
                        (string) $request->getUri()
                    ),
                    $statusCode,
                    $response->getHeaders(),
                    (string) $response->getBody()
                );
            }

            switch($statusCode) {
                case 200:
                    if ('\OpenAPI\Client\Model\PrepareTransactionResponse' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\PrepareTransactionResponse', []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
                case 400:
                    if ('\OpenAPI\Client\Model\ErrorDetails' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\ErrorDetails', []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
                case 401:
                    if ('\OpenAPI\Client\Model\ErrorList' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\ErrorList', []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
                case 500:
                    if ('\OpenAPI\Client\Model\InternalServerErrorSchema' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\InternalServerErrorSchema', []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
            }

            $returnType = '\OpenAPI\Client\Model\PrepareTransactionResponse';
            if ($returnType === '\SplFileObject') {
                $content = $response->getBody(); //stream goes to serializer
            } else {
                $content = (string) $response->getBody();
            }

            return [
                ObjectSerializer::deserialize($content, $returnType, []),
                $response->getStatusCode(),
                $response->getHeaders()
            ];

        } catch (ApiException $e) {
            switch ($e->getCode()) {
                case 200:
                    $data = ObjectSerializer::deserialize(
                        $e->getResponseBody(),
                        '\OpenAPI\Client\Model\PrepareTransactionResponse',
                        $e->getResponseHeaders()
                    );
                    $e->setResponseObject($data);
                    break;
                case 400:
                    $data = ObjectSerializer::deserialize(
                        $e->getResponseBody(),
                        '\OpenAPI\Client\Model\ErrorDetails',
                        $e->getResponseHeaders()
                    );
                    $e->setResponseObject($data);
                    break;
                case 401:
                    $data = ObjectSerializer::deserialize(
                        $e->getResponseBody(),
                        '\OpenAPI\Client\Model\ErrorList',
                        $e->getResponseHeaders()
                    );
                    $e->setResponseObject($data);
                    break;
                case 500:
                    $data = ObjectSerializer::deserialize(
                        $e->getResponseBody(),
                        '\OpenAPI\Client\Model\InternalServerErrorSchema',
                        $e->getResponseHeaders()
                    );
                    $e->setResponseObject($data);
                    break;
            }
            throw $e;
        }
    }

    /**
     * Operation prepareSecondaryOwnerRequestAsync
     *
     * Prepare a request for a QRC20 shared account
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\PrepareAddSecondaryAccountRequestSchema $prepare_add_secondary_account_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function prepareSecondaryOwnerRequestAsync($authorization, $prepare_add_secondary_account_request_schema)
    {
        return $this->prepareSecondaryOwnerRequestAsyncWithHttpInfo($authorization, $prepare_add_secondary_account_request_schema)
            ->then(
                function ($response) {
                    return $response[0];
                }
            );
    }

    /**
     * Operation prepareSecondaryOwnerRequestAsyncWithHttpInfo
     *
     * Prepare a request for a QRC20 shared account
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\PrepareAddSecondaryAccountRequestSchema $prepare_add_secondary_account_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function prepareSecondaryOwnerRequestAsyncWithHttpInfo($authorization, $prepare_add_secondary_account_request_schema)
    {
        $returnType = '\OpenAPI\Client\Model\PrepareTransactionResponse';
        $request = $this->prepareSecondaryOwnerRequestRequest($authorization, $prepare_add_secondary_account_request_schema);

        return $this->client
            ->sendAsync($request, $this->createHttpClientOption())
            ->then(
                function ($response) use ($returnType) {
                    if ($returnType === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, $returnType, []),
                        $response->getStatusCode(),
                        $response->getHeaders()
                    ];
                },
                function ($exception) {
                    $response = $exception->getResponse();
                    $statusCode = $response->getStatusCode();
                    throw new ApiException(
                        sprintf(
                            '[%d] Error connecting to the API (%s)',
                            $statusCode,
                            $exception->getRequest()->getUri()
                        ),
                        $statusCode,
                        $response->getHeaders(),
                        (string) $response->getBody()
                    );
                }
            );
    }

    /**
     * Create request for operation 'prepareSecondaryOwnerRequest'
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\PrepareAddSecondaryAccountRequestSchema $prepare_add_secondary_account_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Psr7\Request
     */
    public function prepareSecondaryOwnerRequestRequest($authorization, $prepare_add_secondary_account_request_schema)
    {
        // verify the required parameter 'authorization' is set
        if ($authorization === null || (is_array($authorization) && count($authorization) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $authorization when calling prepareSecondaryOwnerRequest'
            );
        }
        if (strlen($authorization) > 5010) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling CreateAndPayFromAQRC20SharedAccountApi.prepareSecondaryOwnerRequest, must be smaller than or equal to 5010.');
        }
        if (strlen($authorization) < 0) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling CreateAndPayFromAQRC20SharedAccountApi.prepareSecondaryOwnerRequest, must be bigger than or equal to 0.');
        }
        if (!preg_match("/^Bearer [A-Za-z0-9\\-_. ]{1,5010}$/", $authorization)) {
            throw new \InvalidArgumentException("invalid value for \"authorization\" when calling CreateAndPayFromAQRC20SharedAccountApi.prepareSecondaryOwnerRequest, must conform to the pattern /^Bearer [A-Za-z0-9\\-_. ]{1,5010}$/.");
        }

        // verify the required parameter 'prepare_add_secondary_account_request_schema' is set
        if ($prepare_add_secondary_account_request_schema === null || (is_array($prepare_add_secondary_account_request_schema) && count($prepare_add_secondary_account_request_schema) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $prepare_add_secondary_account_request_schema when calling prepareSecondaryOwnerRequest'
            );
        }

        $resourcePath = '/v2/preparation/secondaryaccountowner';
        $formParams = [];
        $queryParams = [];
        $headerParams = [];
        $httpBody = '';
        $multipart = false;


        // header params
        if ($authorization !== null) {
            $headerParams['Authorization'] = ObjectSerializer::toHeaderValue($authorization);
        }



        if ($multipart) {
            $headers = $this->headerSelector->selectHeadersForMultipart(
                ['application/json']
            );
        } else {
            $headers = $this->headerSelector->selectHeaders(
                ['application/json'],
                ['application/json']
            );
        }

        // for model (json/xml)
        if (isset($prepare_add_secondary_account_request_schema)) {
            if ($headers['Content-Type'] === 'application/json') {
                $httpBody = \GuzzleHttp\json_encode(ObjectSerializer::sanitizeForSerialization($prepare_add_secondary_account_request_schema));
            } else {
                $httpBody = $prepare_add_secondary_account_request_schema;
            }
        } elseif (count($formParams) > 0) {
            if ($multipart) {
                $multipartContents = [];
                foreach ($formParams as $formParamName => $formParamValue) {
                    $formParamValueItems = is_array($formParamValue) ? $formParamValue : [$formParamValue];
                    foreach ($formParamValueItems as $formParamValueItem) {
                        $multipartContents[] = [
                            'name' => $formParamName,
                            'contents' => $formParamValueItem
                        ];
                    }
                }
                // for HTTP post (form)
                $httpBody = new MultipartStream($multipartContents);

            } elseif ($headers['Content-Type'] === 'application/json') {
                $httpBody = \GuzzleHttp\json_encode($formParams);

            } else {
                // for HTTP post (form)
                $httpBody = \GuzzleHttp\Psr7\Query::build($formParams);
            }
        }

        // this endpoint requires OAuth (access token)
        if ($this->config->getAccessToken() !== null) {
            $headers['Authorization'] = 'Bearer ' . $this->config->getAccessToken();
        }

        $defaultHeaders = [];
        if ($this->config->getUserAgent()) {
            $defaultHeaders['User-Agent'] = $this->config->getUserAgent();
        }

        $headers = array_merge(
            $defaultHeaders,
            $headerParams,
            $headers
        );

        $query = \GuzzleHttp\Psr7\Query::build($queryParams);
        return new Request(
            'POST',
            $this->config->getHost() . $resourcePath . ($query ? "?{$query}" : ''),
            $headers,
            $httpBody
        );
    }

    /**
     * Create http client option
     *
     * @throws \RuntimeException on file opening failure
     * @return array of http client options
     */
    protected function createHttpClientOption()
    {
        $options = [];
        if ($this->config->getDebug()) {
            $options[RequestOptions::DEBUG] = fopen($this->config->getDebugFile(), 'a');
            if (!$options[RequestOptions::DEBUG]) {
                throw new \RuntimeException('Failed to open the debug file: ' . $this->config->getDebugFile());
            }
        }

        return $options;
    }
}
