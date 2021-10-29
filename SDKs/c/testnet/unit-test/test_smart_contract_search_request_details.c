#ifndef smart_contract_search_request_details_TEST
#define smart_contract_search_request_details_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smart_contract_search_request_details_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smart_contract_search_request_details.h"
smart_contract_search_request_details_t* instantiate_smart_contract_search_request_details(int include_optional);



smart_contract_search_request_details_t* instantiate_smart_contract_search_request_details(int include_optional) {
  smart_contract_search_request_details_t* smart_contract_search_request_details = NULL;
  if (include_optional) {
    smart_contract_search_request_details = smart_contract_search_request_details_create(
      list_create()
    );
  } else {
    smart_contract_search_request_details = smart_contract_search_request_details_create(
      list_create()
    );
  }

  return smart_contract_search_request_details;
}


#ifdef smart_contract_search_request_details_MAIN

void test_smart_contract_search_request_details(int include_optional) {
    smart_contract_search_request_details_t* smart_contract_search_request_details_1 = instantiate_smart_contract_search_request_details(include_optional);

	cJSON* jsonsmart_contract_search_request_details_1 = smart_contract_search_request_details_convertToJSON(smart_contract_search_request_details_1);
	printf("smart_contract_search_request_details :\n%s\n", cJSON_Print(jsonsmart_contract_search_request_details_1));
	smart_contract_search_request_details_t* smart_contract_search_request_details_2 = smart_contract_search_request_details_parseFromJSON(jsonsmart_contract_search_request_details_1);
	cJSON* jsonsmart_contract_search_request_details_2 = smart_contract_search_request_details_convertToJSON(smart_contract_search_request_details_2);
	printf("repeating smart_contract_search_request_details:\n%s\n", cJSON_Print(jsonsmart_contract_search_request_details_2));
}

int main() {
  test_smart_contract_search_request_details(1);
  test_smart_contract_search_request_details(0);

  printf("Hello world \n");
  return 0;
}

#endif // smart_contract_search_request_details_MAIN
#endif // smart_contract_search_request_details_TEST
