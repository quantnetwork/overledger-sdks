#ifndef utxo_destination_TEST
#define utxo_destination_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define utxo_destination_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/utxo_destination.h"
utxo_destination_t* instantiate_utxo_destination(int include_optional);

#include "test_utxo_smart_contract.c"
#include "test_payment.c"


utxo_destination_t* instantiate_utxo_destination(int include_optional) {
  utxo_destination_t* utxo_destination = NULL;
  if (include_optional) {
    utxo_destination = utxo_destination_create(
       // false, not to have infinite recursion
      instantiate_utxo_smart_contract(0),
       // false, not to have infinite recursion
      instantiate_payment(0),
      "0"
    );
  } else {
    utxo_destination = utxo_destination_create(
      NULL,
      NULL,
      "0"
    );
  }

  return utxo_destination;
}


#ifdef utxo_destination_MAIN

void test_utxo_destination(int include_optional) {
    utxo_destination_t* utxo_destination_1 = instantiate_utxo_destination(include_optional);

	cJSON* jsonutxo_destination_1 = utxo_destination_convertToJSON(utxo_destination_1);
	printf("utxo_destination :\n%s\n", cJSON_Print(jsonutxo_destination_1));
	utxo_destination_t* utxo_destination_2 = utxo_destination_parseFromJSON(jsonutxo_destination_1);
	cJSON* jsonutxo_destination_2 = utxo_destination_convertToJSON(utxo_destination_2);
	printf("repeating utxo_destination:\n%s\n", cJSON_Print(jsonutxo_destination_2));
}

int main() {
  test_utxo_destination(1);
  test_utxo_destination(0);

  printf("Hello world \n");
  return 0;
}

#endif // utxo_destination_MAIN
#endif // utxo_destination_TEST
