=begin comment

Quant Overledger API

Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

The version of the OpenAPI document: 2.0

Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator
# Please update the test cases below to test the API endpoints.
# Ref: https://openapi-generator.tech
#
use Test::More tests => 1; #TODO update number of test cases
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::OpenAPIClient::CreateAQRC721TokenCollectionTransactionApi');

my $api = WWW::OpenAPIClient::CreateAQRC721TokenCollectionTransactionApi->new();
isa_ok($api, 'WWW::OpenAPIClient::CreateAQRC721TokenCollectionTransactionApi');

#
# prepare_collect_request test
#
# uncomment below and update the test
#my $prepare_collect_request_authorization = undef; # replace NULL with a proper value
#my $prepare_collect_request_prepare_payment_transaction_request_schema = undef; # replace NULL with a proper value
#my $prepare_collect_request_result = $api->prepare_collect_request(authorization => $prepare_collect_request_authorization, prepare_payment_transaction_request_schema => $prepare_collect_request_prepare_payment_transaction_request_schema);

