#ifndef burn_TEST
#define burn_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define burn_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/burn.h"
burn_t* instantiate_burn(int include_optional);



burn_t* instantiate_burn(int include_optional) {
  burn_t* burn = NULL;
  if (include_optional) {
    burn = burn_create(
      "a",
      "a",
      "0",
      "a",
      "a"
    );
  } else {
    burn = burn_create(
      "a",
      "a",
      "0",
      "a",
      "a"
    );
  }

  return burn;
}


#ifdef burn_MAIN

void test_burn(int include_optional) {
    burn_t* burn_1 = instantiate_burn(include_optional);

	cJSON* jsonburn_1 = burn_convertToJSON(burn_1);
	printf("burn :\n%s\n", cJSON_Print(jsonburn_1));
	burn_t* burn_2 = burn_parseFromJSON(jsonburn_1);
	cJSON* jsonburn_2 = burn_convertToJSON(burn_2);
	printf("repeating burn:\n%s\n", cJSON_Print(jsonburn_2));
}

int main() {
  test_burn(1);
  test_burn(0);

  printf("Hello world \n");
  return 0;
}

#endif // burn_MAIN
#endif // burn_TEST
