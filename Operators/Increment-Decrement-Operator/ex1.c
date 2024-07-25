//Increment(++) - Decrement(--) Operator example

#include<stdio.h>
int main()
{
    int a = 50;
    a++ / 2;        //here priority will be checked [/, ++]
    printf("a = %d\n", a);
    ++a / 2;        //here priority will be checked [++, /]
    printf("a = %d\n", a);
    return 0;
}

/*
output
a = 51
a = 52
*/
