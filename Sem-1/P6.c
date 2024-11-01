/*Write a C program to convert specified days into years, weeks and days.*/

#include<stdio.h>

int main()
{
    int x = 363, d, w, y, i = 365, j = 7;

    y = x / i;
    x = x % i;
    w = x / j;
    x = x % j;
    d = x;
    printf("%d years, %d weeks and %d days later\n", y, w, d);
    
    return 0;
}
