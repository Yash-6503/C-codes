/*
Write a c program to take input of 3 digit number from the user , 
and add the 1st digit and last digit of that given number.

Input as :

Enter a three digit number :

345

Output as :

The addition of first and last digit of the given num is : 8
*/

#include<stdio.h>
void main()
{
    int n, sum;
    printf("\nEnter a 3 digit Number: ");
    scanf("%d", &n);
    sum = (n/10/10) + (n%10);
    printf("\nSum of first and last digit is %d", sum);
}