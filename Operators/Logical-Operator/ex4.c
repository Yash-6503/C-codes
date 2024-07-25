//Logical Operators Example

#include<stdio.h>
int main()
{
    int a, b, c;
    a = !printf("Good Morning\n");
    b = !!a;
    c = !!!b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    return 0;
}

/*
Output
Good Morning
a = 0
b = 0
c = 1
*/