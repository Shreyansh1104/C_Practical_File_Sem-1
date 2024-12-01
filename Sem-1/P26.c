/*Write a program in C to accept an integer number and to check a number is Armstrong or not.*/

#include <stdio.h>

int arm(int x);
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    if (x == arm(x))
    {
        printf("The number %d is an Armstrong number", x);
    }
    else
    {
        printf("The number %d is not an Armstrong number", x);
    }
    return 0;
}

int arm(int x)
{
    int y = 0, rem;
    do
    {
        rem = x % 10;
        y += rem * rem * rem;
        x /= 10;
    }
    while (x != 0);
    
    return y;
}