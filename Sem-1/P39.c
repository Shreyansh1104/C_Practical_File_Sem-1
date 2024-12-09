/*Write a program to convert decimal no. to binary no.*/

#include <stdio.h>
#include<math.h>

int main()
{
    int b_int = 0, d_int, exp = 0;
    printf("Enter Decimal No.:");
    scanf("%d", &d_int);
    while(d_int != 0)
    {
        b_int += (d_int % 2) * pow(10, exp);
        d_int /= 2;
        exp += 1;
    }
    printf("Binary form:%d", b_int);
    return 0;
}