/*Write a program in C to print the following pattern:
    *   *   *
    *   *   *
    *   *   *
*/

#include <stdio.h>

int main()
{
    int i, j, x = 3;
    char c = '*';
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            printf("%c \t", c);
        }
        printf("\n");
    }
    return 0;
}