//Compound Assignment operator example

#include<stdio.h>
int main()
{
    int a=10, b=25;
    float c = 5;
    a+=5;
    b*=4;
    c/=2;
    printf("a=%d, b=%d, c=%f", a, b, c);
    return 0;
}

/*
output
a = 15
b = 100
c = 2.500000
*/

/*
output explanation
int a=10, b=25;
float c = 5;
a+=5;
b*=4;
c/=2;

a=a+5 => 10+5=15 => a=15
b=b*4 => 25*4=100 => b=100
c=c/2 => 5/2=2.500000 => c=2.500000
*/