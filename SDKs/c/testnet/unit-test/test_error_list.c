#ifndef error_list_TEST
#define error_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define error_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/error_list.h"
error_list_t* instantiate_error_list(int include_optional);



error_list_t* instantiate_error_list(int include_optional) {
  error_list_t* error_list = NULL;
  if (include_optional) {
    error_list = error_list_create(
      list_create(),
      56
    );
  } else {
    error_list = error_list_create(
      list_create(),
      56
    );
  }

  return error_list;
}


#ifdef error_list_MAIN

void test_error_list(int include_optional) {
    error_list_t* error_list_1 = instantiate_error_list(include_optional);

	cJSON* jsonerror_list_1 = error_list_convertToJSON(error_list_1);
	printf("error_list :\n%s\n", cJSON_Print(jsonerror_list_1));
	error_list_t* error_list_2 = error_list_parseFromJSON(jsonerror_list_1);
	cJSON* jsonerror_list_2 = error_list_convertToJSON(error_list_2);
	printf("repeating error_list:\n%s\n", cJSON_Print(jsonerror_list_2));
}

int main() {
  test_error_list(1);
  test_error_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // error_list_MAIN
#endif // error_list_TEST
