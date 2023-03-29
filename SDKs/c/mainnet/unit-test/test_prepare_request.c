#ifndef prepare_request_TEST
#define prepare_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_request.h"
prepare_request_t* instantiate_prepare_request(int include_optional);

#include "test_prepare_request_details.c"
#include "test_location.c"


prepare_request_t* instantiate_prepare_request(int include_optional) {
  prepare_request_t* prepare_request = NULL;
  if (include_optional) {
    prepare_request = prepare_request_create(
      "0",
      list_create(),
      "a",
       // false, not to have infinite recursion
      instantiate_prepare_request_details(0),
      "0",
       // false, not to have infinite recursion
      instantiate_location(0),
      "0"
    );
  } else {
    prepare_request = prepare_request_create(
      "0",
      list_create(),
      "a",
      NULL,
      "0",
      NULL,
      "0"
    );
  }

  return prepare_request;
}


#ifdef prepare_request_MAIN

void test_prepare_request(int include_optional) {
    prepare_request_t* prepare_request_1 = instantiate_prepare_request(include_optional);

	cJSON* jsonprepare_request_1 = prepare_request_convertToJSON(prepare_request_1);
	printf("prepare_request :\n%s\n", cJSON_Print(jsonprepare_request_1));
	prepare_request_t* prepare_request_2 = prepare_request_parseFromJSON(jsonprepare_request_1);
	cJSON* jsonprepare_request_2 = prepare_request_convertToJSON(prepare_request_2);
	printf("repeating prepare_request:\n%s\n", cJSON_Print(jsonprepare_request_2));
}

int main() {
  test_prepare_request(1);
  test_prepare_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_request_MAIN
#endif // prepare_request_TEST
