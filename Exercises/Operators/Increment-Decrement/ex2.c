//Increment (++) - Decrement (--) Operator example

#include<stdio.h>
int main()
{
    int a  = 1;
    int b = ++a + a--;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    a *= 5;
    a *= 5 && a >=5;
    printf("a=%d\n", a);
    printf("a=%d\n", a);
    return 0;
}

/*
output 
a = 1
b = 3
a = 5
a = 5
*/

/*
output explanation 
int a  = 1;
int b = ++a + a--;
priority [++a, +, =, a--]
1.++a => a=a+1 => 1+1=2 => a=2;
2.b=a+a => 2+1=3 => b=3;
3.a-- => a=a-1 => 2-1=1 => a=1;

*/

/* 
a=1
a *= 5;
a=a*5;
a=1*5;
ans => a=5;     //true 1
*/
//&&    
/*
a >=5
a=5
5 >= 5      
ans => a = 5        //true 1
*/