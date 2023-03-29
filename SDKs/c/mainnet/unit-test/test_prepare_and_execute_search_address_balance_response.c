#ifndef prepare_and_execute_search_address_balance_response_TEST
#define prepare_and_execute_search_address_balance_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_and_execute_search_address_balance_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_and_execute_search_address_balance_response.h"
prepare_and_execute_search_address_balance_response_t* instantiate_prepare_and_execute_search_address_balance_response(int include_optional);

#include "test_location.c"


prepare_and_execute_search_address_balance_response_t* instantiate_prepare_and_execute_search_address_balance_response(int include_optional) {
  prepare_and_execute_search_address_balance_response_t* prepare_and_execute_search_address_balance_response = NULL;
  if (include_optional) {
    prepare_and_execute_search_address_balance_response = prepare_and_execute_search_address_balance_response_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_location(0),
      "0",
      "a"
    );
  } else {
    prepare_and_execute_search_address_balance_response = prepare_and_execute_search_address_balance_response_create(
      list_create(),
      NULL,
      "0",
      "a"
    );
  }

  return prepare_and_execute_search_address_balance_response;
}


#ifdef prepare_and_execute_search_address_balance_response_MAIN

void test_prepare_and_execute_search_address_balance_response(int include_optional) {
    prepare_and_execute_search_address_balance_response_t* prepare_and_execute_search_address_balance_response_1 = instantiate_prepare_and_execute_search_address_balance_response(include_optional);

	cJSON* jsonprepare_and_execute_search_address_balance_response_1 = prepare_and_execute_search_address_balance_response_convertToJSON(prepare_and_execute_search_address_balance_response_1);
	printf("prepare_and_execute_search_address_balance_response :\n%s\n", cJSON_Print(jsonprepare_and_execute_search_address_balance_response_1));
	prepare_and_execute_search_address_balance_response_t* prepare_and_execute_search_address_balance_response_2 = prepare_and_execute_search_address_balance_response_parseFromJSON(jsonprepare_and_execute_search_address_balance_response_1);
	cJSON* jsonprepare_and_execute_search_address_balance_response_2 = prepare_and_execute_search_address_balance_response_convertToJSON(prepare_and_execute_search_address_balance_response_2);
	printf("repeating prepare_and_execute_search_address_balance_response:\n%s\n", cJSON_Print(jsonprepare_and_execute_search_address_balance_response_2));
}

int main() {
  test_prepare_and_execute_search_address_balance_response(1);
  test_prepare_and_execute_search_address_balance_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_and_execute_search_address_balance_response_MAIN
#endif // prepare_and_execute_search_address_balance_response_TEST
