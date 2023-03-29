#ifndef creator_TEST
#define creator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define creator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/creator.h"
creator_t* instantiate_creator(int include_optional);



creator_t* instantiate_creator(int include_optional) {
  creator_t* creator = NULL;
  if (include_optional) {
    creator = creator_create(
      "0"
    );
  } else {
    creator = creator_create(
      "0"
    );
  }

  return creator;
}


#ifdef creator_MAIN

void test_creator(int include_optional) {
    creator_t* creator_1 = instantiate_creator(include_optional);

	cJSON* jsoncreator_1 = creator_convertToJSON(creator_1);
	printf("creator :\n%s\n", cJSON_Print(jsoncreator_1));
	creator_t* creator_2 = creator_parseFromJSON(jsoncreator_1);
	cJSON* jsoncreator_2 = creator_convertToJSON(creator_2);
	printf("repeating creator:\n%s\n", cJSON_Print(jsoncreator_2));
}

int main() {
  test_creator(1);
  test_creator(0);

  printf("Hello world \n");
  return 0;
}

#endif // creator_MAIN
#endif // creator_TEST
