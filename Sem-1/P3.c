/*Write a C program to swap two variables using a third variable.*/

#include <stdio.h>

int main()
{
    int x = 3, y = 2, tmp;
    printf("x = %d, and y = %d\n", x, y);
    tmp = x;
    x = y;
    y = tmp;
    printf("x = %d, and y = %d\n", x, y);
    
    return 0;
}