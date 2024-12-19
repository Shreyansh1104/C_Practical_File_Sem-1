/*Write a program to accept a coordinate point in a XY coordinate 
system and determine in which quadrant the coordinate point lies.*/

#include <stdio.h>

int main()
{
    int x = 2, y = 0;
    if ( x > 0 && y > 0)
    {
        printf("The point lies in first quadrant\n");
    }
    else if ( x > 0 && y < 0)
    {
        printf("The point lies in second quadrant\n");
    }
    else if ( x < 0 && y < 0)
    {
        printf("The point lies in third quadrant\n");
    }
    else if ( x < 0 && y > 0)
    {
        printf("The point lies in fourth quadrant\n");
    }
    else if (x != 0 && y == 0)
    {
        printf("The point lies on x-axis\n");
    }
    else if ( x == 0 && y != 0)
    {
        printf("The point lies on y-axis\n");
    }
    else
    {
        printf("The point is the origin\n");
    }
    return 0;
}