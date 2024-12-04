/*Write a program to find the sum of series: S = 1/1! + 2/2! + 3/3! + ... 7 terms*/

#include <stdio.h>

int fact(int x);
int main()
{
    int x;
    float S = 0;
    for (x = 1; x <= 7; x++)
    {
        S += (float) x/ fact(x);
    }
    printf("S = %f\n", S);
    return 0;
}

int fact(int x)
{
    int res = 1;
    for (int i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}