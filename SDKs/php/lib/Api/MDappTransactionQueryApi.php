<?php
/**
 * MDappTransactionQueryApi
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
 * Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->
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
 * MDappTransactionQueryApi Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class MDappTransactionQueryApi
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
     * Operation getOvlTransactionByTxId
     *
     * Retrieve information about a specific transaction created by your application in Overledger
     *
     * @param  string $authorization authorization (required)
     * @param  string $overledgertransactionid overledgertransactionid (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return \OpenAPI\Client\Model\OverledgerTransactionResponseSchema|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\ErrorDetails|\OpenAPI\Client\Model\InternalServerErrorSchema
     */
    public function getOvlTransactionByTxId($authorization, $overledgertransactionid)
    {
        list($response) = $this->getOvlTransactionByTxIdWithHttpInfo($authorization, $overledgertransactionid);
        return $response;
    }

    /**
     * Operation getOvlTransactionByTxIdWithHttpInfo
     *
     * Retrieve information about a specific transaction created by your application in Overledger
     *
     * @param  string $authorization (required)
     * @param  string $overledgertransactionid (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return array of \OpenAPI\Client\Model\OverledgerTransactionResponseSchema|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\ErrorDetails|\OpenAPI\Client\Model\InternalServerErrorSchema, HTTP status code, HTTP response headers (array of strings)
     */
    public function getOvlTransactionByTxIdWithHttpInfo($authorization, $overledgertransactionid)
    {
        $request = $this->getOvlTransactionByTxIdRequest($authorization, $overledgertransactionid);

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
                    if ('\OpenAPI\Client\Model\OverledgerTransactionResponseSchema' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\OverledgerTransactionResponseSchema', []),
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

            $returnType = '\OpenAPI\Client\Model\OverledgerTransactionResponseSchema';
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
                        '\OpenAPI\Client\Model\OverledgerTransactionResponseSchema',
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
     * Operation getOvlTransactionByTxIdAsync
     *
     * Retrieve information about a specific transaction created by your application in Overledger
     *
     * @param  string $authorization (required)
     * @param  string $overledgertransactionid (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function getOvlTransactionByTxIdAsync($authorization, $overledgertransactionid)
    {
        return $this->getOvlTransactionByTxIdAsyncWithHttpInfo($authorization, $overledgertransactionid)
            ->then(
                function ($response) {
                    return $response[0];
                }
            );
    }

    /**
     * Operation getOvlTransactionByTxIdAsyncWithHttpInfo
     *
     * Retrieve information about a specific transaction created by your application in Overledger
     *
     * @param  string $authorization (required)
     * @param  string $overledgertransactionid (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function getOvlTransactionByTxIdAsyncWithHttpInfo($authorization, $overledgertransactionid)
    {
        $returnType = '\OpenAPI\Client\Model\OverledgerTransactionResponseSchema';
        $request = $this->getOvlTransactionByTxIdRequest($authorization, $overledgertransactionid);

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
     * Create request for operation 'getOvlTransactionByTxId'
     *
     * @param  string $authorization (required)
     * @param  string $overledgertransactionid (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Psr7\Request
     */
    public function getOvlTransactionByTxIdRequest($authorization, $overledgertransactionid)
    {
        // verify the required parameter 'authorization' is set
        if ($authorization === null || (is_array($authorization) && count($authorization) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $authorization when calling getOvlTransactionByTxId'
            );
        }
        if (strlen($authorization) > 1024) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling MDappTransactionQueryApi.getOvlTransactionByTxId, must be smaller than or equal to 1024.');
        }
        if (strlen($authorization) < 0) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling MDappTransactionQueryApi.getOvlTransactionByTxId, must be bigger than or equal to 0.');
        }
        if (!preg_match("/^Bearer [A-Za-z0-9\\-_. ]{1,1024}$/", $authorization)) {
            throw new \InvalidArgumentException("invalid value for \"authorization\" when calling MDappTransactionQueryApi.getOvlTransactionByTxId, must conform to the pattern /^Bearer [A-Za-z0-9\\-_. ]{1,1024}$/.");
        }

        // verify the required parameter 'overledgertransactionid' is set
        if ($overledgertransactionid === null || (is_array($overledgertransactionid) && count($overledgertransactionid) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $overledgertransactionid when calling getOvlTransactionByTxId'
            );
        }
        if (strlen($overledgertransactionid) > 36) {
            throw new \InvalidArgumentException('invalid length for "$overledgertransactionid" when calling MDappTransactionQueryApi.getOvlTransactionByTxId, must be smaller than or equal to 36.');
        }
        if (strlen($overledgertransactionid) < 0) {
            throw new \InvalidArgumentException('invalid length for "$overledgertransactionid" when calling MDappTransactionQueryApi.getOvlTransactionByTxId, must be bigger than or equal to 0.');
        }
        if (!preg_match("/^[a-zA-Z0-9\\-]{1,36}$/", $overledgertransactionid)) {
            throw new \InvalidArgumentException("invalid value for \"overledgertransactionid\" when calling MDappTransactionQueryApi.getOvlTransactionByTxId, must conform to the pattern /^[a-zA-Z0-9\\-]{1,36}$/.");
        }


        $resourcePath = '/v2/mdapptransaction/{overledgertransactionid}';
        $formParams = [];
        $queryParams = [];
        $headerParams = [];
        $httpBody = '';
        $multipart = false;


        // header params
        if ($authorization !== null) {
            $headerParams['Authorization'] = ObjectSerializer::toHeaderValue($authorization);
        }

        // path params
        if ($overledgertransactionid !== null) {
            $resourcePath = str_replace(
                '{' . 'overledgertransactionid' . '}',
                ObjectSerializer::toPathValue($overledgertransactionid),
                $resourcePath
            );
        }


        if ($multipart) {
            $headers = $this->headerSelector->selectHeadersForMultipart(
                ['application/json']
            );
        } else {
            $headers = $this->headerSelector->selectHeaders(
                ['application/json'],
                []
            );
        }

        // for model (json/xml)
        if (count($formParams) > 0) {
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
            'GET',
            $this->config->getHost() . $resourcePath . ($query ? "?{$query}" : ''),
            $headers,
            $httpBody
        );
    }

    /**
     * Operation getOvlTransactionsByClientId
     *
     * Retrieve a list of transactions created by your application in Overledger
     *
     * @param  string $authorization authorization (required)
     * @param  int $offset offset (optional, default to 0)
     * @param  int $length length (optional, default to 25)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return \OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\InternalServerErrorSchema
     */
    public function getOvlTransactionsByClientId($authorization, $offset = 0, $length = 25)
    {
        list($response) = $this->getOvlTransactionsByClientIdWithHttpInfo($authorization, $offset, $length);
        return $response;
    }

    /**
     * Operation getOvlTransactionsByClientIdWithHttpInfo
     *
     * Retrieve a list of transactions created by your application in Overledger
     *
     * @param  string $authorization (required)
     * @param  int $offset (optional, default to 0)
     * @param  int $length (optional, default to 25)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return array of \OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\InternalServerErrorSchema, HTTP status code, HTTP response headers (array of strings)
     */
    public function getOvlTransactionsByClientIdWithHttpInfo($authorization, $offset = 0, $length = 25)
    {
        $request = $this->getOvlTransactionsByClientIdRequest($authorization, $offset, $length);

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
                    if ('\OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]', []),
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

            $returnType = '\OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]';
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
                        '\OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]',
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
     * Operation getOvlTransactionsByClientIdAsync
     *
     * Retrieve a list of transactions created by your application in Overledger
     *
     * @param  string $authorization (required)
     * @param  int $offset (optional, default to 0)
     * @param  int $length (optional, default to 25)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function getOvlTransactionsByClientIdAsync($authorization, $offset = 0, $length = 25)
    {
        return $this->getOvlTransactionsByClientIdAsyncWithHttpInfo($authorization, $offset, $length)
            ->then(
                function ($response) {
                    return $response[0];
                }
            );
    }

    /**
     * Operation getOvlTransactionsByClientIdAsyncWithHttpInfo
     *
     * Retrieve a list of transactions created by your application in Overledger
     *
     * @param  string $authorization (required)
     * @param  int $offset (optional, default to 0)
     * @param  int $length (optional, default to 25)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function getOvlTransactionsByClientIdAsyncWithHttpInfo($authorization, $offset = 0, $length = 25)
    {
        $returnType = '\OpenAPI\Client\Model\OverledgerTransactionResponseSchema[]';
        $request = $this->getOvlTransactionsByClientIdRequest($authorization, $offset, $length);

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
     * Create request for operation 'getOvlTransactionsByClientId'
     *
     * @param  string $authorization (required)
     * @param  int $offset (optional, default to 0)
     * @param  int $length (optional, default to 25)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Psr7\Request
     */
    public function getOvlTransactionsByClientIdRequest($authorization, $offset = 0, $length = 25)
    {
        // verify the required parameter 'authorization' is set
        if ($authorization === null || (is_array($authorization) && count($authorization) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $authorization when calling getOvlTransactionsByClientId'
            );
        }
        if (strlen($authorization) > 1024) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling MDappTransactionQueryApi.getOvlTransactionsByClientId, must be smaller than or equal to 1024.');
        }
        if (strlen($authorization) < 0) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling MDappTransactionQueryApi.getOvlTransactionsByClientId, must be bigger than or equal to 0.');
        }
        if (!preg_match("/^Bearer [A-Za-z0-9\\-_. ]{1,1024}$/", $authorization)) {
            throw new \InvalidArgumentException("invalid value for \"authorization\" when calling MDappTransactionQueryApi.getOvlTransactionsByClientId, must conform to the pattern /^Bearer [A-Za-z0-9\\-_. ]{1,1024}$/.");
        }


        $resourcePath = '/v2/mdapptransactions';
        $formParams = [];
        $queryParams = [];
        $headerParams = [];
        $httpBody = '';
        $multipart = false;

        // query params
        if ($offset !== null) {
            if('form' === 'form' && is_array($offset)) {
                foreach($offset as $key => $value) {
                    $queryParams[$key] = $value;
                }
            }
            else {
                $queryParams['offset'] = $offset;
            }
        }
        // query params
        if ($length !== null) {
            if('form' === 'form' && is_array($length)) {
                foreach($length as $key => $value) {
                    $queryParams[$key] = $value;
                }
            }
            else {
                $queryParams['length'] = $length;
            }
        }

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
                []
            );
        }

        // for model (json/xml)
        if (count($formParams) > 0) {
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
            'GET',
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
