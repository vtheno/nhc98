#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+22)
#define v185	((void*)startLabel+25)
#define CT_v187	((void*)startLabel+48)
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v187)
,};
Node FN_Prelude_46foldl[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v184: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v185: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,6,HEAP_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v187: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46foldl[] = {
  CAPTAG(useLabel(FN_Prelude_46foldl),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46foldl))
,};
