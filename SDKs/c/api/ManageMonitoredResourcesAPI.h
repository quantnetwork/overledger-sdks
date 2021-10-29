#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/address_monitoring_details_schema.h"
#include "../model/delete_resource_monitoring_address_schema.h"
#include "../model/error_list.h"
#include "../model/internal_server_error_schema.h"
#include "../model/resource_monitoring_address_schema.h"
#include "../model/smart_contract_monitoring_details_schema.h"
#include "../model/smart_contract_monitoring_schema.h"
#include "../model/status_update_monitoring_request_schema.h"
#include "../model/update_address_monitoring_schema.h"


// Stop monitoring a smart contract
//
// Deletes the tracking record in Overledger to stop Overledger from recording updates for a smart contract based on the given Resource Monitoring ID
//
smart_contract_monitoring_schema_t*
ManageMonitoredResourcesAPI_deleteEventMonitoring(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId );


// Stop monitoring an address
//
// Deletes the tracking record in Overledger to stop Overledger from recording updates for an address based on the given Resource Monitoring ID
//
delete_resource_monitoring_address_schema_t*
ManageMonitoredResourcesAPI_deleteResourceMonitoringAddress(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId );


// Retrieve a list of addresses being monitored
//
// Returns a list of addresses being monitored for your application and the corresponding Resource Monitoring ID
//
list_t*
ManageMonitoredResourcesAPI_getListOfAddresses(apiClient_t *apiClient, char * Authorization );


// Retrieve a list of all resources being monitored
//
// Returns a list of all of the resources being monitored for your application and the corresponding Resource Monitoring ID
//
list_t*
ManageMonitoredResourcesAPI_getListOfResources(apiClient_t *apiClient, char * Authorization );


// Retrieve a list of smart contracts being monitored
//
// Returns a list of smart contracts being monitored for your application and the corresponding Resource Monitoring ID
//
list_t*
ManageMonitoredResourcesAPI_getListOfSmartContractEvents(apiClient_t *apiClient, char * Authorization );


// Retrieve recorded updates for a specific monitored address
//
// Returns the update information recorded in Overledger for an address being monitored by your application for a given Resource Monitoring ID
//
address_monitoring_details_schema_t*
ManageMonitoredResourcesAPI_getMonitoredAddress(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId );


// Retrieve recorded updates for a specific monitored smart contract
//
// Returns the update information recorded in Overledger for asmart contract being monitored by your application for a given Resource Monitoring ID
//
smart_contract_monitoring_details_schema_t*
ManageMonitoredResourcesAPI_getMonitoredSmartContractEventDetails(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId );


// Update the monitoring status of a smart contract
//
// Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to be inactive will pause Overledger recording updates for the requested smart contract
//
smart_contract_monitoring_schema_t*
ManageMonitoredResourcesAPI_updateEventMonitoring(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId , status_update_monitoring_request_schema_t * status_update_monitoring_request_schema );


// Update the monitoring status of an address
//
// Updates the resource monitoring status to be either active or inactive for the given Resource Monitoring ID. Updating the status to beinactive will pause Overledger recording updates for the requested address
//
update_address_monitoring_schema_t*
ManageMonitoredResourcesAPI_updateResourceMonitoringAddress(apiClient_t *apiClient, char * Authorization , char * resourceMonitoringId , status_update_monitoring_request_schema_t * status_update_monitoring_request_schema );


