/*Write a program in C to print the following pattern:
    1
    1   2
    1   2   3
*/

#include <stdio.h>

int main()
{
    int i, j, x = 3;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
