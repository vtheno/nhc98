#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+56)
#define ST_v171	((void*)startLabel+84)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46foldl[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Prelude_46product[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
, 40001
, useLabel(ST_v171)
,	/* CT_v172: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46product[] = {
  CAPTAG(useLabel(FN_Prelude_46product),1)
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46foldl),1)
,	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,111,100)
, bytes2word(117,99,116,0)
,};