#ifndef alias_details_TEST
#define alias_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define alias_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/alias_details.h"
alias_details_t* instantiate_alias_details(int include_optional);



alias_details_t* instantiate_alias_details(int include_optional) {
  alias_details_t* alias_details = NULL;
  if (include_optional) {
    alias_details = alias_details_create(
      "0",
      "0",
      1,
      "0",
      "0",
      "0"
    );
  } else {
    alias_details = alias_details_create(
      "0",
      "0",
      1,
      "0",
      "0",
      "0"
    );
  }

  return alias_details;
}


#ifdef alias_details_MAIN

void test_alias_details(int include_optional) {
    alias_details_t* alias_details_1 = instantiate_alias_details(include_optional);

	cJSON* jsonalias_details_1 = alias_details_convertToJSON(alias_details_1);
	printf("alias_details :\n%s\n", cJSON_Print(jsonalias_details_1));
	alias_details_t* alias_details_2 = alias_details_parseFromJSON(jsonalias_details_1);
	cJSON* jsonalias_details_2 = alias_details_convertToJSON(alias_details_2);
	printf("repeating alias_details:\n%s\n", cJSON_Print(jsonalias_details_2));
}

int main() {
  test_alias_details(1);
  test_alias_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // alias_details_MAIN
#endif // alias_details_TEST
