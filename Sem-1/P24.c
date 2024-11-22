/*Write a program in C to accept an integer number and find sum of digits.*/

#include <stdio.h>

int func(int a);
int main()
{
    int x;
    printf("Sum of digits of %d is %d", x, func(x))
    return 0;
}

int func(int a)
{
    int b = 0;
    do
    {
        b += a % 10;
        a /= 10;
    }
    while (a != 0);
    return (b);
}