#ifndef resource_monitored_address_details_TEST
#define resource_monitored_address_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resource_monitored_address_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resource_monitored_address_details.h"
resource_monitored_address_details_t* instantiate_resource_monitored_address_details(int include_optional);



resource_monitored_address_details_t* instantiate_resource_monitored_address_details(int include_optional) {
  resource_monitored_address_details_t* resource_monitored_address_details = NULL;
  if (include_optional) {
    resource_monitored_address_details = resource_monitored_address_details_create(
      "a"
    );
  } else {
    resource_monitored_address_details = resource_monitored_address_details_create(
      "a"
    );
  }

  return resource_monitored_address_details;
}


#ifdef resource_monitored_address_details_MAIN

void test_resource_monitored_address_details(int include_optional) {
    resource_monitored_address_details_t* resource_monitored_address_details_1 = instantiate_resource_monitored_address_details(include_optional);

	cJSON* jsonresource_monitored_address_details_1 = resource_monitored_address_details_convertToJSON(resource_monitored_address_details_1);
	printf("resource_monitored_address_details :\n%s\n", cJSON_Print(jsonresource_monitored_address_details_1));
	resource_monitored_address_details_t* resource_monitored_address_details_2 = resource_monitored_address_details_parseFromJSON(jsonresource_monitored_address_details_1);
	cJSON* jsonresource_monitored_address_details_2 = resource_monitored_address_details_convertToJSON(resource_monitored_address_details_2);
	printf("repeating resource_monitored_address_details:\n%s\n", cJSON_Print(jsonresource_monitored_address_details_2));
}

int main() {
  test_resource_monitored_address_details(1);
  test_resource_monitored_address_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // resource_monitored_address_details_MAIN
#endif // resource_monitored_address_details_TEST
