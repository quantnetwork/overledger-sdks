#ifndef utxo_native_data_TEST
#define utxo_native_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define utxo_native_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/utxo_native_data.h"
utxo_native_data_t* instantiate_utxo_native_data(int include_optional);



utxo_native_data_t* instantiate_utxo_native_data(int include_optional) {
  utxo_native_data_t* utxo_native_data = NULL;
  if (include_optional) {
    utxo_native_data = utxo_native_data_create(
      list_create()
    );
  } else {
    utxo_native_data = utxo_native_data_create(
      list_create()
    );
  }

  return utxo_native_data;
}


#ifdef utxo_native_data_MAIN

void test_utxo_native_data(int include_optional) {
    utxo_native_data_t* utxo_native_data_1 = instantiate_utxo_native_data(include_optional);

	cJSON* jsonutxo_native_data_1 = utxo_native_data_convertToJSON(utxo_native_data_1);
	printf("utxo_native_data :\n%s\n", cJSON_Print(jsonutxo_native_data_1));
	utxo_native_data_t* utxo_native_data_2 = utxo_native_data_parseFromJSON(jsonutxo_native_data_1);
	cJSON* jsonutxo_native_data_2 = utxo_native_data_convertToJSON(utxo_native_data_2);
	printf("repeating utxo_native_data:\n%s\n", cJSON_Print(jsonutxo_native_data_2));
}

int main() {
  test_utxo_native_data(1);
  test_utxo_native_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // utxo_native_data_MAIN
#endif // utxo_native_data_TEST
