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

use_ok('WWW::OpenAPIClient::ManageQRC20TokenSupplyApi');

my $api = WWW::OpenAPIClient::ManageQRC20TokenSupplyApi->new();
isa_ok($api, 'WWW::OpenAPIClient::ManageQRC20TokenSupplyApi');

#
# execute_prepared_request_transaction test
#
# uncomment below and update the test
#my $execute_prepared_request_transaction_authorization = undef; # replace NULL with a proper value
#my $execute_prepared_request_transaction_execute_transaction_request = undef; # replace NULL with a proper value
#my $execute_prepared_request_transaction_result = $api->execute_prepared_request_transaction(authorization => $execute_prepared_request_transaction_authorization, execute_transaction_request => $execute_prepared_request_transaction_execute_transaction_request);

#
# prepare_supply_request1 test
#
# uncomment below and update the test
#my $prepare_supply_request1_authorization = undef; # replace NULL with a proper value
#my $prepare_supply_request1_prepare_mint_transaction_request_schema_qrc20 = undef; # replace NULL with a proper value
#my $prepare_supply_request1_result = $api->prepare_supply_request1(authorization => $prepare_supply_request1_authorization, prepare_mint_transaction_request_schema_qrc20 => $prepare_supply_request1_prepare_mint_transaction_request_schema_qrc20);
