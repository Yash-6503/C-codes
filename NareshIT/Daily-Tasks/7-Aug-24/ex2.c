/*
Que 2 : Write a Cprogram to print sum of N natural 
numbers without using loops.

Sample input : int n = 10
Sample output : 55
*/

#include<stdio.h>
void main()
{
    int n, sum;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    sum = n*(n+1)/2;
    printf("\nSum of %d natural numbers is %d", n, sum);
}

/* Output
Enter a number: 10
Sum of 10 natural numbers is 55

Enter a number: 20
Sum of 20 natural numbers is 210
*/