#include "newmacros.h"
#include "runtime.h"

#define CT_v192	((void*)startLabel+36)
#define CT_v194	((void*)startLabel+84)
#define CT_v196	((void*)startLabel+136)
#define ST_v195	((void*)startLabel+156)
#define ST_v191	((void*)startLabel+179)
#define ST_v193	((void*)startLabel+205)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,};
Node FN_Prelude_46Eq_46Prelude_46Int_46_47_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 50003
, useLabel(ST_v191)
,	/* CT_v192: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Int_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_47_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Int_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Eq_46Prelude_46Int[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30010
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int))
, useLabel(F0_Prelude_46Eq_46Prelude_46Int_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Int_46_61_61)
,	/* ST_v195: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,73)
,	/* ST_v191: (byte 3) */
  bytes2word(110,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,47,61)
,	/* ST_v193: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(61,61,0,0)
,};