{-
   Quant Overledger API

   Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

   OpenAPI Version: 3.0.1
   Quant Overledger API API version: 2.0
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : QuantOverledger.API.UTXOStatusSearch
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module QuantOverledger.API.UTXOStatusSearch where

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


-- ** UTXOStatusSearch

-- *** autoExecuteSearchUtxoRequest

-- | @POST \/v2\/autoexecution\/search\/utxo\/{utxoId}@
-- 
-- Prepare and automatically execute a search for a UTXO on a DLT.
-- 
-- Generates a request ID and automatically executes the utxo search on the requested DLT.
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
autoExecuteSearchUtxoRequest
  :: (Consumes AutoExecuteSearchUtxoRequest MimeJSON, MimeRender MimeJSON PrepareSearchSchema)
  => PrepareSearchSchema -- ^ "prepareSearchSchema"
  -> Authorization -- ^ "authorization"
  -> UtxoId -- ^ "utxoId"
  -> QuantOverledgerRequest AutoExecuteSearchUtxoRequest MimeJSON AutoExecuteSearchUTXOResponseSchema MimeJSON
autoExecuteSearchUtxoRequest prepareSearchSchema (Authorization authorization) (UtxoId utxoId) =
  _mkRequest "POST" ["/v2/autoexecution/search/utxo/",toPath utxoId]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` prepareSearchSchema
    `addHeader` toHeader ("Authorization", authorization)

data AutoExecuteSearchUtxoRequest 
instance HasBodyParam AutoExecuteSearchUtxoRequest PrepareSearchSchema 

-- | @application/json@
instance Consumes AutoExecuteSearchUtxoRequest MimeJSON

-- | @application/json@
instance Produces AutoExecuteSearchUtxoRequest MimeJSON


-- *** executeUTXOPreparedSearchRequest

-- | @POST \/v2\/execution\/search\/utxo@
-- 
-- Execute a search for UTXO state on a DLT
-- 
-- Takes a request ID, searches for the UTXO state and retrieves the details on the requested DLT. This API is only applicable for Bitcoin.
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
executeUTXOPreparedSearchRequest
  :: Authorization -- ^ "authorization"
  -> RequestId -- ^ "requestId"
  -> QuantOverledgerRequest ExecuteUTXOPreparedSearchRequest MimeNoContent ExecuteSearchUTXOResponseSchema MimeJSON
executeUTXOPreparedSearchRequest (Authorization authorization) (RequestId requestId) =
  _mkRequest "POST" ["/v2/execution/search/utxo"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `addHeader` toHeader ("Authorization", authorization)
    `addQuery` toQuery ("requestId", Just requestId)

data ExecuteUTXOPreparedSearchRequest  
-- | @application/json@
instance Produces ExecuteUTXOPreparedSearchRequest MimeJSON


-- *** prepareSearchUTXOState

-- | @POST \/v2\/preparation\/search\/utxo\/{utxoId}@
-- 
-- Prepare Search for a UTXO State.
-- 
-- Returns a request ID for executing a search for the status ofa UTXO on UTXO based DLT’s
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
prepareSearchUTXOState
  :: (Consumes PrepareSearchUTXOState MimeJSON, MimeRender MimeJSON PrepareSearchSchema)
  => PrepareSearchSchema -- ^ "prepareSearchSchema"
  -> Authorization -- ^ "authorization"
  -> UtxoId -- ^ "utxoId"
  -> QuantOverledgerRequest PrepareSearchUTXOState MimeJSON PrepareSearchResponseSchema MimeJSON
prepareSearchUTXOState prepareSearchSchema (Authorization authorization) (UtxoId utxoId) =
  _mkRequest "POST" ["/v2/preparation/search/utxo/",toPath utxoId]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` prepareSearchSchema
    `addHeader` toHeader ("Authorization", authorization)

data PrepareSearchUTXOState 
instance HasBodyParam PrepareSearchUTXOState PrepareSearchSchema 

-- | @application/json@
instance Consumes PrepareSearchUTXOState MimeJSON

-- | @application/json@
instance Produces PrepareSearchUTXOState MimeJSON

