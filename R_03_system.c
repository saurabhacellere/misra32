/*
 * Release: 2016-01-01
 *
 * Example from MISRA C:2012 ( THIS IS NOT A TEST SUITE )
 *
 * Copyright HORIBA MIRA Limited.
 *
 * See file READ_ME.txt for full copyright, license and release instructions.
 */





void R_3_2 ( void )
{
   bool_t  b =1;
   int32_t x;
   int32_t y = 2;

   /* Non-compliant - logically equivalent to x = y + 1 */
   x = y + // comment \
         + z
         + 1;

  

   /* Compliant - intention is made explicit             */
   x = y + // comment
           // + z
         + 1;

  

   /* Non-compliant */
   x = 0; // comment \
   if ( b )
   {
     int j1=0          /* This is always executed     */
   }

  
}

int main ( void )
{
  R_3_2 ( );

  return 0;
}
/* end of R_03_02.c */

/* end of R_03_system.c */

