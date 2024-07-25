//Increment(++) - Decrement(--) Operator example

#include<stdio.h>
int main()
{
    int a = 50;
    a = a++ / 2;    //here priority will be checked [/, =, ++]
    printf("a = %d\n", a);
    a = ++a / 2;    //here priority will be checked [++, /, =]
    printf("a = %d\n", a);
    return 0;
}

/*
Output
a = 25
a = 13
*/