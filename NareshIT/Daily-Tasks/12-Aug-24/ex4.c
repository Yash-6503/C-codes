/*
Question: Write a c program to find the sum of n natural numbers

sample input: 10
sample output: 55
*/

#include<stdio.h>
void main()
{
    int n, sum;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    sum = n*(n+1)/2;
    printf("\nSum of n natural number is %d", sum);
}


/*
Enter a number: 10
Sum of n natural number is 55

Enter a number: 50
Sum of n natural number is 1275
*/