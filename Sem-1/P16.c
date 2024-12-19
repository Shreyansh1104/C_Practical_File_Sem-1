/*Write a program in C to implement a Simple Calculator.*/

#include <stdio.h>

int main()
{
    int x, y;
    char op;
    printf("Enter first no.:");
    scanf("%d", &x);
    printf("Enter second no.:");
    scanf("%d", &y);
    printf("For Addition:+\nFor Subtraction:-\nFor Multiplication:*\nFor Division:/\n");
    printf("Enter operator:");
    scanf(" %c", &op);
    switch (op)
    {
    case '*':
        printf("%d*%d = %d\n", x, y, x*y);
        break;
    case '+':
        printf("%d+%d = %d\n", x, y, x+y);
        break;
    case '-':
        printf("%d-%d = %d\n", x, y, x-y);
        break;
    case '/':
        printf("%d/%d = %d\n", x, y, x/y);
        break;
    default:
        printf("Invalid operator entered.\n");
        return 1;
    }

    return 0;
}