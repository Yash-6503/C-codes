//Increment (++) - Decrement (--) operator example

#include<stdio.h>
int main()
{
    int a, b, c, d;
    a = b = c = 2;
    d = a++ >= b++ && ++b != c++;
    printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
    return 0;
}

/*
output
a = 3
b = 4
c = 3
d = 1
*/

/*
Output explaination
1. a = b = c = 2
c=2
b=c[2]  =>  b=2
a=b[2]  =>  a=2

2.d = a++ >= b++ && ++b != c++;
a++ >= b++
2+1 >= 2+1
3   >= 3    
    1  => true 
True then check next expression
++b != c++
3+1 != 2+1
4   !=  3
    1   =>  true
Hence, both are true
d = 1  => [1 && 1 => true]
*/