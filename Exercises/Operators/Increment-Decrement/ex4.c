//Increment (++) - Decrement (--) Operator example

#include<stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    int c = a++ + b-- + ++a + --b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}

/*
output
a = 7
b = 8
c = 30
*/

/*
Output explanation
a = 5;
b = 10;
c = a++ + b-- + ++a + --b;
priority [++a, --b, +, =, a++, b--]
1.++a => a=a+1 => 5+1 => a=6
2.--b => b=b-1 => 10-1 => b=9
3.c=a+b+a+b => 6+9+6+9 => 15+15 => c=30
4.a++ => a=a+1 => 6+1 => a=7
5.b-- => b=b-1 => 9-1 => b=8
*/