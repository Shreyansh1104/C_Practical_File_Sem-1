/*Write a program in C to print Fibonacci sequence 0 1 1 2 3 5 8 13 ... N terms and prints the sum of sequence.*/

#include <stdio.h>

int add(int a, int b);
int main()
{
    int n, i, sum, x, y, z;
    printf("Enter no. of terms:");
    scanf("%d", &n);
    switch(n)
    {
        case 0:
        printf("0 terms in sequence, hence, sum cannot be obtained\n");
        break;
        default:
        for (i = 0; i < n; i++)
        {
            if (i < 2)
            {
                x = i;
                y = 0;
                z = add(x, y);
                printf("%d\n", z);
                sum += z;
            }
            else
            {
                z = add(x, y);
                y = x;
                x = z;
                printf("%d\n", z);
                sum += z;
            }
        }
        printf("Sum of Sequence is %d\n", sum);
        break;
    }
    return 0;
}

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}