/*Write a program in C that accepts N*N matrix as input and print the transpose of this matrix.*/

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter order of matrix:");
    scanf("%d", &n);
    int arr[n][n], trans[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter number:");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}