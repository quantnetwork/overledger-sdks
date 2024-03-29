{-
   Quant Overledger API

   Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

   OpenAPI Version: 3.0.1
   Quant Overledger API API version: 2.0
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : QuantOverledger.API.CreateAQRC20CreditTransaction
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module QuantOverledger.API.CreateAQRC20CreditTransaction where

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


-- ** CreateAQRC20CreditTransaction

-- *** executePreparedRequestTransaction0

-- | @POST \/v2\/execution\/transaction@
-- 
-- Execute a transaction on a DLT
-- 
-- Takes a request ID and submits a signed transaction to the requested DLT.
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
executePreparedRequestTransaction0
  :: (Consumes ExecutePreparedRequestTransaction0 MimeJSON, MimeRender MimeJSON ExecuteTransactionRequest)
  => ExecuteTransactionRequest -- ^ "executeTransactionRequest"
  -> Authorization -- ^ "authorization"
  -> QuantOverledgerRequest ExecutePreparedRequestTransaction0 MimeJSON ExecuteTransactionResponse MimeJSON
executePreparedRequestTransaction0 executeTransactionRequest (Authorization authorization) =
  _mkRequest "POST" ["/v2/execution/transaction"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` executeTransactionRequest
    `addHeader` toHeader ("Authorization", authorization)

data ExecutePreparedRequestTransaction0 
instance HasBodyParam ExecutePreparedRequestTransaction0 ExecuteTransactionRequest 

-- | @application/json@
instance Consumes ExecutePreparedRequestTransaction0 MimeJSON

-- | @application/json@
instance Produces ExecutePreparedRequestTransaction0 MimeJSON


-- *** prepareCreditRequest

-- | @POST \/v2\/preparation\/credit@
-- 
-- Prepare a QRC20 token credit transaction for signing
-- 
-- Transforms a transaction request ready to be signed and returns a request ID for executing. The supported transaction type is “Create Credit” which will allow you to make a payment to another specified account.
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
prepareCreditRequest
  :: (Consumes PrepareCreditRequest MimeJSON, MimeRender MimeJSON PrepareCreditTransactionRequestSchema)
  => PrepareCreditTransactionRequestSchema -- ^ "prepareCreditTransactionRequestSchema"
  -> Authorization -- ^ "authorization"
  -> QuantOverledgerRequest PrepareCreditRequest MimeJSON PrepareTransactionResponse MimeJSON
prepareCreditRequest prepareCreditTransactionRequestSchema (Authorization authorization) =
  _mkRequest "POST" ["/v2/preparation/credit"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` prepareCreditTransactionRequestSchema
    `addHeader` toHeader ("Authorization", authorization)

data PrepareCreditRequest 
instance HasBodyParam PrepareCreditRequest PrepareCreditTransactionRequestSchema 

-- | @application/json@
instance Consumes PrepareCreditRequest MimeJSON

-- | @application/json@
instance Produces PrepareCreditRequest MimeJSON

