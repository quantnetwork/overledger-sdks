#ifndef lock_details_TEST
#define lock_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lock_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lock_details.h"
lock_details_t* instantiate_lock_details(int include_optional);



lock_details_t* instantiate_lock_details(int include_optional) {
  lock_details_t* lock_details = NULL;
  if (include_optional) {
    lock_details = lock_details_create(
      "a",
      "0",
      "0",
      "a",
      "0",
      "0",
      "a",
      "0",
      "0",
      "a",
      "0",
      "0"
    );
  } else {
    lock_details = lock_details_create(
      "a",
      "0",
      "0",
      "a",
      "0",
      "0",
      "a",
      "0",
      "0",
      "a",
      "0",
      "0"
    );
  }

  return lock_details;
}


#ifdef lock_details_MAIN

void test_lock_details(int include_optional) {
    lock_details_t* lock_details_1 = instantiate_lock_details(include_optional);

	cJSON* jsonlock_details_1 = lock_details_convertToJSON(lock_details_1);
	printf("lock_details :\n%s\n", cJSON_Print(jsonlock_details_1));
	lock_details_t* lock_details_2 = lock_details_parseFromJSON(jsonlock_details_1);
	cJSON* jsonlock_details_2 = lock_details_convertToJSON(lock_details_2);
	printf("repeating lock_details:\n%s\n", cJSON_Print(jsonlock_details_2));
}

int main() {
  test_lock_details(1);
  test_lock_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // lock_details_MAIN
#endif // lock_details_TEST
