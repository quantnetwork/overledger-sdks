#ifndef overledger_transaction_response_schema_TEST
#define overledger_transaction_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define overledger_transaction_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/overledger_transaction_response_schema.h"
overledger_transaction_response_schema_t* instantiate_overledger_transaction_response_schema(int include_optional);

#include "test_location.c"
#include "test_status.c"


overledger_transaction_response_schema_t* instantiate_overledger_transaction_response_schema(int include_optional) {
  overledger_transaction_response_schema_t* overledger_transaction_response_schema = NULL;
  if (include_optional) {
    overledger_transaction_response_schema = overledger_transaction_response_schema_create(
      "a",
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_location(0),
      list_create(),
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_status(0)
    );
  } else {
    overledger_transaction_response_schema = overledger_transaction_response_schema_create(
      "a",
      "a",
      "a",
      NULL,
      list_create(),
      "a",
      "a",
      NULL
    );
  }

  return overledger_transaction_response_schema;
}


#ifdef overledger_transaction_response_schema_MAIN

void test_overledger_transaction_response_schema(int include_optional) {
    overledger_transaction_response_schema_t* overledger_transaction_response_schema_1 = instantiate_overledger_transaction_response_schema(include_optional);

	cJSON* jsonoverledger_transaction_response_schema_1 = overledger_transaction_response_schema_convertToJSON(overledger_transaction_response_schema_1);
	printf("overledger_transaction_response_schema :\n%s\n", cJSON_Print(jsonoverledger_transaction_response_schema_1));
	overledger_transaction_response_schema_t* overledger_transaction_response_schema_2 = overledger_transaction_response_schema_parseFromJSON(jsonoverledger_transaction_response_schema_1);
	cJSON* jsonoverledger_transaction_response_schema_2 = overledger_transaction_response_schema_convertToJSON(overledger_transaction_response_schema_2);
	printf("repeating overledger_transaction_response_schema:\n%s\n", cJSON_Print(jsonoverledger_transaction_response_schema_2));
}

int main() {
  test_overledger_transaction_response_schema(1);
  test_overledger_transaction_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // overledger_transaction_response_schema_MAIN
#endif // overledger_transaction_response_schema_TEST
