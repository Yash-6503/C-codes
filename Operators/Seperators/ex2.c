//Seperators example 

#include<stdio.h>
int main()
{
    int a;
    a = 1, 2, 3;
    printf("a=%d", a);
    return 0;
}

/*
output 
a = 1
*/

/*
output explanation
a = 1, 2, 3
priority [= ,]
a = 1,
a = 1
*/