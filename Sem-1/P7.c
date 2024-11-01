/*Write a C program to check whether a number is even or odd.*/

#include <stdio.h>

int main()
{
    int x = 543;

    if (x % 2 == 0)
    {
        printf("%d is even.\n", x);
    }
    else
    {
	    printf("%d is odd.\n", x);
    }

    return 0;
}
