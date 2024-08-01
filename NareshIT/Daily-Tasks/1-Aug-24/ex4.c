// Write a C program to perform sum of two numbers without using '+' operator.

#include<stdio.h>
void main()
{
    int a, b, sum;
    printf("\nEnter a value: ");
    scanf("%d", &a);
    printf("\nEnter b value: ");
    scanf("%d", &b);
    sum = a - (-b);
    printf("\nSum of %d and %d is %d", a, b, sum);
}