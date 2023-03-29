#ifndef prepare_request_details_TEST
#define prepare_request_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_request_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_request_details.h"
prepare_request_details_t* instantiate_prepare_request_details(int include_optional);

#include "test_alias_details.c"
#include "test_pagination.c"
#include "test_collector.c"
#include "test_additional_owner.c"
#include "test_owner.c"
#include "test_creator.c"
#include "test_lock_details.c"
#include "test_beneficiary.c"
#include "test_account_details.c"
#include "test_payment.c"
#include "test_signer_account.c"


prepare_request_details_t* instantiate_prepare_request_details(int include_optional) {
  prepare_request_details_t* prepare_request_details = NULL;
  if (include_optional) {
    prepare_request_details = prepare_request_details_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate_alias_details(0),
       // false, not to have infinite recursion
      instantiate_pagination(0),
      list_create(),
      list_create(),
      "a",
      "a",
      list_create(),
       // false, not to have infinite recursion
      instantiate_collector(0),
      list_create(),
       // false, not to have infinite recursion
      instantiate_additional_owner(0),
       // false, not to have infinite recursion
      instantiate_owner(0),
       // false, not to have infinite recursion
      instantiate_creator(0),
      list_create(),
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_lock_details(0),
      "a",
      "a",
      "0",
       // false, not to have infinite recursion
      instantiate_beneficiary(0),
      list_create(),
       // false, not to have infinite recursion
      instantiate_account_details(0),
      "a",
       // false, not to have infinite recursion
      instantiate_payment(0),
       // false, not to have infinite recursion
      instantiate_signer_account(0)
    );
  } else {
    prepare_request_details = prepare_request_details_create(
      list_create(),
      NULL,
      NULL,
      list_create(),
      list_create(),
      "a",
      "a",
      list_create(),
      NULL,
      list_create(),
      NULL,
      NULL,
      NULL,
      list_create(),
      "a",
      "a",
      NULL,
      "a",
      "a",
      "0",
      NULL,
      list_create(),
      NULL,
      "a",
      NULL,
      NULL
    );
  }

  return prepare_request_details;
}


#ifdef prepare_request_details_MAIN

void test_prepare_request_details(int include_optional) {
    prepare_request_details_t* prepare_request_details_1 = instantiate_prepare_request_details(include_optional);

	cJSON* jsonprepare_request_details_1 = prepare_request_details_convertToJSON(prepare_request_details_1);
	printf("prepare_request_details :\n%s\n", cJSON_Print(jsonprepare_request_details_1));
	prepare_request_details_t* prepare_request_details_2 = prepare_request_details_parseFromJSON(jsonprepare_request_details_1);
	cJSON* jsonprepare_request_details_2 = prepare_request_details_convertToJSON(prepare_request_details_2);
	printf("repeating prepare_request_details:\n%s\n", cJSON_Print(jsonprepare_request_details_2));
}

int main() {
  test_prepare_request_details(1);
  test_prepare_request_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_request_details_MAIN
#endif // prepare_request_details_TEST
