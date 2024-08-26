/*
4.
Write a C program that takes a number as input from the user
and determines whether it is a spy number of not, DEVELOP 
this by using while loop.

A Spy number is a number where the sum of its digits is equal
to its product of its digits.

Sample Input
1124

Sample Output
1124 is spy numbers
*/

#include<stdio.h>
void main()
{
    int n, sum=0, mul=1, m, r;
    printf("\nEnter number: ");
    scanf("%d", &n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        sum = sum + r;
        mul = mul * r;
        n=n/10;
    }
    if(sum == mul)
    {
        printf("\n%d is a Spy number", m);
    }
    else{
        printf("\n%d is not a Spy number", m);
    }
}

/*
Enter number: 1124
1124 is a Spy number

Enter number: 567
567 is not a Spy number
*/