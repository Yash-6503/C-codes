//Increment (++) - Decrement (--) Operator example

#include<stdio.h>
int main()
{
    int a = 10;
    int b = a++ + ++a;
    a=10;
    int c = (a++) + ++a;
    printf("\na = %d", a);
    printf("\nb = %d", b);
    printf("\nc = %d", c);
    printf("\n");
    return 0;
}

/*
output
a = 12
b = 22
c = 22
*/

/*
output explanation 1st operation
a = 10;
b = a++ + ++a;
priority [++a, +, =, a++]
1.++a => 10+1=11 => a=11
2.b=a+a => 11+11 => b=22
3.a++ => a=a+1 => a=11+1 => a=12
*/

/*
output explanation 2nd operation
a = 10;
c = (a++) + ++a;
priority [(), ++a, +, =]
1.(a++) => (a=a+1) => (10+1) => (11) => a=11
2.++a => a=a+1 => 11+1 => a=12
3.c=(a)+a => (10)+12 => c=22
4.c=22
*/