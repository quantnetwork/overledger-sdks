#ifndef burn_request_details_schema_TEST
#define burn_request_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define burn_request_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/burn_request_details_schema.h"
burn_request_details_schema_t* instantiate_burn_request_details_schema(int include_optional);



burn_request_details_schema_t* instantiate_burn_request_details_schema(int include_optional) {
  burn_request_details_schema_t* burn_request_details_schema = NULL;
  if (include_optional) {
    burn_request_details_schema = burn_request_details_schema_create(
      list_create(),
      "a",
      "a"
    );
  } else {
    burn_request_details_schema = burn_request_details_schema_create(
      list_create(),
      "a",
      "a"
    );
  }

  return burn_request_details_schema;
}


#ifdef burn_request_details_schema_MAIN

void test_burn_request_details_schema(int include_optional) {
    burn_request_details_schema_t* burn_request_details_schema_1 = instantiate_burn_request_details_schema(include_optional);

	cJSON* jsonburn_request_details_schema_1 = burn_request_details_schema_convertToJSON(burn_request_details_schema_1);
	printf("burn_request_details_schema :\n%s\n", cJSON_Print(jsonburn_request_details_schema_1));
	burn_request_details_schema_t* burn_request_details_schema_2 = burn_request_details_schema_parseFromJSON(jsonburn_request_details_schema_1);
	cJSON* jsonburn_request_details_schema_2 = burn_request_details_schema_convertToJSON(burn_request_details_schema_2);
	printf("repeating burn_request_details_schema:\n%s\n", cJSON_Print(jsonburn_request_details_schema_2));
}

int main() {
  test_burn_request_details_schema(1);
  test_burn_request_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // burn_request_details_schema_MAIN
#endif // burn_request_details_schema_TEST
