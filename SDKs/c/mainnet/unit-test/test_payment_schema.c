#ifndef payment_schema_TEST
#define payment_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_schema.h"
payment_schema_t* instantiate_payment_schema(int include_optional);



payment_schema_t* instantiate_payment_schema(int include_optional) {
  payment_schema_t* payment_schema = NULL;
  if (include_optional) {
    payment_schema = payment_schema_create(
      "a",
      "a"
    );
  } else {
    payment_schema = payment_schema_create(
      "a",
      "a"
    );
  }

  return payment_schema;
}


#ifdef payment_schema_MAIN

void test_payment_schema(int include_optional) {
    payment_schema_t* payment_schema_1 = instantiate_payment_schema(include_optional);

	cJSON* jsonpayment_schema_1 = payment_schema_convertToJSON(payment_schema_1);
	printf("payment_schema :\n%s\n", cJSON_Print(jsonpayment_schema_1));
	payment_schema_t* payment_schema_2 = payment_schema_parseFromJSON(jsonpayment_schema_1);
	cJSON* jsonpayment_schema_2 = payment_schema_convertToJSON(payment_schema_2);
	printf("repeating payment_schema:\n%s\n", cJSON_Print(jsonpayment_schema_2));
}

int main() {
  test_payment_schema(1);
  test_payment_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_schema_MAIN
#endif // payment_schema_TEST
