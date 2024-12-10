/*Write a program in C to display the index of smallest and largest element in 3x4 matrix of integers.*/

#include <stdio.h>

int main()
{
    int i, j, arr[3][4], min1 = 0, max1 = 0, min2 = 0, max2 = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter number:");
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > arr[max1][max2])
            {
                max1 = i;
                max2 = j;
            }
            if (arr[i][j] < arr[min1][min2])
            {
                min1 = i;
                min2 = j;
            }
        }
    }
    printf("Index of smallest element: %dx%d\n", min1, min2);
    printf("Index of largest element: %dx%d\n", max1, max2);
    return 0;
}