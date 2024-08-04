/*
Write a C program to reverse 3 digit number without using any loops. 
Given number is 786 and expected output is 687.
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter 3 digit number: ");
    scanf("%d", &n);
    printf("\nReverse of %d is %d%d%d\n", n, n%10, n/10%10, n/10/10);
}

/* output
Enter 3 digit number: 786

Reverse of 786 is 687

Enter 3 digit number: 123

Reverse of 123 is 321
*/