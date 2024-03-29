{-
   Quant Overledger API

   Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

   OpenAPI Version: 3.0.1
   Quant Overledger API API version: 2.0
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : QuantOverledger.API.TransactionSearch
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module QuantOverledger.API.TransactionSearch where

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


-- ** TransactionSearch

-- *** autoExecuteSearchTransactionRequest

-- | @POST \/v2\/autoexecution\/search\/transaction@
-- 
-- Prepare and automatically execute a search for a transaction on a DLT.
-- 
-- Generates a request ID and automatically executes the transaction search on the requested DLT.
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
autoExecuteSearchTransactionRequest
  :: (Consumes AutoExecuteSearchTransactionRequest MimeJSON, MimeRender MimeJSON PrepareSearchSchema)
  => PrepareSearchSchema -- ^ "prepareSearchSchema"
  -> Authorization -- ^ "authorization"
  -> TransactionId -- ^ "transactionId" -  The transactionId to search for
  -> QuantOverledgerRequest AutoExecuteSearchTransactionRequest MimeJSON PrepareAndExecuteTransactionResponse MimeJSON
autoExecuteSearchTransactionRequest prepareSearchSchema (Authorization authorization) (TransactionId transactionId) =
  _mkRequest "POST" ["/v2/autoexecution/search/transaction"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` prepareSearchSchema
    `addHeader` toHeader ("Authorization", authorization)
    `addQuery` toQuery ("transactionId", Just transactionId)

data AutoExecuteSearchTransactionRequest 
instance HasBodyParam AutoExecuteSearchTransactionRequest PrepareSearchSchema 

-- | @application/json@
instance Consumes AutoExecuteSearchTransactionRequest MimeJSON

-- | @application/json@
instance Produces AutoExecuteSearchTransactionRequest MimeJSON


-- *** executePreparedSearchRequestTransaction

-- | @POST \/v2\/execution\/search\/transaction@
-- 
-- Execute a search for a transaction on a DLT
-- 
-- Takes a request ID and searches for the transaction on the requested DLT
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
executePreparedSearchRequestTransaction
  :: Authorization -- ^ "authorization"
  -> RequestId -- ^ "requestId"
  -> QuantOverledgerRequest ExecutePreparedSearchRequestTransaction MimeNoContent ExecuteSearchTransactionResponse MimeJSON
executePreparedSearchRequestTransaction (Authorization authorization) (RequestId requestId) =
  _mkRequest "POST" ["/v2/execution/search/transaction"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `addHeader` toHeader ("Authorization", authorization)
    `addQuery` toQuery ("requestId", Just requestId)

data ExecutePreparedSearchRequestTransaction  
-- | @application/json@
instance Produces ExecutePreparedSearchRequestTransaction MimeJSON


-- *** prepareSearchRequest

-- | @POST \/v2\/preparation\/search\/transaction@
-- 
-- Prepare a search for a transaction on a DLT
-- 
-- Searches for and returns data on transactions on a particular DLT. Returns a request ID for executing a transaction search on the requested DLT
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
prepareSearchRequest
  :: (Consumes PrepareSearchRequest MimeJSON, MimeRender MimeJSON PrepareSearchSchema)
  => PrepareSearchSchema -- ^ "prepareSearchSchema"
  -> Authorization -- ^ "authorization"
  -> TransactionId -- ^ "transactionId" -  The transactionId to search for
  -> QuantOverledgerRequest PrepareSearchRequest MimeJSON PrepareSearchResponseSchema MimeJSON
prepareSearchRequest prepareSearchSchema (Authorization authorization) (TransactionId transactionId) =
  _mkRequest "POST" ["/v2/preparation/search/transaction"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` prepareSearchSchema
    `addHeader` toHeader ("Authorization", authorization)
    `addQuery` toQuery ("transactionId", Just transactionId)

data PrepareSearchRequest 
instance HasBodyParam PrepareSearchRequest PrepareSearchSchema 

-- | @application/json@
instance Consumes PrepareSearchRequest MimeJSON

-- | @application/json@
instance Produces PrepareSearchRequest MimeJSON

