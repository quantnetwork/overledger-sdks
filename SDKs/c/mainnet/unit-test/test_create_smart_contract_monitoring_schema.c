#ifndef create_smart_contract_monitoring_schema_TEST
#define create_smart_contract_monitoring_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_smart_contract_monitoring_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_smart_contract_monitoring_schema.h"
create_smart_contract_monitoring_schema_t* instantiate_create_smart_contract_monitoring_schema(int include_optional);

#include "test_resource_monitoring_details.c"
#include "test_resource_monitoring_subscription_details.c"
#include "test_resource_monitoring_subscription.c"


create_smart_contract_monitoring_schema_t* instantiate_create_smart_contract_monitoring_schema(int include_optional) {
  create_smart_contract_monitoring_schema_t* create_smart_contract_monitoring_schema = NULL;
  if (include_optional) {
    create_smart_contract_monitoring_schema = create_smart_contract_monitoring_schema_create(
       // false, not to have infinite recursion
      instantiate_resource_monitoring_details(0),
       // false, not to have infinite recursion
      instantiate_resource_monitoring_subscription_details(0),
       // false, not to have infinite recursion
      instantiate_resource_monitoring_subscription(0)
    );
  } else {
    create_smart_contract_monitoring_schema = create_smart_contract_monitoring_schema_create(
      NULL,
      NULL,
      NULL
    );
  }

  return create_smart_contract_monitoring_schema;
}


#ifdef create_smart_contract_monitoring_schema_MAIN

void test_create_smart_contract_monitoring_schema(int include_optional) {
    create_smart_contract_monitoring_schema_t* create_smart_contract_monitoring_schema_1 = instantiate_create_smart_contract_monitoring_schema(include_optional);

	cJSON* jsoncreate_smart_contract_monitoring_schema_1 = create_smart_contract_monitoring_schema_convertToJSON(create_smart_contract_monitoring_schema_1);
	printf("create_smart_contract_monitoring_schema :\n%s\n", cJSON_Print(jsoncreate_smart_contract_monitoring_schema_1));
	create_smart_contract_monitoring_schema_t* create_smart_contract_monitoring_schema_2 = create_smart_contract_monitoring_schema_parseFromJSON(jsoncreate_smart_contract_monitoring_schema_1);
	cJSON* jsoncreate_smart_contract_monitoring_schema_2 = create_smart_contract_monitoring_schema_convertToJSON(create_smart_contract_monitoring_schema_2);
	printf("repeating create_smart_contract_monitoring_schema:\n%s\n", cJSON_Print(jsoncreate_smart_contract_monitoring_schema_2));
}

int main() {
  test_create_smart_contract_monitoring_schema(1);
  test_create_smart_contract_monitoring_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_smart_contract_monitoring_schema_MAIN
#endif // create_smart_contract_monitoring_schema_TEST
