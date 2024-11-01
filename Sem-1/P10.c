/*Write a C program to check whether a triangle is right angled, obtuse or acute triangle.*/

#include <stdio.h>

int main()
{
    int a = 60;

    if (0 < a < 90)
    {
        printf("Acute Triangle\n");
    }
    else if (a == 90)
    {
        printf("Right Angled Triangle\n");
    }
    else if (90 < a < 180)
    {
        printf("Obtuse Angled Triangle\n");
    }
    else
    {
        printf("Invalid Angle Entered.\n");
    }
    printf("By Shreyansh Singh\n");
    return 0;
}