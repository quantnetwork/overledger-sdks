=begin comment

Quant Overledger API

Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

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

use_ok('WWW::OpenAPIClient::UTXOStatusSearchApi');

my $api = WWW::OpenAPIClient::UTXOStatusSearchApi->new();
isa_ok($api, 'WWW::OpenAPIClient::UTXOStatusSearchApi');

#
# auto_execute_search_utxo_request test
#
# uncomment below and update the test
#my $auto_execute_search_utxo_request_authorization = undef; # replace NULL with a proper value
#my $auto_execute_search_utxo_request_utxo_id = undef; # replace NULL with a proper value
#my $auto_execute_search_utxo_request_prepare_search_schema = undef; # replace NULL with a proper value
#my $auto_execute_search_utxo_request_result = $api->auto_execute_search_utxo_request(authorization => $auto_execute_search_utxo_request_authorization, utxo_id => $auto_execute_search_utxo_request_utxo_id, prepare_search_schema => $auto_execute_search_utxo_request_prepare_search_schema);

#
# execute_utxo_prepared_search_request test
#
# uncomment below and update the test
#my $execute_utxo_prepared_search_request_authorization = undef; # replace NULL with a proper value
#my $execute_utxo_prepared_search_request_request_id = undef; # replace NULL with a proper value
#my $execute_utxo_prepared_search_request_result = $api->execute_utxo_prepared_search_request(authorization => $execute_utxo_prepared_search_request_authorization, request_id => $execute_utxo_prepared_search_request_request_id);

#
# prepare_search_utxo_state test
#
# uncomment below and update the test
#my $prepare_search_utxo_state_authorization = undef; # replace NULL with a proper value
#my $prepare_search_utxo_state_utxo_id = undef; # replace NULL with a proper value
#my $prepare_search_utxo_state_prepare_search_schema = undef; # replace NULL with a proper value
#my $prepare_search_utxo_state_result = $api->prepare_search_utxo_state(authorization => $prepare_search_utxo_state_authorization, utxo_id => $prepare_search_utxo_state_utxo_id, prepare_search_schema => $prepare_search_utxo_state_prepare_search_schema);

