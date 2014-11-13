/* longlong.h -- definitions for mixed size 32/64 bit arithmetic.
   Copyright (C) 1991 Free Software Foundation, Inc.

   This definition file is free software; you can redistribute it
   and/or modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2, or (at your option) any later version.

   This definition file is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied
   warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
   See the GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

#ifndef LONG_TYPE_SIZE
#define LONG_TYPE_SIZE 32
#endif

#define __BITS4 (LONG_TYPE_SIZE / 4)
#define __ll_B (1L << (LONG_TYPE_SIZE / 2))
#define __ll_lowpart(t) ((unsigned long int) (t) % __ll_B)
#define __ll_highpart(t) ((unsigned long int) (t) / __ll_B)

/* Define auxilliary asm macros.

   1) umul_ppmm(high_prod, low_prod, multipler, multiplicand)
   multiplies two unsigned long integers MULTIPLER and MULTIPLICAND,
   and generates a two unsigned word product in HIGH_PROD and
   LOW_PROD.

   2) __umulsidi3(a,b) multiplies two unsigned long integers A and B,
   and returns a long long product.  This is just a variant of umul_ppmm.

   3) udiv_qrnnd(quotient, remainder, high_numerator, low_numerator,
   denominator) divides a two-word unsigned integer, composed by the
   integers HIGH_NUMERATOR and LOW_NUMERATOR, by DENOMINATOR and
   places the quotient in QUOTIENT and the remainder in REMAINDER.
   HIGH_NUMERATOR must be less than DENOMINATOR for correct operation.
   If, in addition, the most significant bit of DENOMINATOR must be 1,
   then the pre-processor symbol UDIV_NEEDS_NORMALIZATION is defined to 1.

   4) count_leading_zeros(count, x) counts the number of zero-bits from
   the msb to the first non-zero bit.  This is the number of steps X
   needs to be shifted left to set the msb.  Undefined for X == 0.

   5) add_ssaaaa(high_sum, low_sum, high_addend_1, low_addend_1,
   high_addend_2, low_addend_2) adds two two-word unsigned integers,
   composed by HIGH_ADDEND_1 and LOW_ADDEND_1, and HIGH_ADDEND_2 and
   LOW_ADDEND_2 respectively.  The result is placed in HIGH_SUM and
   LOW_SUM.  Overflow (i.e. carry out) is not stored anywhere, and is
   lost.

   6) sub_ddmmss(high_difference, low_difference, high_minuend,
   low_minuend, high_subtrahend, low_subtrahend) subtracts two
   two-word unsigned integers, composed by HIGH_MINUEND_1 and
   LOW_MINUEND_1, and HIGH_SUBTRAHEND_2 and LOW_SUBTRAHEND_2
   respectively.  The result is placed in HIGH_DIFFERENCE and
   LOW_DIFFERENCE.  Overflow (i.e. carry out) is not stored anywhere,
   and is lost.

   If any of these macros are left undefined for a particular CPU,
   C macros are used.  */

/* The CPUs come in alphabetical order below.

   Please add support for more CPUs here, or improve the current support
   for the CPUs below!
   (E.g. WE32100, HP-PA (xmpyu?), i960, IBM360.)  */

#if defined (__GNUC__) && !defined (NO_ASM)

#include "asmlong.h"

#endif /* __GNUC__ */

/* If this machine has no inline assembler, use C macros.  */

#if !defined (add_ssaaaa)
#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
  do {                                                                  \
    unsigned long int __x;                                              \
    __x = (al) + (bl);                                                  \
    (sh) = (ah) + (bh) + (__x < (al));                                  \
    (sl) = __x;                                                         \
  } while (0)
#endif

#if !defined (sub_ddmmss)
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
  do {                                                                  \
    unsigned long int __x;                                              \
    __x = (al) - (bl);                                                  \
    (sh) = (ah) - (bh) - (__x > (al));                                  \
    (sl) = __x;                                                         \
  } while (0)
#endif

