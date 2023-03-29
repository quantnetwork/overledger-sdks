#ifndef prepare_remove_secondary_account_transaction_request_schema_TEST
#define prepare_remove_secondary_account_transaction_request_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_remove_secondary_account_transaction_request_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_remove_secondary_account_transaction_request_schema.h"
prepare_remove_secondary_account_transaction_request_schema_t* instantiate_prepare_remove_secondary_account_transaction_request_schema(int include_optional);

#include "test_remove_secondary_account_details_schema.c"


prepare_remove_secondary_account_transaction_request_schema_t* instantiate_prepare_remove_secondary_account_transaction_request_schema(int include_optional) {
  prepare_remove_secondary_account_transaction_request_schema_t* prepare_remove_secondary_account_transaction_request_schema = NULL;
  if (include_optional) {
    prepare_remove_secondary_account_transaction_request_schema = prepare_remove_secondary_account_transaction_request_schema_create(
       // false, not to have infinite recursion
      instantiate_remove_secondary_account_details_schema(0)
    );
  } else {
    prepare_remove_secondary_account_transaction_request_schema = prepare_remove_secondary_account_transaction_request_schema_create(
      NULL
    );
  }

  return prepare_remove_secondary_account_transaction_request_schema;
}


#ifdef prepare_remove_secondary_account_transaction_request_schema_MAIN

void test_prepare_remove_secondary_account_transaction_request_schema(int include_optional) {
    prepare_remove_secondary_account_transaction_request_schema_t* prepare_remove_secondary_account_transaction_request_schema_1 = instantiate_prepare_remove_secondary_account_transaction_request_schema(include_optional);

	cJSON* jsonprepare_remove_secondary_account_transaction_request_schema_1 = prepare_remove_secondary_account_transaction_request_schema_convertToJSON(prepare_remove_secondary_account_transaction_request_schema_1);
	printf("prepare_remove_secondary_account_transaction_request_schema :\n%s\n", cJSON_Print(jsonprepare_remove_secondary_account_transaction_request_schema_1));
	prepare_remove_secondary_account_transaction_request_schema_t* prepare_remove_secondary_account_transaction_request_schema_2 = prepare_remove_secondary_account_transaction_request_schema_parseFromJSON(jsonprepare_remove_secondary_account_transaction_request_schema_1);
	cJSON* jsonprepare_remove_secondary_account_transaction_request_schema_2 = prepare_remove_secondary_account_transaction_request_schema_convertToJSON(prepare_remove_secondary_account_transaction_request_schema_2);
	printf("repeating prepare_remove_secondary_account_transaction_request_schema:\n%s\n", cJSON_Print(jsonprepare_remove_secondary_account_transaction_request_schema_2));
}

int main() {
  test_prepare_remove_secondary_account_transaction_request_schema(1);
  test_prepare_remove_secondary_account_transaction_request_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_remove_secondary_account_transaction_request_schema_MAIN
#endif // prepare_remove_secondary_account_transaction_request_schema_TEST
