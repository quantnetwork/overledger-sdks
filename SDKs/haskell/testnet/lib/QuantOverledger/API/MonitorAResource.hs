{-
   Quant Overledger API

   Quant’s Overledger API allows developers to create applications for multiple DLT’s using a single standard set of operations and data structures.In order to maintain the security of private keys, most operations have two steps – prepare and execute. The prepare step is the point at which all arguments are specified and standardised payloads are sent. Overledger converts this standard payload into a DLT-specific transaction object. In the execute step, the SDK signs the transaction object that Overledger created and submits it to Overledger to perform the operation

   OpenAPI Version: 3.0.1
   Quant Overledger API API version: 2.0
   Generated by OpenAPI Generator (https://openapi-generator.tech)
-}

{-|
Module : QuantOverledger.API.MonitorAResource
-}

{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE FlexibleInstances #-}
{-# LANGUAGE MonoLocalBinds #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing -fno-warn-unused-binds -fno-warn-unused-imports #-}

module QuantOverledger.API.MonitorAResource where

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


-- ** MonitorAResource

-- *** resourceMonitoringAddress

-- | @POST \/v2\/resourcemonitoring\/address@
-- 
-- Monitor an address for incoming and outgoing transactions
-- 
-- Overledger creates a tracking record for the given address and records information each time the given address receives or sends transactions on the DLT
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
resourceMonitoringAddress
  :: (Consumes ResourceMonitoringAddress MimeJSON, MimeRender MimeJSON AddressMonitoringRequestSchema)
  => AddressMonitoringRequestSchema -- ^ "addressMonitoringRequestSchema"
  -> Authorization -- ^ "authorization"
  -> QuantOverledgerRequest ResourceMonitoringAddress MimeJSON AddressMonitoringResponseSchema MimeJSON
resourceMonitoringAddress addressMonitoringRequestSchema (Authorization authorization) =
  _mkRequest "POST" ["/v2/resourcemonitoring/address"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` addressMonitoringRequestSchema
    `addHeader` toHeader ("Authorization", authorization)

data ResourceMonitoringAddress 
instance HasBodyParam ResourceMonitoringAddress AddressMonitoringRequestSchema 

-- | @application/json@
instance Consumes ResourceMonitoringAddress MimeJSON

-- | @application/json@
instance Produces ResourceMonitoringAddress MimeJSON


-- *** trackAndSubscribeEvent

-- | @POST \/v2\/resourcemonitoring\/smartcontractevent@
-- 
-- Monitor a smart contract for an event
-- 
-- Overledger creates a tracking record for the given smart contract and records information each time a transaction on the DLT triggers a specific event
-- 
-- AuthMethod: 'AuthOAuthOAuth2SecurityScheme'
-- 
trackAndSubscribeEvent
  :: (Consumes TrackAndSubscribeEvent MimeJSON, MimeRender MimeJSON MonitorSmartContractRequestSchema)
  => MonitorSmartContractRequestSchema -- ^ "monitorSmartContractRequestSchema"
  -> Authorization -- ^ "authorization"
  -> QuantOverledgerRequest TrackAndSubscribeEvent MimeJSON CreateSmartContractMonitoringSchema MimeJSON
trackAndSubscribeEvent monitorSmartContractRequestSchema (Authorization authorization) =
  _mkRequest "POST" ["/v2/resourcemonitoring/smartcontractevent"]
    `_hasAuthType` (P.Proxy :: P.Proxy AuthOAuthOAuth2SecurityScheme)
    `setBodyParam` monitorSmartContractRequestSchema
    `addHeader` toHeader ("Authorization", authorization)

data TrackAndSubscribeEvent 
instance HasBodyParam TrackAndSubscribeEvent MonitorSmartContractRequestSchema 

-- | @application/json@
instance Consumes TrackAndSubscribeEvent MimeJSON

-- | @application/json@
instance Produces TrackAndSubscribeEvent MimeJSON

