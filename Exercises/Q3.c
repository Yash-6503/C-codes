//Write a C Program to Find the Size of int, float, double, and char

#include<stdio.h>

int main()
{
    printf("\nSize of int is %lu bytes", sizeof(int));
    printf("\nSize of float is %lu bytes", sizeof(float));
    printf("\nSize of double is %lu bytes", sizeof(double));
    printf("\nSize of char is %lu bytes", sizeof(char));
    return 0;
}