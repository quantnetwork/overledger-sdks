#ifndef event_subscription_response_details_TEST
#define event_subscription_response_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define event_subscription_response_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/event_subscription_response_details.h"
event_subscription_response_details_t* instantiate_event_subscription_response_details(int include_optional);



event_subscription_response_details_t* instantiate_event_subscription_response_details(int include_optional) {
  event_subscription_response_details_t* event_subscription_response_details = NULL;
  if (include_optional) {
    event_subscription_response_details = event_subscription_response_details_create(
      "a",
      "a",
      "0"
    );
  } else {
    event_subscription_response_details = event_subscription_response_details_create(
      "a",
      "a",
      "0"
    );
  }

  return event_subscription_response_details;
}


#ifdef event_subscription_response_details_MAIN

void test_event_subscription_response_details(int include_optional) {
    event_subscription_response_details_t* event_subscription_response_details_1 = instantiate_event_subscription_response_details(include_optional);

	cJSON* jsonevent_subscription_response_details_1 = event_subscription_response_details_convertToJSON(event_subscription_response_details_1);
	printf("event_subscription_response_details :\n%s\n", cJSON_Print(jsonevent_subscription_response_details_1));
	event_subscription_response_details_t* event_subscription_response_details_2 = event_subscription_response_details_parseFromJSON(jsonevent_subscription_response_details_1);
	cJSON* jsonevent_subscription_response_details_2 = event_subscription_response_details_convertToJSON(event_subscription_response_details_2);
	printf("repeating event_subscription_response_details:\n%s\n", cJSON_Print(jsonevent_subscription_response_details_2));
}

int main() {
  test_event_subscription_response_details(1);
  test_event_subscription_response_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // event_subscription_response_details_MAIN
#endif // event_subscription_response_details_TEST
