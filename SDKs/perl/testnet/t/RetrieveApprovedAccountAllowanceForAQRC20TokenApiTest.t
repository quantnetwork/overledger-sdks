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

use_ok('WWW::OpenAPIClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi');

my $api = WWW::OpenAPIClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi->new();
isa_ok($api, 'WWW::OpenAPIClient::RetrieveApprovedAccountAllowanceForAQRC20TokenApi');

#
# read_approved_debit_amount test
#
# uncomment below and update the test
#my $read_approved_debit_amount_authorization = undef; # replace NULL with a proper value
#my $read_approved_debit_amount_read_approved_account_allowance_request_schema = undef; # replace NULL with a proper value
#my $read_approved_debit_amount_result = $api->read_approved_debit_amount(authorization => $read_approved_debit_amount_authorization, read_approved_account_allowance_request_schema => $read_approved_debit_amount_read_approved_account_allowance_request_schema);

