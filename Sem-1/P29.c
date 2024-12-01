/*Write a program in C to check a number whether it is prime number or not.*/

#include <stdio.h>

int prime(int x);
int main()
{
    int x;
    printf("Enter number");
    scanf("%d", &x);
    if (prime(x))
    {
        printf("The number %d is a prime number", x);
    }
    else
    {
        printf("The number %d is not a prime number", x);
    }
    return 0;
}

int prime(int x)
{
    int y = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            y += 1;
        }
    }
    if (y >= 2)
    {
        return 0;
    }
    return 1;
}