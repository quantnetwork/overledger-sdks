#ifndef resource_monitoring_smart_contract_event_details_TEST
#define resource_monitoring_smart_contract_event_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resource_monitoring_smart_contract_event_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resource_monitoring_smart_contract_event_details.h"
resource_monitoring_smart_contract_event_details_t* instantiate_resource_monitoring_smart_contract_event_details(int include_optional);



resource_monitoring_smart_contract_event_details_t* instantiate_resource_monitoring_smart_contract_event_details(int include_optional) {
  resource_monitoring_smart_contract_event_details_t* resource_monitoring_smart_contract_event_details = NULL;
  if (include_optional) {
    resource_monitoring_smart_contract_event_details = resource_monitoring_smart_contract_event_details_create(
      "a",
      "a",
      "a"
    );
  } else {
    resource_monitoring_smart_contract_event_details = resource_monitoring_smart_contract_event_details_create(
      "a",
      "a",
      "a"
    );
  }

  return resource_monitoring_smart_contract_event_details;
}


#ifdef resource_monitoring_smart_contract_event_details_MAIN

void test_resource_monitoring_smart_contract_event_details(int include_optional) {
    resource_monitoring_smart_contract_event_details_t* resource_monitoring_smart_contract_event_details_1 = instantiate_resource_monitoring_smart_contract_event_details(include_optional);

	cJSON* jsonresource_monitoring_smart_contract_event_details_1 = resource_monitoring_smart_contract_event_details_convertToJSON(resource_monitoring_smart_contract_event_details_1);
	printf("resource_monitoring_smart_contract_event_details :\n%s\n", cJSON_Print(jsonresource_monitoring_smart_contract_event_details_1));
	resource_monitoring_smart_contract_event_details_t* resource_monitoring_smart_contract_event_details_2 = resource_monitoring_smart_contract_event_details_parseFromJSON(jsonresource_monitoring_smart_contract_event_details_1);
	cJSON* jsonresource_monitoring_smart_contract_event_details_2 = resource_monitoring_smart_contract_event_details_convertToJSON(resource_monitoring_smart_contract_event_details_2);
	printf("repeating resource_monitoring_smart_contract_event_details:\n%s\n", cJSON_Print(jsonresource_monitoring_smart_contract_event_details_2));
}

int main() {
  test_resource_monitoring_smart_contract_event_details(1);
  test_resource_monitoring_smart_contract_event_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // resource_monitoring_smart_contract_event_details_MAIN
#endif // resource_monitoring_smart_contract_event_details_TEST
