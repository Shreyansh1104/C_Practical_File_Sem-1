/*Write a C program to check whether a character is an alphabet, digit.*/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter c:");
    scanf("%c", &c);
    if (48 <= c && c <= 57)
    {
        printf("%c is a digit.\n", c);
    }
    else if ((65 <= c && c <= 90 )|| (97 <= c && c <= 122))
    {
        printf("%c is an alphabet.\n", c);
    }
    else
    {
        printf("No alphabet or digit entered.\n");
    }
    printf("By Shreyansh Singh\n");
    return 0;
}