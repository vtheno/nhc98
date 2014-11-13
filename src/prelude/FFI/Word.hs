# 1 "Word.hs.cpp"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "Word.hs.cpp"
module NHC.FFI
  -- all types are abstract and instances of:
  -- Num, Bounded, Real, Integral, Ix, Enum, Read, Show
  ( Word8
  , Word16
  , Word32
  , Word64
  ) where

{- Note explicit braces and semicolons here - layout is corrupted by cpp. -}

{import Numeric (readSigned,readDec,showSigned,showHex)
;import Ix
# 121 "Word.hs.cpp"
; ; data Word8 ; ; foreign import ccall primEqWord8 :: Word8 -> Word8 -> Bool ; foreign import ccall primLtWord8 :: Word8 -> Word8 -> Bool ; foreign import ccall primLeWord8 :: Word8 -> Word8 -> Bool ; foreign import ccall primGtWord8 :: Word8 -> Word8 -> Bool ; foreign import ccall primGeWord8 :: Word8 -> Word8 -> Bool ; foreign import ccall primAddWord8 :: Word8 -> Word8 -> Word8 ; foreign import ccall primSubWord8 :: Word8 -> Word8 -> Word8 ; foreign import ccall primMulWord8 :: Word8 -> Word8 -> Word8 ; foreign import ccall primSignumWord8 :: Word8 -> Word8 ; foreign import ccall primQuotWord8 :: Word8 -> Word8 -> Word8 ; foreign import ccall primRemWord8 :: Word8 -> Word8 -> Word8 ; foreign import ccall primToEnumWord8 :: Int -> Word8 ; foreign import ccall primFromEnumWord8 :: Word8 -> Int ; foreign import ccall primWord8FromInteger :: Integer -> Word8 ; foreign import ccall primWord8ToInteger :: Word8 -> Integer ; ; instance Eq Word8 where { (==) = primEqWord8 } ; ; instance Ord Word8 where { (<) = primLtWord8 ; (<=) = primLeWord8 ; (>) = primGtWord8 ; (>=) = primGeWord8 } ; ; instance Num Word8 where { (+) = primAddWord8 ; (-) = primSubWord8 ; (*) = primMulWord8 ; negate = error "negate: not permitted on Word values" ; abs = id ; signum = primSignumWord8 ; fromInteger = primWord8FromInteger } ; ; instance Bounded Word8 where { minBound = fromInteger 0 ; maxBound = fromInteger 255 } ; ; instance Real Word8 where { toRational i = toInteger i % 1 } ; ; instance Integral Word8 where { quot = primQuotWord8 ; rem = primRemWord8 ; toInteger = primWord8ToInteger } ; ; instance Ix Word8 where { range (m,n) = [m..n] ; index b@(m,n) i | inRange b i = fromIntegral (i-m) | True = error "Ix.index: Index out of range." ; inRange (m,n) i = m <= i && i <= n } ; ; instance Enum Word8 where { toEnum = primToEnumWord8 ; fromEnum = primFromEnumWord8 ; enumFrom n = n : enumFrom (n+1) ; enumFromThen m n = m : enumFromThen n (2*n-m) } ; ; instance Read Word8 where { readsPrec p = readSigned readDec } ; ; instance Show Word8 where { showsPrec p x = showString "0x" . showSigned showHex p x }
; ; data Word16 ; ; foreign import ccall primEqWord16 :: Word16 -> Word16 -> Bool ; foreign import ccall primLtWord16 :: Word16 -> Word16 -> Bool ; foreign import ccall primLeWord16 :: Word16 -> Word16 -> Bool ; foreign import ccall primGtWord16 :: Word16 -> Word16 -> Bool ; foreign import ccall primGeWord16 :: Word16 -> Word16 -> Bool ; foreign import ccall primAddWord16 :: Word16 -> Word16 -> Word16 ; foreign import ccall primSubWord16 :: Word16 -> Word16 -> Word16 ; foreign import ccall primMulWord16 :: Word16 -> Word16 -> Word16 ; foreign import ccall primSignumWord16 :: Word16 -> Word16 ; foreign import ccall primQuotWord16 :: Word16 -> Word16 -> Word16 ; foreign import ccall primRemWord16 :: Word16 -> Word16 -> Word16 ; foreign import ccall primToEnumWord16 :: Int -> Word16 ; foreign import ccall primFromEnumWord16 :: Word16 -> Int ; foreign import ccall primWord16FromInteger :: Integer -> Word16 ; foreign import ccall primWord16ToInteger :: Word16 -> Integer ; ; instance Eq Word16 where { (==) = primEqWord16 } ; ; instance Ord Word16 where { (<) = primLtWord16 ; (<=) = primLeWord16 ; (>) = primGtWord16 ; (>=) = primGeWord16 } ; ; instance Num Word16 where { (+) = primAddWord16 ; (-) = primSubWord16 ; (*) = primMulWord16 ; negate = error "negate: not permitted on Word values" ; abs = id ; signum = primSignumWord16 ; fromInteger = primWord16FromInteger } ; ; instance Bounded Word16 where { minBound = fromInteger 0 ; maxBound = fromInteger 65535 } ; ; instance Real Word16 where { toRational i = toInteger i % 1 } ; ; instance Integral Word16 where { quot = primQuotWord16 ; rem = primRemWord16 ; toInteger = primWord16ToInteger } ; ; instance Ix Word16 where { range (m,n) = [m..n] ; index b@(m,n) i | inRange b i = fromIntegral (i-m) | True = error "Ix.index: Index out of range." ; inRange (m,n) i = m <= i && i <= n } ; ; instance Enum Word16 where { toEnum = primToEnumWord16 ; fromEnum = primFromEnumWord16 ; enumFrom n = n : enumFrom (n+1) ; enumFromThen m n = m : enumFromThen n (2*n-m) } ; ; instance Read Word16 where { readsPrec p = readSigned readDec } ; ; instance Show Word16 where { showsPrec p x = showString "0x" . showSigned showHex p x }
; ; data Word32 ; ; foreign import ccall primEqWord32 :: Word32 -> Word32 -> Bool ; foreign import ccall primLtWord32 :: Word32 -> Word32 -> Bool ; foreign import ccall primLeWord32 :: Word32 -> Word32 -> Bool ; foreign import ccall primGtWord32 :: Word32 -> Word32 -> Bool ; foreign import ccall primGeWord32 :: Word32 -> Word32 -> Bool ; foreign import ccall primAddWord32 :: Word32 -> Word32 -> Word32 ; foreign import ccall primSubWord32 :: Word32 -> Word32 -> Word32 ; foreign import ccall primMulWord32 :: Word32 -> Word32 -> Word32 ; foreign import ccall primSignumWord32 :: Word32 -> Word32 ; foreign import ccall primQuotWord32 :: Word32 -> Word32 -> Word32 ; foreign import ccall primRemWord32 :: Word32 -> Word32 -> Word32 ; foreign import ccall primToEnumWord32 :: Int -> Word32 ; foreign import ccall primFromEnumWord32 :: Word32 -> Int ; foreign import ccall primWord32FromInteger :: Integer -> Word32 ; foreign import ccall primWord32ToInteger :: Word32 -> Integer ; ; instance Eq Word32 where { (==) = primEqWord32 } ; ; instance Ord Word32 where { (<) = primLtWord32 ; (<=) = primLeWord32 ; (>) = primGtWord32 ; (>=) = primGeWord32 } ; ; instance Num Word32 where { (+) = primAddWord32 ; (-) = primSubWord32 ; (*) = primMulWord32 ; negate = error "negate: not permitted on Word values" ; abs = id ; signum = primSignumWord32 ; fromInteger = primWord32FromInteger } ; ; instance Bounded Word32 where { minBound = fromInteger 0 ; maxBound = fromInteger 4294967295 } ; ; instance Real Word32 where { toRational i = toInteger i % 1 } ; ; instance Integral Word32 where { quot = primQuotWord32 ; rem = primRemWord32 ; toInteger = primWord32ToInteger } ; ; instance Ix Word32 where { range (m,n) = [m..n] ; index b@(m,n) i | inRange b i = fromIntegral (i-m) | True = error "Ix.index: Index out of range." ; inRange (m,n) i = m <= i && i <= n } ; ; instance Enum Word32 where { toEnum = primToEnumWord32 ; fromEnum = primFromEnumWord32 ; enumFrom n = n : enumFrom (n+1) ; enumFromThen m n = m : enumFromThen n (2*n-m) } ; ; instance Read Word32 where { readsPrec p = readSigned readDec } ; ; instance Show Word32 where { showsPrec p x = showString "0x" . showSigned showHex p x }
; ; data Word64 ; ; foreign import ccall primEqWord64 :: Word64 -> Word64 -> Bool ; foreign import ccall primLtWord64 :: Word64 -> Word64 -> Bool ; foreign import ccall primLeWord64 :: Word64 -> Word64 -> Bool ; foreign import ccall primGtWord64 :: Word64 -> Word64 -> Bool ; foreign import ccall primGeWord64 :: Word64 -> Word64 -> Bool ; foreign import ccall primAddWord64 :: Word64 -> Word64 -> Word64 ; foreign import ccall primSubWord64 :: Word64 -> Word64 -> Word64 ; foreign import ccall primMulWord64 :: Word64 -> Word64 -> Word64 ; foreign import ccall primSignumWord64 :: Word64 -> Word64 ; foreign import ccall primQuotWord64 :: Word64 -> Word64 -> Word64 ; foreign import ccall primRemWord64 :: Word64 -> Word64 -> Word64 ; foreign import ccall primToEnumWord64 :: Int -> Word64 ; foreign import ccall primFromEnumWord64 :: Word64 -> Int ; foreign import ccall primWord64FromInteger :: Integer -> Word64 ; foreign import ccall primWord64ToInteger :: Word64 -> Integer ; ; instance Eq Word64 where { (==) = primEqWord64 } ; ; instance Ord Word64 where { (<) = primLtWord64 ; (<=) = primLeWord64 ; (>) = primGtWord64 ; (>=) = primGeWord64 } ; ; instance Num Word64 where { (+) = primAddWord64 ; (-) = primSubWord64 ; (*) = primMulWord64 ; negate = error "negate: not permitted on Word values" ; abs = id ; signum = primSignumWord64 ; fromInteger = primWord64FromInteger } ; ; instance Bounded Word64 where { minBound = fromInteger 0 ; maxBound = fromInteger 18446744073709551615 } ; ; instance Real Word64 where { toRational i = toInteger i % 1 } ; ; instance Integral Word64 where { quot = primQuotWord64 ; rem = primRemWord64 ; toInteger = primWord64ToInteger } ; ; instance Ix Word64 where { range (m,n) = [m..n] ; index b@(m,n) i | inRange b i = fromIntegral (i-m) | True = error "Ix.index: Index out of range." ; inRange (m,n) i = m <= i && i <= n } ; ; instance Enum Word64 where { toEnum = primToEnumWord64 ; fromEnum = primFromEnumWord64 ; enumFrom n = n : enumFrom (n+1) ; enumFromThen m n = m : enumFromThen n (2*n-m) } ; ; instance Read Word64 where { readsPrec p = readSigned readDec } ; ; instance Show Word64 where { showsPrec p x = showString "0x" . showSigned showHex p x }

}