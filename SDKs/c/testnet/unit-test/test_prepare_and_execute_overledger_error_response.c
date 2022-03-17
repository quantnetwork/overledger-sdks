#ifndef prepare_and_execute_overledger_error_response_TEST
#define prepare_and_execute_overledger_error_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_and_execute_overledger_error_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_and_execute_overledger_error_response.h"
prepare_and_execute_overledger_error_response_t* instantiate_prepare_and_execute_overledger_error_response(int include_optional);



prepare_and_execute_overledger_error_response_t* instantiate_prepare_and_execute_overledger_error_response(int include_optional) {
  prepare_and_execute_overledger_error_response_t* prepare_and_execute_overledger_error_response = NULL;
  if (include_optional) {
    prepare_and_execute_overledger_error_response = prepare_and_execute_overledger_error_response_create(
      "0",
      "0",
      "0"
    );
  } else {
    prepare_and_execute_overledger_error_response = prepare_and_execute_overledger_error_response_create(
      "0",
      "0",
      "0"
    );
  }

  return prepare_and_execute_overledger_error_response;
}


#ifdef prepare_and_execute_overledger_error_response_MAIN

void test_prepare_and_execute_overledger_error_response(int include_optional) {
    prepare_and_execute_overledger_error_response_t* prepare_and_execute_overledger_error_response_1 = instantiate_prepare_and_execute_overledger_error_response(include_optional);

	cJSON* jsonprepare_and_execute_overledger_error_response_1 = prepare_and_execute_overledger_error_response_convertToJSON(prepare_and_execute_overledger_error_response_1);
	printf("prepare_and_execute_overledger_error_response :\n%s\n", cJSON_Print(jsonprepare_and_execute_overledger_error_response_1));
	prepare_and_execute_overledger_error_response_t* prepare_and_execute_overledger_error_response_2 = prepare_and_execute_overledger_error_response_parseFromJSON(jsonprepare_and_execute_overledger_error_response_1);
	cJSON* jsonprepare_and_execute_overledger_error_response_2 = prepare_and_execute_overledger_error_response_convertToJSON(prepare_and_execute_overledger_error_response_2);
	printf("repeating prepare_and_execute_overledger_error_response:\n%s\n", cJSON_Print(jsonprepare_and_execute_overledger_error_response_2));
}

int main() {
  test_prepare_and_execute_overledger_error_response(1);
  test_prepare_and_execute_overledger_error_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_and_execute_overledger_error_response_MAIN
#endif // prepare_and_execute_overledger_error_response_TEST
