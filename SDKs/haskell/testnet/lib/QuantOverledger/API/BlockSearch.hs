{-
   Quant Overledger API

   Quant's Overledger API allows developers to create applications for multiple DLT's using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation  # Authentication  <!-- ReDoc-Inject: <security-definitions> -->

   OpenAPI Version: 3.0.1
   Quant Overledger API API version: 2.0
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : QuantOverledger.API.BlockSearch
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module QuantOverledger.API.BlockSearch where

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


-- ** BlockSearch

-- *** autoExecuteSearchBlockRequest

-- | @POST \/v2\/autoexecution\/search\/block\/{blockId}@
-- 
-- Prepare and automatically execute a search for a block on a DLT.
-- 
-- Generates a request ID and automatically executes the block search on the requested DLT.
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
autoExecuteSearchBlockRequest
  :: (Consumes AutoExecuteSearchBlockRequest MimeJSON, MimeRender MimeJSON PrepareSearchSchema)
  => PrepareSearchSchema -- ^ "prepareSearchSchema"
  -> Authorization -- ^ "authorization"
  -> BlockId -- ^ "blockId"
  -> QuantOverledgerRequest AutoExecuteSearchBlockRequest MimeJSON AutoExecuteSearchBlockResponseSchema MimeJSON
autoExecuteSearchBlockRequest prepareSearchSchema (Authorization authorization) (BlockId blockId) =
  _mkRequest "POST" ["/v2/autoexecution/search/block/",toPath blockId]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` prepareSearchSchema
    `addHeader` toHeader ("Authorization", authorization)

data AutoExecuteSearchBlockRequest 
instance HasBodyParam AutoExecuteSearchBlockRequest PrepareSearchSchema 

-- | @application/json@
instance Consumes AutoExecuteSearchBlockRequest MimeJSON

-- | @application/json@
instance Produces AutoExecuteSearchBlockRequest MimeJSON


-- *** executePreparedSearchRequestBlock

-- | @POST \/v2\/execution\/search\/block@
-- 
-- Execute a search for a block on a DLT
-- 
-- Takes a request ID and searches for the block on the requested DLT based on the parameters specified in the prepare request
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
executePreparedSearchRequestBlock
  :: Authorization -- ^ "authorization"
  -> RequestId -- ^ "requestId"
  -> QuantOverledgerRequest ExecutePreparedSearchRequestBlock MimeNoContent ExecuteSearchBlockResponse MimeJSON
executePreparedSearchRequestBlock (Authorization authorization) (RequestId requestId) =
  _mkRequest "POST" ["/v2/execution/search/block"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `addHeader` toHeader ("Authorization", authorization)
    `addQuery` toQuery ("requestId", Just requestId)

data ExecutePreparedSearchRequestBlock  
-- | @application/json@
instance Produces ExecutePreparedSearchRequestBlock MimeJSON


-- *** prepareSearchBlockByBlockId

-- | @POST \/v2\/preparation\/search\/block\/{blockId}@
-- 
-- Prepare Search Block by Block Id.
-- 
-- Returns a request ID for executing a block search on the requested DLT. Block searches can be prepared based on the Block ID, Block Number or for the latest block at the time
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
prepareSearchBlockByBlockId
  :: (Consumes PrepareSearchBlockByBlockId MimeJSON, MimeRender MimeJSON PrepareSearchSchema)
  => PrepareSearchSchema -- ^ "prepareSearchSchema"
  -> Authorization -- ^ "authorization"
  -> BlockId -- ^ "blockId"
  -> QuantOverledgerRequest PrepareSearchBlockByBlockId MimeJSON PrepareSearchResponseSchema MimeJSON
prepareSearchBlockByBlockId prepareSearchSchema (Authorization authorization) (BlockId blockId) =
  _mkRequest "POST" ["/v2/preparation/search/block/",toPath blockId]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` prepareSearchSchema
    `addHeader` toHeader ("Authorization", authorization)

data PrepareSearchBlockByBlockId 
instance HasBodyParam PrepareSearchBlockByBlockId PrepareSearchSchema 

-- | @application/json@
instance Consumes PrepareSearchBlockByBlockId MimeJSON

-- | @application/json@
instance Produces PrepareSearchBlockByBlockId MimeJSON

