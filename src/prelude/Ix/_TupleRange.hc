#include "newmacros.h"
#include "runtime.h"

#define CT_v202	((void*)startLabel+72)
#define FN_LAMBDA200	((void*)startLabel+112)
#define CT_v203	((void*)startLabel+124)
#define F0_LAMBDA200	((void*)startLabel+132)
extern Node FN_Ix_46range[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46concatMap[];
extern Node FN_Prelude_46map[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v202)
,};
Node FN_Ix_46_95tupleRange[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,0,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,PUSH_ARG,4)
, bytes2word(HEAP_CVAL_I5,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,3,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v202: (byte 0) */
  HW(4,4)
, 0
,};
Node F0_Ix_46_95tupleRange[] = {
  CAPTAG(useLabel(FN_Ix_46_95tupleRange),4)
, VAPTAG(useLabel(FN_Ix_46range))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA200),1)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v203)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(2,1,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v203: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),2)
, VAPTAG(useLabel(FN_Prelude_46map))
,};
