#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/erc20_dto.h"


erc20_dto_t*
FungibleTokenControllerAPI_getToken(apiClient_t *apiClient, char * technology , char * network , char * unit );


