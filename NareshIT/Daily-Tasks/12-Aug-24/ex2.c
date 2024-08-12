/*
Question: Write a c program to swap the two numbers using 
bitwise XOR operator
Note:: Using bitwise XOR Operator Only

sample input: a=5 b=7
sample output: a=7 b=5
*/

#include<stdio.h>
void main()
{
    int a=5, b=7;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("\na = %d, b = %d", a, b);
}

/*
a = 7, b = 5
*/