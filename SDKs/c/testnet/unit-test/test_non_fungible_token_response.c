#ifndef non_fungible_token_response_TEST
#define non_fungible_token_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define non_fungible_token_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/non_fungible_token_response.h"
non_fungible_token_response_t* instantiate_non_fungible_token_response(int include_optional);

#include "test_location.c"


non_fungible_token_response_t* instantiate_non_fungible_token_response(int include_optional) {
  non_fungible_token_response_t* non_fungible_token_response = NULL;
  if (include_optional) {
    non_fungible_token_response = non_fungible_token_response_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_location(0),
      list_create(),
      "0",
      "0"
    );
  } else {
    non_fungible_token_response = non_fungible_token_response_create(
      "0",
      "0",
      NULL,
      list_create(),
      "0",
      "0"
    );
  }

  return non_fungible_token_response;
}


#ifdef non_fungible_token_response_MAIN

void test_non_fungible_token_response(int include_optional) {
    non_fungible_token_response_t* non_fungible_token_response_1 = instantiate_non_fungible_token_response(include_optional);

	cJSON* jsonnon_fungible_token_response_1 = non_fungible_token_response_convertToJSON(non_fungible_token_response_1);
	printf("non_fungible_token_response :\n%s\n", cJSON_Print(jsonnon_fungible_token_response_1));
	non_fungible_token_response_t* non_fungible_token_response_2 = non_fungible_token_response_parseFromJSON(jsonnon_fungible_token_response_1);
	cJSON* jsonnon_fungible_token_response_2 = non_fungible_token_response_convertToJSON(non_fungible_token_response_2);
	printf("repeating non_fungible_token_response:\n%s\n", cJSON_Print(jsonnon_fungible_token_response_2));
}

int main() {
  test_non_fungible_token_response(1);
  test_non_fungible_token_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // non_fungible_token_response_MAIN
#endif // non_fungible_token_response_TEST
