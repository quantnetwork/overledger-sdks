#ifndef origin_transfer_schema_TEST
#define origin_transfer_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define origin_transfer_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/origin_transfer_schema.h"
origin_transfer_schema_t* instantiate_origin_transfer_schema(int include_optional);



origin_transfer_schema_t* instantiate_origin_transfer_schema(int include_optional) {
  origin_transfer_schema_t* origin_transfer_schema = NULL;
  if (include_optional) {
    origin_transfer_schema = origin_transfer_schema_create(
      "a"
    );
  } else {
    origin_transfer_schema = origin_transfer_schema_create(
      "a"
    );
  }

  return origin_transfer_schema;
}


#ifdef origin_transfer_schema_MAIN

void test_origin_transfer_schema(int include_optional) {
    origin_transfer_schema_t* origin_transfer_schema_1 = instantiate_origin_transfer_schema(include_optional);

	cJSON* jsonorigin_transfer_schema_1 = origin_transfer_schema_convertToJSON(origin_transfer_schema_1);
	printf("origin_transfer_schema :\n%s\n", cJSON_Print(jsonorigin_transfer_schema_1));
	origin_transfer_schema_t* origin_transfer_schema_2 = origin_transfer_schema_parseFromJSON(jsonorigin_transfer_schema_1);
	cJSON* jsonorigin_transfer_schema_2 = origin_transfer_schema_convertToJSON(origin_transfer_schema_2);
	printf("repeating origin_transfer_schema:\n%s\n", cJSON_Print(jsonorigin_transfer_schema_2));
}

int main() {
  test_origin_transfer_schema(1);
  test_origin_transfer_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // origin_transfer_schema_MAIN
#endif // origin_transfer_schema_TEST
