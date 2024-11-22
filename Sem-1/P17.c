/*Write a program to calculate the root of a Quadratic Equation*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a = 1, b = 2, c = 1, r1, r2;
    r1 = -(b + sqrt(b * b - 4 * a * c))/(2 * a);
    r2 = -(b - sqrt(b * b - 4 * a * c))/(2 * a);
    printf("Roots of equation (%.2f)x^2 +(%.2f)x +(%.2f) = 0 are\n", a, b, c);
    printf("%.2f \t%.2f", r1, r2);
    return 0;
}