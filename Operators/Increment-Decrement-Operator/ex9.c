//Increment (++) - Decrement (--) operator example

#include<stdio.h>
void main()
{
    int a, b, c, d;
    a, b, c = 2;
    d = a++ >= b++ || ++b != c++;
    printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
}

/*
output
a = 3
b = 3
c = 2
d = 1
*/

/*
Output explanation
c = 2
b = c[2]
a = b[2]

d = a++ >= b++ || ++b != c++
2>=2 = 1 later a++ => 2+1=3 => a=3 => b++ => 2+1=3 => b=3
here, In OR || operator if 1 exp is true then 2nd is not checked
so, d = 1
*/