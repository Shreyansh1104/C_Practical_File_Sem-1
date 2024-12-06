/*Write a program to convert binary number to decimal number.*/

#include <stdio.h>
#include <math.h>

int main()
{
  int b_int, d_int = 0, exp = 0;
  printf("Enter binary no.");
  scanf("%d", &b_int);
  while (b_int != 0)
  {
    d_int += (b_int % 10) * pow(2, exp);
    b_int /= 10;
    exp += 1;
  }
  printf("Decimal form: %d", d_int);
  return 0;
}
