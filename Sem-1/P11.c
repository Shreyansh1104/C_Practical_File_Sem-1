/*Write a C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
(User must provide the choice of type of temperature)*/

#include <stdio.h>

int main()
{
    int x, y, t;
    printf("Choose type of conversion: \n1 for F to C \t2 for C to F\n");
    scanf("%d", &t);
    if (t != 1 && t != 2)
    {
        printf("Invalid number entered\n");
        return 1;
    }
    if (t == 1)
    {
        printf("Enter Temperature in Fahrenheit:");
        scanf("%d", &x);
        y = (x - 32) * (5 / 9);
        printf("Temperature in Celsius:%d\n", y);
    }if (t == 2)
    {
        printf("Enter Temperature in Celsius:");
        scanf("%d", &x);
        y = (x * (9 / 5)) + 32;
        printf("Temperature in Fahrenheit:%d\n", y);
    }
    
    return 0;
}