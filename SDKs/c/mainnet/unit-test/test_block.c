#ifndef block_TEST
#define block_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define block_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/block.h"
block_t* instantiate_block(int include_optional);

#include "test_linked_blocks.c"


block_t* instantiate_block(int include_optional) {
  block_t* block = NULL;
  if (include_optional) {
    block = block_create(
      "a",
      56,
      list_create(),
      list_create(),
      list_create(),
       // false, not to have infinite recursion
      instantiate_linked_blocks(0),
      56,
      "a",
      "0",
      0
    );
  } else {
    block = block_create(
      "a",
      56,
      list_create(),
      list_create(),
      list_create(),
      NULL,
      56,
      "a",
      "0",
      0
    );
  }

  return block;
}


#ifdef block_MAIN

void test_block(int include_optional) {
    block_t* block_1 = instantiate_block(include_optional);

	cJSON* jsonblock_1 = block_convertToJSON(block_1);
	printf("block :\n%s\n", cJSON_Print(jsonblock_1));
	block_t* block_2 = block_parseFromJSON(jsonblock_1);
	cJSON* jsonblock_2 = block_convertToJSON(block_2);
	printf("repeating block:\n%s\n", cJSON_Print(jsonblock_2));
}

int main() {
  test_block(1);
  test_block(0);

  printf("Hello world \n");
  return 0;
}

#endif // block_MAIN
#endif // block_TEST
