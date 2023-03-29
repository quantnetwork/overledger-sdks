#ifndef additional_owner_TEST
#define additional_owner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define additional_owner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/additional_owner.h"
additional_owner_t* instantiate_additional_owner(int include_optional);



additional_owner_t* instantiate_additional_owner(int include_optional) {
  additional_owner_t* additional_owner = NULL;
  if (include_optional) {
    additional_owner = additional_owner_create(
      "a"
    );
  } else {
    additional_owner = additional_owner_create(
      "a"
    );
  }

  return additional_owner;
}


#ifdef additional_owner_MAIN

void test_additional_owner(int include_optional) {
    additional_owner_t* additional_owner_1 = instantiate_additional_owner(include_optional);

	cJSON* jsonadditional_owner_1 = additional_owner_convertToJSON(additional_owner_1);
	printf("additional_owner :\n%s\n", cJSON_Print(jsonadditional_owner_1));
	additional_owner_t* additional_owner_2 = additional_owner_parseFromJSON(jsonadditional_owner_1);
	cJSON* jsonadditional_owner_2 = additional_owner_convertToJSON(additional_owner_2);
	printf("repeating additional_owner:\n%s\n", cJSON_Print(jsonadditional_owner_2));
}

int main() {
  test_additional_owner(1);
  test_additional_owner(0);

  printf("Hello world \n");
  return 0;
}

#endif // additional_owner_MAIN
#endif // additional_owner_TEST
