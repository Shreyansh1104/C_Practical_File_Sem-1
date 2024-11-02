/*Write a C program to find the smallest of two numbers.*/

#include <stdio.h>

int main()
{
    int x = 7, y =5;
    if (x < y)
    printf("%d is smaller than %d\n", x, y);
    else
    printf("%d is smaller than %d\n", y, x);
    
    return 0;
}