/*A library charges a fine for every book returned late.
For first 5 days the fine is 50 paisa, for 6-10 days, fine is one rupee and above 10 days, fine is 5 rupees.
If you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return the book and display the fine or appropriate message.*/

#include <stdio.h>

int main()
{
    int days;
    float fine;
    printf("Enter no. of days:");
    scanf("%d", &days);
    if (days < 6)
    {
        fine = 0.5;
    }
    else if (days < 11)
    {
        fine = 1;
    }
    else
    {
        fine = 5;
    }
    if (days > 30)
    {
        printf("MEMBERSHIP CANCELLED\n");
    }
    printf("Fine to be paid by member is %.2f\n", fine);
    return 0;
}
