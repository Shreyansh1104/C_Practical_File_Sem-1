/*Write a C program to check whether a triangle is equilateral, scalene or isoceles.*/

#include <stdio.h>

int main()
{
    int x = 3, y = 4, z = 5;

    if (x == y && y == z)
    {
        printf("Equilateral Triangle\n");
    }
    else if (x == y || y == z || x == z)
    {
        printf("Isoceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }
    
    return 0;
}
