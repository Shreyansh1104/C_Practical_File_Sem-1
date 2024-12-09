/*Write a program to find all prime numbers <= a given number.*/

#include <stdio.h>

int main()
{
    int x, i, j, count;
    printf("Enter a number:");
    scanf("%d", &x);
    for (i = 2; i <= x; i++)
    {
        count = 0;
        for (j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        printf("%d ", i);
    }
    return 0;
}