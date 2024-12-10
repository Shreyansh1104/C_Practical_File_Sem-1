/*Write a C Program to implement Simple Calculator
    (Addition, Subtraction, Multiplication, Division)
    using the concept of function.*/

#include <stdio.h>

int sum(int x, int y);
int diff(int x, int y);
int mult(int x, int y);
int div(int x, int y);

int main()
{
    int x, y, n, res;
    printf("Enter first number:");
    scanf("%d", &x);
    printf("Enter second number:");
    scanf("%d", &y);
    printf("For addition, enter 1\nFor subtraction, enter 2\nFor multiplication, enter 3\nFor division, enter 4\n");
    printf("Enter calculator mode:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        res = sum(x, y);
        break;
    case 2:
        res = diff(x, y);
        break;
    case 3:
        res = mult(x, y);
        break;
    case 4:
        res = div(x, y);
        break;
    default:
        printf("Invalid mode chosen");
        return 1;
    }
    printf("%d", res);
    return 0;
}

int sum(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

int diff(int x, int y)
{
    int diff;
    diff = x - y;
    return diff;
}

int mult(int x, int y)
{
    int mult;
    mult = x * y;
    return mult;
}

int div(int x, int y)
{
    int div;
    div = x / y;
    return div;
}