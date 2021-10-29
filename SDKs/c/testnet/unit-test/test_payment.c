#ifndef payment_TEST
#define payment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment.h"
payment_t* instantiate_payment(int include_optional);



payment_t* instantiate_payment(int include_optional) {
  payment_t* payment = NULL;
  if (include_optional) {
    payment = payment_create(
      "a",
      "a",
      "a"
    );
  } else {
    payment = payment_create(
      "a",
      "a",
      "a"
    );
  }

  return payment;
}


#ifdef payment_MAIN

void test_payment(int include_optional) {
    payment_t* payment_1 = instantiate_payment(include_optional);

	cJSON* jsonpayment_1 = payment_convertToJSON(payment_1);
	printf("payment :\n%s\n", cJSON_Print(jsonpayment_1));
	payment_t* payment_2 = payment_parseFromJSON(jsonpayment_1);
	cJSON* jsonpayment_2 = payment_convertToJSON(payment_2);
	printf("repeating payment:\n%s\n", cJSON_Print(jsonpayment_2));
}

int main() {
  test_payment(1);
  test_payment(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_MAIN
#endif // payment_TEST
