#ifndef destination_transfer_schema_TEST
#define destination_transfer_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define destination_transfer_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/destination_transfer_schema.h"
destination_transfer_schema_t* instantiate_destination_transfer_schema(int include_optional);

#include "test_transfer_schema.c"


destination_transfer_schema_t* instantiate_destination_transfer_schema(int include_optional) {
  destination_transfer_schema_t* destination_transfer_schema = NULL;
  if (include_optional) {
    destination_transfer_schema = destination_transfer_schema_create(
       // false, not to have infinite recursion
      instantiate_transfer_schema(0),
      "a"
    );
  } else {
    destination_transfer_schema = destination_transfer_schema_create(
      NULL,
      "a"
    );
  }

  return destination_transfer_schema;
}


#ifdef destination_transfer_schema_MAIN

void test_destination_transfer_schema(int include_optional) {
    destination_transfer_schema_t* destination_transfer_schema_1 = instantiate_destination_transfer_schema(include_optional);

	cJSON* jsondestination_transfer_schema_1 = destination_transfer_schema_convertToJSON(destination_transfer_schema_1);
	printf("destination_transfer_schema :\n%s\n", cJSON_Print(jsondestination_transfer_schema_1));
	destination_transfer_schema_t* destination_transfer_schema_2 = destination_transfer_schema_parseFromJSON(jsondestination_transfer_schema_1);
	cJSON* jsondestination_transfer_schema_2 = destination_transfer_schema_convertToJSON(destination_transfer_schema_2);
	printf("repeating destination_transfer_schema:\n%s\n", cJSON_Print(jsondestination_transfer_schema_2));
}

int main() {
  test_destination_transfer_schema(1);
  test_destination_transfer_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // destination_transfer_schema_MAIN
#endif // destination_transfer_schema_TEST
