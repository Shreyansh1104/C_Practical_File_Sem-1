/*Write a C program that accepts two item's weight (floating points' values) and number
of purchases (floating points' values) and calculate the average value of the items.*/

#include <stdio.h>

int main()
{
    float w1, w2, p1, p2, avg;
    printf("Enter weight and no. of purchases of item 1:");
    scanf("%f %f", &w1, &p1);
    printf("Enter weight and no. of purchases of item 2:");
    scanf("%f %f", &w2, &p2);
    avg = (w1 + w2)/(p1 + p2);
    printf("Average value of the items is %f\n", avg);
    
    return 0;
}