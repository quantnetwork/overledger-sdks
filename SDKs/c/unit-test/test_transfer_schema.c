#ifndef transfer_schema_TEST
#define transfer_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transfer_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transfer_schema.h"
transfer_schema_t* instantiate_transfer_schema(int include_optional);



transfer_schema_t* instantiate_transfer_schema(int include_optional) {
  transfer_schema_t* transfer_schema = NULL;
  if (include_optional) {
    transfer_schema = transfer_schema_create(
      "a",
      "a"
    );
  } else {
    transfer_schema = transfer_schema_create(
      "a",
      "a"
    );
  }

  return transfer_schema;
}


#ifdef transfer_schema_MAIN

void test_transfer_schema(int include_optional) {
    transfer_schema_t* transfer_schema_1 = instantiate_transfer_schema(include_optional);

	cJSON* jsontransfer_schema_1 = transfer_schema_convertToJSON(transfer_schema_1);
	printf("transfer_schema :\n%s\n", cJSON_Print(jsontransfer_schema_1));
	transfer_schema_t* transfer_schema_2 = transfer_schema_parseFromJSON(jsontransfer_schema_1);
	cJSON* jsontransfer_schema_2 = transfer_schema_convertToJSON(transfer_schema_2);
	printf("repeating transfer_schema:\n%s\n", cJSON_Print(jsontransfer_schema_2));
}

int main() {
  test_transfer_schema(1);
  test_transfer_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // transfer_schema_MAIN
#endif // transfer_schema_TEST
