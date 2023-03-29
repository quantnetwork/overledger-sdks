#ifndef fee_TEST
#define fee_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fee_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fee.h"
fee_t* instantiate_fee(int include_optional);



fee_t* instantiate_fee(int include_optional) {
  fee_t* fee = NULL;
  if (include_optional) {
    fee = fee_create(
      "a",
      "a"
    );
  } else {
    fee = fee_create(
      "a",
      "a"
    );
  }

  return fee;
}


#ifdef fee_MAIN

void test_fee(int include_optional) {
    fee_t* fee_1 = instantiate_fee(include_optional);

	cJSON* jsonfee_1 = fee_convertToJSON(fee_1);
	printf("fee :\n%s\n", cJSON_Print(jsonfee_1));
	fee_t* fee_2 = fee_parseFromJSON(jsonfee_1);
	cJSON* jsonfee_2 = fee_convertToJSON(fee_2);
	printf("repeating fee:\n%s\n", cJSON_Print(jsonfee_2));
}

int main() {
  test_fee(1);
  test_fee(0);

  printf("Hello world \n");
  return 0;
}

#endif // fee_MAIN
#endif // fee_TEST
