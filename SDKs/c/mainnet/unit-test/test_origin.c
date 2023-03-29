#ifndef origin_TEST
#define origin_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define origin_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/origin.h"
origin_t* instantiate_origin(int include_optional);

#include "test_smart_contract.c"


origin_t* instantiate_origin(int include_optional) {
  origin_t* origin = NULL;
  if (include_optional) {
    origin = origin_create(
      "a",
       // false, not to have infinite recursion
      instantiate_smart_contract(0),
      "a"
    );
  } else {
    origin = origin_create(
      "a",
      NULL,
      "a"
    );
  }

  return origin;
}


#ifdef origin_MAIN

void test_origin(int include_optional) {
    origin_t* origin_1 = instantiate_origin(include_optional);

	cJSON* jsonorigin_1 = origin_convertToJSON(origin_1);
	printf("origin :\n%s\n", cJSON_Print(jsonorigin_1));
	origin_t* origin_2 = origin_parseFromJSON(jsonorigin_1);
	cJSON* jsonorigin_2 = origin_convertToJSON(origin_2);
	printf("repeating origin:\n%s\n", cJSON_Print(jsonorigin_2));
}

int main() {
  test_origin(1);
  test_origin(0);

  printf("Hello world \n");
  return 0;
}

#endif // origin_MAIN
#endif // origin_TEST
