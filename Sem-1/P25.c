/*Write a program in C to accept an integer number and find reverse of this number and check this number for palindrome.*/

#include <stdio.h>

int rev(int x);
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    if (x == rev(x))
    {
        printf("The number %d is a palindrome", x);
    }
    else
    {
        printf("The number %d is not a palindrome", x);
    }
    return 0;
}

int rev(int x)
{
    int y = 0, rem;
    do
    {
        rem = x % 10;
        y = y * 10 + rem;
        x /= 10;
    }
    while (x != 0);
    return y;
}