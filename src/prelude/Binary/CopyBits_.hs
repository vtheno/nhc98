module NHC.Binary
  ( copyBits
  ) where

import NHC.GreenCard
import BinHandle ({-type-}BinHandle(..))
import BinPtr    ({-type-}BinPtr(..))
import SeekBin   (seekBin)
import GetBits   (getBits)
import PutBits   (putBits)

    -- %-#include <stdio.h>

copyBits :: BinHandle -> BinPtr -> BinHandle -> BinPtr -> Int -> IO ()
copyBits sbh (BP sptr) dbh (BP dptr) n =
  if sameBH sbh dbh then
    let dir = sptr < dptr
    in
    rehearse (n,32)
      (\(remain,s) ->
        let (step,termcond) = if remain<s then (remain,Nothing)
                              else (s, Just (remain-s,s))
            pos p = if dir then (p+remain-step) else (p+n-remain)
        in
        seekBin sbh (BP (pos sptr)) >>
        getBits sbh step >>= \v->
        seekBin dbh (BP (pos dptr)) >>
        putBits dbh step v >>
        return termcond
      )
  else
    seekBin sbh (BP sptr) >>
    seekBin dbh (BP dptr) >>
    rehearse (n,32)
      (\(remain,s) ->
        let (step,termcond) = if remain<s then (remain,Nothing)
                              else (s, Just (remain-s,s))
        in
        getBits sbh step >>= \v->
        putBits dbh step v >>
        return termcond
      )

rehearse :: a -> (a -> IO (Maybe a)) -> IO ()
rehearse val func =
  func val >>= \maybe->
  case maybe of
    Nothing  -> return ()
    (Just v) -> rehearse v func

foreign import ccall hs_sameBH :: ForeignObj -> ForeignObj -> Bool

sameBH :: BinHandle -> BinHandle -> Bool
sameBH (BH sbh) (BH dbh) =
  let b = hs_sameBH sbh dbh in
  b


