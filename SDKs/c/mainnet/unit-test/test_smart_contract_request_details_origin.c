#ifndef smart_contract_request_details_origin_TEST
#define smart_contract_request_details_origin_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smart_contract_request_details_origin_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smart_contract_request_details_origin.h"
smart_contract_request_details_origin_t* instantiate_smart_contract_request_details_origin(int include_optional);



smart_contract_request_details_origin_t* instantiate_smart_contract_request_details_origin(int include_optional) {
  smart_contract_request_details_origin_t* smart_contract_request_details_origin = NULL;
  if (include_optional) {
    smart_contract_request_details_origin = smart_contract_request_details_origin_create(
      "a"
    );
  } else {
    smart_contract_request_details_origin = smart_contract_request_details_origin_create(
      "a"
    );
  }

  return smart_contract_request_details_origin;
}


#ifdef smart_contract_request_details_origin_MAIN

void test_smart_contract_request_details_origin(int include_optional) {
    smart_contract_request_details_origin_t* smart_contract_request_details_origin_1 = instantiate_smart_contract_request_details_origin(include_optional);

	cJSON* jsonsmart_contract_request_details_origin_1 = smart_contract_request_details_origin_convertToJSON(smart_contract_request_details_origin_1);
	printf("smart_contract_request_details_origin :\n%s\n", cJSON_Print(jsonsmart_contract_request_details_origin_1));
	smart_contract_request_details_origin_t* smart_contract_request_details_origin_2 = smart_contract_request_details_origin_parseFromJSON(jsonsmart_contract_request_details_origin_1);
	cJSON* jsonsmart_contract_request_details_origin_2 = smart_contract_request_details_origin_convertToJSON(smart_contract_request_details_origin_2);
	printf("repeating smart_contract_request_details_origin:\n%s\n", cJSON_Print(jsonsmart_contract_request_details_origin_2));
}

int main() {
  test_smart_contract_request_details_origin(1);
  test_smart_contract_request_details_origin(0);

  printf("Hello world \n");
  return 0;
}

#endif // smart_contract_request_details_origin_MAIN
#endif // smart_contract_request_details_origin_TEST
