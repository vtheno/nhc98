module Time where

import qualified Ix

data Month = January   | February | March    | April
           | May       | June     | July     | August
           | September | October  | November | December
           deriving (Eq, Ord, Enum, Bounded, Ix.Ix, Read, Show)
