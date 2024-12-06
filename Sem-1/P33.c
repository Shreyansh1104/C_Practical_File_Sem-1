/*Write a program to find the sum of series: S = 14 + 34 + 54 + 74 + ... upto 100 terms.*/

#include <stdio.h>

int main()
{
    int S = 0, x = 14, y = 20;
    for (int i = 0; i < 100; i++)
    {
        S += x + (y * i);
    }
    printf("S = %d", S);
    return 0;
}