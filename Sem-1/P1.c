/*Write a C program to print a block F using hash(#), where the F has 
a height of six characters and width of five and four characters.*/

#include <stdio.h>

int main()
{
    int x = 5, y = 6;
    
    register int i, j;

    for (i = 0; i < y; i++)
    {
        if (i == 0 || i == 2)
        {
            for (j = 0; j < x; j++)
            printf("#");
            x--;
        }
        printf("#\n");
    }

    return 0;
}