/*Write a C program to swap two values using function.*/

#include <stdio.h>

void swap(int a, int b);

int main()
{
    int x, y, res;
    printf("Enter first number:");
    scanf("%d", &x);
    printf("Enter second number:");
    scanf("%d", &y);
    swap(x, y);
    return 0;
}

void swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("First number:%d\nSecond number:%d", a, b);
}