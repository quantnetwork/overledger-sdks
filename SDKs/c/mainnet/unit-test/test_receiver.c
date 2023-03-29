#ifndef receiver_TEST
#define receiver_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define receiver_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/receiver.h"
receiver_t* instantiate_receiver(int include_optional);

#include "test_transfer.c"


receiver_t* instantiate_receiver(int include_optional) {
  receiver_t* receiver = NULL;
  if (include_optional) {
    receiver = receiver_create(
      "a",
       // false, not to have infinite recursion
      instantiate_transfer(0)
    );
  } else {
    receiver = receiver_create(
      "a",
      NULL
    );
  }

  return receiver;
}


#ifdef receiver_MAIN

void test_receiver(int include_optional) {
    receiver_t* receiver_1 = instantiate_receiver(include_optional);

	cJSON* jsonreceiver_1 = receiver_convertToJSON(receiver_1);
	printf("receiver :\n%s\n", cJSON_Print(jsonreceiver_1));
	receiver_t* receiver_2 = receiver_parseFromJSON(jsonreceiver_1);
	cJSON* jsonreceiver_2 = receiver_convertToJSON(receiver_2);
	printf("repeating receiver:\n%s\n", cJSON_Print(jsonreceiver_2));
}

int main() {
  test_receiver(1);
  test_receiver(0);

  printf("Hello world \n");
  return 0;
}

#endif // receiver_MAIN
#endif // receiver_TEST
