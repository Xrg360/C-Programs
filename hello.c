#include <stdio.h>

int main ()
{
  int a, b,s;
  printf ("Enter the two numbers = ");
  scanf ("%d %d", &a, &b);
  printf ("Arithematic \n");
  s=a+b;
  printf ("sum: %d + %d = %d \n", a, b, s);
  printf ("Difference: %d - %d = %d \n", a, b, (a - b));
  printf ("Prodct: %d * %d = %d \n", a, b, (a * b));
  printf ("Quotient: %d / %d = %d \n", a, b, (a / b));
  printf ("Remainder: %d %% %d = %d \n", a, b, (a % b));
  printf ("BITWISE");
  printf ("OR: %d | %d = %d \n", a, b, (a | b));
  printf ("XOR: %d ^ %d = %d \n", a, b, (a ^ b));
  printf ("AND: %d & %d = %d \n", a, b, (a & b));
  printf ("NOT: ~%d = %d \n", a, ~a);
  printf ("Right shift: %d >> 2 = %d \n", a, a >> 2);
  printf ("Left shift: %d << 2 = %d \n", a, a << 2);
  printf ("Relational");
  printf ("<: %d < %d = %d \n", a, b, (a < b));
  printf (">: %d > %d = %d \n",a,b,(a>b));
  printf ("<=: %d <= %d = %d \n",a,b,(a<=b));
  printf (">=: %d >= %d = %d \n",a,b,(a>=b));
  printf ("==: %d == %d = %d \n",a,b,(a==b));
  printf ("!=: %d != %d = %d \n",a,b,(a!=b));


  return 0;
}
