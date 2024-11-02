/*Write a C program to check whether an alphabet is a vowel or consonant.*/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter c:");
    scanf("%c", &c);
    if (65 <= c && c <= 90)
    {
        if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85)
        {
            printf("%c is a vowel.\n", c);
        }
        else
        {
            printf("%c is a consonant.\n", c);
        }
    }
    else if (97 <= c && c <= 122)
    {
        if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
        {
            printf("%c is a vowel.\n", c);
        }
        else
        {
            printf("%c is a consonant.\n", c);
        }
    }
    else
    {
        printf("Non-alphabet character entered.");
        return 1;
    }
    printf("By Shreyansh Singh\n");
    return 0;
}