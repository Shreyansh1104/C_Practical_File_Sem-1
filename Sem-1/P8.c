/*Write a C program to check whether a given year is leap year or not.*/

#include <stdio.h>

int main()
{
    int x = 540;

    if (x % 4 == 0)
    {
        printf("%d is a leap year.\n", x);
    }
    else
    {
        printf("%d is not a leap year.\n", x);
    }
    printf("By Shreyansh Singh\n");
    return 0;
}