/*Write a program to find even and odd numbers without using 
if-else, loops, ternary operators*/

#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    n %2 == 0 && printf("\n%d is Even number", n) || printf("\n%d is Odd number", n);
    printf("\n");
    return 0;
}