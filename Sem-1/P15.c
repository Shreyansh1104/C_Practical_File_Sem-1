/*Write a C program to find largest of three numbers.*/

#include <stdio.h>

int main()
{
    int x = 3, y = 6, z = 9;
    if (x > y && x > z)
    printf("%d is largest\n", x);
    else if (y > x && y > z)
    printf("%d is largest\n", y);
    else
    printf("%d is largest\n", z);
    
    return 0;
}