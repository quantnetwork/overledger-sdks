#ifndef transfer_request_details_schema_TEST
#define transfer_request_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transfer_request_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transfer_request_details_schema.h"
transfer_request_details_schema_t* instantiate_transfer_request_details_schema(int include_optional);



transfer_request_details_schema_t* instantiate_transfer_request_details_schema(int include_optional) {
  transfer_request_details_schema_t* transfer_request_details_schema = NULL;
  if (include_optional) {
    transfer_request_details_schema = transfer_request_details_schema_create(
      list_create(),
      "a",
      "a",
      list_create()
    );
  } else {
    transfer_request_details_schema = transfer_request_details_schema_create(
      list_create(),
      "a",
      "a",
      list_create()
    );
  }

  return transfer_request_details_schema;
}


#ifdef transfer_request_details_schema_MAIN

void test_transfer_request_details_schema(int include_optional) {
    transfer_request_details_schema_t* transfer_request_details_schema_1 = instantiate_transfer_request_details_schema(include_optional);

	cJSON* jsontransfer_request_details_schema_1 = transfer_request_details_schema_convertToJSON(transfer_request_details_schema_1);
	printf("transfer_request_details_schema :\n%s\n", cJSON_Print(jsontransfer_request_details_schema_1));
	transfer_request_details_schema_t* transfer_request_details_schema_2 = transfer_request_details_schema_parseFromJSON(jsontransfer_request_details_schema_1);
	cJSON* jsontransfer_request_details_schema_2 = transfer_request_details_schema_convertToJSON(transfer_request_details_schema_2);
	printf("repeating transfer_request_details_schema:\n%s\n", cJSON_Print(jsontransfer_request_details_schema_2));
}

int main() {
  test_transfer_request_details_schema(1);
  test_transfer_request_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // transfer_request_details_schema_MAIN
#endif // transfer_request_details_schema_TEST
