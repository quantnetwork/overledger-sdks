#ifndef smart_contract_read_schema_TEST
#define smart_contract_read_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smart_contract_read_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smart_contract_read_schema.h"
smart_contract_read_schema_t* instantiate_smart_contract_read_schema(int include_optional);

#include "test_smart_contract_read_function_schema.c"


smart_contract_read_schema_t* instantiate_smart_contract_read_schema(int include_optional) {
  smart_contract_read_schema_t* smart_contract_read_schema = NULL;
  if (include_optional) {
    smart_contract_read_schema = smart_contract_read_schema_create(
       // false, not to have infinite recursion
      instantiate_smart_contract_read_function_schema(0),
      "0"
    );
  } else {
    smart_contract_read_schema = smart_contract_read_schema_create(
      NULL,
      "0"
    );
  }

  return smart_contract_read_schema;
}


#ifdef smart_contract_read_schema_MAIN

void test_smart_contract_read_schema(int include_optional) {
    smart_contract_read_schema_t* smart_contract_read_schema_1 = instantiate_smart_contract_read_schema(include_optional);

	cJSON* jsonsmart_contract_read_schema_1 = smart_contract_read_schema_convertToJSON(smart_contract_read_schema_1);
	printf("smart_contract_read_schema :\n%s\n", cJSON_Print(jsonsmart_contract_read_schema_1));
	smart_contract_read_schema_t* smart_contract_read_schema_2 = smart_contract_read_schema_parseFromJSON(jsonsmart_contract_read_schema_1);
	cJSON* jsonsmart_contract_read_schema_2 = smart_contract_read_schema_convertToJSON(smart_contract_read_schema_2);
	printf("repeating smart_contract_read_schema:\n%s\n", cJSON_Print(jsonsmart_contract_read_schema_2));
}

int main() {
  test_smart_contract_read_schema(1);
  test_smart_contract_read_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // smart_contract_read_schema_MAIN
#endif // smart_contract_read_schema_TEST
