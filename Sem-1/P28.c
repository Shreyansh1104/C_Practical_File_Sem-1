/*Write a program to find the sum of S = 2 + 4 + 6 + 8 + ... N terms.*/

#include <stdio.h>

int func(int x);
int main()
{
    int n;
    printf("Enter no. of terms:");
    scanf("%d", &n);
    printf("Sum upto %d terms is %d", n, func(n));
    return 0;
}

int func(int x)
{
    int sum = 0;
    if (x == 0)
    {
        return 0;
    }
    else
    {
        sum += 2 * x + func(x - 1);
    }
    return (sum);
}
