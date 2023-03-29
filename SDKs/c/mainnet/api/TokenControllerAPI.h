#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/non_fungible_token_dto.h"


non_fungible_token_dto_t*
TokenControllerAPI_getNonFungibleToken(apiClient_t *apiClient, char * tokenName , char * technology , char * network );


