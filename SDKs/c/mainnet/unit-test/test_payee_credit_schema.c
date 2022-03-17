#ifndef payee_credit_schema_TEST
#define payee_credit_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payee_credit_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payee_credit_schema.h"
payee_credit_schema_t* instantiate_payee_credit_schema(int include_optional);

#include "test_payment_schema.c"


payee_credit_schema_t* instantiate_payee_credit_schema(int include_optional) {
  payee_credit_schema_t* payee_credit_schema = NULL;
  if (include_optional) {
    payee_credit_schema = payee_credit_schema_create(
       // false, not to have infinite recursion
      instantiate_payment_schema(0),
      "a"
    );
  } else {
    payee_credit_schema = payee_credit_schema_create(
      NULL,
      "a"
    );
  }

  return payee_credit_schema;
}


#ifdef payee_credit_schema_MAIN

void test_payee_credit_schema(int include_optional) {
    payee_credit_schema_t* payee_credit_schema_1 = instantiate_payee_credit_schema(include_optional);

	cJSON* jsonpayee_credit_schema_1 = payee_credit_schema_convertToJSON(payee_credit_schema_1);
	printf("payee_credit_schema :\n%s\n", cJSON_Print(jsonpayee_credit_schema_1));
	payee_credit_schema_t* payee_credit_schema_2 = payee_credit_schema_parseFromJSON(jsonpayee_credit_schema_1);
	cJSON* jsonpayee_credit_schema_2 = payee_credit_schema_convertToJSON(payee_credit_schema_2);
	printf("repeating payee_credit_schema:\n%s\n", cJSON_Print(jsonpayee_credit_schema_2));
}

int main() {
  test_payee_credit_schema(1);
  test_payee_credit_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // payee_credit_schema_MAIN
#endif // payee_credit_schema_TEST
