/* new bytecodes */

/* This file contains the actual definition list of bytecodes emitted by
 * the compiler.  It is included into bytecode.h, which defines the ins()
 * macro appropriately to generate a typedef'd enumeration.

 * The list of instructions and the actual enumeration are separated into
 * two files because there is an older (obsolete) output format that can
 * be generated by the nhc98 compiler.  The obsolete format expects the
 * bytecode to be available as ordinary #defines, not as an enum.  In order
 * to keep the obsolete format in synch with the new format, there is a
 * script which can process the file you are reading now, to generate the
 * older format.  See script/mangler.
 */

#define INSTRUCTION_LIST	\
 ins(DUMMY_FOR_ZERO),	\
\
 ins(NEEDHEAP_P1),	\
 ins(NEEDHEAP_P2),	\
 ins(JUMP),		\
 ins(JUMPFALSE),	\
 ins(NOP),		\
\
 ins(PUSH_CADR_N2),	\
 ins(PUSH_CADR_N1),	\
 ins(PUSH_CADR_P1),	\
 ins(PUSH_CADR_P2),	\
 ins(PUSH_CVAL_N2),	\
 ins(PUSH_CVAL_N1),	\
 ins(PUSH_CVAL_P1),	\
 ins(PUSH_CVAL_P2),	\
 ins(PUSH_INT_N2),	\
 ins(PUSH_INT_N1),	\
 ins(PUSH_INT_P1),	\
 ins(PUSH_INT_P2),	\
 ins(PUSH_ARG),		\
 ins(PUSH_P1),		\
 ins(PUSH_P2),		\
\
 ins(POP_P1),		\
 ins(POP_P2),		\
 ins(SLIDE_P1),		\
 ins(SLIDE_P2),		\
 ins(UNPACK),		\
\
 ins(APPLY),		\
 ins(EVAL),		\
\
 ins(RETURN),		\
 ins(RETURN_EVAL),	\
\
 ins(HEAP_CADR_N2),	\
 ins(HEAP_CADR_N1),	\
 ins(HEAP_CADR_P1),	\
 ins(HEAP_CADR_P2),	\
 ins(HEAP_CVAL_N2),	\
 ins(HEAP_CVAL_N1),	\
 ins(HEAP_CVAL_P1),	\
 ins(HEAP_CVAL_P2),	\
 ins(HEAP_INT_N2),	\
 ins(HEAP_INT_N1),	\
 ins(HEAP_INT_P1),	\
 ins(HEAP_INT_P2),	\
 ins(HEAP_ARG),		\
 ins(HEAP_ARG_ARG),	\
 ins(HEAP_ARG_ARG_RET_EVAL),	\
 ins(HEAP_P1),		\
 ins(HEAP_P2),		\
\
 ins(ADD_W),		\
 ins(ADD_F),		\
 ins(ADD_D),		\
 ins(SUB_W),		\
 ins(SUB_F),		\
 ins(SUB_D),		\
 ins(MUL_W),		\
 ins(MUL_F),		\
 ins(MUL_D),		\
 ins(ABS_W),		\
 ins(ABS_F),		\
 ins(ABS_D),		\
 ins(SIGNUM_W),		\
 ins(SIGNUM_F),		\
 ins(SIGNUM_D),		\
 ins(EXP_F),		\
 ins(EXP_D),		\
 ins(LOG_F),		\
 ins(LOG_D),		\
 ins(SQRT_F),		\
 ins(SQRT_D),		\
 ins(SIN_F),		\
 ins(SIN_D),		\
 ins(COS_F),		\
 ins(COS_D),		\
 ins(TAN_F),		\
 ins(TAN_D),		\
 ins(ASIN_F),		\
 ins(ASIN_D),		\
 ins(ACOS_F),		\
 ins(ACOS_D),		\
 ins(ATAN_F),		\
 ins(ATAN_D),		\
 ins(SLASH_F),		\
 ins(SLASH_D),		\
 ins(EQ_W),		\
 ins(EQ_F),		\
 ins(EQ_D),		\
 ins(NE_W),		\
 ins(NE_F),		\
 ins(NE_D),		\
 ins(LT_W),		\
 ins(LT_F),		\
 ins(LT_D),		\
 ins(LE_W),		\
 ins(LE_F),		\
 ins(LE_D),		\
 ins(GT_W),		\
 ins(GT_F),		\
 ins(GT_D),		\
 ins(GE_W),		\
 ins(GE_F),		\
 ins(GE_D),		\
 ins(NEG_W),		\
 ins(NEG_F),		\
 ins(NEG_D),		\
\
 ins(QUOT),		\
 ins(REM),		\
 ins(AND),		\
 ins(OR),		\
 ins(NOT),		\
 ins(ORD),		\
 ins(CHR),		\
 ins(SEQ),		\
 ins(STRING),		\
\
 ins(PRIMITIVE),	\
 ins(PUSH_HEAP),	\
 ins(EXIT),		\
\
 ins(NEEDSTACK_P1),	\
 ins(NEEDSTACK_P2),	\
\
 ins(HEAP_OFF_N2),	\
 ins(HEAP_OFF_N1),	\
 ins(HEAP_OFF_P1),	\
 ins(HEAP_OFF_P2),	\
\
 ins(HEAP_CREATE),	\
 ins(HEAP_SPACE),	\
\
 ins(SELECTOR_EVAL),	\
 ins(SELECT),		\
\
 ins(ZAP_ARG),		\
 ins(ZAP_STACK_P1),	\
 ins(ZAP_STACK_P2),	\
\
 ins(NEEDHEAP_I32),	\
 ins(NEEDSTACK_I16),	\
\
 ins(PUSH_I1),		\
 ins(POP_I1),		\
\
 ins(PUSH_ARG_I1),	\
 ins(PUSH_ARG_I2),	\
 ins(PUSH_ARG_I3),	\
\
 ins(ZAP_ARG_I1),	\
 ins(ZAP_ARG_I2),	\
 ins(ZAP_ARG_I3),	\
\
 ins(HEAP_CVAL_I3),	\
 ins(HEAP_CVAL_I4),	\
 ins(HEAP_CVAL_I5),	\
\
 ins(HEAP_CVAL_IN3),	\
\
 ins(HEAP_I1),		\
 ins(HEAP_I2),		\
\
 ins(HPUTC),		\
 ins(HGETC),		\
 ins(HGETS),		\
\
 ins(PUSH_CHAR_N1),	\
 ins(PUSH_CHAR_P1),	\
 ins(HEAP_CHAR_N1),	\
 ins(HEAP_CHAR_P1),	\
\
 ins(TABLESWITCH),	\
 ins(LOOKUPSWITCH),	\
 ins(MKIORETURN),	\
\
 ins(PUSH_ZAP_ARG_I1),	\
 ins(PUSH_ZAP_ARG_I2),	\
 ins(PUSH_ZAP_ARG_I3),	\
 ins(PUSH_ZAP_ARG),	\
\
 ins(ENDCODE),		\
\
 ins(POW_F),		\
 ins(POW_D)


#define UNUSED_INSTRUCTIONS	\
 Case(DUMMY_FOR_ZERO):	\
 Case(SEQ):		\
 Case(NOT):		\
 Case(OR):		\
 Case(AND):		\
 Case(HEAP_INT_P2):	\
 Case(HEAP_INT_N2):	\
 Case(PUSH_INT_P2):	\
 Case(PUSH_INT_N2):

