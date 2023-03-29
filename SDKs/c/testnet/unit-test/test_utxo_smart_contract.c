#ifndef utxo_smart_contract_TEST
#define utxo_smart_contract_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define utxo_smart_contract_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/utxo_smart_contract.h"
utxo_smart_contract_t* instantiate_utxo_smart_contract(int include_optional);

#include "test_extra_fields.c"


utxo_smart_contract_t* instantiate_utxo_smart_contract(int include_optional) {
  utxo_smart_contract_t* utxo_smart_contract = NULL;
  if (include_optional) {
    utxo_smart_contract = utxo_smart_contract_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_extra_fields(0)
    );
  } else {
    utxo_smart_contract = utxo_smart_contract_create(
      "0",
      "0",
      NULL
    );
  }

  return utxo_smart_contract;
}


#ifdef utxo_smart_contract_MAIN

void test_utxo_smart_contract(int include_optional) {
    utxo_smart_contract_t* utxo_smart_contract_1 = instantiate_utxo_smart_contract(include_optional);

	cJSON* jsonutxo_smart_contract_1 = utxo_smart_contract_convertToJSON(utxo_smart_contract_1);
	printf("utxo_smart_contract :\n%s\n", cJSON_Print(jsonutxo_smart_contract_1));
	utxo_smart_contract_t* utxo_smart_contract_2 = utxo_smart_contract_parseFromJSON(jsonutxo_smart_contract_1);
	cJSON* jsonutxo_smart_contract_2 = utxo_smart_contract_convertToJSON(utxo_smart_contract_2);
	printf("repeating utxo_smart_contract:\n%s\n", cJSON_Print(jsonutxo_smart_contract_2));
}

int main() {
  test_utxo_smart_contract(1);
  test_utxo_smart_contract(0);

  printf("Hello world \n");
  return 0;
}

#endif // utxo_smart_contract_MAIN
#endif // utxo_smart_contract_TEST
