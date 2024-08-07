/*
Que 3 :  Write a 'C' program to check and print that given number is 
even or odd without using ternary operator and control statments.

Sample input : int a = 10
Sample Output : EVEN

Sample input : int a = 125
Sample Output : ODD 
*/

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    n%2==0 && printf("EVEN") || printf("ODD");
}

/* output
Enter a number: 10
EVEN

Enter a number: 125
ODD
*/