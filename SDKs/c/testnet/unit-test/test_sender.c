#ifndef sender_TEST
#define sender_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sender_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sender.h"
sender_t* instantiate_sender(int include_optional);



sender_t* instantiate_sender(int include_optional) {
  sender_t* sender = NULL;
  if (include_optional) {
    sender = sender_create(
      "a"
    );
  } else {
    sender = sender_create(
      "a"
    );
  }

  return sender;
}


#ifdef sender_MAIN

void test_sender(int include_optional) {
    sender_t* sender_1 = instantiate_sender(include_optional);

	cJSON* jsonsender_1 = sender_convertToJSON(sender_1);
	printf("sender :\n%s\n", cJSON_Print(jsonsender_1));
	sender_t* sender_2 = sender_parseFromJSON(jsonsender_1);
	cJSON* jsonsender_2 = sender_convertToJSON(sender_2);
	printf("repeating sender:\n%s\n", cJSON_Print(jsonsender_2));
}

int main() {
  test_sender(1);
  test_sender(0);

  printf("Hello world \n");
  return 0;
}

#endif // sender_MAIN
#endif // sender_TEST
