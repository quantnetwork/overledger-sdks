#ifndef linked_blocks_TEST
#define linked_blocks_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define linked_blocks_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/linked_blocks.h"
linked_blocks_t* instantiate_linked_blocks(int include_optional);



linked_blocks_t* instantiate_linked_blocks(int include_optional) {
  linked_blocks_t* linked_blocks = NULL;
  if (include_optional) {
    linked_blocks = linked_blocks_create(
      "a",
      "a"
    );
  } else {
    linked_blocks = linked_blocks_create(
      "a",
      "a"
    );
  }

  return linked_blocks;
}


#ifdef linked_blocks_MAIN

void test_linked_blocks(int include_optional) {
    linked_blocks_t* linked_blocks_1 = instantiate_linked_blocks(include_optional);

	cJSON* jsonlinked_blocks_1 = linked_blocks_convertToJSON(linked_blocks_1);
	printf("linked_blocks :\n%s\n", cJSON_Print(jsonlinked_blocks_1));
	linked_blocks_t* linked_blocks_2 = linked_blocks_parseFromJSON(jsonlinked_blocks_1);
	cJSON* jsonlinked_blocks_2 = linked_blocks_convertToJSON(linked_blocks_2);
	printf("repeating linked_blocks:\n%s\n", cJSON_Print(jsonlinked_blocks_2));
}

int main() {
  test_linked_blocks(1);
  test_linked_blocks(0);

  printf("Hello world \n");
  return 0;
}

#endif // linked_blocks_MAIN
#endif // linked_blocks_TEST
