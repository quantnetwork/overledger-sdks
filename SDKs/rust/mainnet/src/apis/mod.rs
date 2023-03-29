use std::error;
use std::fmt;

#[derive(Debug, Clone)]
pub struct ResponseContent<T> {
    pub status: reqwest::StatusCode,
    pub content: String,
    pub entity: Option<T>,
}

#[derive(Debug)]
pub enum Error<T> {
    Reqwest(reqwest::Error),
    Serde(serde_json::Error),
    Io(std::io::Error),
    ResponseError(ResponseContent<T>),
}

impl <T> fmt::Display for Error<T> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let (module, e) = match self {
            Error::Reqwest(e) => ("reqwest", e.to_string()),
            Error::Serde(e) => ("serde", e.to_string()),
            Error::Io(e) => ("IO", e.to_string()),
            Error::ResponseError(e) => ("response", format!("status code {}", e.status)),
        };
        write!(f, "error in {}: {}", module, e)
    }
}

impl <T: fmt::Debug> error::Error for Error<T> {
    fn source(&self) -> Option<&(dyn error::Error + 'static)> {
        Some(match self {
            Error::Reqwest(e) => e,
            Error::Serde(e) => e,
            Error::Io(e) => e,
            Error::ResponseError(_) => return None,
        })
    }
}

impl <T> From<reqwest::Error> for Error<T> {
    fn from(e: reqwest::Error) -> Self {
        Error::Reqwest(e)
    }
}

impl <T> From<serde_json::Error> for Error<T> {
    fn from(e: serde_json::Error) -> Self {
        Error::Serde(e)
    }
}

impl <T> From<std::io::Error> for Error<T> {
    fn from(e: std::io::Error) -> Self {
        Error::Io(e)
    }
}

pub fn urlencode<T: AsRef<str>>(s: T) -> String {
    ::url::form_urlencoded::byte_serialize(s.as_ref().as_bytes()).collect()
}

pub mod address_search_api;
pub mod block_search_api;
pub mod create_aqrc20_credit_transaction_api;
pub mod create_aqrc20_debit_transaction_api;
pub mod create_aqrc721_token_collection_transaction_api;
pub mod create_aqrc721_transfer_transaction_api;
pub mod create_a_subscription_api;
pub mod create_a_transaction_api;
pub mod create_and_pay_from_aqrc20_shared_account_api;
pub mod fungible_token_controller_api;
pub mod md_app_transaction_query_api;
pub mod manage_monitored_resources_api;
pub mod manage_qrc20_token_supply_api;
pub mod manage_qrc721_token_supply_api;
pub mod manage_subscriptions_api;
pub mod monitor_a_resource_api;
pub mod retrieve_account_balance_for_aqrc20_token_api;
pub mod retrieve_approved_account_allowance_for_aqrc20_token_api;
pub mod retrieve_approved_account_information_for_aqrc20_token_api;
pub mod retrieve_approved_account_information_of_aqrc721_token_api;
pub mod retrieve_contract_owner_information_of_aqrc_token_api;
pub mod retrieve_owner_information_for_aqrc721_token_api;
pub mod retrieve_supply_information_for_aqrc_token_api;
pub mod retrieve_the_count_of_qrc721_tokens_api;
pub mod retrieve_uri_information_for_aqrc721_token_api;
pub mod smart_contract_search_api;
pub mod subscribe_to_qrc20_account_credit_payments_api;
pub mod subscribe_to_qrc20_account_debit_payments_api;
pub mod subscribe_to_qrc20_shared_account_updates_api;
pub mod subscribe_to_qrc20_token_supply_changes_api;
pub mod subscribe_to_qrc721_asset_collection_updates_api;
pub mod subscribe_to_qrc721_asset_transfers_api;
pub mod subscribe_to_qrc721_supply_change_updates_api;
pub mod supported_fungible_tokens_api;
pub mod supported_non_fungible_tokens_api;
pub mod token_controller_api;
pub mod transaction_search_api;
pub mod utxo_status_search_api;

pub mod configuration;
