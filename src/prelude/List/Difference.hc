#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+28)
extern Node FN_List_46delete[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46foldl[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_List_46_92_92[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46_92_92[] = {
  CAPTAG(useLabel(FN_List_46_92_92),1)
, VAPTAG(useLabel(FN_List_46delete))
, CAPTAG(useLabel(FN_Prelude_46flip),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),2)
,};
