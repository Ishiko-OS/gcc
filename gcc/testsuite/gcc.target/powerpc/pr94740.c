/* PR rtl-optimization/94740 */
/* { dg-do compile } */
/* { dg-require-effective-target powerpc_future_ok } */
/* { dg-options "-O2 -mdejagnu-cpu=future -mpcrel" } */

int array[8];
int
foo (void)
{
  return __builtin_bswap32 (array[1]);
}
