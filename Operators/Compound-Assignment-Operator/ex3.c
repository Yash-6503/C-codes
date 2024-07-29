//Compound Assignment Operator example

#include<stdio.h>
int main()
{
    int a = 10.3, b = 5.2, c = 4.9;
    a*=b+=c/=2.3;
    printf("a=%d, b=%d, c=%d", a, b, c);
    return 0;
}

/*
output
a = 60
b = 6
c = 1
*/


/*
output explanation
int a = 10.3, b = 5.2, c = 4.9;
a*=b+=c/=2.3 
here, by observing all variable values given it is float but it is stored as int because of int dtype
1.c/=2.3
  c=c/2.3
  c=4/2.3
  c=1
2.b+=c
  b=b+1
  b=5+1
  b=6
3.a=a*b
  a=a*6
  a=10*6
  a=60
*/