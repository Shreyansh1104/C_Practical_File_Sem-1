/*Write a program in C to print the following pattern:
            *
        *   *   *
    *   *   *   *   *
*/

#include <stdio.h>

int main()
{
    int i, j, x = 5;
    char c = '*';
    for (i = 1; i <= x; i += 2)
    {
        for (j = x - i; j > 0; j -= 2)
        printf("\t");
        for (j = 1; j <= i; j++)
        {
            printf("%c\t", c);
        }
        printf("\n");
    }
    return 0;
}