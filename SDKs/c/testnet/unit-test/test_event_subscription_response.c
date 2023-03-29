#ifndef event_subscription_response_TEST
#define event_subscription_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_subscription_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_subscription_response.h"
event_subscription_response_t* instantiate_event_subscription_response(int include_optional);

#include "test_event_subscription_response_details.c"
#include "test_location.c"


event_subscription_response_t* instantiate_event_subscription_response(int include_optional) {
  event_subscription_response_t* event_subscription_response = NULL;
  if (include_optional) {
    event_subscription_response = event_subscription_response_create(
      "a",
       // false, not to have infinite recursion
      instantiate_event_subscription_response_details(0),
       // false, not to have infinite recursion
      instantiate_location(0),
      "a"
    );
  } else {
    event_subscription_response = event_subscription_response_create(
      "a",
      NULL,
      NULL,
      "a"
    );
  }

  return event_subscription_response;
}


#ifdef event_subscription_response_MAIN

void test_event_subscription_response(int include_optional) {
    event_subscription_response_t* event_subscription_response_1 = instantiate_event_subscription_response(include_optional);

	cJSON* jsonevent_subscription_response_1 = event_subscription_response_convertToJSON(event_subscription_response_1);
	printf("event_subscription_response :\n%s\n", cJSON_Print(jsonevent_subscription_response_1));
	event_subscription_response_t* event_subscription_response_2 = event_subscription_response_parseFromJSON(jsonevent_subscription_response_1);
	cJSON* jsonevent_subscription_response_2 = event_subscription_response_convertToJSON(event_subscription_response_2);
	printf("repeating event_subscription_response:\n%s\n", cJSON_Print(jsonevent_subscription_response_2));
}

int main() {
  test_event_subscription_response(1);
  test_event_subscription_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_subscription_response_MAIN
#endif // event_subscription_response_TEST
