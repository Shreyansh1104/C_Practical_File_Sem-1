/*Write a C program to convert a given integer (in seconds) in hours, minutes and seconds.*/

#include <stdio.h>

int main()
{
    int x = 3600, s, m, h, i = 60;
    s = x % i;
    x /= i;
    m = x % i;
    x /= i;
    h = x % i;
    printf("%d hours, %d minutes and %d seconds left\n", h, m, s);
    
    return 0;
}