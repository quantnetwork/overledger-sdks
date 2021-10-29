#ifndef address_balance_response_TEST
#define address_balance_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_balance_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_balance_response.h"
address_balance_response_t* instantiate_address_balance_response(int include_optional);



address_balance_response_t* instantiate_address_balance_response(int include_optional) {
  address_balance_response_t* address_balance_response = NULL;
  if (include_optional) {
    address_balance_response = address_balance_response_create(
      "a",
      1.337,
      "a"
    );
  } else {
    address_balance_response = address_balance_response_create(
      "a",
      1.337,
      "a"
    );
  }

  return address_balance_response;
}


#ifdef address_balance_response_MAIN

void test_address_balance_response(int include_optional) {
    address_balance_response_t* address_balance_response_1 = instantiate_address_balance_response(include_optional);

	cJSON* jsonaddress_balance_response_1 = address_balance_response_convertToJSON(address_balance_response_1);
	printf("address_balance_response :\n%s\n", cJSON_Print(jsonaddress_balance_response_1));
	address_balance_response_t* address_balance_response_2 = address_balance_response_parseFromJSON(jsonaddress_balance_response_1);
	cJSON* jsonaddress_balance_response_2 = address_balance_response_convertToJSON(address_balance_response_2);
	printf("repeating address_balance_response:\n%s\n", cJSON_Print(jsonaddress_balance_response_2));
}

int main() {
  test_address_balance_response(1);
  test_address_balance_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_balance_response_MAIN
#endif // address_balance_response_TEST
