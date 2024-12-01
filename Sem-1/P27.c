/*Write a program in C to accept an interger number and to check a number is Perfect or not.*/

#include <stdio.h>

int perf(int x);
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    if (x == perf(x))
    {
        printf("The number %d is a Perfect number", x);
    }
    else
    {
        printf("The number %d is not a Perfect number", x);
    }
    return 0;
}

int perf(int x)
{
    int y = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            y += i;
        }
    }
    return y;
}
