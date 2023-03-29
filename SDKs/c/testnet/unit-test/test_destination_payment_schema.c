#ifndef destination_payment_schema_TEST
#define destination_payment_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define destination_payment_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/destination_payment_schema.h"
destination_payment_schema_t* instantiate_destination_payment_schema(int include_optional);

#include "test_payment_schema.c"


destination_payment_schema_t* instantiate_destination_payment_schema(int include_optional) {
  destination_payment_schema_t* destination_payment_schema = NULL;
  if (include_optional) {
    destination_payment_schema = destination_payment_schema_create(
      "a",
       // false, not to have infinite recursion
      instantiate_payment_schema(0)
    );
  } else {
    destination_payment_schema = destination_payment_schema_create(
      "a",
      NULL
    );
  }

  return destination_payment_schema;
}


#ifdef destination_payment_schema_MAIN

void test_destination_payment_schema(int include_optional) {
    destination_payment_schema_t* destination_payment_schema_1 = instantiate_destination_payment_schema(include_optional);

	cJSON* jsondestination_payment_schema_1 = destination_payment_schema_convertToJSON(destination_payment_schema_1);
	printf("destination_payment_schema :\n%s\n", cJSON_Print(jsondestination_payment_schema_1));
	destination_payment_schema_t* destination_payment_schema_2 = destination_payment_schema_parseFromJSON(jsondestination_payment_schema_1);
	cJSON* jsondestination_payment_schema_2 = destination_payment_schema_convertToJSON(destination_payment_schema_2);
	printf("repeating destination_payment_schema:\n%s\n", cJSON_Print(jsondestination_payment_schema_2));
}

int main() {
  test_destination_payment_schema(1);
  test_destination_payment_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // destination_payment_schema_MAIN
#endif // destination_payment_schema_TEST
