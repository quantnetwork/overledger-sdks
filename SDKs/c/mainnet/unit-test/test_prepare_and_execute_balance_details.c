#ifndef prepare_and_execute_balance_details_TEST
#define prepare_and_execute_balance_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_and_execute_balance_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_and_execute_balance_details.h"
prepare_and_execute_balance_details_t* instantiate_prepare_and_execute_balance_details(int include_optional);



prepare_and_execute_balance_details_t* instantiate_prepare_and_execute_balance_details(int include_optional) {
  prepare_and_execute_balance_details_t* prepare_and_execute_balance_details = NULL;
  if (include_optional) {
    prepare_and_execute_balance_details = prepare_and_execute_balance_details_create(
      "a",
      "0"
    );
  } else {
    prepare_and_execute_balance_details = prepare_and_execute_balance_details_create(
      "a",
      "0"
    );
  }

  return prepare_and_execute_balance_details;
}


#ifdef prepare_and_execute_balance_details_MAIN

void test_prepare_and_execute_balance_details(int include_optional) {
    prepare_and_execute_balance_details_t* prepare_and_execute_balance_details_1 = instantiate_prepare_and_execute_balance_details(include_optional);

	cJSON* jsonprepare_and_execute_balance_details_1 = prepare_and_execute_balance_details_convertToJSON(prepare_and_execute_balance_details_1);
	printf("prepare_and_execute_balance_details :\n%s\n", cJSON_Print(jsonprepare_and_execute_balance_details_1));
	prepare_and_execute_balance_details_t* prepare_and_execute_balance_details_2 = prepare_and_execute_balance_details_parseFromJSON(jsonprepare_and_execute_balance_details_1);
	cJSON* jsonprepare_and_execute_balance_details_2 = prepare_and_execute_balance_details_convertToJSON(prepare_and_execute_balance_details_2);
	printf("repeating prepare_and_execute_balance_details:\n%s\n", cJSON_Print(jsonprepare_and_execute_balance_details_2));
}

int main() {
  test_prepare_and_execute_balance_details(1);
  test_prepare_and_execute_balance_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_and_execute_balance_details_MAIN
#endif // prepare_and_execute_balance_details_TEST
