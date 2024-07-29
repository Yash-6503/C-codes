//Compound Assifgnment Operator example

#include<stdio.h>
int main()
{
    int a=10;
    a*=5+4;
    printf("a=%d", a);      //90
    return 0;
}

/*
output 
a = 90
*/

/*
output explanation
a=10
a*=5+4
a = 10*5+4
a = 10*9
a  =  90
*/