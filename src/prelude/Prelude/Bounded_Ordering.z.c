#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+40)
#define CT_v176	((void*)startLabel+92)
#define CT_v178	((void*)startLabel+144)
#define ST_v177	((void*)startLabel+164)
#define ST_v173	((void*)startLabel+197)
#define ST_v175	((void*)startLabel+239)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v174)
,};
Node FN_Prelude_46Bounded_46Prelude_46Ordering_46maxBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, 50003
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Ordering_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Ordering_46maxBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v176)
,};
Node FN_Prelude_46Bounded_46Prelude_46Ordering_46minBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v175)
,	/* CT_v176: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Ordering_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Ordering_46minBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v178)
,};
Node FN_Prelude_46Bounded_46Prelude_46Ordering[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30010
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Ordering))
, useLabel(CF_Prelude_46Bounded_46Prelude_46Ordering_46minBound)
, useLabel(CF_Prelude_46Bounded_46Prelude_46Ordering_46maxBound)
,	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
,	/* ST_v173: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,66,111,117)
, bytes2word(110,100,101,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,46,109,97)
, bytes2word(120,66,111,117)
,	/* ST_v175: (byte 3) */
  bytes2word(110,100,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,66)
, bytes2word(111,117,110,100)
, bytes2word(101,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(109,105,110,66)
, bytes2word(111,117,110,100)
, bytes2word(0,0,0,0)
,};
