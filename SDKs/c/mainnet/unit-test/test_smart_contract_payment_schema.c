#ifndef smart_contract_payment_schema_TEST
#define smart_contract_payment_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smart_contract_payment_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smart_contract_payment_schema.h"
smart_contract_payment_schema_t* instantiate_smart_contract_payment_schema(int include_optional);



smart_contract_payment_schema_t* instantiate_smart_contract_payment_schema(int include_optional) {
  smart_contract_payment_schema_t* smart_contract_payment_schema = NULL;
  if (include_optional) {
    smart_contract_payment_schema = smart_contract_payment_schema_create(
      "a",
      "a"
    );
  } else {
    smart_contract_payment_schema = smart_contract_payment_schema_create(
      "a",
      "a"
    );
  }

  return smart_contract_payment_schema;
}


#ifdef smart_contract_payment_schema_MAIN

void test_smart_contract_payment_schema(int include_optional) {
    smart_contract_payment_schema_t* smart_contract_payment_schema_1 = instantiate_smart_contract_payment_schema(include_optional);

	cJSON* jsonsmart_contract_payment_schema_1 = smart_contract_payment_schema_convertToJSON(smart_contract_payment_schema_1);
	printf("smart_contract_payment_schema :\n%s\n", cJSON_Print(jsonsmart_contract_payment_schema_1));
	smart_contract_payment_schema_t* smart_contract_payment_schema_2 = smart_contract_payment_schema_parseFromJSON(jsonsmart_contract_payment_schema_1);
	cJSON* jsonsmart_contract_payment_schema_2 = smart_contract_payment_schema_convertToJSON(smart_contract_payment_schema_2);
	printf("repeating smart_contract_payment_schema:\n%s\n", cJSON_Print(jsonsmart_contract_payment_schema_2));
}

int main() {
  test_smart_contract_payment_schema(1);
  test_smart_contract_payment_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // smart_contract_payment_schema_MAIN
#endif // smart_contract_payment_schema_TEST
