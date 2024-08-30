/*
Program to check number is prime or not
*/

#include<stdio.h>
void main()
{
    int n, i, count=0;
    printf("\nEnter number: ");
    scanf("%d", &n);
    if(n<=1) {
        printf("\n1 is prime number");
        return;
    }
    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("\n%d is a prime number", n);
    }
    else
    {
        printf("\n%d is not a prime number", n);
    }
}

/*
Enter number: 11
11 is a prime number

Enter number: 8
8 is not a prime number
*/