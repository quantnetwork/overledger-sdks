#ifndef burn_schema_TEST
#define burn_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define burn_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/burn_schema.h"
burn_schema_t* instantiate_burn_schema(int include_optional);



burn_schema_t* instantiate_burn_schema(int include_optional) {
  burn_schema_t* burn_schema = NULL;
  if (include_optional) {
    burn_schema = burn_schema_create(
      "a",
      "a"
    );
  } else {
    burn_schema = burn_schema_create(
      "a",
      "a"
    );
  }

  return burn_schema;
}


#ifdef burn_schema_MAIN

void test_burn_schema(int include_optional) {
    burn_schema_t* burn_schema_1 = instantiate_burn_schema(include_optional);

	cJSON* jsonburn_schema_1 = burn_schema_convertToJSON(burn_schema_1);
	printf("burn_schema :\n%s\n", cJSON_Print(jsonburn_schema_1));
	burn_schema_t* burn_schema_2 = burn_schema_parseFromJSON(jsonburn_schema_1);
	cJSON* jsonburn_schema_2 = burn_schema_convertToJSON(burn_schema_2);
	printf("repeating burn_schema:\n%s\n", cJSON_Print(jsonburn_schema_2));
}

int main() {
  test_burn_schema(1);
  test_burn_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // burn_schema_MAIN
#endif // burn_schema_TEST
