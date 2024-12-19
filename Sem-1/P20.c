/*Write a program in C to calculate and print the Electricity bill of a given customer. The customer id and
unit consumed by the user should be taken from the keyboard and display the total amount to pay the consumer.
upto 199-------1.20
200-500--------1.80
Above 500------2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-.*/

#include <stdio.h>

int main()
{
    int C_id, unit;
    float amount;
    printf("Enter Customer ID:");
    scanf("%d", &C_id);
    printf("Enter Units Consumed:");
    scanf("%d", &unit);
    if (unit <= 199)
    {
        amount = unit * 1.20;
    }
    else if (unit <= 500)
    {
        amount = unit * 1.80;
    }
    else
    {
        amount = unit * 2.00;
    }
    if (amount > 400)
    {
        if ((0.15 * amount) < 100)
        {
            amount += 100;
        }
        else
        {
            amount += amount * 0.15;
        }
    }
    printf("Total amount to be paid by customer %d with all included charges is %f\n", C_id, amount);
    return 0;
}
