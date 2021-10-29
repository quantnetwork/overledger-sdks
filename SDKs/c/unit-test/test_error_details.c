#ifndef error_details_TEST
#define error_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define error_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/error_details.h"
error_details_t* instantiate_error_details(int include_optional);



error_details_t* instantiate_error_details(int include_optional) {
  error_details_t* error_details = NULL;
  if (include_optional) {
    error_details = error_details_create(
      "a",
      "a",
      "a"
    );
  } else {
    error_details = error_details_create(
      "a",
      "a",
      "a"
    );
  }

  return error_details;
}


#ifdef error_details_MAIN

void test_error_details(int include_optional) {
    error_details_t* error_details_1 = instantiate_error_details(include_optional);

	cJSON* jsonerror_details_1 = error_details_convertToJSON(error_details_1);
	printf("error_details :\n%s\n", cJSON_Print(jsonerror_details_1));
	error_details_t* error_details_2 = error_details_parseFromJSON(jsonerror_details_1);
	cJSON* jsonerror_details_2 = error_details_convertToJSON(error_details_2);
	printf("repeating error_details:\n%s\n", cJSON_Print(jsonerror_details_2));
}

int main() {
  test_error_details(1);
  test_error_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // error_details_MAIN
#endif // error_details_TEST
