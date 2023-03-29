#ifndef prepare_burn_transaction_request_schema_qrc721_TEST
#define prepare_burn_transaction_request_schema_qrc721_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prepare_burn_transaction_request_schema_qrc721_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prepare_burn_transaction_request_schema_qrc721.h"
prepare_burn_transaction_request_schema_qrc721_t* instantiate_prepare_burn_transaction_request_schema_qrc721(int include_optional);

#include "test_location.c"
#include "test_burn_request_details_schema_qrc721.c"


prepare_burn_transaction_request_schema_qrc721_t* instantiate_prepare_burn_transaction_request_schema_qrc721(int include_optional) {
  prepare_burn_transaction_request_schema_qrc721_t* prepare_burn_transaction_request_schema_qrc721 = NULL;
  if (include_optional) {
    prepare_burn_transaction_request_schema_qrc721 = prepare_burn_transaction_request_schema_qrc721_create(
       // false, not to have infinite recursion
      instantiate_location(0),
      quant_overledger_api_prepare_burn_transaction_request_schema_qrc721_TYPE_Payment,
      quant_overledger_api_prepare_burn_transaction_request_schema_qrc721_URGENCY_Normal,
       // false, not to have infinite recursion
      instantiate_burn_request_details_schema_qrc721(0)
    );
  } else {
    prepare_burn_transaction_request_schema_qrc721 = prepare_burn_transaction_request_schema_qrc721_create(
      NULL,
      quant_overledger_api_prepare_burn_transaction_request_schema_qrc721_TYPE_Payment,
      quant_overledger_api_prepare_burn_transaction_request_schema_qrc721_URGENCY_Normal,
      NULL
    );
  }

  return prepare_burn_transaction_request_schema_qrc721;
}


#ifdef prepare_burn_transaction_request_schema_qrc721_MAIN

void test_prepare_burn_transaction_request_schema_qrc721(int include_optional) {
    prepare_burn_transaction_request_schema_qrc721_t* prepare_burn_transaction_request_schema_qrc721_1 = instantiate_prepare_burn_transaction_request_schema_qrc721(include_optional);

	cJSON* jsonprepare_burn_transaction_request_schema_qrc721_1 = prepare_burn_transaction_request_schema_qrc721_convertToJSON(prepare_burn_transaction_request_schema_qrc721_1);
	printf("prepare_burn_transaction_request_schema_qrc721 :\n%s\n", cJSON_Print(jsonprepare_burn_transaction_request_schema_qrc721_1));
	prepare_burn_transaction_request_schema_qrc721_t* prepare_burn_transaction_request_schema_qrc721_2 = prepare_burn_transaction_request_schema_qrc721_parseFromJSON(jsonprepare_burn_transaction_request_schema_qrc721_1);
	cJSON* jsonprepare_burn_transaction_request_schema_qrc721_2 = prepare_burn_transaction_request_schema_qrc721_convertToJSON(prepare_burn_transaction_request_schema_qrc721_2);
	printf("repeating prepare_burn_transaction_request_schema_qrc721:\n%s\n", cJSON_Print(jsonprepare_burn_transaction_request_schema_qrc721_2));
}

int main() {
  test_prepare_burn_transaction_request_schema_qrc721(1);
  test_prepare_burn_transaction_request_schema_qrc721(0);

  printf("Hello world \n");
  return 0;
}

#endif // prepare_burn_transaction_request_schema_qrc721_MAIN
#endif // prepare_burn_transaction_request_schema_qrc721_TEST
