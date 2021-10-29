#ifndef utxo_timestamp_schema_TEST
#define utxo_timestamp_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define utxo_timestamp_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/utxo_timestamp_schema.h"
utxo_timestamp_schema_t* instantiate_utxo_timestamp_schema(int include_optional);



utxo_timestamp_schema_t* instantiate_utxo_timestamp_schema(int include_optional) {
  utxo_timestamp_schema_t* utxo_timestamp_schema = NULL;
  if (include_optional) {
    utxo_timestamp_schema = utxo_timestamp_schema_create(
      "0",
      "0"
    );
  } else {
    utxo_timestamp_schema = utxo_timestamp_schema_create(
      "0",
      "0"
    );
  }

  return utxo_timestamp_schema;
}


#ifdef utxo_timestamp_schema_MAIN

void test_utxo_timestamp_schema(int include_optional) {
    utxo_timestamp_schema_t* utxo_timestamp_schema_1 = instantiate_utxo_timestamp_schema(include_optional);

	cJSON* jsonutxo_timestamp_schema_1 = utxo_timestamp_schema_convertToJSON(utxo_timestamp_schema_1);
	printf("utxo_timestamp_schema :\n%s\n", cJSON_Print(jsonutxo_timestamp_schema_1));
	utxo_timestamp_schema_t* utxo_timestamp_schema_2 = utxo_timestamp_schema_parseFromJSON(jsonutxo_timestamp_schema_1);
	cJSON* jsonutxo_timestamp_schema_2 = utxo_timestamp_schema_convertToJSON(utxo_timestamp_schema_2);
	printf("repeating utxo_timestamp_schema:\n%s\n", cJSON_Print(jsonutxo_timestamp_schema_2));
}

int main() {
  test_utxo_timestamp_schema(1);
  test_utxo_timestamp_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // utxo_timestamp_schema_MAIN
#endif // utxo_timestamp_schema_TEST
