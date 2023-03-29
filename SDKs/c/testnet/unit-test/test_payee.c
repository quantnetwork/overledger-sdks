#ifndef payee_TEST
#define payee_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payee_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payee.h"
payee_t* instantiate_payee(int include_optional);

#include "test_payment.c"


payee_t* instantiate_payee(int include_optional) {
  payee_t* payee = NULL;
  if (include_optional) {
    payee = payee_create(
       // false, not to have infinite recursion
      instantiate_payment(0),
      "a"
    );
  } else {
    payee = payee_create(
      NULL,
      "a"
    );
  }

  return payee;
}


#ifdef payee_MAIN

void test_payee(int include_optional) {
    payee_t* payee_1 = instantiate_payee(include_optional);

	cJSON* jsonpayee_1 = payee_convertToJSON(payee_1);
	printf("payee :\n%s\n", cJSON_Print(jsonpayee_1));
	payee_t* payee_2 = payee_parseFromJSON(jsonpayee_1);
	cJSON* jsonpayee_2 = payee_convertToJSON(payee_2);
	printf("repeating payee:\n%s\n", cJSON_Print(jsonpayee_2));
}

int main() {
  test_payee(1);
  test_payee(0);

  printf("Hello world \n");
  return 0;
}

#endif // payee_MAIN
#endif // payee_TEST
