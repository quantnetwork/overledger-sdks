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

use_ok('WWW::OpenAPIClient::MDappTransactionQueryApi');

my $api = WWW::OpenAPIClient::MDappTransactionQueryApi->new();
isa_ok($api, 'WWW::OpenAPIClient::MDappTransactionQueryApi');

#
# get_ovl_transaction_by_tx_id test
#
# uncomment below and update the test
#my $get_ovl_transaction_by_tx_id_authorization = undef; # replace NULL with a proper value
#my $get_ovl_transaction_by_tx_id_overledgertransactionid = undef; # replace NULL with a proper value
#my $get_ovl_transaction_by_tx_id_result = $api->get_ovl_transaction_by_tx_id(authorization => $get_ovl_transaction_by_tx_id_authorization, overledgertransactionid => $get_ovl_transaction_by_tx_id_overledgertransactionid);

#
# get_ovl_transactions_by_client_id test
#
# uncomment below and update the test
#my $get_ovl_transactions_by_client_id_authorization = undef; # replace NULL with a proper value
#my $get_ovl_transactions_by_client_id_offset = undef; # replace NULL with a proper value
#my $get_ovl_transactions_by_client_id_length = undef; # replace NULL with a proper value
#my $get_ovl_transactions_by_client_id_result = $api->get_ovl_transactions_by_client_id(authorization => $get_ovl_transactions_by_client_id_authorization, offset => $get_ovl_transactions_by_client_id_offset, length => $get_ovl_transactions_by_client_id_length);

