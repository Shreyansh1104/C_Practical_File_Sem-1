/*Write a program in C to display the index of smallest and largest element in 10 integers*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int i, arr[10], min = INT_MAX, max = INT_MIN, s_index, l_index;
    for (i = 0; i < 10; i++)
    {
        printf("Enter number:");
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        l_index = i;
        max = arr[i];
        if (arr[i] < min)
        s_index = i;
        min = arr[i];
    }
    printf("Index of smallest element: %d\n", s_index);
    printf("Index of largest element: %d\n", l_index);
    return 0;
}
