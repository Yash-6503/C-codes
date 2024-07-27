//Increment (++) - Decrement (--) operator example

#include<stdio.h>
int main()
{
    int a, b, c, d;
    a = b = c = 2;
    d = a++ >= 2 && ++b != c++;
    printf("a=%d, b=%d, c=%d, d=%d", a, b, c, d);
    return 0;
}

/*
output
a = 3
b = 3
c = 3
d = 1
*/

/*
Output explanation
a = b = c = 2
1.c=2
2.b=c[2]
3.a=b[2]

d = a++ >= 2 && ++b != c++
1.a++ >= 2
a=3 >= 2 => 1 true
in && operator if first condition is false then next condition is not checked
if first is true then only next checked

2.++b != c++
b++ = 2+1=3 => b=3
c++ = 2+1=3 => later updated => c=3
hence, 
b=3 != c=2 => 1 true

so answer is, 
d = 1 [true] because [1 && 1 => true]
*/