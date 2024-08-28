/*
3.
Write a C program that calculates the Highest Common Factor (HCF) of two numbers using for loops
Sample Input
Enter two numbers: 8 12
Sample Output
The HCF of 8 and 12 is 4
*/

#include<stdio.h>
void main()
{
    int i, a, b, hcf;
    printf("\nEnter 2 number: ");
    scanf("%d %d", &a, &b);
    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("\nThe HCF of %d and %d is %d", a, b, hcf);
}

/*
Enter 2 number: 8
12

The HCF of 8 and 12 is 4
*/

/*
Enter 2 number: 10
5

The HCF of 10 and 5 is 5
*/