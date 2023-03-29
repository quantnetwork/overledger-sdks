#ifndef smart_contract_TEST
#define smart_contract_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smart_contract_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smart_contract.h"
smart_contract_t* instantiate_smart_contract(int include_optional);

#include "test_function.c"


smart_contract_t* instantiate_smart_contract(int include_optional) {
  smart_contract_t* smart_contract = NULL;
  if (include_optional) {
    smart_contract = smart_contract_create(
      "a",
      "a",
      "0",
       // false, not to have infinite recursion
      instantiate_function(0),
      0
    );
  } else {
    smart_contract = smart_contract_create(
      "a",
      "a",
      "0",
      NULL,
      0
    );
  }

  return smart_contract;
}


#ifdef smart_contract_MAIN

void test_smart_contract(int include_optional) {
    smart_contract_t* smart_contract_1 = instantiate_smart_contract(include_optional);

	cJSON* jsonsmart_contract_1 = smart_contract_convertToJSON(smart_contract_1);
	printf("smart_contract :\n%s\n", cJSON_Print(jsonsmart_contract_1));
	smart_contract_t* smart_contract_2 = smart_contract_parseFromJSON(jsonsmart_contract_1);
	cJSON* jsonsmart_contract_2 = smart_contract_convertToJSON(smart_contract_2);
	printf("repeating smart_contract:\n%s\n", cJSON_Print(jsonsmart_contract_2));
}

int main() {
  test_smart_contract(1);
  test_smart_contract(0);

  printf("Hello world \n");
  return 0;
}

#endif // smart_contract_MAIN
#endif // smart_contract_TEST
