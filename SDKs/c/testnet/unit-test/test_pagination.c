#ifndef pagination_TEST
#define pagination_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pagination_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pagination.h"
pagination_t* instantiate_pagination(int include_optional);



pagination_t* instantiate_pagination(int include_optional) {
  pagination_t* pagination = NULL;
  if (include_optional) {
    pagination = pagination_create(
      0,
      0,
      0
    );
  } else {
    pagination = pagination_create(
      0,
      0,
      0
    );
  }

  return pagination;
}


#ifdef pagination_MAIN

void test_pagination(int include_optional) {
    pagination_t* pagination_1 = instantiate_pagination(include_optional);

	cJSON* jsonpagination_1 = pagination_convertToJSON(pagination_1);
	printf("pagination :\n%s\n", cJSON_Print(jsonpagination_1));
	pagination_t* pagination_2 = pagination_parseFromJSON(jsonpagination_1);
	cJSON* jsonpagination_2 = pagination_convertToJSON(pagination_2);
	printf("repeating pagination:\n%s\n", cJSON_Print(jsonpagination_2));
}

int main() {
  test_pagination(1);
  test_pagination(0);

  printf("Hello world \n");
  return 0;
}

#endif // pagination_MAIN
#endif // pagination_TEST
