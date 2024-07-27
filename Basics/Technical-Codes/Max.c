/*Write a program to find Max number without using 
if-else, loops, ternary operators*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("\nEnter a, b value: ");
    scanf("%d%d", &a, &b);
    a>b && printf("\na=%d is greater than b=%d", a, b) || b>a && printf("\nb=%d is greater than a=%d", b, a) || printf("\nBoth are equal %d=%d", a, b);
    printf("\n");
    return 0;
}