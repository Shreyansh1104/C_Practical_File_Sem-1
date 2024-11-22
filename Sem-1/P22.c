/*Write a program to find factorial of any number.*/

#include <stdio.h>

int func(int a);
int main()
{
    int x;
    printf(" Factorial of %d is %d", x, func(x));
    return 0;
}

int func(int a)
{
    int b;
    b = a * func(a - 1);
    return (b);
}