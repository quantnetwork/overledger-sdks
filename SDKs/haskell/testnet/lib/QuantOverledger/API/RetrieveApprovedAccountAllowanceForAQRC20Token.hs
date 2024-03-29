{-
   Quant Overledger API

   Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

   OpenAPI Version: 3.0.1
   Quant Overledger API API version: 2.0
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : QuantOverledger.API.RetrieveApprovedAccountAllowanceForAQRC20Token
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module QuantOverledger.API.RetrieveApprovedAccountAllowanceForAQRC20Token where

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


-- ** RetrieveApprovedAccountAllowanceForAQRC20Token

-- *** readApprovedDebitAmount

-- | @POST \/v2\/tokenise\/tokens\/qrc20\/approved-debit-amount@
-- 
-- Retrieve how many QRC20 tokens an address is allowed to debit
-- 
-- Submits a query to the Blockchain Network and returns the number of QRC20 tokens a particular account is allowed to debit from another account
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
readApprovedDebitAmount
  :: (Consumes ReadApprovedDebitAmount MimeJSON, MimeRender MimeJSON ReadApprovedAccountAllowanceRequestSchema)
  => ReadApprovedAccountAllowanceRequestSchema -- ^ "readApprovedAccountAllowanceRequestSchema"
  -> Authorization -- ^ "authorization"
  -> QuantOverledgerRequest ReadApprovedDebitAmount MimeJSON TokenReadQRC20Response MimeJSON
readApprovedDebitAmount readApprovedAccountAllowanceRequestSchema (Authorization authorization) =
  _mkRequest "POST" ["/v2/tokenise/tokens/qrc20/approved-debit-amount"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` readApprovedAccountAllowanceRequestSchema
    `addHeader` toHeader ("Authorization", authorization)

data ReadApprovedDebitAmount 
instance HasBodyParam ReadApprovedDebitAmount ReadApprovedAccountAllowanceRequestSchema 

-- | @application/json@
instance Consumes ReadApprovedDebitAmount MimeJSON

-- | @application/json@
instance Produces ReadApprovedDebitAmount MimeJSON

