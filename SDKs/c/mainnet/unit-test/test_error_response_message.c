#ifndef error_response_message_TEST
#define error_response_message_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define error_response_message_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/error_response_message.h"
error_response_message_t* instantiate_error_response_message(int include_optional);



error_response_message_t* instantiate_error_response_message(int include_optional) {
  error_response_message_t* error_response_message = NULL;
  if (include_optional) {
    error_response_message = error_response_message_create(
      56,
      0,
      56,
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    error_response_message = error_response_message_create(
      56,
      0,
      56,
      "0",
      "0",
      "0",
      "0"
    );
  }

  return error_response_message;
}


#ifdef error_response_message_MAIN

void test_error_response_message(int include_optional) {
    error_response_message_t* error_response_message_1 = instantiate_error_response_message(include_optional);

	cJSON* jsonerror_response_message_1 = error_response_message_convertToJSON(error_response_message_1);
	printf("error_response_message :\n%s\n", cJSON_Print(jsonerror_response_message_1));
	error_response_message_t* error_response_message_2 = error_response_message_parseFromJSON(jsonerror_response_message_1);
	cJSON* jsonerror_response_message_2 = error_response_message_convertToJSON(error_response_message_2);
	printf("repeating error_response_message:\n%s\n", cJSON_Print(jsonerror_response_message_2));
}

int main() {
  test_error_response_message(1);
  test_error_response_message(0);

  printf("Hello world \n");
  return 0;
}

#endif // error_response_message_MAIN
#endif // error_response_message_TEST
