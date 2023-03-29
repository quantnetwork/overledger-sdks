#ifndef payment_request_details_schema_TEST
#define payment_request_details_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define payment_request_details_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/payment_request_details_schema.h"
payment_request_details_schema_t* instantiate_payment_request_details_schema(int include_optional);



payment_request_details_schema_t* instantiate_payment_request_details_schema(int include_optional) {
  payment_request_details_schema_t* payment_request_details_schema = NULL;
  if (include_optional) {
    payment_request_details_schema = payment_request_details_schema_create(
      list_create(),
      "a",
      quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_overledger-javascript-library,
      list_create()
    );
  } else {
    payment_request_details_schema = payment_request_details_schema_create(
      list_create(),
      "a",
      quant_overledger_api_payment_request_details_schema_OVERLEDGERSIGNINGTYPE_overledger-javascript-library,
      list_create()
    );
  }

  return payment_request_details_schema;
}


#ifdef payment_request_details_schema_MAIN

void test_payment_request_details_schema(int include_optional) {
    payment_request_details_schema_t* payment_request_details_schema_1 = instantiate_payment_request_details_schema(include_optional);

	cJSON* jsonpayment_request_details_schema_1 = payment_request_details_schema_convertToJSON(payment_request_details_schema_1);
	printf("payment_request_details_schema :\n%s\n", cJSON_Print(jsonpayment_request_details_schema_1));
	payment_request_details_schema_t* payment_request_details_schema_2 = payment_request_details_schema_parseFromJSON(jsonpayment_request_details_schema_1);
	cJSON* jsonpayment_request_details_schema_2 = payment_request_details_schema_convertToJSON(payment_request_details_schema_2);
	printf("repeating payment_request_details_schema:\n%s\n", cJSON_Print(jsonpayment_request_details_schema_2));
}

int main() {
  test_payment_request_details_schema(1);
  test_payment_request_details_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // payment_request_details_schema_MAIN
#endif // payment_request_details_schema_TEST
