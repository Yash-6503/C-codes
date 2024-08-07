/*
Que 4 :  Write a 'C' program to check and print the Maximum number among 
two numbers without using ternary operator and control statments.

Sample input : int a = 10 , b = 20
Sample Output : MAX = 20
*/

#include<stdio.h>
void main()
{
    int a, b;
    printf("\nEnter a & b value: ");
    scanf("%d%d", &a, &b);
    a>b && printf("\nMAX a = %d", a) || printf("\nMAX b = %d", b);
}


/* output
Enter a & b value: 10
20
MAX b = 20
*/