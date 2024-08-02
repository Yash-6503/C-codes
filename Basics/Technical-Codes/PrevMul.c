/* Write a C program to find the previous multiple of 100 of a given three digit number . 
The given number is 234 and the output is 200. */

#include<stdio.h>
void main()
{
    int n, prevMul;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    prevMul = (n/100)*100;
    printf("\nPrevious Multiple of %d is %d", n, prevMul);
}