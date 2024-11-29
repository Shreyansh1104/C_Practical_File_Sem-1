/*Write a program to accept a coordinate point in a XY coordinate 
system and determibne in which quadrant the coordinate point lies.*/

#include <stdio.h>

int main()
{
    int x = 2, y = 0;
    if ( x > 0 && y > 0)
    {
        printf("The point lies in first quadrant");
    }
    else if ( x > 0 && y < 0)
    {
        printf("The point lies in second quadrant");
    }
    else if ( x < 0 && y < 0)
    {
        printf("The point lies in third quadrant");
    }
    else if ( x < 0 && y > 0)
    {
        printf("The point lies in fourth quadrant");
    }
    else if (x != 0 && y == 0)
    {
        printf("The point lies on x-axis");
    }
    else if ( x == 0 && y != 0)
    {
        printf("The point lies on y-axis");
    }
    else
    {
        printf("The point is the origin");
    }
    return 0;
}