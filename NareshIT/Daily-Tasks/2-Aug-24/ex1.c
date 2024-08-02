// Write a C program to add each digit of a given two digit number.The given number is 67.

#include<stdio.h>
void main()
{
    int n, sum;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    sum = n/10 + n%10;
    printf("\nSum of %d is %d", n, sum);
}

/*
output
67 = 13
11 = 2
*/