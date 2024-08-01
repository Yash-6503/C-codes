// Write a C program to make sum of two digit number.

#include<stdio.h>
void main()
{
    int n, sum;
    printf("\nEnter a 2 digit number: ");
    scanf("%d", &n);
    sum = n / 10 + n % 10;
    printf("\nSum of %d is %d", n, sum);
}