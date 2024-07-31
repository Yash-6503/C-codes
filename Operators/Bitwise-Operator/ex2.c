//Bitwise Operator example

#include<stdio.h>
int main()
{
    int a = 10;
    printf("a = %d\n", a<<2);     //40
    printf("a = %d\n", a>>2);     //2
    return 0;
}

/*
output
a = 40
a = 2
*/

/*
output explanation 1st operation
a = 10;
a<<2;
10+10 => 20+20 => 40
*/

/*
output explanation 1st operation
a = 10;
a>>2;
10/2 => 5/2 => 2
*/