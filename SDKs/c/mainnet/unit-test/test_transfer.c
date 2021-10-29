#ifndef transfer_TEST
#define transfer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transfer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transfer.h"
transfer_t* instantiate_transfer(int include_optional);



transfer_t* instantiate_transfer(int include_optional) {
  transfer_t* transfer = NULL;
  if (include_optional) {
    transfer = transfer_create(
      "a",
      "a"
    );
  } else {
    transfer = transfer_create(
      "a",
      "a"
    );
  }

  return transfer;
}


#ifdef transfer_MAIN

void test_transfer(int include_optional) {
    transfer_t* transfer_1 = instantiate_transfer(include_optional);

	cJSON* jsontransfer_1 = transfer_convertToJSON(transfer_1);
	printf("transfer :\n%s\n", cJSON_Print(jsontransfer_1));
	transfer_t* transfer_2 = transfer_parseFromJSON(jsontransfer_1);
	cJSON* jsontransfer_2 = transfer_convertToJSON(transfer_2);
	printf("repeating transfer:\n%s\n", cJSON_Print(jsontransfer_2));
}

int main() {
  test_transfer(1);
  test_transfer(0);

  printf("Hello world \n");
  return 0;
}

#endif // transfer_MAIN
#endif // transfer_TEST
