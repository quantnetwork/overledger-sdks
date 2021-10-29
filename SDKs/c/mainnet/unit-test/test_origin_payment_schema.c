#ifndef origin_payment_schema_TEST
#define origin_payment_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define origin_payment_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/origin_payment_schema.h"
origin_payment_schema_t* instantiate_origin_payment_schema(int include_optional);



origin_payment_schema_t* instantiate_origin_payment_schema(int include_optional) {
  origin_payment_schema_t* origin_payment_schema = NULL;
  if (include_optional) {
    origin_payment_schema = origin_payment_schema_create(
      "a"
    );
  } else {
    origin_payment_schema = origin_payment_schema_create(
      "a"
    );
  }

  return origin_payment_schema;
}


#ifdef origin_payment_schema_MAIN

void test_origin_payment_schema(int include_optional) {
    origin_payment_schema_t* origin_payment_schema_1 = instantiate_origin_payment_schema(include_optional);

	cJSON* jsonorigin_payment_schema_1 = origin_payment_schema_convertToJSON(origin_payment_schema_1);
	printf("origin_payment_schema :\n%s\n", cJSON_Print(jsonorigin_payment_schema_1));
	origin_payment_schema_t* origin_payment_schema_2 = origin_payment_schema_parseFromJSON(jsonorigin_payment_schema_1);
	cJSON* jsonorigin_payment_schema_2 = origin_payment_schema_convertToJSON(origin_payment_schema_2);
	printf("repeating origin_payment_schema:\n%s\n", cJSON_Print(jsonorigin_payment_schema_2));
}

int main() {
  test_origin_payment_schema(1);
  test_origin_payment_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // origin_payment_schema_MAIN
#endif // origin_payment_schema_TEST
