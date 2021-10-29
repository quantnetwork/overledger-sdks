#ifndef prepare_payment_transaction_request_schema_TEST
#define prepare_payment_transaction_request_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_payment_transaction_request_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_payment_transaction_request_schema.h"
prepare_payment_transaction_request_schema_t* instantiate_prepare_payment_transaction_request_schema(int include_optional);

#include "test_payment_request_details_schema.c"
#include "test_location.c"


prepare_payment_transaction_request_schema_t* instantiate_prepare_payment_transaction_request_schema(int include_optional) {
  prepare_payment_transaction_request_schema_t* prepare_payment_transaction_request_schema = NULL;
  if (include_optional) {
    prepare_payment_transaction_request_schema = prepare_payment_transaction_request_schema_create(
      "a",
       // false, not to have infinite recursion
      instantiate_payment_request_details_schema(0),
       // false, not to have infinite recursion
      instantiate_location(0),
      "a"
    );
  } else {
    prepare_payment_transaction_request_schema = prepare_payment_transaction_request_schema_create(
      "a",
      NULL,
      NULL,
      "a"
    );
  }

  return prepare_payment_transaction_request_schema;
}


#ifdef prepare_payment_transaction_request_schema_MAIN

void test_prepare_payment_transaction_request_schema(int include_optional) {
    prepare_payment_transaction_request_schema_t* prepare_payment_transaction_request_schema_1 = instantiate_prepare_payment_transaction_request_schema(include_optional);

	cJSON* jsonprepare_payment_transaction_request_schema_1 = prepare_payment_transaction_request_schema_convertToJSON(prepare_payment_transaction_request_schema_1);
	printf("prepare_payment_transaction_request_schema :\n%s\n", cJSON_Print(jsonprepare_payment_transaction_request_schema_1));
	prepare_payment_transaction_request_schema_t* prepare_payment_transaction_request_schema_2 = prepare_payment_transaction_request_schema_parseFromJSON(jsonprepare_payment_transaction_request_schema_1);
	cJSON* jsonprepare_payment_transaction_request_schema_2 = prepare_payment_transaction_request_schema_convertToJSON(prepare_payment_transaction_request_schema_2);
	printf("repeating prepare_payment_transaction_request_schema:\n%s\n", cJSON_Print(jsonprepare_payment_transaction_request_schema_2));
}

int main() {
  test_prepare_payment_transaction_request_schema(1);
  test_prepare_payment_transaction_request_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_payment_transaction_request_schema_MAIN
#endif // prepare_payment_transaction_request_schema_TEST
