//Increment (++) and Decrement (--) operator 

#include<stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    int c = a++ + --b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}

/*
output
a = 6
b = 9
c = 14
*/

/*
output explanation 
a = 5;
b = 10;
c = a++ + --b;
priority [--b, +, =, a++]
1.--b => b=b-1 => 10-1 => b=9
2.c=a+b => 5+9 => c=14
3.a++ => a=a+1 => 5+1 => a=6
*/