/*Write a program to find gross salary of employee if
DA is 40% of basic salary and HRA is 20% of basic salary.
Basic salary will be entered as input by keyboard.*/

#include <stdio.h>

int main()
{
    float BS, HRA, DA, GS;
    printf("Enter Basic Salary of Employee:");
    scanf("%f", &BS);
    HRA = 0.2 * BS;
    DA = 0.4 * BS;
    GS = BS + HRA + DA;
    printf("Gross Salary of Employee is %.2f\n", GS);
    return 0;
}
