#ifndef smart_contract_event_history_TEST
#define smart_contract_event_history_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smart_contract_event_history_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smart_contract_event_history.h"
smart_contract_event_history_t* instantiate_smart_contract_event_history(int include_optional);



smart_contract_event_history_t* instantiate_smart_contract_event_history(int include_optional) {
  smart_contract_event_history_t* smart_contract_event_history = NULL;
  if (include_optional) {
    smart_contract_event_history = smart_contract_event_history_create(
      "a",
      "a",
      "a",
      "a",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    smart_contract_event_history = smart_contract_event_history_create(
      "a",
      "a",
      "a",
      "a",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return smart_contract_event_history;
}


#ifdef smart_contract_event_history_MAIN

void test_smart_contract_event_history(int include_optional) {
    smart_contract_event_history_t* smart_contract_event_history_1 = instantiate_smart_contract_event_history(include_optional);

	cJSON* jsonsmart_contract_event_history_1 = smart_contract_event_history_convertToJSON(smart_contract_event_history_1);
	printf("smart_contract_event_history :\n%s\n", cJSON_Print(jsonsmart_contract_event_history_1));
	smart_contract_event_history_t* smart_contract_event_history_2 = smart_contract_event_history_parseFromJSON(jsonsmart_contract_event_history_1);
	cJSON* jsonsmart_contract_event_history_2 = smart_contract_event_history_convertToJSON(smart_contract_event_history_2);
	printf("repeating smart_contract_event_history:\n%s\n", cJSON_Print(jsonsmart_contract_event_history_2));
}

int main() {
  test_smart_contract_event_history(1);
  test_smart_contract_event_history(0);

  printf("Hello world \n");
  return 0;
}

#endif // smart_contract_event_history_MAIN
#endif // smart_contract_event_history_TEST
