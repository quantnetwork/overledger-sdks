#ifndef account_details_TEST
#define account_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define account_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/account_details.h"
account_details_t* instantiate_account_details(int include_optional);



account_details_t* instantiate_account_details(int include_optional) {
  account_details_t* account_details = NULL;
  if (include_optional) {
    account_details = account_details_create(
      "0",
      "0",
      "0",
      "0",
      "a"
    );
  } else {
    account_details = account_details_create(
      "0",
      "0",
      "0",
      "0",
      "a"
    );
  }

  return account_details;
}


#ifdef account_details_MAIN

void test_account_details(int include_optional) {
    account_details_t* account_details_1 = instantiate_account_details(include_optional);

	cJSON* jsonaccount_details_1 = account_details_convertToJSON(account_details_1);
	printf("account_details :\n%s\n", cJSON_Print(jsonaccount_details_1));
	account_details_t* account_details_2 = account_details_parseFromJSON(jsonaccount_details_1);
	cJSON* jsonaccount_details_2 = account_details_convertToJSON(account_details_2);
	printf("repeating account_details:\n%s\n", cJSON_Print(jsonaccount_details_2));
}

int main() {
  test_account_details(1);
  test_account_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // account_details_MAIN
#endif // account_details_TEST
