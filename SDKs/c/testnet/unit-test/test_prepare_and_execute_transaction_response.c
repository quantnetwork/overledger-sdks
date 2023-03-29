#ifndef prepare_and_execute_transaction_response_TEST
#define prepare_and_execute_transaction_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_and_execute_transaction_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_and_execute_transaction_response.h"
prepare_and_execute_transaction_response_t* instantiate_prepare_and_execute_transaction_response(int include_optional);

#include "test_prepare_transaction_response.c"
#include "test_execute_search_transaction_response.c"
#include "test_prepare_and_execute_overledger_error_response.c"


prepare_and_execute_transaction_response_t* instantiate_prepare_and_execute_transaction_response(int include_optional) {
  prepare_and_execute_transaction_response_t* prepare_and_execute_transaction_response = NULL;
  if (include_optional) {
    prepare_and_execute_transaction_response = prepare_and_execute_transaction_response_create(
       // false, not to have infinite recursion
      instantiate_prepare_transaction_response(0),
       // false, not to have infinite recursion
      instantiate_execute_search_transaction_response(0),
       // false, not to have infinite recursion
      instantiate_prepare_and_execute_overledger_error_response(0)
    );
  } else {
    prepare_and_execute_transaction_response = prepare_and_execute_transaction_response_create(
      NULL,
      NULL,
      NULL
    );
  }

  return prepare_and_execute_transaction_response;
}


#ifdef prepare_and_execute_transaction_response_MAIN

void test_prepare_and_execute_transaction_response(int include_optional) {
    prepare_and_execute_transaction_response_t* prepare_and_execute_transaction_response_1 = instantiate_prepare_and_execute_transaction_response(include_optional);

	cJSON* jsonprepare_and_execute_transaction_response_1 = prepare_and_execute_transaction_response_convertToJSON(prepare_and_execute_transaction_response_1);
	printf("prepare_and_execute_transaction_response :\n%s\n", cJSON_Print(jsonprepare_and_execute_transaction_response_1));
	prepare_and_execute_transaction_response_t* prepare_and_execute_transaction_response_2 = prepare_and_execute_transaction_response_parseFromJSON(jsonprepare_and_execute_transaction_response_1);
	cJSON* jsonprepare_and_execute_transaction_response_2 = prepare_and_execute_transaction_response_convertToJSON(prepare_and_execute_transaction_response_2);
	printf("repeating prepare_and_execute_transaction_response:\n%s\n", cJSON_Print(jsonprepare_and_execute_transaction_response_2));
}

int main() {
  test_prepare_and_execute_transaction_response(1);
  test_prepare_and_execute_transaction_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_and_execute_transaction_response_MAIN
#endif // prepare_and_execute_transaction_response_TEST
