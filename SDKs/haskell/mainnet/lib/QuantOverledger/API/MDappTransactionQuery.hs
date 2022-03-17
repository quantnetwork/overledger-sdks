{-
   Quant Overledger API

   Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

   OpenAPI Version: 3.0.1
   Quant Overledger API API version: 2.0
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : QuantOverledger.API.MDappTransactionQuery
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module QuantOverledger.API.MDappTransactionQuery where

import QuantOverledger.Core
import QuantOverledger.MimeTypes
import QuantOverledger.Model as M

import qualified Data.Aeson as A
import qualified Data.ByteString as B
import qualified Data.ByteString.Lazy as BL
import qualified Data.Data as P (Typeable, TypeRep, typeOf, typeRep)
import qualified Data.Foldable as P
import qualified Data.Map as Map
import qualified Data.Maybe as P
import qualified Data.Proxy as P (Proxy(..))
import qualified Data.Set as Set
import qualified Data.String as P
import qualified Data.Text as T
import qualified Data.Text.Encoding as T
import qualified Data.Text.Lazy as TL
import qualified Data.Text.Lazy.Encoding as TL
import qualified Data.Time as TI
import qualified Network.HTTP.Client.MultipartFormData as NH
import qualified Network.HTTP.Media as ME
import qualified Network.HTTP.Types as NH
import qualified Web.FormUrlEncoded as WH
import qualified Web.HttpApiData as WH

import Data.Text (Text)
import GHC.Base ((<|>))

import Prelude ((==),(/=),($), (.),(<$>),(<*>),(>>=),Maybe(..),Bool(..),Char,Double,FilePath,Float,Int,Integer,String,fmap,undefined,mempty,maybe,pure,Monad,Applicative,Functor)
import qualified Prelude as P

-- * Operations


-- ** MDappTransactionQuery

-- *** getOvlTransactionByTxId

-- | @GET \/v2\/mdapptransaction\/{overledgertransactionid}@
-- 
-- Retrieve information about a specific transaction created by your application in Overledger
-- 
-- Returns information for a specific transaction based on a given Overledger Transaction ID. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
getOvlTransactionByTxId
  :: Authorization -- ^ "authorization"
  -> Overledgertransactionid -- ^ "overledgertransactionid"
  -> QuantOverledgerRequest GetOvlTransactionByTxId MimeNoContent OverledgerTransactionResponseSchema MimeJSON
getOvlTransactionByTxId (Authorization authorization) (Overledgertransactionid overledgertransactionid) =
  _mkRequest "GET" ["/v2/mdapptransaction/",toPath overledgertransactionid]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `addHeader` toHeader ("Authorization", authorization)

data GetOvlTransactionByTxId  
-- | @application/json@
instance Produces GetOvlTransactionByTxId MimeJSON


-- *** getOvlTransactionsByClientId

-- | @GET \/v2\/mdapptransactions@
-- 
-- Retrieve a list of transactions created by your application in Overledger
-- 
-- Returns a list of transactions and the corresponding Overledger Transaction ID your application has created in Overledger. Does not require a Prepare step, as this data is held within Overledger, rather than on the DLT
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
getOvlTransactionsByClientId
  :: Authorization -- ^ "authorization"
  -> QuantOverledgerRequest GetOvlTransactionsByClientId MimeNoContent [OverledgerTransactionResponseSchema] MimeJSON
getOvlTransactionsByClientId (Authorization authorization) =
  _mkRequest "GET" ["/v2/mdapptransactions"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `addHeader` toHeader ("Authorization", authorization)

data GetOvlTransactionsByClientId  
instance HasOptionalParam GetOvlTransactionsByClientId Offset where
  applyOptionalParam req (Offset xs) =
    req `addQuery` toQuery ("offset", Just xs)
instance HasOptionalParam GetOvlTransactionsByClientId Length where
  applyOptionalParam req (Length xs) =
    req `addQuery` toQuery ("length", Just xs)
-- | @application/json@
instance Produces GetOvlTransactionsByClientId MimeJSON

