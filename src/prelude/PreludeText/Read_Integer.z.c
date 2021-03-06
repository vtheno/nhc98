#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+36)
#define CT_v190	((void*)startLabel+96)
#define CT_v192	((void*)startLabel+156)
#define ST_v191	((void*)startLabel+176)
#define ST_v189	((void*)startLabel+205)
#define ST_v187	((void*)startLabel+243)
extern Node TM_Prelude[];
extern Node FN_Numeric_46readDec[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Numeric_46readSigned[];
extern Node CF_Prelude_46Real_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Read_46Prelude_46Integer_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Integer_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer_46readsPrec),1)
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Numeric_46readSigned))
, useLabel(CF_Prelude_46Real_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v190)
,};
Node FN_Prelude_46Read_46Prelude_46Integer_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v189)
,	/* CT_v190: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Integer_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v192)
,};
Node FN_Prelude_46Read_46Prelude_46Integer[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50010
, useLabel(ST_v191)
,	/* CT_v192: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer))
, useLabel(F0_Prelude_46Read_46Prelude_46Integer_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Integer_46readList)
,	/* ST_v191: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
,	/* ST_v189: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v187: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,0,0,0)
,};
