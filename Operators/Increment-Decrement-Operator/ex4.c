//Increment (++) - Decrement (--) operator example

#include<stdio.h>
int main()
{
    int a = 0 , b = 1, c = 0;
    a = ++a + b++ + c++;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    return 0;
}

/*
output 
a = 2, b = 2, c = 1
*/

/*
Output Explanation
a=0, b=1, c=0;
a = ++a + b++ + c++;
1.++a => 0+1=1 => 1
2.a+b => 1+1=2 => a=2
3.b++ => 1+1 => 2
3.b+c => 2+0 => b=2
4.c++ => 0+1 => c=1
*/