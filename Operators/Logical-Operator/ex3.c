//Logical Operators example

#include<stdio.h>
int main()
{
    int a, b, c;
    a = printf("Good Morning\n");
    b = !!a;
    c = !!!b;
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
}

/*
output
Good Morning
a = 13, b = 1, c = 0
*/