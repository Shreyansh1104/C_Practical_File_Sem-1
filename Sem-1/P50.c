/*Write a C Program to Calculate the factorial of a number using recursion.*/

#include <stdio.h>

int fact(int x);

int main()
{
    int x, res;
    printf("Enter number:");
    scanf("%d", &x);
    res = fact(x);
    printf("Factorial of %d is %d", x, res);
    return 0;
}

int fact(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        x = x * fact(x - 1);
        printf("%d\n", x);
    }
    return x;
}