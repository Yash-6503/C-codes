/*Write a C program to reverse a two digit number without using any loop. 
The given number is 13 and the output is 31.*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a 2 digit number: ");
    scanf("%d",&n);
    printf("\nReverse of %d is %d%d", n, n%10, n/10);
}

/*
output
13 = 31
45 = 54
give input of only 2 digits
*/