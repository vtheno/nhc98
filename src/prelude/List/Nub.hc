#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+24)
extern Node FN_Prelude_46_61_61[];
extern Node FN_List_46nubBy[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_List_46nub[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v173: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_List_46nub[] = {
  CAPTAG(useLabel(FN_List_46nub),1)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, CAPTAG(useLabel(FN_List_46nubBy),1)
,};
