<?php
/**
 * MonitorAResourceApi
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
 * MonitorAResourceApi Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class MonitorAResourceApi
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
     * Operation resourceMonitoringAddress
     *
     * Monitor an address for incoming and outgoing transactions
     *
     * @param  string $authorization authorization (required)
     * @param  \OpenAPI\Client\Model\AddressMonitoringRequestSchema $address_monitoring_request_schema address_monitoring_request_schema (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return \OpenAPI\Client\Model\AddressMonitoringResponseSchema|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\InternalServerErrorSchema
     */
    public function resourceMonitoringAddress($authorization, $address_monitoring_request_schema)
    {
        list($response) = $this->resourceMonitoringAddressWithHttpInfo($authorization, $address_monitoring_request_schema);
        return $response;
    }

    /**
     * Operation resourceMonitoringAddressWithHttpInfo
     *
     * Monitor an address for incoming and outgoing transactions
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\AddressMonitoringRequestSchema $address_monitoring_request_schema (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return array of \OpenAPI\Client\Model\AddressMonitoringResponseSchema|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\InternalServerErrorSchema, HTTP status code, HTTP response headers (array of strings)
     */
    public function resourceMonitoringAddressWithHttpInfo($authorization, $address_monitoring_request_schema)
    {
        $request = $this->resourceMonitoringAddressRequest($authorization, $address_monitoring_request_schema);

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
                    if ('\OpenAPI\Client\Model\AddressMonitoringResponseSchema' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\AddressMonitoringResponseSchema', []),
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

            $returnType = '\OpenAPI\Client\Model\AddressMonitoringResponseSchema';
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
                        '\OpenAPI\Client\Model\AddressMonitoringResponseSchema',
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
     * Operation resourceMonitoringAddressAsync
     *
     * Monitor an address for incoming and outgoing transactions
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\AddressMonitoringRequestSchema $address_monitoring_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function resourceMonitoringAddressAsync($authorization, $address_monitoring_request_schema)
    {
        return $this->resourceMonitoringAddressAsyncWithHttpInfo($authorization, $address_monitoring_request_schema)
            ->then(
                function ($response) {
                    return $response[0];
                }
            );
    }

    /**
     * Operation resourceMonitoringAddressAsyncWithHttpInfo
     *
     * Monitor an address for incoming and outgoing transactions
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\AddressMonitoringRequestSchema $address_monitoring_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function resourceMonitoringAddressAsyncWithHttpInfo($authorization, $address_monitoring_request_schema)
    {
        $returnType = '\OpenAPI\Client\Model\AddressMonitoringResponseSchema';
        $request = $this->resourceMonitoringAddressRequest($authorization, $address_monitoring_request_schema);

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
     * Create request for operation 'resourceMonitoringAddress'
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\AddressMonitoringRequestSchema $address_monitoring_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Psr7\Request
     */
    public function resourceMonitoringAddressRequest($authorization, $address_monitoring_request_schema)
    {
        // verify the required parameter 'authorization' is set
        if ($authorization === null || (is_array($authorization) && count($authorization) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $authorization when calling resourceMonitoringAddress'
            );
        }
        if (strlen($authorization) > 4096) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling MonitorAResourceApi.resourceMonitoringAddress, must be smaller than or equal to 4096.');
        }
        if (strlen($authorization) < 0) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling MonitorAResourceApi.resourceMonitoringAddress, must be bigger than or equal to 0.');
        }
        if (!preg_match("/^Bearer [A-Za-z0-9\\-_. ]{1,4096}$/", $authorization)) {
            throw new \InvalidArgumentException("invalid value for \"authorization\" when calling MonitorAResourceApi.resourceMonitoringAddress, must conform to the pattern /^Bearer [A-Za-z0-9\\-_. ]{1,4096}$/.");
        }

        // verify the required parameter 'address_monitoring_request_schema' is set
        if ($address_monitoring_request_schema === null || (is_array($address_monitoring_request_schema) && count($address_monitoring_request_schema) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $address_monitoring_request_schema when calling resourceMonitoringAddress'
            );
        }

        $resourcePath = '/v2/resourcemonitoring/address';
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
        if (isset($address_monitoring_request_schema)) {
            if ($headers['Content-Type'] === 'application/json') {
                $httpBody = \GuzzleHttp\json_encode(ObjectSerializer::sanitizeForSerialization($address_monitoring_request_schema));
            } else {
                $httpBody = $address_monitoring_request_schema;
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
     * Operation trackAndSubscribeEvent
     *
     * Monitor a smart contract for an event
     *
     * @param  string $authorization authorization (required)
     * @param  \OpenAPI\Client\Model\MonitorSmartContractRequestSchema $monitor_smart_contract_request_schema monitor_smart_contract_request_schema (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return \OpenAPI\Client\Model\CreateSmartContractMonitoringSchema|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\InternalServerErrorSchema
     */
    public function trackAndSubscribeEvent($authorization, $monitor_smart_contract_request_schema)
    {
        list($response) = $this->trackAndSubscribeEventWithHttpInfo($authorization, $monitor_smart_contract_request_schema);
        return $response;
    }

    /**
     * Operation trackAndSubscribeEventWithHttpInfo
     *
     * Monitor a smart contract for an event
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\MonitorSmartContractRequestSchema $monitor_smart_contract_request_schema (required)
     *
     * @throws \OpenAPI\Client\ApiException on non-2xx response
     * @throws \InvalidArgumentException
     * @return array of \OpenAPI\Client\Model\CreateSmartContractMonitoringSchema|\OpenAPI\Client\Model\ErrorList|\OpenAPI\Client\Model\InternalServerErrorSchema, HTTP status code, HTTP response headers (array of strings)
     */
    public function trackAndSubscribeEventWithHttpInfo($authorization, $monitor_smart_contract_request_schema)
    {
        $request = $this->trackAndSubscribeEventRequest($authorization, $monitor_smart_contract_request_schema);

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
                    if ('\OpenAPI\Client\Model\CreateSmartContractMonitoringSchema' === '\SplFileObject') {
                        $content = $response->getBody(); //stream goes to serializer
                    } else {
                        $content = (string) $response->getBody();
                    }

                    return [
                        ObjectSerializer::deserialize($content, '\OpenAPI\Client\Model\CreateSmartContractMonitoringSchema', []),
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

            $returnType = '\OpenAPI\Client\Model\CreateSmartContractMonitoringSchema';
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
                        '\OpenAPI\Client\Model\CreateSmartContractMonitoringSchema',
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
     * Operation trackAndSubscribeEventAsync
     *
     * Monitor a smart contract for an event
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\MonitorSmartContractRequestSchema $monitor_smart_contract_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function trackAndSubscribeEventAsync($authorization, $monitor_smart_contract_request_schema)
    {
        return $this->trackAndSubscribeEventAsyncWithHttpInfo($authorization, $monitor_smart_contract_request_schema)
            ->then(
                function ($response) {
                    return $response[0];
                }
            );
    }

    /**
     * Operation trackAndSubscribeEventAsyncWithHttpInfo
     *
     * Monitor a smart contract for an event
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\MonitorSmartContractRequestSchema $monitor_smart_contract_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Promise\PromiseInterface
     */
    public function trackAndSubscribeEventAsyncWithHttpInfo($authorization, $monitor_smart_contract_request_schema)
    {
        $returnType = '\OpenAPI\Client\Model\CreateSmartContractMonitoringSchema';
        $request = $this->trackAndSubscribeEventRequest($authorization, $monitor_smart_contract_request_schema);

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
     * Create request for operation 'trackAndSubscribeEvent'
     *
     * @param  string $authorization (required)
     * @param  \OpenAPI\Client\Model\MonitorSmartContractRequestSchema $monitor_smart_contract_request_schema (required)
     *
     * @throws \InvalidArgumentException
     * @return \GuzzleHttp\Psr7\Request
     */
    public function trackAndSubscribeEventRequest($authorization, $monitor_smart_contract_request_schema)
    {
        // verify the required parameter 'authorization' is set
        if ($authorization === null || (is_array($authorization) && count($authorization) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $authorization when calling trackAndSubscribeEvent'
            );
        }
        if (strlen($authorization) > 4096) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling MonitorAResourceApi.trackAndSubscribeEvent, must be smaller than or equal to 4096.');
        }
        if (strlen($authorization) < 0) {
            throw new \InvalidArgumentException('invalid length for "$authorization" when calling MonitorAResourceApi.trackAndSubscribeEvent, must be bigger than or equal to 0.');
        }
        if (!preg_match("/^Bearer [A-Za-z0-9\\-_. ]{1,4096}$/", $authorization)) {
            throw new \InvalidArgumentException("invalid value for \"authorization\" when calling MonitorAResourceApi.trackAndSubscribeEvent, must conform to the pattern /^Bearer [A-Za-z0-9\\-_. ]{1,4096}$/.");
        }

        // verify the required parameter 'monitor_smart_contract_request_schema' is set
        if ($monitor_smart_contract_request_schema === null || (is_array($monitor_smart_contract_request_schema) && count($monitor_smart_contract_request_schema) === 0)) {
            throw new \InvalidArgumentException(
                'Missing the required parameter $monitor_smart_contract_request_schema when calling trackAndSubscribeEvent'
            );
        }

        $resourcePath = '/v2/resourcemonitoring/smartcontractevent';
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
        if (isset($monitor_smart_contract_request_schema)) {
            if ($headers['Content-Type'] === 'application/json') {
                $httpBody = \GuzzleHttp\json_encode(ObjectSerializer::sanitizeForSerialization($monitor_smart_contract_request_schema));
            } else {
                $httpBody = $monitor_smart_contract_request_schema;
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
