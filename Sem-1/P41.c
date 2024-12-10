/*Write a program in C to display the index of smallest and largest element in 10 integers*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int i, arr[10], min = 0, max = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter number:");
        scanf("%d", &arr[i]);
        if (arr[i] > arr[max])
        max = i;
        if (arr[i] < arr[min])
        min = i;
    }
    printf("Index of smallest element: %d\n", min);
    printf("Index of largest element: %d\n", max);
    return 0;
}
