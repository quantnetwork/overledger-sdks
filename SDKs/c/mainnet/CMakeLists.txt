cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "quant_overledger_api")
set(VERSION 0.0.1) # this default version can be overridden in PreTarget.cmake

find_package(CURL 7.58.0 REQUIRED)
if(CURL_FOUND)
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else(CURL_FOUND)
    message(FATAL_ERROR "Could not find the CURL library and development files.")
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/account_details.c
    model/add_secondary_account_request_details_schema.c
    model/additional_owner.c
    model/additional_owner_remove_secondary_schema.c
    model/address_balance_response.c
    model/address_monitoring_details_schema.c
    model/address_monitoring_request_schema.c
    model/address_monitoring_response_schema.c
    model/alias_details.c
    model/approve_request_details_schema.c
    model/auto_exec_search_address_sequence_response_schema.c
    model/auto_execute_search_address_balance_response_schema.c
    model/auto_execute_search_block_response_schema.c
    model/auto_execute_search_utxo_response_schema.c
    model/beneficiary.c
    model/beneficiary_mint_schema_qrc20.c
    model/beneficiary_mint_schema_qrc721.c
    model/block.c
    model/block_hash.c
    model/block_size.c
    model/burn.c
    model/burn_request_details_schema.c
    model/burn_request_details_schema_qrc721.c
    model/burn_schema.c
    model/collector.c
    model/create_smart_contract_monitoring_schema.c
    model/create_webhook_subscription_request_schema.c
    model/create_webhook_subscription_response_schema.c
    model/creator.c
    model/creator_mint_schema.c
    model/credit_request_details_schema.c
    model/delete_resource_monitoring_address_schema.c
    model/destination.c
    model/destination_payment_schema.c
    model/destination_transfer_schema.c
    model/erc20_dto.c
    model/error.c
    model/error_details.c
    model/error_list.c
    model/error_response_message.c
    model/event_subscription_response.c
    model/event_subscription_response_details.c
    model/execute_search_balance_response.c
    model/execute_search_block_response.c
    model/execute_search_sequence_response.c
    model/execute_search_transaction_response.c
    model/execute_search_utxo_response.c
    model/execute_search_utxo_response_schema.c
    model/execute_smart_contract_read_response_schema.c
    model/execute_transaction_request.c
    model/execute_transaction_response.c
    model/extra_fields.c
    model/fee.c
    model/function.c
    model/function_dto.c
    model/fungible_token_response_dto.c
    model/internal_server_error_schema.c
    model/linked_blocks.c
    model/list_webhook_subscription_response_schema.c
    model/location.c
    model/location_dto.c
    model/lock_details.c
    model/mandate.c
    model/mint.c
    model/mint_request_details_schema_qrc20.c
    model/mint_request_details_schema_qrc721.c
    model/mint_schema_qrc20.c
    model/mint_schema_qrc721.c
    model/monitor_smart_contract_event_param.c
    model/monitor_smart_contract_request_schema.c
    model/non_fungible_token_dto.c
    model/non_fungible_token_response.c
    model/origin.c
    model/origin_payment_schema.c
    model/origin_transfer_schema.c
    model/overledger_transaction_response_schema.c
    model/owner.c
    model/owner_burn_schema.c
    model/owner_remove_secondary_schema.c
    model/pagination.c
    model/parameter.c
    model/payee.c
    model/payee_credit_schema.c
    model/payer.c
    model/payer_credit_schema.c
    model/payment.c
    model/payment_request_details_schema.c
    model/payment_schema.c
    model/prepare_add_secondary_account_request_schema.c
    model/prepare_and_execute_balance_details.c
    model/prepare_and_execute_overledger_error_response.c
    model/prepare_and_execute_search_address_balance_response.c
    model/prepare_and_execute_transaction_response.c
    model/prepare_approve_debit_transaction_request_schema.c
    model/prepare_burn_transaction_request_schema.c
    model/prepare_burn_transaction_request_schema_qrc721.c
    model/prepare_credit_transaction_request_schema.c
    model/prepare_mint_transaction_request_schema_qrc20.c
    model/prepare_mint_transaction_request_schema_qrc721.c
    model/prepare_native_transaction_request_schema.c
    model/prepare_payment_transaction_request_schema.c
    model/prepare_remove_secondary_account_transaction_request_schema.c
    model/prepare_request.c
    model/prepare_request_details.c
    model/prepare_search_response_schema.c
    model/prepare_search_schema.c
    model/prepare_search_smart_contract_request_schema.c
    model/prepare_transaction_response.c
    model/prepare_transaction_smart_contract_invoke_request_schema.c
    model/prepare_transfer_transaction_request_schema.c
    model/read_account_balance_request_schema.c
    model/read_approved_account_allowance_request_schema.c
    model/read_approved_account_request_details_schema.c
    model/read_approved_account_request_schema.c
    model/read_balance_request_details_schema.c
    model/read_balance_request_schema.c
    model/read_contract_owner_request_details_schema.c
    model/read_contract_owner_request_schema.c
    model/read_token_owner_request_details_schema.c
    model/read_token_owner_request_schema.c
    model/receiver.c
    model/remove_secondary_account_details_schema.c
    model/resource_monitored_address_details.c
    model/resource_monitoring_address_details.c
    model/resource_monitoring_address_schema.c
    model/resource_monitoring_details.c
    model/resource_monitoring_smart_contract_event_details.c
    model/resource_monitoring_subscription.c
    model/resource_monitoring_subscription_details.c
    model/script_pub_key.c
    model/secondary_account_additional_owner_schema.c
    model/secondary_account_owner_schema.c
    model/sender.c
    model/signer_account.c
    model/smart_contract.c
    model/smart_contract_destination_schema.c
    model/smart_contract_event_history.c
    model/smart_contract_function_schema.c
    model/smart_contract_input_parameter_schema.c
    model/smart_contract_invoke_request_details_schema.c
    model/smart_contract_monitoring_details_schema.c
    model/smart_contract_monitoring_schema.c
    model/smart_contract_output_parameter_schema.c
    model/smart_contract_payment_schema.c
    model/smart_contract_read_function_schema.c
    model/smart_contract_read_schema.c
    model/smart_contract_request_details_origin.c
    model/smart_contract_schema.c
    model/smart_contract_search_destination_schema.c
    model/smart_contract_search_function_schema.c
    model/smart_contract_search_request_details.c
    model/smart_contract_search_schema.c
    model/smart_contract_tag.c
    model/status.c
    model/status_update_monitoring_request_schema.c
    model/status_update_schema.c
    model/tier_function_dto.c
    model/token_read_qrc20_response.c
    model/token_read_qrc721_response.c
    model/token_read_response_details.c
    model/transaction.c
    model/transfer.c
    model/transfer_request_details_schema.c
    model/transfer_schema.c
    model/update_address_monitoring_schema.c
    model/update_webhook_subscription_request_schema.c
    model/utxo_destination.c
    model/utxo_native_data.c
    model/utxo_smart_contract.c
    model/vout.c
    model/webhook_status_update_schema.c
    model/webhook_subscription_details.c
    model/webhook_subscription_details_schema.c
    model/webhook_subscription_status_update_response.c
    api/AddressSearchAPI.c
    api/BlockSearchAPI.c
    api/CreateAQRC20CreditTransactionAPI.c
    api/CreateAQRC20DebitTransactionAPI.c
    api/CreateAQRC721TokenCollectionTransactionAPI.c
    api/CreateAQRC721TransferTransactionAPI.c
    api/CreateASubscriptionAPI.c
    api/CreateATransactionAPI.c
    api/CreateAndPayFromAQRC20SharedAccountAPI.c
    api/FungibleTokenControllerAPI.c
    api/MDAppTransactionQueryAPI.c
    api/ManageMonitoredResourcesAPI.c
    api/ManageQRC20TokenSupplyAPI.c
    api/ManageQRC721TokenSupplyAPI.c
    api/ManageSubscriptionsAPI.c
    api/MonitorAResourceAPI.c
    api/RetrieveAccountBalanceForAQRC20TokenAPI.c
    api/RetrieveApprovedAccountAllowanceForAQRC20TokenAPI.c
    api/RetrieveApprovedAccountInformationForAQRC20TokenAPI.c
    api/RetrieveApprovedAccountInformationOfAQRC721TokenAPI.c
    api/RetrieveContractOwnerInformationOfAQRCTokenAPI.c
    api/RetrieveOwnerInformationForAQRC721TokenAPI.c
    api/RetrieveSupplyInformationForAQRCTokenAPI.c
    api/RetrieveTheCountOfQRC721TokensAPI.c
    api/RetrieveURIInformationForAQRC721TokenAPI.c
    api/SmartContractSearchAPI.c
    api/SubscribeToQRC20AccountCreditPaymentsAPI.c
    api/SubscribeToQRC20AccountDebitPaymentsAPI.c
    api/SubscribeToQRC20SharedAccountUpdatesAPI.c
    api/SubscribeToQRC20TokenSupplyChangesAPI.c
    api/SubscribeToQRC721AssetCollectionUpdatesAPI.c
    api/SubscribeToQRC721AssetTransfersAPI.c
    api/SubscribeToQRC721SupplyChangeUpdatesAPI.c
    api/SupportedFungibleTokensAPI.c
    api/SupportedNonFungibleTokensAPI.c
    api/TokenControllerAPI.c
    api/TransactionSearchAPI.c
    api/UTXOStatusSearchAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/account_details.h
    model/add_secondary_account_request_details_schema.h
    model/additional_owner.h
    model/additional_owner_remove_secondary_schema.h
    model/address_balance_response.h
    model/address_monitoring_details_schema.h
    model/address_monitoring_request_schema.h
    model/address_monitoring_response_schema.h
    model/alias_details.h
    model/approve_request_details_schema.h
    model/auto_exec_search_address_sequence_response_schema.h
    model/auto_execute_search_address_balance_response_schema.h
    model/auto_execute_search_block_response_schema.h
    model/auto_execute_search_utxo_response_schema.h
    model/beneficiary.h
    model/beneficiary_mint_schema_qrc20.h
    model/beneficiary_mint_schema_qrc721.h
    model/block.h
    model/block_hash.h
    model/block_size.h
    model/burn.h
    model/burn_request_details_schema.h
    model/burn_request_details_schema_qrc721.h
    model/burn_schema.h
    model/collector.h
    model/create_smart_contract_monitoring_schema.h
    model/create_webhook_subscription_request_schema.h
    model/create_webhook_subscription_response_schema.h
    model/creator.h
    model/creator_mint_schema.h
    model/credit_request_details_schema.h
    model/delete_resource_monitoring_address_schema.h
    model/destination.h
    model/destination_payment_schema.h
    model/destination_transfer_schema.h
    model/erc20_dto.h
    model/error.h
    model/error_details.h
    model/error_list.h
    model/error_response_message.h
    model/event_subscription_response.h
    model/event_subscription_response_details.h
    model/execute_search_balance_response.h
    model/execute_search_block_response.h
    model/execute_search_sequence_response.h
    model/execute_search_transaction_response.h
    model/execute_search_utxo_response.h
    model/execute_search_utxo_response_schema.h
    model/execute_smart_contract_read_response_schema.h
    model/execute_transaction_request.h
    model/execute_transaction_response.h
    model/extra_fields.h
    model/fee.h
    model/function.h
    model/function_dto.h
    model/fungible_token_response_dto.h
    model/internal_server_error_schema.h
    model/linked_blocks.h
    model/list_webhook_subscription_response_schema.h
    model/location.h
    model/location_dto.h
    model/lock_details.h
    model/mandate.h
    model/mint.h
    model/mint_request_details_schema_qrc20.h
    model/mint_request_details_schema_qrc721.h
    model/mint_schema_qrc20.h
    model/mint_schema_qrc721.h
    model/monitor_smart_contract_event_param.h
    model/monitor_smart_contract_request_schema.h
    model/non_fungible_token_dto.h
    model/non_fungible_token_response.h
    model/origin.h
    model/origin_payment_schema.h
    model/origin_transfer_schema.h
    model/overledger_transaction_response_schema.h
    model/owner.h
    model/owner_burn_schema.h
    model/owner_remove_secondary_schema.h
    model/pagination.h
    model/parameter.h
    model/payee.h
    model/payee_credit_schema.h
    model/payer.h
    model/payer_credit_schema.h
    model/payment.h
    model/payment_request_details_schema.h
    model/payment_schema.h
    model/prepare_add_secondary_account_request_schema.h
    model/prepare_and_execute_balance_details.h
    model/prepare_and_execute_overledger_error_response.h
    model/prepare_and_execute_search_address_balance_response.h
    model/prepare_and_execute_transaction_response.h
    model/prepare_approve_debit_transaction_request_schema.h
    model/prepare_burn_transaction_request_schema.h
    model/prepare_burn_transaction_request_schema_qrc721.h
    model/prepare_credit_transaction_request_schema.h
    model/prepare_mint_transaction_request_schema_qrc20.h
    model/prepare_mint_transaction_request_schema_qrc721.h
    model/prepare_native_transaction_request_schema.h
    model/prepare_payment_transaction_request_schema.h
    model/prepare_remove_secondary_account_transaction_request_schema.h
    model/prepare_request.h
    model/prepare_request_details.h
    model/prepare_search_response_schema.h
    model/prepare_search_schema.h
    model/prepare_search_smart_contract_request_schema.h
    model/prepare_transaction_response.h
    model/prepare_transaction_smart_contract_invoke_request_schema.h
    model/prepare_transfer_transaction_request_schema.h
    model/read_account_balance_request_schema.h
    model/read_approved_account_allowance_request_schema.h
    model/read_approved_account_request_details_schema.h
    model/read_approved_account_request_schema.h
    model/read_balance_request_details_schema.h
    model/read_balance_request_schema.h
    model/read_contract_owner_request_details_schema.h
    model/read_contract_owner_request_schema.h
    model/read_token_owner_request_details_schema.h
    model/read_token_owner_request_schema.h
    model/receiver.h
    model/remove_secondary_account_details_schema.h
    model/resource_monitored_address_details.h
    model/resource_monitoring_address_details.h
    model/resource_monitoring_address_schema.h
    model/resource_monitoring_details.h
    model/resource_monitoring_smart_contract_event_details.h
    model/resource_monitoring_subscription.h
    model/resource_monitoring_subscription_details.h
    model/script_pub_key.h
    model/secondary_account_additional_owner_schema.h
    model/secondary_account_owner_schema.h
    model/sender.h
    model/signer_account.h
    model/smart_contract.h
    model/smart_contract_destination_schema.h
    model/smart_contract_event_history.h
    model/smart_contract_function_schema.h
    model/smart_contract_input_parameter_schema.h
    model/smart_contract_invoke_request_details_schema.h
    model/smart_contract_monitoring_details_schema.h
    model/smart_contract_monitoring_schema.h
    model/smart_contract_output_parameter_schema.h
    model/smart_contract_payment_schema.h
    model/smart_contract_read_function_schema.h
    model/smart_contract_read_schema.h
    model/smart_contract_request_details_origin.h
    model/smart_contract_schema.h
    model/smart_contract_search_destination_schema.h
    model/smart_contract_search_function_schema.h
    model/smart_contract_search_request_details.h
    model/smart_contract_search_schema.h
    model/smart_contract_tag.h
    model/status.h
    model/status_update_monitoring_request_schema.h
    model/status_update_schema.h
    model/tier_function_dto.h
    model/token_read_qrc20_response.h
    model/token_read_qrc721_response.h
    model/token_read_response_details.h
    model/transaction.h
    model/transfer.h
    model/transfer_request_details_schema.h
    model/transfer_schema.h
    model/update_address_monitoring_schema.h
    model/update_webhook_subscription_request_schema.h
    model/utxo_destination.h
    model/utxo_native_data.h
    model/utxo_smart_contract.h
    model/vout.h
    model/webhook_status_update_schema.h
    model/webhook_subscription_details.h
    model/webhook_subscription_details_schema.h
    model/webhook_subscription_status_update_response.h
    api/AddressSearchAPI.h
    api/BlockSearchAPI.h
    api/CreateAQRC20CreditTransactionAPI.h
    api/CreateAQRC20DebitTransactionAPI.h
    api/CreateAQRC721TokenCollectionTransactionAPI.h
    api/CreateAQRC721TransferTransactionAPI.h
    api/CreateASubscriptionAPI.h
    api/CreateATransactionAPI.h
    api/CreateAndPayFromAQRC20SharedAccountAPI.h
    api/FungibleTokenControllerAPI.h
    api/MDAppTransactionQueryAPI.h
    api/ManageMonitoredResourcesAPI.h
    api/ManageQRC20TokenSupplyAPI.h
    api/ManageQRC721TokenSupplyAPI.h
    api/ManageSubscriptionsAPI.h
    api/MonitorAResourceAPI.h
    api/RetrieveAccountBalanceForAQRC20TokenAPI.h
    api/RetrieveApprovedAccountAllowanceForAQRC20TokenAPI.h
    api/RetrieveApprovedAccountInformationForAQRC20TokenAPI.h
    api/RetrieveApprovedAccountInformationOfAQRC721TokenAPI.h
    api/RetrieveContractOwnerInformationOfAQRCTokenAPI.h
    api/RetrieveOwnerInformationForAQRC721TokenAPI.h
    api/RetrieveSupplyInformationForAQRCTokenAPI.h
    api/RetrieveTheCountOfQRC721TokensAPI.h
    api/RetrieveURIInformationForAQRC721TokenAPI.h
    api/SmartContractSearchAPI.h
    api/SubscribeToQRC20AccountCreditPaymentsAPI.h
    api/SubscribeToQRC20AccountDebitPaymentsAPI.h
    api/SubscribeToQRC20SharedAccountUpdatesAPI.h
    api/SubscribeToQRC20TokenSupplyChangesAPI.h
    api/SubscribeToQRC721AssetCollectionUpdatesAPI.h
    api/SubscribeToQRC721AssetTransfersAPI.h
    api/SubscribeToQRC721SupplyChangeUpdatesAPI.h
    api/SupportedFungibleTokensAPI.h
    api/SupportedNonFungibleTokensAPI.h
    api/TokenControllerAPI.h
    api/TransactionSearchAPI.h
    api/UTXOStatusSearchAPI.h

)