#if !defined (umul_ppmm)
#define umul_ppmm(w1, w0, u, v)                                         \
  do {                                                                  \
    unsigned long int __x0, __x1, __x2, __x3;                           \
    unsigned long int __ul, __vl, __uh, __vh;                                \
                                                                        \
    __ul = __ll_lowpart (u);                                            \
    __uh = __ll_highpart (u);                                           \
    __vl = __ll_lowpart (v);                                            \
    __vh = __ll_highpart (v);                                           \
                                                                        \
    __x0 = (unsigned long int) __ul * __vl;                             \
    __x1 = (unsigned long int) __ul * __vh;                             \
    __x2 = (unsigned long int) __uh * __vl;                             \
    __x3 = (unsigned long int) __uh * __vh;                             \
                                                                        \
    __x1 += __ll_highpart (__x0);/* this can't give carry */            \
    __x1 += __x2;               /* but this indeed can */               \
    if (__x1 < __x2)            /* did we get it? */                    \
      __x3 += __ll_B;           /* yes, add it in the proper pos. */    \
                                                                        \
    (w1) = __x3 + __ll_highpart (__x1);                                 \
    (w0) = __ll_lowpart (__x1) * __ll_B + __ll_lowpart (__x0);          \
  } while (0)
#endif

#if !defined (__umulsidi3)
#define __umulsidi3(u, v) \
  ({long_long __w;                                                      \
    umul_ppmm (__w.s.high, __w.s.low, u, v);                            \
    __w.ll; })
#endif

#if !defined (udiv_qrnnd)  || defined (__LLDEBUG__)
#define UDIV_NEEDS_NORMALIZATION 1
#ifndef __LLDEBUG__
#define udiv_qrnnd udiv_qrnnd_c
#endif
#define udiv_qrnnd_c(q, r, n1, n0, d) \
  do {                                                                  \
    unsigned long int __d1, __d0, __q1, __q0;                                \
    unsigned long int __r1, __r0, __m;                                  \
    __d1 = __ll_highpart (d);                                           \
    __d0 = __ll_lowpart (d);                                            \
                                                                        \
    __r1 = (n1) % __d1;                                                 \
    __q1 = (n1) / __d1;                                                 \
    __m = (unsigned long int) __q1 * __d0;                              \
    __r1 = __r1 * __ll_B | __ll_highpart (n0);                          \
    if (__r1 < __m)                                                     \
      {                                                                 \
        __q1--, __r1 += (d);                                            \
        if (__r1 >= (d)) /* i.e. we didn't get carry when adding to __r1 */\
          if (__r1 < __m)                                               \
            __q1--, __r1 += (d);                                        \
      }                                                                 \
    __r1 -= __m;                                                        \
                                                                        \
    __r0 = __r1 % __d1;                                                 \
    __q0 = __r1 / __d1;                                                 \
    __m = (unsigned long int) __q0 * __d0;                              \
    __r0 = __r0 * __ll_B | __ll_lowpart (n0);                           \
    if (__r0 < __m)                                                     \
      {                                                                 \
        __q0--, __r0 += (d);                                            \
        if (__r0 >= (d))                                                \
          if (__r0 < __m)                                               \
            __q0--, __r0 += (d);                                        \
      }                                                                 \
    __r0 -= __m;                                                        \
                                                                        \
    (q) = (unsigned long int) __q1 * __ll_B | __q0;                     \
    (r) = __r0;                                                         \
  } while (0)
#endif

#if !defined (count_leading_zeros)
#define count_leading_zeros(count, x) \
  do {                                                                  \
    extern const unsigned char __clz_tab[];                             \
    unsigned long int xr = (x);                                         \
    unsigned long int a;                                                     \
                                                                        \
    a = xr < (1<<2*__BITS4)                                             \
      ? (xr < (1<<__BITS4) ? 0 : __BITS4)                               \
      : (xr < (1<<3*__BITS4) ?  2*__BITS4 : 3*__BITS4);                 \
                                                                        \
    (count) =(int)( 4*__BITS4 - (__clz_tab[xr >> a] + a));                     \
  } while (0)
#endif

#ifndef UDIV_NEEDS_NORMALIZATION
#define UDIV_NEEDS_NORMALIZATION 0
#endif
