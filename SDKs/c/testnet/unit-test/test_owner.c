#ifndef owner_TEST
#define owner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define owner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/owner.h"
owner_t* instantiate_owner(int include_optional);

#include "test_burn.c"


owner_t* instantiate_owner(int include_optional) {
  owner_t* owner = NULL;
  if (include_optional) {
    owner = owner_create(
      "a",
       // false, not to have infinite recursion
      instantiate_burn(0),
      "0"
    );
  } else {
    owner = owner_create(
      "a",
      NULL,
      "0"
    );
  }

  return owner;
}


#ifdef owner_MAIN

void test_owner(int include_optional) {
    owner_t* owner_1 = instantiate_owner(include_optional);

	cJSON* jsonowner_1 = owner_convertToJSON(owner_1);
	printf("owner :\n%s\n", cJSON_Print(jsonowner_1));
	owner_t* owner_2 = owner_parseFromJSON(jsonowner_1);
	cJSON* jsonowner_2 = owner_convertToJSON(owner_2);
	printf("repeating owner:\n%s\n", cJSON_Print(jsonowner_2));
}

int main() {
  test_owner(1);
  test_owner(0);

  printf("Hello world \n");
  return 0;
}

#endif // owner_MAIN
#endif // owner_TEST
