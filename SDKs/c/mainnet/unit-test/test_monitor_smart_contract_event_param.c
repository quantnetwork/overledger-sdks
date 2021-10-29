#ifndef monitor_smart_contract_event_param_TEST
#define monitor_smart_contract_event_param_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define monitor_smart_contract_event_param_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/monitor_smart_contract_event_param.h"
monitor_smart_contract_event_param_t* instantiate_monitor_smart_contract_event_param(int include_optional);



monitor_smart_contract_event_param_t* instantiate_monitor_smart_contract_event_param(int include_optional) {
  monitor_smart_contract_event_param_t* monitor_smart_contract_event_param = NULL;
  if (include_optional) {
    monitor_smart_contract_event_param = monitor_smart_contract_event_param_create(
      "a",
      "a",
      "a"
    );
  } else {
    monitor_smart_contract_event_param = monitor_smart_contract_event_param_create(
      "a",
      "a",
      "a"
    );
  }

  return monitor_smart_contract_event_param;
}


#ifdef monitor_smart_contract_event_param_MAIN

void test_monitor_smart_contract_event_param(int include_optional) {
    monitor_smart_contract_event_param_t* monitor_smart_contract_event_param_1 = instantiate_monitor_smart_contract_event_param(include_optional);

	cJSON* jsonmonitor_smart_contract_event_param_1 = monitor_smart_contract_event_param_convertToJSON(monitor_smart_contract_event_param_1);
	printf("monitor_smart_contract_event_param :\n%s\n", cJSON_Print(jsonmonitor_smart_contract_event_param_1));
	monitor_smart_contract_event_param_t* monitor_smart_contract_event_param_2 = monitor_smart_contract_event_param_parseFromJSON(jsonmonitor_smart_contract_event_param_1);
	cJSON* jsonmonitor_smart_contract_event_param_2 = monitor_smart_contract_event_param_convertToJSON(monitor_smart_contract_event_param_2);
	printf("repeating monitor_smart_contract_event_param:\n%s\n", cJSON_Print(jsonmonitor_smart_contract_event_param_2));
}

int main() {
  test_monitor_smart_contract_event_param(1);
  test_monitor_smart_contract_event_param(0);

  printf("Hello world \n");
  return 0;
}

#endif // monitor_smart_contract_event_param_MAIN
#endif // monitor_smart_contract_event_param_TEST
