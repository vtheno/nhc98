#include "newmacros.h"
#include "runtime.h"

#define CT_v215	((void*)startLabel+28)
extern Node FN_Ix_46range[];
extern Node FN_Array_46bounds[];
extern Node FN_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v215)
,};
Node FN_Array_46indices[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v215: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Array_46indices[] = {
  CAPTAG(useLabel(FN_Array_46indices),1)
, VAPTAG(useLabel(FN_Ix_46range))
, CAPTAG(useLabel(FN_Array_46bounds),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
,};
