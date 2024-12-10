/*Write a program to find the product/multiplication of two matrices and
    print the product matrix. (Order of matrices must be given by user)*/

#include <stdio.h>

int main()
{
    int n, i, j, k;
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
            res[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}