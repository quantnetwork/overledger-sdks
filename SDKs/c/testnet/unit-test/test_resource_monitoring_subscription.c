#ifndef resource_monitoring_subscription_TEST
#define resource_monitoring_subscription_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resource_monitoring_subscription_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resource_monitoring_subscription.h"
resource_monitoring_subscription_t* instantiate_resource_monitoring_subscription(int include_optional);



resource_monitoring_subscription_t* instantiate_resource_monitoring_subscription(int include_optional) {
  resource_monitoring_subscription_t* resource_monitoring_subscription = NULL;
  if (include_optional) {
    resource_monitoring_subscription = resource_monitoring_subscription_create(
      "a",
      "a",
      "a"
    );
  } else {
    resource_monitoring_subscription = resource_monitoring_subscription_create(
      "a",
      "a",
      "a"
    );
  }

  return resource_monitoring_subscription;
}


#ifdef resource_monitoring_subscription_MAIN

void test_resource_monitoring_subscription(int include_optional) {
    resource_monitoring_subscription_t* resource_monitoring_subscription_1 = instantiate_resource_monitoring_subscription(include_optional);

	cJSON* jsonresource_monitoring_subscription_1 = resource_monitoring_subscription_convertToJSON(resource_monitoring_subscription_1);
	printf("resource_monitoring_subscription :\n%s\n", cJSON_Print(jsonresource_monitoring_subscription_1));
	resource_monitoring_subscription_t* resource_monitoring_subscription_2 = resource_monitoring_subscription_parseFromJSON(jsonresource_monitoring_subscription_1);
	cJSON* jsonresource_monitoring_subscription_2 = resource_monitoring_subscription_convertToJSON(resource_monitoring_subscription_2);
	printf("repeating resource_monitoring_subscription:\n%s\n", cJSON_Print(jsonresource_monitoring_subscription_2));
}

int main() {
  test_resource_monitoring_subscription(1);
  test_resource_monitoring_subscription(0);

  printf("Hello world \n");
  return 0;
}

#endif // resource_monitoring_subscription_MAIN
#endif // resource_monitoring_subscription_TEST
