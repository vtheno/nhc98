#include "newmacros.h"
#include "runtime.h"

#define v175	((void*)startLabel+30)
#define CT_v178	((void*)startLabel+56)
#define ST_v177	((void*)startLabel+76)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v178)
,};
Node FN_Prelude_46until[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,4,0)
,	/* v175: (byte 2) */
  bytes2word(PUSH_ARG_I3,RETURN_EVAL,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46until[] = {
  CAPTAG(useLabel(FN_Prelude_46until),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46until))
,	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(117,110,116,105)
, bytes2word(108,0,0,0)
,};