include(PreTarget.cmake OPTIONAL)

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX})
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX} EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${VERSION}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-AddressSearchAPI.c
#    unit-tests/manual-BlockSearchAPI.c
#    unit-tests/manual-CreateAQRC20CreditTransactionAPI.c
#    unit-tests/manual-CreateAQRC20DebitTransactionAPI.c
#    unit-tests/manual-CreateAQRC721TokenCollectionTransactionAPI.c
#    unit-tests/manual-CreateAQRC721TransferTransactionAPI.c
#    unit-tests/manual-CreateASubscriptionAPI.c
#    unit-tests/manual-CreateATransactionAPI.c
#    unit-tests/manual-CreateAndPayFromAQRC20SharedAccountAPI.c
#    unit-tests/manual-FungibleTokenControllerAPI.c
#    unit-tests/manual-MDAppTransactionQueryAPI.c
#    unit-tests/manual-ManageMonitoredResourcesAPI.c
#    unit-tests/manual-ManageQRC20TokenSupplyAPI.c
#    unit-tests/manual-ManageQRC721TokenSupplyAPI.c
#    unit-tests/manual-ManageSubscriptionsAPI.c
#    unit-tests/manual-MonitorAResourceAPI.c
#    unit-tests/manual-RetrieveAccountBalanceForAQRC20TokenAPI.c
#    unit-tests/manual-RetrieveApprovedAccountAllowanceForAQRC20TokenAPI.c
#    unit-tests/manual-RetrieveApprovedAccountInformationForAQRC20TokenAPI.c
#    unit-tests/manual-RetrieveApprovedAccountInformationOfAQRC721TokenAPI.c
#    unit-tests/manual-RetrieveContractOwnerInformationOfAQRCTokenAPI.c
#    unit-tests/manual-RetrieveOwnerInformationForAQRC721TokenAPI.c
#    unit-tests/manual-RetrieveSupplyInformationForAQRCTokenAPI.c
#    unit-tests/manual-RetrieveTheCountOfQRC721TokensAPI.c
#    unit-tests/manual-RetrieveURIInformationForAQRC721TokenAPI.c
#    unit-tests/manual-SmartContractSearchAPI.c
#    unit-tests/manual-SubscribeToQRC20AccountCreditPaymentsAPI.c
#    unit-tests/manual-SubscribeToQRC20AccountDebitPaymentsAPI.c
#    unit-tests/manual-SubscribeToQRC20SharedAccountUpdatesAPI.c
#    unit-tests/manual-SubscribeToQRC20TokenSupplyChangesAPI.c
#    unit-tests/manual-SubscribeToQRC721AssetCollectionUpdatesAPI.c
#    unit-tests/manual-SubscribeToQRC721AssetTransfersAPI.c
#    unit-tests/manual-SubscribeToQRC721SupplyChangeUpdatesAPI.c
#    unit-tests/manual-SupportedFungibleTokensAPI.c
#    unit-tests/manual-SupportedNonFungibleTokensAPI.c
#    unit-tests/manual-TokenControllerAPI.c
#    unit-tests/manual-TransactionSearchAPI.c
#    unit-tests/manual-UTXOStatusSearchAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
