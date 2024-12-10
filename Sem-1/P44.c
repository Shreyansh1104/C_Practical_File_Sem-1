/*Write a program to accept two matrices of some order. (Order must be given by user)
    Find out the sum of these matrices and print the sum of matrices.*/

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter order:");
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n], res[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element of first matrix:");
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element of second matrix:");
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}