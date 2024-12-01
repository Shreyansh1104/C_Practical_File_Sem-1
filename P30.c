/*Write a program to find the sum of series S = 1 - 1/2 + 1/3 - 1/4 + 1/5 - ... upto n terms.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float S;
    printf("Enter no. of terms:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        S += (pow(-1, i - 1)/i);
    }
    printf("S = %f", S);
    return 0;
}