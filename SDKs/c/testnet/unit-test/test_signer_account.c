#ifndef signer_account_TEST
#define signer_account_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define signer_account_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/signer_account.h"
signer_account_t* instantiate_signer_account(int include_optional);



signer_account_t* instantiate_signer_account(int include_optional) {
  signer_account_t* signer_account = NULL;
  if (include_optional) {
    signer_account = signer_account_create(
      "0"
    );
  } else {
    signer_account = signer_account_create(
      "0"
    );
  }

  return signer_account;
}


#ifdef signer_account_MAIN

void test_signer_account(int include_optional) {
    signer_account_t* signer_account_1 = instantiate_signer_account(include_optional);

	cJSON* jsonsigner_account_1 = signer_account_convertToJSON(signer_account_1);
	printf("signer_account :\n%s\n", cJSON_Print(jsonsigner_account_1));
	signer_account_t* signer_account_2 = signer_account_parseFromJSON(jsonsigner_account_1);
	cJSON* jsonsigner_account_2 = signer_account_convertToJSON(signer_account_2);
	printf("repeating signer_account:\n%s\n", cJSON_Print(jsonsigner_account_2));
}

int main() {
  test_signer_account(1);
  test_signer_account(0);

  printf("Hello world \n");
  return 0;
}

#endif // signer_account_MAIN
#endif // signer_account_TEST
