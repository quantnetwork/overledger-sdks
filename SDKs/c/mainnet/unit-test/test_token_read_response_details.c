#ifndef token_read_response_details_TEST
#define token_read_response_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define token_read_response_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/token_read_response_details.h"
token_read_response_details_t* instantiate_token_read_response_details(int include_optional);



token_read_response_details_t* instantiate_token_read_response_details(int include_optional) {
  token_read_response_details_t* token_read_response_details = NULL;
  if (include_optional) {
    token_read_response_details = token_read_response_details_create(
      "a",
      "a",
      0
    );
  } else {
    token_read_response_details = token_read_response_details_create(
      "a",
      "a",
      0
    );
  }

  return token_read_response_details;
}


#ifdef token_read_response_details_MAIN

void test_token_read_response_details(int include_optional) {
    token_read_response_details_t* token_read_response_details_1 = instantiate_token_read_response_details(include_optional);

	cJSON* jsontoken_read_response_details_1 = token_read_response_details_convertToJSON(token_read_response_details_1);
	printf("token_read_response_details :\n%s\n", cJSON_Print(jsontoken_read_response_details_1));
	token_read_response_details_t* token_read_response_details_2 = token_read_response_details_parseFromJSON(jsontoken_read_response_details_1);
	cJSON* jsontoken_read_response_details_2 = token_read_response_details_convertToJSON(token_read_response_details_2);
	printf("repeating token_read_response_details:\n%s\n", cJSON_Print(jsontoken_read_response_details_2));
}

int main() {
  test_token_read_response_details(1);
  test_token_read_response_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // token_read_response_details_MAIN
#endif // token_read_response_details_TEST
