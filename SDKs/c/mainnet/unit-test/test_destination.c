#ifndef destination_TEST
#define destination_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define destination_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/destination.h"
destination_t* instantiate_destination(int include_optional);

#include "test_payment.c"
#include "test_transfer.c"
#include "test_smart_contract.c"


destination_t* instantiate_destination(int include_optional) {
  destination_t* destination = NULL;
  if (include_optional) {
    destination = destination_create(
       // false, not to have infinite recursion
      instantiate_payment(0),
       // false, not to have infinite recursion
      instantiate_transfer(0),
      "a",
       // false, not to have infinite recursion
      instantiate_smart_contract(0)
    );
  } else {
    destination = destination_create(
      NULL,
      NULL,
      "a",
      NULL
    );
  }

  return destination;
}


#ifdef destination_MAIN

void test_destination(int include_optional) {
    destination_t* destination_1 = instantiate_destination(include_optional);

	cJSON* jsondestination_1 = destination_convertToJSON(destination_1);
	printf("destination :\n%s\n", cJSON_Print(jsondestination_1));
	destination_t* destination_2 = destination_parseFromJSON(jsondestination_1);
	cJSON* jsondestination_2 = destination_convertToJSON(destination_2);
	printf("repeating destination:\n%s\n", cJSON_Print(jsondestination_2));
}

int main() {
  test_destination(1);
  test_destination(0);

  printf("Hello world \n");
  return 0;
}

#endif // destination_MAIN
#endif // destination_TEST
