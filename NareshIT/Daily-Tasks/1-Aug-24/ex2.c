// Write a C program to swap two numbers using third variable.

#include<stdio.h>
void main()
{
    int a, b, temp;
    printf("\nEnter a value: ");
    scanf("%d", &a);
    printf("\nEnter b value: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("\na = %d", a);
    printf("\nb = %d", b);
}

/*
input
a = 5
a = 6

output
a = 6
a = 5
*/