#ifndef collector_TEST
#define collector_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define collector_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/collector.h"
collector_t* instantiate_collector(int include_optional);

#include "test_transfer.c"


collector_t* instantiate_collector(int include_optional) {
  collector_t* collector = NULL;
  if (include_optional) {
    collector = collector_create(
      "a",
       // false, not to have infinite recursion
      instantiate_transfer(0)
    );
  } else {
    collector = collector_create(
      "a",
      NULL
    );
  }

  return collector;
}


#ifdef collector_MAIN

void test_collector(int include_optional) {
    collector_t* collector_1 = instantiate_collector(include_optional);

	cJSON* jsoncollector_1 = collector_convertToJSON(collector_1);
	printf("collector :\n%s\n", cJSON_Print(jsoncollector_1));
	collector_t* collector_2 = collector_parseFromJSON(jsoncollector_1);
	cJSON* jsoncollector_2 = collector_convertToJSON(collector_2);
	printf("repeating collector:\n%s\n", cJSON_Print(jsoncollector_2));
}

int main() {
  test_collector(1);
  test_collector(0);

  printf("Hello world \n");
  return 0;
}

#endif // collector_MAIN
#endif // collector_TEST
