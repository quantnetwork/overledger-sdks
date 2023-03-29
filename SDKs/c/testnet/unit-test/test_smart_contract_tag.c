#ifndef smart_contract_tag_TEST
#define smart_contract_tag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smart_contract_tag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smart_contract_tag.h"
smart_contract_tag_t* instantiate_smart_contract_tag(int include_optional);



smart_contract_tag_t* instantiate_smart_contract_tag(int include_optional) {
  smart_contract_tag_t* smart_contract_tag = NULL;
  if (include_optional) {
    smart_contract_tag = smart_contract_tag_create(
      "0",
      "0",
      "0"
    );
  } else {
    smart_contract_tag = smart_contract_tag_create(
      "0",
      "0",
      "0"
    );
  }

  return smart_contract_tag;
}


#ifdef smart_contract_tag_MAIN

void test_smart_contract_tag(int include_optional) {
    smart_contract_tag_t* smart_contract_tag_1 = instantiate_smart_contract_tag(include_optional);

	cJSON* jsonsmart_contract_tag_1 = smart_contract_tag_convertToJSON(smart_contract_tag_1);
	printf("smart_contract_tag :\n%s\n", cJSON_Print(jsonsmart_contract_tag_1));
	smart_contract_tag_t* smart_contract_tag_2 = smart_contract_tag_parseFromJSON(jsonsmart_contract_tag_1);
	cJSON* jsonsmart_contract_tag_2 = smart_contract_tag_convertToJSON(smart_contract_tag_2);
	printf("repeating smart_contract_tag:\n%s\n", cJSON_Print(jsonsmart_contract_tag_2));
}

int main() {
  test_smart_contract_tag(1);
  test_smart_contract_tag(0);

  printf("Hello world \n");
  return 0;
}

#endif // smart_contract_tag_MAIN
#endif // smart_contract_tag_TEST
