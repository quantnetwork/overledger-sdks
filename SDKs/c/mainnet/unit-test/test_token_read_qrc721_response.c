#ifndef token_read_qrc721_response_TEST
#define token_read_qrc721_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define token_read_qrc721_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/token_read_qrc721_response.h"
token_read_qrc721_response_t* instantiate_token_read_qrc721_response(int include_optional);

#include "test_token_read_response_details.c"
#include "test_location.c"


token_read_qrc721_response_t* instantiate_token_read_qrc721_response(int include_optional) {
  token_read_qrc721_response_t* token_read_qrc721_response = NULL;
  if (include_optional) {
    token_read_qrc721_response = token_read_qrc721_response_create(
      "a",
       // false, not to have infinite recursion
      instantiate_token_read_response_details(0),
       // false, not to have infinite recursion
      instantiate_location(0),
      "a"
    );
  } else {
    token_read_qrc721_response = token_read_qrc721_response_create(
      "a",
      NULL,
      NULL,
      "a"
    );
  }

  return token_read_qrc721_response;
}


#ifdef token_read_qrc721_response_MAIN

void test_token_read_qrc721_response(int include_optional) {
    token_read_qrc721_response_t* token_read_qrc721_response_1 = instantiate_token_read_qrc721_response(include_optional);

	cJSON* jsontoken_read_qrc721_response_1 = token_read_qrc721_response_convertToJSON(token_read_qrc721_response_1);
	printf("token_read_qrc721_response :\n%s\n", cJSON_Print(jsontoken_read_qrc721_response_1));
	token_read_qrc721_response_t* token_read_qrc721_response_2 = token_read_qrc721_response_parseFromJSON(jsontoken_read_qrc721_response_1);
	cJSON* jsontoken_read_qrc721_response_2 = token_read_qrc721_response_convertToJSON(token_read_qrc721_response_2);
	printf("repeating token_read_qrc721_response:\n%s\n", cJSON_Print(jsontoken_read_qrc721_response_2));
}

int main() {
  test_token_read_qrc721_response(1);
  test_token_read_qrc721_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // token_read_qrc721_response_MAIN
#endif // token_read_qrc721_response_TEST
