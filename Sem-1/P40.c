/*Write a program to find product, sum, average, max, min from a list of n numbers.*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int i, n, prod = 1, sum = 0, avg, min = INT_MAX, max = INT_MIN;
    printf("Enter total no. of numbers:");
    scanf("%d", &n);
    int  arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter a number:");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        prod *= arr[i];
        sum += arr[i];
        if (arr[i] < min)
        min = arr[i];
        if (arr[i] > max)
        max = arr[i];
    }
    avg = sum / n;
    printf("Product: %d\n", prod);
    printf("Sum :%d\n", sum);
    printf("Average: %d\n", avg);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    return 0;
}