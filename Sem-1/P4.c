/*Write a C program to swap two variables without using a third variable.*/

#include <stdio.h>

int main()
{
    int x = 3, y = 2;
    printf("x = %d and y = %d\n", x, y);
    x = x + y - (y = x);
    printf("x = %d and y = %d\n", x, y);
    printf("By Shreyansh Singh\n");
    return 0;
}