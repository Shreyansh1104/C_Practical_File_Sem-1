/*Write a program to find factorial of any number.*/

#include <stdio.h>

int func(int a);
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    printf("Factorial of %d is %d\n", x, func(x));
    return 0;
}

int func(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return (a * func(a - 1));
    }
}
