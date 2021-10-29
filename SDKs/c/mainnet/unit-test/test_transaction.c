#ifndef transaction_TEST
#define transaction_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transaction_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transaction.h"
transaction_t* instantiate_transaction(int include_optional);

#include "test_fee.c"


transaction_t* instantiate_transaction(int include_optional) {
  transaction_t* transaction = NULL;
  if (include_optional) {
    transaction = transaction_create(
      list_create(),
      list_create(),
       // false, not to have infinite recursion
      instantiate_fee(0),
      list_create(),
      "a",
      list_create(),
      "a",
      "a",
      list_create(),
      0,
      0
    );
  } else {
    transaction = transaction_create(
      list_create(),
      list_create(),
      NULL,
      list_create(),
      "a",
      list_create(),
      "a",
      "a",
      list_create(),
      0,
      0
    );
  }

  return transaction;
}


#ifdef transaction_MAIN

void test_transaction(int include_optional) {
    transaction_t* transaction_1 = instantiate_transaction(include_optional);

	cJSON* jsontransaction_1 = transaction_convertToJSON(transaction_1);
	printf("transaction :\n%s\n", cJSON_Print(jsontransaction_1));
	transaction_t* transaction_2 = transaction_parseFromJSON(jsontransaction_1);
	cJSON* jsontransaction_2 = transaction_convertToJSON(transaction_2);
	printf("repeating transaction:\n%s\n", cJSON_Print(jsontransaction_2));
}

int main() {
  test_transaction(1);
  test_transaction(0);

  printf("Hello world \n");
  return 0;
}

#endif // transaction_MAIN
#endif // transaction_TEST
