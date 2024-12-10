/*Write a C Program to calculate the factorial of a number using function.*/

#include <stdio.h>

int fact(int x);

int main()
{
    int x, res;
    printf("Enter a number:");
    scanf("%d", &x);
    res = fact(x);
    printf("Factorial of %d is %d", x, res);
    return 0;
}

int fact(int x)
{
    int i;
    for (i = x - 1; i > 0; i--)
    {
        x *= i;
    }
    return x;
}